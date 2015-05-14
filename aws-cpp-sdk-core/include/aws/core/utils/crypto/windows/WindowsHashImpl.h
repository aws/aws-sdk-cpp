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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>

#include <mutex>

#define WIN32_NO_STATUS 
#include <windows.h> 
#undef WIN32_NO_STATUS 

namespace Aws
{
namespace Utils
{
namespace Crypto
{

class WindowsHashContext;

// RAII class for persistent data (can be reused across hash calculations) used in Windows cryptographic hash implementations
// If a mutex-free implementation is desired then this data won't be reusable like this
class WindowsHashImpl
{
    public:

        WindowsHashImpl(LPCWSTR algorithmName, bool isHMAC);
        ~WindowsHashImpl();

        HashResult Calculate(const Aws::String& str);
        HashResult Calculate(const ByteBuffer& toHash, const ByteBuffer& secret);
        HashResult Calculate(Aws::IStream& stream);

    private:

        bool IsValid() const;

        HashResult HashData(const WindowsHashContext& context, PBYTE data, ULONG dataLength);
        bool HashStream(Aws::IStream& stream);

        void* m_algorithmHandle;
        
        DWORD m_hashBufferLength;
        PBYTE m_hashBuffer;

        DWORD m_hashObjectLength;
        PBYTE m_hashObject;

        //I'm 99% sure the algorithm handle for windows is not thread safe, but I can't 
        //prove or disprove that theory. Therefore, we have to lock to be safe.
        std::mutex m_algorithmMutex;
};

} // namespace Crypto
} // namespace Utils
} // namespace Aws

