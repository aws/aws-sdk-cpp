/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kms/KMS_EXPORTS.h>
#include <aws/core/utils/Array.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kms/model/DataKeyPairSpec.h>
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
  class GenerateDataKeyPairWithoutPlaintextResult
  {
  public:
    AWS_KMS_API GenerateDataKeyPairWithoutPlaintextResult();
    AWS_KMS_API GenerateDataKeyPairWithoutPlaintextResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KMS_API GenerateDataKeyPairWithoutPlaintextResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The encrypted copy of the private key. When you use the HTTP API or the
     * Amazon Web Services CLI, the value is Base64-encoded. Otherwise, it is not
     * Base64-encoded.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetPrivateKeyCiphertextBlob() const{ return m_privateKeyCiphertextBlob; }
    inline void SetPrivateKeyCiphertextBlob(const Aws::Utils::ByteBuffer& value) { m_privateKeyCiphertextBlob = value; }
    inline void SetPrivateKeyCiphertextBlob(Aws::Utils::ByteBuffer&& value) { m_privateKeyCiphertextBlob = std::move(value); }
    inline GenerateDataKeyPairWithoutPlaintextResult& WithPrivateKeyCiphertextBlob(const Aws::Utils::ByteBuffer& value) { SetPrivateKeyCiphertextBlob(value); return *this;}
    inline GenerateDataKeyPairWithoutPlaintextResult& WithPrivateKeyCiphertextBlob(Aws::Utils::ByteBuffer&& value) { SetPrivateKeyCiphertextBlob(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The public key (in plaintext). When you use the HTTP API or the Amazon Web
     * Services CLI, the value is Base64-encoded. Otherwise, it is not
     * Base64-encoded.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetPublicKey() const{ return m_publicKey; }
    inline void SetPublicKey(const Aws::Utils::ByteBuffer& value) { m_publicKey = value; }
    inline void SetPublicKey(Aws::Utils::ByteBuffer&& value) { m_publicKey = std::move(value); }
    inline GenerateDataKeyPairWithoutPlaintextResult& WithPublicKey(const Aws::Utils::ByteBuffer& value) { SetPublicKey(value); return *this;}
    inline GenerateDataKeyPairWithoutPlaintextResult& WithPublicKey(Aws::Utils::ByteBuffer&& value) { SetPublicKey(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#key-id-key-ARN">key
     * ARN</a>) of the KMS key that encrypted the private key.</p>
     */
    inline const Aws::String& GetKeyId() const{ return m_keyId; }
    inline void SetKeyId(const Aws::String& value) { m_keyId = value; }
    inline void SetKeyId(Aws::String&& value) { m_keyId = std::move(value); }
    inline void SetKeyId(const char* value) { m_keyId.assign(value); }
    inline GenerateDataKeyPairWithoutPlaintextResult& WithKeyId(const Aws::String& value) { SetKeyId(value); return *this;}
    inline GenerateDataKeyPairWithoutPlaintextResult& WithKeyId(Aws::String&& value) { SetKeyId(std::move(value)); return *this;}
    inline GenerateDataKeyPairWithoutPlaintextResult& WithKeyId(const char* value) { SetKeyId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of data key pair that was generated.</p>
     */
    inline const DataKeyPairSpec& GetKeyPairSpec() const{ return m_keyPairSpec; }
    inline void SetKeyPairSpec(const DataKeyPairSpec& value) { m_keyPairSpec = value; }
    inline void SetKeyPairSpec(DataKeyPairSpec&& value) { m_keyPairSpec = std::move(value); }
    inline GenerateDataKeyPairWithoutPlaintextResult& WithKeyPairSpec(const DataKeyPairSpec& value) { SetKeyPairSpec(value); return *this;}
    inline GenerateDataKeyPairWithoutPlaintextResult& WithKeyPairSpec(DataKeyPairSpec&& value) { SetKeyPairSpec(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GenerateDataKeyPairWithoutPlaintextResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GenerateDataKeyPairWithoutPlaintextResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GenerateDataKeyPairWithoutPlaintextResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Utils::ByteBuffer m_privateKeyCiphertextBlob;

    Aws::Utils::ByteBuffer m_publicKey;

    Aws::String m_keyId;

    DataKeyPairSpec m_keyPairSpec;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace KMS
} // namespace Aws
