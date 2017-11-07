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
  class AWS_KMS_API ReEncryptResult
  {
  public:
    ReEncryptResult();
    ReEncryptResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ReEncryptResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The reencrypted data. When you use the HTTP API or the AWS CLI, the value is
     * Base64-encoded. Otherwise, it is not encoded.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetCiphertextBlob() const{ return m_ciphertextBlob; }

    /**
     * <p>The reencrypted data. When you use the HTTP API or the AWS CLI, the value is
     * Base64-encoded. Otherwise, it is not encoded.</p>
     */
    inline void SetCiphertextBlob(const Aws::Utils::ByteBuffer& value) { m_ciphertextBlob = value; }

    /**
     * <p>The reencrypted data. When you use the HTTP API or the AWS CLI, the value is
     * Base64-encoded. Otherwise, it is not encoded.</p>
     */
    inline void SetCiphertextBlob(Aws::Utils::ByteBuffer&& value) { m_ciphertextBlob = std::move(value); }

    /**
     * <p>The reencrypted data. When you use the HTTP API or the AWS CLI, the value is
     * Base64-encoded. Otherwise, it is not encoded.</p>
     */
    inline ReEncryptResult& WithCiphertextBlob(const Aws::Utils::ByteBuffer& value) { SetCiphertextBlob(value); return *this;}

    /**
     * <p>The reencrypted data. When you use the HTTP API or the AWS CLI, the value is
     * Base64-encoded. Otherwise, it is not encoded.</p>
     */
    inline ReEncryptResult& WithCiphertextBlob(Aws::Utils::ByteBuffer&& value) { SetCiphertextBlob(std::move(value)); return *this;}


    /**
     * <p>Unique identifier of the CMK used to originally encrypt the data.</p>
     */
    inline const Aws::String& GetSourceKeyId() const{ return m_sourceKeyId; }

    /**
     * <p>Unique identifier of the CMK used to originally encrypt the data.</p>
     */
    inline void SetSourceKeyId(const Aws::String& value) { m_sourceKeyId = value; }

    /**
     * <p>Unique identifier of the CMK used to originally encrypt the data.</p>
     */
    inline void SetSourceKeyId(Aws::String&& value) { m_sourceKeyId = std::move(value); }

    /**
     * <p>Unique identifier of the CMK used to originally encrypt the data.</p>
     */
    inline void SetSourceKeyId(const char* value) { m_sourceKeyId.assign(value); }

    /**
     * <p>Unique identifier of the CMK used to originally encrypt the data.</p>
     */
    inline ReEncryptResult& WithSourceKeyId(const Aws::String& value) { SetSourceKeyId(value); return *this;}

    /**
     * <p>Unique identifier of the CMK used to originally encrypt the data.</p>
     */
    inline ReEncryptResult& WithSourceKeyId(Aws::String&& value) { SetSourceKeyId(std::move(value)); return *this;}

    /**
     * <p>Unique identifier of the CMK used to originally encrypt the data.</p>
     */
    inline ReEncryptResult& WithSourceKeyId(const char* value) { SetSourceKeyId(value); return *this;}


    /**
     * <p>Unique identifier of the CMK used to reencrypt the data.</p>
     */
    inline const Aws::String& GetKeyId() const{ return m_keyId; }

    /**
     * <p>Unique identifier of the CMK used to reencrypt the data.</p>
     */
    inline void SetKeyId(const Aws::String& value) { m_keyId = value; }

    /**
     * <p>Unique identifier of the CMK used to reencrypt the data.</p>
     */
    inline void SetKeyId(Aws::String&& value) { m_keyId = std::move(value); }

    /**
     * <p>Unique identifier of the CMK used to reencrypt the data.</p>
     */
    inline void SetKeyId(const char* value) { m_keyId.assign(value); }

    /**
     * <p>Unique identifier of the CMK used to reencrypt the data.</p>
     */
    inline ReEncryptResult& WithKeyId(const Aws::String& value) { SetKeyId(value); return *this;}

    /**
     * <p>Unique identifier of the CMK used to reencrypt the data.</p>
     */
    inline ReEncryptResult& WithKeyId(Aws::String&& value) { SetKeyId(std::move(value)); return *this;}

    /**
     * <p>Unique identifier of the CMK used to reencrypt the data.</p>
     */
    inline ReEncryptResult& WithKeyId(const char* value) { SetKeyId(value); return *this;}

  private:

    Aws::Utils::ByteBuffer m_ciphertextBlob;

    Aws::String m_sourceKeyId;

    Aws::String m_keyId;
  };

} // namespace Model
} // namespace KMS
} // namespace Aws
