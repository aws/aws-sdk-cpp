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
  class GenerateDataKeyPairResult
  {
  public:
    AWS_KMS_API GenerateDataKeyPairResult() = default;
    AWS_KMS_API GenerateDataKeyPairResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KMS_API GenerateDataKeyPairResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The encrypted copy of the private key. When you use the HTTP API or the
     * Amazon Web Services CLI, the value is Base64-encoded. Otherwise, it is not
     * Base64-encoded.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetPrivateKeyCiphertextBlob() const { return m_privateKeyCiphertextBlob; }
    template<typename PrivateKeyCiphertextBlobT = Aws::Utils::ByteBuffer>
    void SetPrivateKeyCiphertextBlob(PrivateKeyCiphertextBlobT&& value) { m_privateKeyCiphertextBlobHasBeenSet = true; m_privateKeyCiphertextBlob = std::forward<PrivateKeyCiphertextBlobT>(value); }
    template<typename PrivateKeyCiphertextBlobT = Aws::Utils::ByteBuffer>
    GenerateDataKeyPairResult& WithPrivateKeyCiphertextBlob(PrivateKeyCiphertextBlobT&& value) { SetPrivateKeyCiphertextBlob(std::forward<PrivateKeyCiphertextBlobT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The plaintext copy of the private key. When you use the HTTP API or the
     * Amazon Web Services CLI, the value is Base64-encoded. Otherwise, it is not
     * Base64-encoded.</p> <p>If the response includes the
     * <code>CiphertextForRecipient</code> field, the <code>PrivateKeyPlaintext</code>
     * field is null or empty.</p>
     */
    inline const Aws::Utils::CryptoBuffer& GetPrivateKeyPlaintext() const { return m_privateKeyPlaintext; }
    template<typename PrivateKeyPlaintextT = Aws::Utils::CryptoBuffer>
    void SetPrivateKeyPlaintext(PrivateKeyPlaintextT&& value) { m_privateKeyPlaintextHasBeenSet = true; m_privateKeyPlaintext = std::forward<PrivateKeyPlaintextT>(value); }
    template<typename PrivateKeyPlaintextT = Aws::Utils::CryptoBuffer>
    GenerateDataKeyPairResult& WithPrivateKeyPlaintext(PrivateKeyPlaintextT&& value) { SetPrivateKeyPlaintext(std::forward<PrivateKeyPlaintextT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The public key (in plaintext). When you use the HTTP API or the Amazon Web
     * Services CLI, the value is Base64-encoded. Otherwise, it is not
     * Base64-encoded.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetPublicKey() const { return m_publicKey; }
    template<typename PublicKeyT = Aws::Utils::ByteBuffer>
    void SetPublicKey(PublicKeyT&& value) { m_publicKeyHasBeenSet = true; m_publicKey = std::forward<PublicKeyT>(value); }
    template<typename PublicKeyT = Aws::Utils::ByteBuffer>
    GenerateDataKeyPairResult& WithPublicKey(PublicKeyT&& value) { SetPublicKey(std::forward<PublicKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#key-id-key-ARN">key
     * ARN</a>) of the KMS key that encrypted the private key.</p>
     */
    inline const Aws::String& GetKeyId() const { return m_keyId; }
    template<typename KeyIdT = Aws::String>
    void SetKeyId(KeyIdT&& value) { m_keyIdHasBeenSet = true; m_keyId = std::forward<KeyIdT>(value); }
    template<typename KeyIdT = Aws::String>
    GenerateDataKeyPairResult& WithKeyId(KeyIdT&& value) { SetKeyId(std::forward<KeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of data key pair that was generated.</p>
     */
    inline DataKeyPairSpec GetKeyPairSpec() const { return m_keyPairSpec; }
    inline void SetKeyPairSpec(DataKeyPairSpec value) { m_keyPairSpecHasBeenSet = true; m_keyPairSpec = value; }
    inline GenerateDataKeyPairResult& WithKeyPairSpec(DataKeyPairSpec value) { SetKeyPairSpec(value); return *this;}
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
    inline const Aws::Utils::ByteBuffer& GetCiphertextForRecipient() const { return m_ciphertextForRecipient; }
    template<typename CiphertextForRecipientT = Aws::Utils::ByteBuffer>
    void SetCiphertextForRecipient(CiphertextForRecipientT&& value) { m_ciphertextForRecipientHasBeenSet = true; m_ciphertextForRecipient = std::forward<CiphertextForRecipientT>(value); }
    template<typename CiphertextForRecipientT = Aws::Utils::ByteBuffer>
    GenerateDataKeyPairResult& WithCiphertextForRecipient(CiphertextForRecipientT&& value) { SetCiphertextForRecipient(std::forward<CiphertextForRecipientT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the key material used to encrypt the private key.</p>
     */
    inline const Aws::String& GetKeyMaterialId() const { return m_keyMaterialId; }
    template<typename KeyMaterialIdT = Aws::String>
    void SetKeyMaterialId(KeyMaterialIdT&& value) { m_keyMaterialIdHasBeenSet = true; m_keyMaterialId = std::forward<KeyMaterialIdT>(value); }
    template<typename KeyMaterialIdT = Aws::String>
    GenerateDataKeyPairResult& WithKeyMaterialId(KeyMaterialIdT&& value) { SetKeyMaterialId(std::forward<KeyMaterialIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GenerateDataKeyPairResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::ByteBuffer m_privateKeyCiphertextBlob{};
    bool m_privateKeyCiphertextBlobHasBeenSet = false;

    Aws::Utils::CryptoBuffer m_privateKeyPlaintext{};
    bool m_privateKeyPlaintextHasBeenSet = false;

    Aws::Utils::ByteBuffer m_publicKey{};
    bool m_publicKeyHasBeenSet = false;

    Aws::String m_keyId;
    bool m_keyIdHasBeenSet = false;

    DataKeyPairSpec m_keyPairSpec{DataKeyPairSpec::NOT_SET};
    bool m_keyPairSpecHasBeenSet = false;

    Aws::Utils::ByteBuffer m_ciphertextForRecipient{};
    bool m_ciphertextForRecipientHasBeenSet = false;

    Aws::String m_keyMaterialId;
    bool m_keyMaterialIdHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace KMS
} // namespace Aws
