/*
  * Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
* Interface for Sha256 encryptor and hmac
*/
#pragma once

#include <aws/core/Core_EXPORTS.h>

#include <aws/core/utils/Array.h>
#include <aws/core/utils/crypto/HashResult.h>

namespace Aws
{
namespace Utils
{
namespace Crypto
{

class AWS_CORE_API HMAC
{
    public:
        HMAC() {};
        virtual ~HMAC() {};

        /**
        * Calculates an HMAC digest
        */
        virtual HashResult Calculate(const ByteBuffer& toSign, const ByteBuffer& secret) = 0;

};

} // namespace Crypto
} // namespace Utils
} // namespace Aws

