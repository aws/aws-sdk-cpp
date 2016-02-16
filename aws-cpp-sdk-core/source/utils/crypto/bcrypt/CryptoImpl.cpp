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


#include <aws/core/utils/crypto/bcrypt/CryptoImpl.h>

#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/core/utils/Outcome.h>
#include <aws/core/utils/crypto/Hash.h>

#include <bcrypt.h> 
#include <winternl.h> 
#include <winerror.h> 

using namespace Aws::Utils;
using namespace Aws::Utils::Crypto;

namespace Aws
{
namespace Utils
{
namespace Crypto
{

static const char* logTag = "CryptoHash";

// RAII class for one-use-per-hash-call data used in Windows cryptographic hash implementations
// Useful so we don't have to call a Cleanup function for every failure point
class BCryptHashContext
{
    public:

        BCryptHashContext(void* algorithmHandle, PBYTE hashObject, DWORD hashObjectLength) :
            m_hashHandle(nullptr),
            m_isValid(false)
        {
            NTSTATUS status = BCryptCreateHash(algorithmHandle, &m_hashHandle, hashObject, hashObjectLength, nullptr, 0, 0);
            m_isValid = NT_SUCCESS(status);
        }

        BCryptHashContext(void* algorithmHandle, PBYTE hashObject, DWORD hashObjectLength, const ByteBuffer& secret) :
            m_hashHandle(nullptr),
            m_isValid(false)
        {
            NTSTATUS status = BCryptCreateHash(algorithmHandle, &m_hashHandle, hashObject, hashObjectLength, secret.GetUnderlyingData(), (ULONG)secret.GetLength(), 0);
            m_isValid = NT_SUCCESS(status);
        }

        ~BCryptHashContext()
        {
            if (m_hashHandle)
            {
                BCryptDestroyHash(m_hashHandle);
            }
        }

        bool IsValid() const { return m_isValid; }

        BCRYPT_HASH_HANDLE m_hashHandle;
        bool m_isValid;
};

BCryptHashImpl::BCryptHashImpl(LPCWSTR algorithmName, bool isHMAC) :
    m_algorithmHandle(nullptr),
    m_hashBufferLength(0),
    m_hashBuffer(nullptr),
    m_hashObjectLength(0),
    m_hashObject(nullptr),
    m_algorithmMutex()
{
    NTSTATUS status = BCryptOpenAlgorithmProvider(&m_algorithmHandle, algorithmName, MS_PRIMITIVE_PROVIDER, isHMAC ? BCRYPT_ALG_HANDLE_HMAC_FLAG : 0);
    if (!NT_SUCCESS(status))
    {
        AWS_LOGSTREAM_ERROR(logTag, "Failed initializing BCryptOpenAlgorithmProvider for " << algorithmName);
        return;
    }

    DWORD resultLength = 0;
    status = BCryptGetProperty(m_algorithmHandle, BCRYPT_HASH_LENGTH, (PBYTE)&m_hashBufferLength, sizeof(m_hashBufferLength), &resultLength, 0);
    if (!NT_SUCCESS(status) || m_hashBufferLength <= 0)
    {
        AWS_LOG_ERROR(logTag, "Error computing hash buffer length.");
        return;
    }

    m_hashBuffer = Aws::NewArray<BYTE>(m_hashBufferLength, logTag);
    if (!m_hashBuffer)
    {
        AWS_LOG_ERROR(logTag, "Error allocating hash buffer.");
        return;
    }

    resultLength = 0;
    status = BCryptGetProperty(m_algorithmHandle, BCRYPT_OBJECT_LENGTH, (PBYTE)&m_hashObjectLength, sizeof(m_hashObjectLength), &resultLength, 0);
    if (!NT_SUCCESS(status) || m_hashObjectLength <= 0)
    {
        AWS_LOG_ERROR(logTag, "Error computing hash object length.");
        return;
    }

    m_hashObject = Aws::NewArray<BYTE>(m_hashObjectLength, logTag);
    if (!m_hashObject)
    {
        AWS_LOG_ERROR(logTag, "Error allocating hash object.");
        return;
    }
}

BCryptHashImpl::~BCryptHashImpl()
{
    Aws::DeleteArray(m_hashObject);
    Aws::DeleteArray(m_hashBuffer);

    if (m_algorithmHandle)
    {
        BCryptCloseAlgorithmProvider(m_algorithmHandle, 0);
    }
}

HashResult BCryptHashImpl::HashData(const BCryptHashContext& context, PBYTE data, ULONG dataLength)
{
    NTSTATUS status = BCryptHashData(context.m_hashHandle, data, dataLength, 0);
    if (!NT_SUCCESS(status))
    {
        AWS_LOG_ERROR(logTag, "Error computing hash.");
        return HashResult();
    }

    status = BCryptFinishHash(context.m_hashHandle, m_hashBuffer, m_hashBufferLength, 0); 
    if (!NT_SUCCESS(status))
    {
        AWS_LOG_ERROR(logTag, "Error obtaining computed hash");
        return HashResult();
    }

    return HashResult(ByteBuffer(m_hashBuffer, m_hashBufferLength));
}

HashResult BCryptHashImpl::Calculate(const Aws::String& str)
{
    if(!IsValid())
    {
        return HashResult();
    }

    std::lock_guard<std::mutex> locker(m_algorithmMutex);

    BCryptHashContext context(m_algorithmHandle, m_hashObject, m_hashObjectLength);
    if (!context.IsValid())
    {
        AWS_LOG_ERROR(logTag, "Error creating hash handle.");
        return HashResult();
    }

    return HashData(context, (PBYTE)str.c_str(), static_cast<ULONG>(str.length()));
}

HashResult BCryptHashImpl::Calculate(const ByteBuffer& toHash, const ByteBuffer& secret)
{
    if(!IsValid())
    {
        return HashResult();
    }

    std::lock_guard<std::mutex> locker(m_algorithmMutex);

    BCryptHashContext context(m_algorithmHandle, m_hashObject, m_hashObjectLength, secret);
    if (!context.IsValid())
    {
        AWS_LOG_ERROR(logTag, "Error creating hash handle.");
        return HashResult();
    }

    return HashData(context, static_cast<PBYTE>(toHash.GetUnderlyingData()), static_cast<ULONG>(toHash.GetLength()));
}

bool BCryptHashImpl::IsValid() const
{
    return m_hashBuffer != nullptr && m_hashBufferLength > 0 && m_hashObject != nullptr && m_hashObjectLength > 0;
}

bool BCryptHashImpl::HashStream(Aws::IStream& stream)
{
    BCryptHashContext context(m_algorithmHandle, m_hashObject, m_hashObjectLength);
    if (!context.IsValid())
    {
        AWS_LOG_ERROR(logTag, "Error creating hash handle.");
        return false;
    }

    char streamBuffer[Aws::Utils::Crypto::Hash::INTERNAL_HASH_STREAM_BUFFER_SIZE];
    NTSTATUS status = 0;
    stream.seekg(0, stream.beg);
    while(stream.good())
    {
        stream.read(streamBuffer, Aws::Utils::Crypto::Hash::INTERNAL_HASH_STREAM_BUFFER_SIZE);
        std::streamsize bytesRead = stream.gcount();
        if(bytesRead > 0)
        {
            status = BCryptHashData(context.m_hashHandle, (PBYTE)streamBuffer, (ULONG) bytesRead, 0);
            if (!NT_SUCCESS(status))
            {
                AWS_LOG_ERROR(logTag, "Error computing hash.");
                return false;
            }
        }
    }

    if(!stream.eof())
    {
        return false;
    }

    status = BCryptFinishHash(context.m_hashHandle, m_hashBuffer, m_hashBufferLength, 0); 
    if (!NT_SUCCESS(status))
    {
        AWS_LOG_ERROR(logTag, "Error obtaining computed hash");
        return false;
    }

    return true;
}

HashResult BCryptHashImpl::Calculate(Aws::IStream& stream)
{
    if(!IsValid())
    {
        return HashResult();
    }

    std::lock_guard<std::mutex> locker(m_algorithmMutex);

    auto startingPos = stream.tellg();

    bool success = HashStream(stream);
    if(success)
    {
        stream.clear();
    }

    stream.seekg(startingPos, stream.beg);

    if(!success)
    {
        return HashResult();
    }

    return HashResult(ByteBuffer(m_hashBuffer, m_hashBufferLength));
}

MD5BcryptImpl::MD5BcryptImpl() :
    m_impl(BCRYPT_MD5_ALGORITHM, false)
{
}

HashResult MD5BcryptImpl::Calculate(const Aws::String& str)
{ 
    return m_impl.Calculate(str); 
}

HashResult MD5BcryptImpl::Calculate(Aws::IStream& stream)
{ 
    return m_impl.Calculate(stream); 
}

Sha256BcryptImpl::Sha256BcryptImpl() :
    m_impl(BCRYPT_SHA256_ALGORITHM, false)
{
}

HashResult Sha256BcryptImpl::Calculate(const Aws::String& str) 
{ 
    return m_impl.Calculate(str); 
}

HashResult Sha256BcryptImpl::Calculate(Aws::IStream& stream) 
{ 
    return m_impl.Calculate(stream); 
}

Sha256HMACBcryptImpl::Sha256HMACBcryptImpl() :
    m_impl(BCRYPT_SHA256_ALGORITHM, true)
{
}

HashResult Sha256HMACBcryptImpl::Calculate(const ByteBuffer& toSign, const ByteBuffer& secret) 
{ 
    return m_impl.Calculate(toSign, secret); 
}


} // namespace Crypto
} // namespace Utils
} // namespace Amazon