/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/Core_EXPORTS.h>
#include <aws/core/http/HttpTypes.h>

namespace Aws
{
    namespace Http
    {
        class HttpRequest;
    } // namespace Http

    namespace Auth
    {
        AWS_CORE_API extern const char SIGNATURE[];

        namespace Common
        {
            /**
             * Helper functions used across different signers
             */
            Aws::String CanonicalizeRequestSigningString(Aws::Http::HttpRequest &request, bool urlEscapePath);

            Aws::Http::HeaderValueCollection CanonicalizeHeaders(Http::HeaderValueCollection &&headers);
        }
    } // namespace Client
} // namespace Aws

