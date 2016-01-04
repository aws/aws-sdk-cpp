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

#include <aws/core/utils/crypto/Hash.h>
#include <aws/core/utils/crypto/HMAC.h>

namespace Aws
{
namespace Utils
{
namespace Crypto
{

class MD5OrbisImpl : public Hash
{
    public:

        MD5OrbisImpl() {}
        virtual ~MD5OrbisImpl() {}

        virtual HashResult Calculate(const Aws::String& str) override;

        virtual HashResult Calculate(Aws::IStream& stream) override;

};

class Sha256OrbisImpl : public Hash
{
    public:

        Sha256OrbisImpl() {}
        virtual ~Sha256OrbisImpl() {}

        virtual HashResult Calculate(const Aws::String& str) override;

        virtual HashResult Calculate(Aws::IStream& stream) override;
};

class Sha256HMACOrbisImpl : public HMAC
{
    public:

        Sha256HMACOrbisImpl() {}
        virtual ~Sha256HMACOrbisImpl() {}

        virtual HashResult Calculate(const ByteBuffer& toSign, const ByteBuffer& secret) override;


};

} // namespace Crypto
} // namespace Utils
} // namespace Aws

