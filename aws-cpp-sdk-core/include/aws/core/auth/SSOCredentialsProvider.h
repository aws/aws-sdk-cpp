/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */


#pragma once

#include <aws/core/Core_EXPORTS.h>
#include <aws/core/auth/AWSCredentialsProvider.h>
#include <memory>

namespace Aws {
    namespace Auth {
        /**
         * To support usage of SSO credentials
         */
        class AWS_CORE_API SSOCredentialsProvider : public AWSCredentialsProvider
        {
        public:
            SSOCredentialsProvider() = default;

            /**
             * Retrieves the credentials if found, otherwise returns empty credential set.
             */
            AWSCredentials GetAWSCredentials() override;
        };
    } // namespace Auth
} // namespace Aws
