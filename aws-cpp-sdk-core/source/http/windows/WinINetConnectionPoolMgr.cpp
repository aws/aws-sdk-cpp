/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/http/windows/WinINetConnectionPoolMgr.h>
#include <Windows.h>
#include <WinInet.h>

using namespace Aws::Http;

WinINetConnectionPoolMgr::WinINetConnectionPoolMgr(void* iOpenHandle, unsigned maxConnectionsPerHost, long requestTimeout, long connectTimeout) :
WinConnectionPoolMgr(iOpenHandle, maxConnectionsPerHost, requestTimeout, connectTimeout)
{

}

WinINetConnectionPoolMgr::WinINetConnectionPoolMgr(void* iOpenHandle, unsigned maxConnectionsPerHost, long requestTimeout, long connectTimeout,
                                                   bool enableTcpKeepAlive, unsigned long tcpKeepAliveIntervalMs) :
WinConnectionPoolMgr(iOpenHandle, maxConnectionsPerHost, requestTimeout, connectTimeout, enableTcpKeepAlive, tcpKeepAliveIntervalMs)
{

}

WinINetConnectionPoolMgr::~WinINetConnectionPoolMgr()
{
    DoCleanup();
}

void WinINetConnectionPoolMgr::DoCloseHandle(void* handle) const
{
    InternetCloseHandle(handle);
}

void* WinINetConnectionPoolMgr::CreateNewConnection(const Aws::String& host, HostConnectionContainer& connectionContainer) const
{
    HINTERNET newConnection = InternetConnectA(GetOpenHandle(), host.c_str(), connectionContainer.port, nullptr, nullptr,
        INTERNET_SERVICE_HTTP, INTERNET_FLAG_KEEP_CONNECTION, 0);

    DWORD timeoutMs = GetConnectTimeout();
    DWORD requestMs = GetRequestTimeout();

    InternetSetOptionA(newConnection, INTERNET_OPTION_CONNECT_TIMEOUT, &timeoutMs, sizeof(timeoutMs));
    InternetSetOptionA(newConnection, INTERNET_OPTION_RECEIVE_TIMEOUT, &requestMs, sizeof(requestMs));

    return newConnection;
}