/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kms/KMS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/Array.h>
#include <aws/kms/model/EncryptionAlgorithmSpec.h>
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
  class DecryptResult
  {
  public:
    AWS_KMS_API DecryptResult() = default;
    AWS_KMS_API DecryptResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KMS_API DecryptResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#key-id-key-ARN">key
     * ARN</a>) of the KMS key that was used to decrypt the ciphertext.</p>
     */
    inline const Aws::String& GetKeyId() const { return m_keyId; }
    template<typename KeyIdT = Aws::String>
    void SetKeyId(KeyIdT&& value) { m_keyIdHasBeenSet = true; m_keyId = std::forward<KeyIdT>(value); }
    template<typename KeyIdT = Aws::String>
    DecryptResult& WithKeyId(KeyIdT&& value) { SetKeyId(std::forward<KeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Decrypted plaintext data. When you use the HTTP API or the Amazon Web
     * Services CLI, the value is Base64-encoded. Otherwise, it is not
     * Base64-encoded.</p> <p>If the response includes the
     * <code>CiphertextForRecipient</code> field, the <code>Plaintext</code> field is
     * null or empty.</p>
     */
    inline const Aws::Utils::CryptoBuffer& GetPlaintext() const { return m_plaintext; }
    template<typename PlaintextT = Aws::Utils::CryptoBuffer>
    void SetPlaintext(PlaintextT&& value) { m_plaintextHasBeenSet = true; m_plaintext = std::forward<PlaintextT>(value); }
    template<typename PlaintextT = Aws::Utils::CryptoBuffer>
    DecryptResult& WithPlaintext(PlaintextT&& value) { SetPlaintext(std::forward<PlaintextT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The encryption algorithm that was used to decrypt the ciphertext.</p>
     */
    inline EncryptionAlgorithmSpec GetEncryptionAlgorithm() const { return m_encryptionAlgorithm; }
    inline void SetEncryptionAlgorithm(EncryptionAlgorithmSpec value) { m_encryptionAlgorithmHasBeenSet = true; m_encryptionAlgorithm = value; }
    inline DecryptResult& WithEncryptionAlgorithm(EncryptionAlgorithmSpec value) { SetEncryptionAlgorithm(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The plaintext data encrypted with the public key from the attestation
     * document. This ciphertext can be decrypted only by using a private key from the
     * attested environment. </p> <p>This field is included in the response only when
     * the <code>Recipient</code> parameter in the request includes a valid attestation
     * document from an Amazon Web Services Nitro enclave or NitroTPM. For information
     * about the interaction between KMS and Amazon Web Services Nitro Enclaves or
     * Amazon Web Services NitroTPM, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/cryptographic-attestation.html">Cryptographic
     * attestation support in KMS</a> in the <i>Key Management Service Developer
     * Guide</i>.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetCiphertextForRecipient() const { return m_ciphertextForRecipient; }
    template<typename CiphertextForRecipientT = Aws::Utils::ByteBuffer>
    void SetCiphertextForRecipient(CiphertextForRecipientT&& value) { m_ciphertextForRecipientHasBeenSet = true; m_ciphertextForRecipient = std::forward<CiphertextForRecipientT>(value); }
    template<typename CiphertextForRecipientT = Aws::Utils::ByteBuffer>
    DecryptResult& WithCiphertextForRecipient(CiphertextForRecipientT&& value) { SetCiphertextForRecipient(std::forward<CiphertextForRecipientT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the key material used to decrypt the ciphertext. This field
     * is present only when the operation uses a symmetric encryption KMS key. This
     * field is omitted if the request includes the <code>Recipient</code>
     * parameter.</p>
     */
    inline const Aws::String& GetKeyMaterialId() const { return m_keyMaterialId; }
    template<typename KeyMaterialIdT = Aws::String>
    void SetKeyMaterialId(KeyMaterialIdT&& value) { m_keyMaterialIdHasBeenSet = true; m_keyMaterialId = std::forward<KeyMaterialIdT>(value); }
    template<typename KeyMaterialIdT = Aws::String>
    DecryptResult& WithKeyMaterialId(KeyMaterialIdT&& value) { SetKeyMaterialId(std::forward<KeyMaterialIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DecryptResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_keyId;
    bool m_keyIdHasBeenSet = false;

    Aws::Utils::CryptoBuffer m_plaintext{};
    bool m_plaintextHasBeenSet = false;

    EncryptionAlgorithmSpec m_encryptionAlgorithm{EncryptionAlgorithmSpec::NOT_SET};
    bool m_encryptionAlgorithmHasBeenSet = false;

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
