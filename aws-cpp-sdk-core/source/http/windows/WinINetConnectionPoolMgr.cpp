/*
  * Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
  * 
  * Licensed under the Apache License, Version 2.0 (the "License").
  * You may not use this file except in compliance with the License.
  * A copy of the License is located at
  * 
  *  http://aws.amazon.com/apache2.0
  * 
  * or in the "license" file accompanying this file. This file is distributed
  * on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
  * express or implied. See the License for the specific language governing
  * permissions and limitations under the License.
  */

#include <aws/core/http/windows/WinINetConnectionPoolMgr.h>

#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/memory/AWSMemory.h>

#include <Windows.h>
#include <winInet.h>
#include <algorithm>

using namespace Aws::Utils::Logging;
using namespace Aws::Http;

static const char* logTag = "WinINetConnectionPoolMgr";

WinINetConnectionPoolMgr::WinINetConnectionPoolMgr(void* iOpenHandle, 
                                                   unsigned maxConnectionsPerHost, 
                                                   long requestTimeoutMs,
                                                   long connectTimeoutMs) :
    m_iOpenHandle(iOpenHandle),
    m_maxConnectionsPerHost(maxConnectionsPerHost),
    m_requestTimeoutMs(requestTimeoutMs),
    m_connectTimeoutMs(connectTimeoutMs)
{
    AWS_LOG_INFO(logTag, "Creating connection pool mgr with handle %p, and max connections per host %d, request timeout %d ms,"
        " and connect timeout in %d ms.",
        iOpenHandle, maxConnectionsPerHost, requestTimeoutMs, connectTimeoutMs);
}

WinINetConnectionPoolMgr::~WinINetConnectionPoolMgr()
{
    AWS_LOG_INFO(logTag, "Cleaning up conneciton pool mgr.");
    for (auto& hostHandles : m_hostConnections)
    {
        while (hostHandles.second->hostConnections.size() > 0)
        {
            void* handleToClose = hostHandles.second->hostConnections.top();
            AWS_LOG_DEBUG(logTag, "Closing handle %p.", handleToClose);
            InternetCloseHandle(handleToClose);
            hostHandles.second->hostConnections.pop();
        }

        Aws::Delete(hostHandles.second);
    }
}

void* WinINetConnectionPoolMgr::AquireConnectionForHost(const Aws::String& host, uint16_t port)
{
    Aws::StringStream ss;
    ss << host << ":" << port;
    AWS_LOG_DEBUG(logTag, "Attempting to aquire connection for %s", ss.str().c_str());
    HostConnectionContainer* hostConnectionContainer;

    //let's go ahead and prevent that nasty little race condition.
    {
        std::lock_guard<std::mutex> hostsLocker(m_hostConnectionsMutex);  
        Aws::Map<Aws::String, HostConnectionContainer*>::iterator foundPool = m_hostConnections.find(ss.str());  

        if (foundPool != m_hostConnections.end())
        {
            AWS_LOG_DEBUG(logTag, "Pool found, reusing");
            hostConnectionContainer = foundPool->second;
        }
        else
        {
            AWS_LOG_DEBUG(logTag, "Pool doesn't exist for endpoint, creating...");
            //mutex doesn't have a frickin move. We have to dynamically allocate.
            HostConnectionContainer* newHostContainer = Aws::New<HostConnectionContainer>(logTag);
            newHostContainer->currentPoolSize = 0;
            newHostContainer->port = port;

            m_hostConnections[ss.str()] = newHostContainer;
            hostConnectionContainer = newHostContainer;
        }
    }

    std::unique_lock<std::mutex> locker(hostConnectionContainer->connectionsMutex);

    //spin waiting on available connection.
    while (hostConnectionContainer->hostConnections.size() == 0)
    {
        AWS_LOG_DEBUG(logTag, "Pool has no available existing connections for endpoint, attempting to grow pool.");
        if (!CheckAndGrowPool(host, *hostConnectionContainer))
        {
            AWS_LOG_INFO(logTag, "Attempted to grow pool, but it has reached the maximum length. Waiting until a connection becomes available.");
            //this guy will return when someone calls notify on a different thread.
            hostConnectionContainer->conditionVariable.wait(locker);
            AWS_LOG_INFO(logTag, "Connection now available, continuing.");
        }
    }

    HINTERNET handle = hostConnectionContainer->hostConnections.top();
    AWS_LOG_DEBUG(logTag, "Returning connection handle %p.", handle);
    hostConnectionContainer->hostConnections.pop();

    return handle;
}

void WinINetConnectionPoolMgr::ReleaseConnectionForHost(const Aws::String& host, unsigned port, void* connection)
{
    if (connection != nullptr)
    {
        Aws::StringStream ss;
        ss << host << ":" << port;
        AWS_LOG_DEBUG(logTag, "Releasing connection to endpoint %s.", ss.str().c_str());
        Aws::Map<Aws::String, HostConnectionContainer*>::iterator foundPool; 
        
        //protect reads and writes on the connectionPool itself.
        {
            std::lock_guard<std::mutex> hostsLocker(m_hostConnectionsMutex);
            foundPool = m_hostConnections.find(ss.str());
        }

        if (foundPool != m_hostConnections.end())
        {
            std::unique_lock<std::mutex> locker(foundPool->second->connectionsMutex);
            foundPool->second->hostConnections.push(connection);
            locker.unlock();
            foundPool->second->conditionVariable.notify_one();
        }
    }
}

bool WinINetConnectionPoolMgr::CheckAndGrowPool(const Aws::String& host, HostConnectionContainer& connectionContainer)
{
    if (connectionContainer.currentPoolSize < m_maxConnectionsPerHost)
    {
        unsigned multiplier = connectionContainer.currentPoolSize > 0 ? connectionContainer.currentPoolSize : 1;
        unsigned amountToAdd = min(multiplier * 2, m_maxConnectionsPerHost - connectionContainer.currentPoolSize);
        connectionContainer.currentPoolSize += amountToAdd;

        for (unsigned i = 0; i < amountToAdd; ++i)
        {
            HINTERNET newConnection = InternetConnectA(m_iOpenHandle, host.c_str(), connectionContainer.port, nullptr, nullptr,
                INTERNET_SERVICE_HTTP, INTERNET_FLAG_KEEP_CONNECTION, 0);

            //since the windows api takes a pointer, let's not take a chance of them mutating our data.
            DWORD connectTimeout = m_connectTimeoutMs;
            DWORD requestTimeout = m_requestTimeoutMs;
            InternetSetOptionA(newConnection, INTERNET_OPTION_CONNECT_TIMEOUT, &connectTimeout, sizeof(connectTimeout));
            InternetSetOptionA(newConnection, INTERNET_OPTION_RECEIVE_TIMEOUT, &requestTimeout, sizeof(requestTimeout));

            if (newConnection)
                connectionContainer.hostConnections.push(newConnection);
        }

        return true;
    }

    return false;
}
