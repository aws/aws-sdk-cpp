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
#include <aws/core/utils/Array.h>
#include <aws/core/utils/memory/stl/AWSString.h>

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
  class AWS_KMS_API GenerateDataKeyWithoutPlaintextResult
  {
  public:
    GenerateDataKeyWithoutPlaintextResult();
    GenerateDataKeyWithoutPlaintextResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GenerateDataKeyWithoutPlaintextResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>The encrypted data encryption key.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetCiphertextBlob() const{ return m_ciphertextBlob; }

    /**
     * <p>The encrypted data encryption key.</p>
     */
    inline void SetCiphertextBlob(const Aws::Utils::ByteBuffer& value) { m_ciphertextBlob = value; }

    /**
     * <p>The encrypted data encryption key.</p>
     */
    inline void SetCiphertextBlob(Aws::Utils::ByteBuffer&& value) { m_ciphertextBlob = value; }

    /**
     * <p>The encrypted data encryption key.</p>
     */
    inline GenerateDataKeyWithoutPlaintextResult& WithCiphertextBlob(const Aws::Utils::ByteBuffer& value) { SetCiphertextBlob(value); return *this;}

    /**
     * <p>The encrypted data encryption key.</p>
     */
    inline GenerateDataKeyWithoutPlaintextResult& WithCiphertextBlob(Aws::Utils::ByteBuffer&& value) { SetCiphertextBlob(value); return *this;}

    /**
     * <p>The identifier of the CMK under which the data encryption key was generated
     * and encrypted.</p>
     */
    inline const Aws::String& GetKeyId() const{ return m_keyId; }

    /**
     * <p>The identifier of the CMK under which the data encryption key was generated
     * and encrypted.</p>
     */
    inline void SetKeyId(const Aws::String& value) { m_keyId = value; }

    /**
     * <p>The identifier of the CMK under which the data encryption key was generated
     * and encrypted.</p>
     */
    inline void SetKeyId(Aws::String&& value) { m_keyId = value; }

    /**
     * <p>The identifier of the CMK under which the data encryption key was generated
     * and encrypted.</p>
     */
    inline void SetKeyId(const char* value) { m_keyId.assign(value); }

    /**
     * <p>The identifier of the CMK under which the data encryption key was generated
     * and encrypted.</p>
     */
    inline GenerateDataKeyWithoutPlaintextResult& WithKeyId(const Aws::String& value) { SetKeyId(value); return *this;}

    /**
     * <p>The identifier of the CMK under which the data encryption key was generated
     * and encrypted.</p>
     */
    inline GenerateDataKeyWithoutPlaintextResult& WithKeyId(Aws::String&& value) { SetKeyId(value); return *this;}

    /**
     * <p>The identifier of the CMK under which the data encryption key was generated
     * and encrypted.</p>
     */
    inline GenerateDataKeyWithoutPlaintextResult& WithKeyId(const char* value) { SetKeyId(value); return *this;}

  private:
    Aws::Utils::ByteBuffer m_ciphertextBlob;
    Aws::String m_keyId;
  };

} // namespace Model
} // namespace KMS
} // namespace Aws
