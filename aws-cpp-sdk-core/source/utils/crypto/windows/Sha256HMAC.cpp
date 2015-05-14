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


#include <aws/core/utils/crypto/Sha256HMAC.h>

#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/core/utils/crypto/windows/WindowsHashImpl.h>
#include <aws/core/utils/Outcome.h>

#include <bcrypt.h> 

using namespace Aws::Utils;
using namespace Aws::Utils::Crypto;

static const char *s_allocationTag = "Sha256HMAC";

Sha256HMAC::Sha256HMAC() : 
    m_windowsImpl(Aws::MakeUnique<WindowsHashImpl>(s_allocationTag, BCRYPT_SHA256_ALGORITHM, true))
{
}

Sha256HMAC::~Sha256HMAC()
{
}

HashResult Sha256HMAC::Calculate(const ByteBuffer& toSign, const ByteBuffer& secret)
{
    return m_windowsImpl->Calculate(toSign, secret);
}
