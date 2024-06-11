﻿/**
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
  class GenerateDataKeyPairResult
  {
  public:
    AWS_KMS_API GenerateDataKeyPairResult();
    AWS_KMS_API GenerateDataKeyPairResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KMS_API GenerateDataKeyPairResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The encrypted copy of the private key. When you use the HTTP API or the
     * Amazon Web Services CLI, the value is Base64-encoded. Otherwise, it is not
     * Base64-encoded.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetPrivateKeyCiphertextBlob() const{ return m_privateKeyCiphertextBlob; }
    inline void SetPrivateKeyCiphertextBlob(const Aws::Utils::ByteBuffer& value) { m_privateKeyCiphertextBlob = value; }
    inline void SetPrivateKeyCiphertextBlob(Aws::Utils::ByteBuffer&& value) { m_privateKeyCiphertextBlob = std::move(value); }
    inline GenerateDataKeyPairResult& WithPrivateKeyCiphertextBlob(const Aws::Utils::ByteBuffer& value) { SetPrivateKeyCiphertextBlob(value); return *this;}
    inline GenerateDataKeyPairResult& WithPrivateKeyCiphertextBlob(Aws::Utils::ByteBuffer&& value) { SetPrivateKeyCiphertextBlob(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The plaintext copy of the private key. When you use the HTTP API or the
     * Amazon Web Services CLI, the value is Base64-encoded. Otherwise, it is not
     * Base64-encoded.</p> <p>If the response includes the
     * <code>CiphertextForRecipient</code> field, the <code>PrivateKeyPlaintext</code>
     * field is null or empty.</p>
     */
    inline const Aws::Utils::CryptoBuffer& GetPrivateKeyPlaintext() const{ return m_privateKeyPlaintext; }
    inline void SetPrivateKeyPlaintext(const Aws::Utils::CryptoBuffer& value) { m_privateKeyPlaintext = value; }
    inline void SetPrivateKeyPlaintext(Aws::Utils::CryptoBuffer&& value) { m_privateKeyPlaintext = std::move(value); }
    inline GenerateDataKeyPairResult& WithPrivateKeyPlaintext(const Aws::Utils::CryptoBuffer& value) { SetPrivateKeyPlaintext(value); return *this;}
    inline GenerateDataKeyPairResult& WithPrivateKeyPlaintext(Aws::Utils::CryptoBuffer&& value) { SetPrivateKeyPlaintext(std::move(value)); return *this;}
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
    inline GenerateDataKeyPairResult& WithPublicKey(const Aws::Utils::ByteBuffer& value) { SetPublicKey(value); return *this;}
    inline GenerateDataKeyPairResult& WithPublicKey(Aws::Utils::ByteBuffer&& value) { SetPublicKey(std::move(value)); return *this;}
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
    inline GenerateDataKeyPairResult& WithKeyId(const Aws::String& value) { SetKeyId(value); return *this;}
    inline GenerateDataKeyPairResult& WithKeyId(Aws::String&& value) { SetKeyId(std::move(value)); return *this;}
    inline GenerateDataKeyPairResult& WithKeyId(const char* value) { SetKeyId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of data key pair that was generated.</p>
     */
    inline const DataKeyPairSpec& GetKeyPairSpec() const{ return m_keyPairSpec; }
    inline void SetKeyPairSpec(const DataKeyPairSpec& value) { m_keyPairSpec = value; }
    inline void SetKeyPairSpec(DataKeyPairSpec&& value) { m_keyPairSpec = std::move(value); }
    inline GenerateDataKeyPairResult& WithKeyPairSpec(const DataKeyPairSpec& value) { SetKeyPairSpec(value); return *this;}
    inline GenerateDataKeyPairResult& WithKeyPairSpec(DataKeyPairSpec&& value) { SetKeyPairSpec(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The plaintext private data key encrypted with the public key from the Nitro
     * enclave. This ciphertext can be decrypted only by using a private key in the
     * Nitro enclave. </p> <p>This field is included in the response only when the
     * <code>Recipient</code> parameter in the request includes a valid attestation
     * document from an Amazon Web Services Nitro enclave. For information about the
     * interaction between KMS and Amazon Web Services Nitro Enclaves, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/services-nitro-enclaves.html">How
     * Amazon Web Services Nitro Enclaves uses KMS</a> in the <i>Key Management Service
     * Developer Guide</i>.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetCiphertextForRecipient() const{ return m_ciphertextForRecipient; }
    inline void SetCiphertextForRecipient(const Aws::Utils::ByteBuffer& value) { m_ciphertextForRecipient = value; }
    inline void SetCiphertextForRecipient(Aws::Utils::ByteBuffer&& value) { m_ciphertextForRecipient = std::move(value); }
    inline GenerateDataKeyPairResult& WithCiphertextForRecipient(const Aws::Utils::ByteBuffer& value) { SetCiphertextForRecipient(value); return *this;}
    inline GenerateDataKeyPairResult& WithCiphertextForRecipient(Aws::Utils::ByteBuffer&& value) { SetCiphertextForRecipient(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GenerateDataKeyPairResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GenerateDataKeyPairResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GenerateDataKeyPairResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Utils::ByteBuffer m_privateKeyCiphertextBlob;

    Aws::Utils::CryptoBuffer m_privateKeyPlaintext;

    Aws::Utils::ByteBuffer m_publicKey;

    Aws::String m_keyId;

    DataKeyPairSpec m_keyPairSpec;

    Aws::Utils::ByteBuffer m_ciphertextForRecipient;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace KMS
} // namespace Aws
