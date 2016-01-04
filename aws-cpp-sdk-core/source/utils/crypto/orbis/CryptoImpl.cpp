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

#include <aws/core/utils/crypto/orbis/CryptoImpl.h>

#include <aws/core/utils/Outcome.h>
#include <aws/core/utils/UnreferencedParam.h>

using namespace Aws::Utils::Crypto;

HashResult MD5OrbisImpl::Calculate(const Aws::String& str)
{
    AWS_UNREFERENCED_PARAM(str);

    return HashResult();
}

HashResult MD5OrbisImpl::Calculate(Aws::IStream& stream)
{
    AWS_UNREFERENCED_PARAM(stream);

    return HashResult();
}

HashResult Sha256OrbisImpl::Calculate(const Aws::String& str)
{
    AWS_UNREFERENCED_PARAM(str);

    return HashResult();
}

HashResult Sha256OrbisImpl::Calculate(Aws::IStream& stream)
{
    AWS_UNREFERENCED_PARAM(stream);

    return HashResult();
}

HashResult Sha256HMACOrbisImpl::Calculate(const ByteBuffer& toSign, const ByteBuffer& secret)
{
    AWS_UNREFERENCED_PARAM(toSign);
    AWS_UNREFERENCED_PARAM(secret);

    return HashResult();
}
