/*
  * Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <memory>

namespace Aws
{
    namespace Utils
    {
        namespace Crypto
        {
            class Hash;
            class HMAC;
            class HashFactory;
            class HMACFactory;

            /**
             * Create an MD5 Hash provider
             */
            AWS_CORE_API std::shared_ptr<Hash> CreateMD5Implementation();
            /**
             * Create a Sha256 Hash provider
             */
            AWS_CORE_API std::shared_ptr<Hash> CreateSha256Implementation();
            /**
             * Create a Sha256 HMACHash provider
             */
            AWS_CORE_API std::shared_ptr<HMAC> CreateSha256HMACImplementation();

            /**
             * Set the global factory for MD5 Hash providers
             */
            AWS_CORE_API void SetMD5Factory(const std::shared_ptr<HashFactory>& factory);
            /**
             * Set the global factory for Sha256 Hash providers
             */
            AWS_CORE_API void SetSha256Factory(const std::shared_ptr<HashFactory>& factory);
            /**
             * Set the global factory for Sha256 HMAC Hash providers
             */
            AWS_CORE_API void SetSha256HMACFactory(const std::shared_ptr<HMACFactory>& factory);

        } // namespace Crypto
    } // namespace Utils
} // namespace Aws

