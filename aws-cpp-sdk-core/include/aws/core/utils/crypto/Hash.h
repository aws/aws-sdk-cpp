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

#pragma once

#include <aws/core/Core_EXPORTS.h>

#include <aws/core/utils/crypto/HashResult.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>


namespace Aws
{
namespace Utils
{
namespace Crypto
{

class AWS_CORE_API Hash
{
    public:

        Hash() {}
        virtual ~Hash() {}

        /**
        * Calculates a Hash digest 
        */
        virtual HashResult Calculate(const Aws::String& str) = 0;

        /**
        * Calculates a Hash digest on a stream (the entire stream is read)
        */
        virtual HashResult Calculate(Aws::IStream& stream) = 0;

        // when hashing streams, this is the size of our internal buffer we read the stream into
        static const uint32_t INTERNAL_HASH_STREAM_BUFFER_SIZE = 8192;
};

} // namespace Crypto
} // namespace Utils
} // namespace Aws

