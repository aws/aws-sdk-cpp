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

#pragma once

#include <aws/core/Core_EXPORTS.h>

#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSStack.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>
#include <mutex>
#include <condition_variable>

namespace Aws
{
namespace Http
{

/**
* Connection pool manager for winhttp api.
* maintains open connections for a given hostname and port.
* This implementation is awesome by the way. We should sell this back to microsoft and maybe IE would be 1/10 
* as good as Chrome or Firefox
*/
class AWS_CORE_API WinINetConnectionPoolMgr
{
public:
    /*
    * Constructs instance, using iOpenHandle from InternetOpen api call, and maxConnectionsPerHost.
    */
    WinINetConnectionPoolMgr(void* iOpenHandle, unsigned maxConnectionsPerHost, long requestTimeout, long connectTimeout);

    /*
    * Cleans up all connections that have been allocated (might take a while). 
    */
    ~WinINetConnectionPoolMgr();

    /*
    * Aquires a connection for host and port from pool, or adds connections to pool until pool has reached max size
    * If no connections are available and the pool is at its maximum size, then this call will block until connections
    * become available.
    */
    void* AquireConnectionForHost(const Aws::String& host, uint16_t port);

    /*
    * Releases a connection to host and port back to the pool, if another thread is blocked in Aquire, then the top queued item
    * will be returned a connection and signaled to continue.
    */
    void ReleaseConnectionForHost(const Aws::String& host, unsigned port, void* connection);
                
private:     

    WinINetConnectionPoolMgr(const WinINetConnectionPoolMgr&) = delete;
    const WinINetConnectionPoolMgr& operator = (const WinINetConnectionPoolMgr&) = delete;
    WinINetConnectionPoolMgr(const WinINetConnectionPoolMgr&&) = delete;
    const WinINetConnectionPoolMgr& operator = (const WinINetConnectionPoolMgr&&) = delete;    
                
    class AWS_CORE_API HostConnectionContainer
    {
    public:          
        uint16_t port;
        Aws::Stack<void*> hostConnections;
        unsigned currentPoolSize;
        std::mutex connectionsMutex;
        std::condition_variable conditionVariable;
    };

    bool CheckAndGrowPool(const Aws::String& host, HostConnectionContainer& connectionContainer);

    Aws::Map<Aws::String, HostConnectionContainer*> m_hostConnections;
    std::mutex m_hostConnectionsMutex;
    void* m_iOpenHandle;
    unsigned m_maxConnectionsPerHost;
    long m_requestTimeoutMs;
    long m_connectTimeoutMs;
};   

} // namespace Http
} // namespace Aws
