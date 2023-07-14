/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/Core_EXPORTS.h>

#include <aws/core/http/HttpClient.h>
#include <aws/core/http/windows/WinSyncHttpClient.h>

namespace Aws
{
    namespace Client
    {
        struct ClientConfiguration;
    } // namespace Client

    namespace Http
    {
        class WinINetConnectionPoolMgr;

        /**
         *WinInet implementation of an http client.
         */
        class AWS_CORE_API WinINetSyncHttpClient : public WinSyncHttpClient
        {
        public:
            using Base = WinSyncHttpClient;

            /**
            * Initializes the client with relevant parameters from clientConfig.
            */
            WinINetSyncHttpClient(const Aws::Client::ClientConfiguration& clientConfig);
            ~WinINetSyncHttpClient();

            /**
             * Gets log tag for use in logging in the base class.
             */
            const char* GetLogTag() const override { return "WinInetSyncHttpClient"; }
        private:

            // WinHttp specific implementations
            void* OpenRequest(const std::shared_ptr<HttpRequest>& request, void* connection, const Aws::StringStream& ss) const override;
            void DoAddHeaders(void* hHttpRequest, Aws::String& headerStr) const override;
            uint64_t DoWriteData(void* hHttpRequest, char* streamBuffer, uint64_t bytesRead, bool isChunked) const override;
            uint64_t FinalizeWriteData(void* hHttpRequest) const override;
            bool DoReceiveResponse(void* hHttpRequest) const override;
            bool DoQueryHeaders(void* hHttpRequest, std::shared_ptr<Aws::Http::HttpResponse>& response, Aws::StringStream& ss, uint64_t& read) const override;
            bool DoSendRequest(void* hHttpRequest) const override;
            bool DoReadData(void* hHttpRequest, char* body, uint64_t size, uint64_t& read) const override;
            void* GetClientModule() const override;

            WinINetSyncHttpClient &operator =(const WinINetSyncHttpClient &rhs);

            bool m_usingProxy;
            Aws::String m_proxyUserName;
            Aws::String m_proxyPassword;
        };

    } // namespace Http
} // namespace Aws

