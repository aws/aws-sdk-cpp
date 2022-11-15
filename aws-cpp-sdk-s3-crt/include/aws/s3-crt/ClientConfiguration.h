/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/s3-crt/S3Crt_EXPORTS.h>
#include <aws/s3-crt/S3CrtClientConfiguration.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/http/Scheme.h>
#include <aws/core/Region.h>
#include <aws/crt/io/Bootstrap.h>
#include <aws/crt/io/TlsOptions.h>

namespace Aws
{
    namespace S3Crt
    {
        struct AWS_S3CRT_API ClientConfiguration : Aws::S3Crt::S3CrtClientConfiguration
        {
            ClientConfiguration() : Aws::S3Crt::S3CrtClientConfiguration(),
                partSize(5 * 1024 * 1024),
                throughputTargetGbps(2.0) {}

            /** Client bootstrap used for common staples such as event loop group, host resolver, etc..
             *  If this is nullptr, SDK will create a default one for you.
             */
            std::shared_ptr<Aws::Crt::Io::ClientBootstrap> clientBootstrap;

            /** Size of parts the files will be downloaded or uploaded in. Useful for Put/GetObject APIs
             *  defaults to 5MB, if user set it to be less than 5MB, SDK will set it to 5MB.
             */
            size_t partSize = 5 * 1024 * 1024;

            /** TLS Options to be used for each connection.
             *  If scheme is Https and tlsConnectionOptions is null, SDK will create a default one for you.
             */
            std::shared_ptr<Aws::Crt::Io::TlsConnectionOptions> tlsConnectionOptions;

            /* Throughput target in Gbps that we are trying to reach. Normally it's the NIC's throughput */
            double throughputTargetGbps = 2.0;

            /* Callback and associated user data for when the client has completed its shutdown process. */
            std::function<void(void*)> clientShutdownCallback;
            void *shutdownCallbackUserData = nullptr;
        };
    }
}
