/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/s3-crt/S3Crt_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/http/Scheme.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/crt/io/Bootstrap.h>
#include <aws/crt/io/TlsOptions.h>

namespace Aws
{
    namespace S3Crt
    {
        class AWS_S3CRT_API ClientConfiguration
        {
        public:
            ClientConfiguration() :
                region("us-east-1"),
                useDualStack(false),
                enableEndpointDiscovery(false),
                partSize(5 * 1024 * 1024),
                scheme(Aws::Http::Scheme::HTTPS),
                connectionTimeoutMs(30000),
                throughputTargetGbps(2.0),
                shutdownCallbackUserData(nullptr)
            {};

            /* Region that the S3 bucket lives in. */
            Aws::String region;

            /* Config Profile Name for Service specific config*/
            Aws::String profileName;

            /* Customized endpoint. */
            Aws::String endpointOverride;

            /* Use dual stack*/
            bool useDualStack;

            /**
            * Threading Executor implementation. Default uses std::thread::detach()
            */
            std::shared_ptr<Aws::Utils::Threading::Executor> executor;

            /* enable endpoint discovery*/
            bool enableEndpointDiscovery;

            /** Client bootstrap used for common staples such as event loop group, host resolver, etc..
             *  If this is nullptr, SDK will create a default one for you.
             */
            std::shared_ptr<Aws::Crt::Io::ClientBootstrap> clientBootstrap;

            /** Size of parts the files will be downloaded or uploaded in. Useful for Put/GetObject APIs
             *  defaults to 5MB, if user set it to be less than 5MB, SDK will set it to 5MB.
             */
            uint64_t partSize;

            /** TLS Options to be used for each connection.
             *  If scheme is Https and tlsConnectionOptions is null, SDK will create a default one for you.
             */
            Aws::Http::Scheme scheme;
            std::shared_ptr<Aws::Crt::Io::TlsConnectionOptions> tlsConnectionOptions;

            /* Timeout value, in milliseconds, used for each connection. */
            uint32_t connectionTimeoutMs;

            /* Throughput target in Gbps that we are trying to reach. Normally it's the NIC's throughput */
            double throughputTargetGbps;

            /* Callback and associated user data for when the client has completed its shutdown process. */
            std::function<void(void*)> clientShutdownCallback;
            void *shutdownCallbackUserData;

            operator Aws::Client::ClientConfiguration() const
            {
                Aws::Client::ClientConfiguration config;
                config.region = region;
                config.profileName = profileName;
                config.endpointOverride = endpointOverride;
                config.useDualStack = useDualStack;
                config.executor = executor;
                config.enableEndpointDiscovery = enableEndpointDiscovery;
                config.scheme = scheme;
                return config;
            }
        };
    }
}
