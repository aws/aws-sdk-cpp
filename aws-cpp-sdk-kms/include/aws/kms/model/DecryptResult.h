/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/Array.h>

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
  class AWS_KMS_API DecryptResult
  {
  public:
    DecryptResult();
    DecryptResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DecryptResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>ARN of the key used to perform the decryption. This value is returned if no
     * errors are encountered during the operation.</p>
     */
    inline const Aws::String& GetKeyId() const{ return m_keyId; }

    /**
     * <p>ARN of the key used to perform the decryption. This value is returned if no
     * errors are encountered during the operation.</p>
     */
    inline void SetKeyId(const Aws::String& value) { m_keyId = value; }

    /**
     * <p>ARN of the key used to perform the decryption. This value is returned if no
     * errors are encountered during the operation.</p>
     */
    inline void SetKeyId(Aws::String&& value) { m_keyId = value; }

    /**
     * <p>ARN of the key used to perform the decryption. This value is returned if no
     * errors are encountered during the operation.</p>
     */
    inline void SetKeyId(const char* value) { m_keyId.assign(value); }

    /**
     * <p>ARN of the key used to perform the decryption. This value is returned if no
     * errors are encountered during the operation.</p>
     */
    inline DecryptResult& WithKeyId(const Aws::String& value) { SetKeyId(value); return *this;}

    /**
     * <p>ARN of the key used to perform the decryption. This value is returned if no
     * errors are encountered during the operation.</p>
     */
    inline DecryptResult& WithKeyId(Aws::String&& value) { SetKeyId(value); return *this;}

    /**
     * <p>ARN of the key used to perform the decryption. This value is returned if no
     * errors are encountered during the operation.</p>
     */
    inline DecryptResult& WithKeyId(const char* value) { SetKeyId(value); return *this;}

    /**
     * <p>Decrypted plaintext data. This value may not be returned if the customer
     * master key is not available or if you didn't have permission to use it.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetPlaintext() const{ return m_plaintext; }

    /**
     * <p>Decrypted plaintext data. This value may not be returned if the customer
     * master key is not available or if you didn't have permission to use it.</p>
     */
    inline void SetPlaintext(const Aws::Utils::ByteBuffer& value) { m_plaintext = value; }

    /**
     * <p>Decrypted plaintext data. This value may not be returned if the customer
     * master key is not available or if you didn't have permission to use it.</p>
     */
    inline void SetPlaintext(Aws::Utils::ByteBuffer&& value) { m_plaintext = value; }

    /**
     * <p>Decrypted plaintext data. This value may not be returned if the customer
     * master key is not available or if you didn't have permission to use it.</p>
     */
    inline DecryptResult& WithPlaintext(const Aws::Utils::ByteBuffer& value) { SetPlaintext(value); return *this;}

    /**
     * <p>Decrypted plaintext data. This value may not be returned if the customer
     * master key is not available or if you didn't have permission to use it.</p>
     */
    inline DecryptResult& WithPlaintext(Aws::Utils::ByteBuffer&& value) { SetPlaintext(value); return *this;}

  private:
    Aws::String m_keyId;
    Aws::Utils::ByteBuffer m_plaintext;
  };

} // namespace Model
} // namespace KMS
} // namespace Aws
