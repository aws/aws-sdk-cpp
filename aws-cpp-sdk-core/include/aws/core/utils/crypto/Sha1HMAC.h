/*
  * Copyright 2017 Bloomberg L.P. All Rights Reserved.
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

  /*
  * Interface for Sha1 hmac
  */
#pragma once

#ifdef __APPLE__

#ifdef __clang__
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#endif // __clang__

#ifdef __GNUC__
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif // __GNUC__

#endif // __APPLE__

#include <aws/core/Core_EXPORTS.h>

#include <aws/core/utils/crypto/HMAC.h>
#include <aws/core/utils/memory/AWSMemory.h>

namespace Aws
{
    namespace Utils
    {
        namespace Crypto
        {
            /**
             * Sha1 HMAC implementation
             */
            class AWS_CORE_API Sha1HMAC : public HMAC
            {
            public:
                /**
                 * initializes platform specific libs.
                 */
                Sha1HMAC();
                virtual ~Sha1HMAC();

                /**
                * Calculates a SHA1 HMAC digest (not hex encoded)
                */
                virtual HashResult Calculate(const Aws::Utils::ByteBuffer& toSign, const Aws::Utils::ByteBuffer& secret) override;

            private:

                std::shared_ptr<HMAC> m_hmacImpl;
            };

        } // namespace Crypto
    } // namespace Utils
} // namespace Aws

