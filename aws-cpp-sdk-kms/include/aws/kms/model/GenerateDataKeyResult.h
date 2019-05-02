/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/kms/KMS_EXPORTS.h>
#include <aws/core/utils/Array.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace KMS
{
namespace Model
{
  class AWS_KMS_API GenerateDataKeyResult
  {
  public:
    GenerateDataKeyResult();
    GenerateDataKeyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GenerateDataKeyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The encrypted copy of the data key. When you use the HTTP API or the AWS CLI,
     * the value is Base64-encoded. Otherwise, it is not encoded.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetCiphertextBlob() const{ return m_ciphertextBlob; }

    /**
     * <p>The encrypted copy of the data key. When you use the HTTP API or the AWS CLI,
     * the value is Base64-encoded. Otherwise, it is not encoded.</p>
     */
    inline void SetCiphertextBlob(const Aws::Utils::ByteBuffer& value) { m_ciphertextBlob = value; }

    /**
     * <p>The encrypted copy of the data key. When you use the HTTP API or the AWS CLI,
     * the value is Base64-encoded. Otherwise, it is not encoded.</p>
     */
    inline void SetCiphertextBlob(Aws::Utils::ByteBuffer&& value) { m_ciphertextBlob = std::move(value); }

    /**
     * <p>The encrypted copy of the data key. When you use the HTTP API or the AWS CLI,
     * the value is Base64-encoded. Otherwise, it is not encoded.</p>
     */
    inline GenerateDataKeyResult& WithCiphertextBlob(const Aws::Utils::ByteBuffer& value) { SetCiphertextBlob(value); return *this;}

    /**
     * <p>The encrypted copy of the data key. When you use the HTTP API or the AWS CLI,
     * the value is Base64-encoded. Otherwise, it is not encoded.</p>
     */
    inline GenerateDataKeyResult& WithCiphertextBlob(Aws::Utils::ByteBuffer&& value) { SetCiphertextBlob(std::move(value)); return *this;}


    /**
     * <p>The plaintext data key. When you use the HTTP API or the AWS CLI, the value
     * is Base64-encoded. Otherwise, it is not encoded. Use this data key to encrypt
     * your data outside of KMS. Then, remove it from memory as soon as possible.</p>
     */
    inline const Aws::Utils::CryptoBuffer& GetPlaintext() const{ return m_plaintext; }

    /**
     * <p>The plaintext data key. When you use the HTTP API or the AWS CLI, the value
     * is Base64-encoded. Otherwise, it is not encoded. Use this data key to encrypt
     * your data outside of KMS. Then, remove it from memory as soon as possible.</p>
     */
    inline void SetPlaintext(const Aws::Utils::CryptoBuffer& value) { m_plaintext = value; }

    /**
     * <p>The plaintext data key. When you use the HTTP API or the AWS CLI, the value
     * is Base64-encoded. Otherwise, it is not encoded. Use this data key to encrypt
     * your data outside of KMS. Then, remove it from memory as soon as possible.</p>
     */
    inline void SetPlaintext(Aws::Utils::CryptoBuffer&& value) { m_plaintext = std::move(value); }

    /**
     * <p>The plaintext data key. When you use the HTTP API or the AWS CLI, the value
     * is Base64-encoded. Otherwise, it is not encoded. Use this data key to encrypt
     * your data outside of KMS. Then, remove it from memory as soon as possible.</p>
     */
    inline GenerateDataKeyResult& WithPlaintext(const Aws::Utils::CryptoBuffer& value) { SetPlaintext(value); return *this;}

    /**
     * <p>The plaintext data key. When you use the HTTP API or the AWS CLI, the value
     * is Base64-encoded. Otherwise, it is not encoded. Use this data key to encrypt
     * your data outside of KMS. Then, remove it from memory as soon as possible.</p>
     */
    inline GenerateDataKeyResult& WithPlaintext(Aws::Utils::CryptoBuffer&& value) { SetPlaintext(std::move(value)); return *this;}


    /**
     * <p>The identifier of the CMK that encrypted the data key.</p>
     */
    inline const Aws::String& GetKeyId() const{ return m_keyId; }

    /**
     * <p>The identifier of the CMK that encrypted the data key.</p>
     */
    inline void SetKeyId(const Aws::String& value) { m_keyId = value; }

    /**
     * <p>The identifier of the CMK that encrypted the data key.</p>
     */
    inline void SetKeyId(Aws::String&& value) { m_keyId = std::move(value); }

    /**
     * <p>The identifier of the CMK that encrypted the data key.</p>
     */
    inline void SetKeyId(const char* value) { m_keyId.assign(value); }

    /**
     * <p>The identifier of the CMK that encrypted the data key.</p>
     */
    inline GenerateDataKeyResult& WithKeyId(const Aws::String& value) { SetKeyId(value); return *this;}

    /**
     * <p>The identifier of the CMK that encrypted the data key.</p>
     */
    inline GenerateDataKeyResult& WithKeyId(Aws::String&& value) { SetKeyId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the CMK that encrypted the data key.</p>
     */
    inline GenerateDataKeyResult& WithKeyId(const char* value) { SetKeyId(value); return *this;}

  private:

    Aws::Utils::ByteBuffer m_ciphertextBlob;

    Aws::Utils::CryptoBuffer m_plaintext;

    Aws::String m_keyId;
  };

} // namespace Model
} // namespace KMS
} // namespace Aws
