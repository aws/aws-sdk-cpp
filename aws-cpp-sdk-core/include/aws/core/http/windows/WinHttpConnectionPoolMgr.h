/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/Core_EXPORTS.h>

#include <aws/core/http/windows/WinConnectionPoolMgr.h>

namespace Aws
{
    namespace Http
    {

        /**
        * Connection pool manager for winhttp api. This is the default windows http implementation.
        * It is more efficient and performant than WinINet.
        */
        class AWS_CORE_API WinHttpConnectionPoolMgr : public WinConnectionPoolMgr
        {
        public:
            /**
             * Initializes the connection pool with the passedin iOpen handle from earlier winHttp init calls.
             * configures connect calls with the timeouts. MaxConnectionsPerHost sets the queue sizes for each endpoint.
             */
            WinHttpConnectionPoolMgr(void* iOpenHandle, unsigned maxConnectionsPerHost, long requestTimeout, long connectTimeout);
            WinHttpConnectionPoolMgr(void* iOpenHandle, unsigned maxConnectionsPerHost, long requestTimeout, long connectTimeout,
                                     bool enableTcpKeepAlive, unsigned long tcpKeepAliveInterval);

            virtual ~WinHttpConnectionPoolMgr();

            /**
             * Gets the log tag to use for logging in the base class.
             */
            const char* GetLogTag() const { return "WinHttpConnectionPoolMgr"; }

        private:
            virtual void DoCloseHandle(void* handle) const override;
            virtual void* CreateNewConnection(const Aws::String& host, HostConnectionContainer& connectionContainer) const override;

            WinHttpConnectionPoolMgr(const WinHttpConnectionPoolMgr&) = delete;
            const WinHttpConnectionPoolMgr& operator = (const WinHttpConnectionPoolMgr&) = delete;
            WinHttpConnectionPoolMgr(const WinHttpConnectionPoolMgr&&) = delete;
            const WinHttpConnectionPoolMgr& operator = (const WinHttpConnectionPoolMgr&&) = delete;

        };

    } // namespace Http
} // namespace Aws
