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


#include <aws/core/utils/crypto/MD5.h>
#include <aws/core/utils/Outcome.h>
#include <aws/core/utils/crypto/Factories.h>

using namespace Aws::Utils::Crypto;


MD5::MD5() : 
    m_hashImpl(CreateMD5Implementation())
{
}

MD5::~MD5()
{
}

HashResult MD5::Calculate(const Aws::String& str)
{
    return m_hashImpl->Calculate(str);
}

HashResult MD5::Calculate(Aws::IStream& stream)
{
    return m_hashImpl->Calculate(stream);
}