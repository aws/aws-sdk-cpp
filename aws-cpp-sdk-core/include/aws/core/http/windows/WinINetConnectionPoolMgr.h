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
        * Connection pool manager for wininet api.
        */
        class AWS_CORE_API WinINetConnectionPoolMgr : public WinConnectionPoolMgr
        {
        public:
            /**
             * Initializes the connection pool with the passedin iOpen handle from earlier wininet init calls.
             * configures connect calls with the timeouts. MaxConnectionsPerHost sets the queue sizes for each endpoint.
             */
            WinINetConnectionPoolMgr(void* iOpenHandle, unsigned maxConnectionsPerHost, long requestTimeout, long connectTimeout);
            WinINetConnectionPoolMgr(void* iOpenHandle, unsigned maxConnectionsPerHost, long requestTimeout, long connectTimeout,
                                     bool enableTcpKeepAlive, unsigned long tcpKeepAliveIntervalMs);

            virtual ~WinINetConnectionPoolMgr();

            /**
             * Gets log tag for use in logging in the base class.
             */
            const char* GetLogTag() const override { return "WinInetConnectionPoolMgr"; }

        private:
            virtual void DoCloseHandle(void* handle) const override;

            virtual void* CreateNewConnection(const Aws::String& host, HostConnectionContainer& connectionContainer) const override;

            WinINetConnectionPoolMgr(const WinINetConnectionPoolMgr&) = delete;
            const WinINetConnectionPoolMgr& operator = (const WinINetConnectionPoolMgr&) = delete;
            WinINetConnectionPoolMgr(const WinINetConnectionPoolMgr&&) = delete;
            const WinINetConnectionPoolMgr& operator = (const WinINetConnectionPoolMgr&&) = delete;

        };

    } // namespace Http
} // namespace Aws
