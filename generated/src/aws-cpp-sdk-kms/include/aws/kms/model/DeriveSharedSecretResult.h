/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kms/KMS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/Array.h>
#include <aws/kms/model/KeyAgreementAlgorithmSpec.h>
#include <aws/kms/model/OriginType.h>
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
  class DeriveSharedSecretResult
  {
  public:
    AWS_KMS_API DeriveSharedSecretResult() = default;
    AWS_KMS_API DeriveSharedSecretResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KMS_API DeriveSharedSecretResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Identifies the KMS key used to derive the shared secret.</p>
     */
    inline const Aws::String& GetKeyId() const { return m_keyId; }
    template<typename KeyIdT = Aws::String>
    void SetKeyId(KeyIdT&& value) { m_keyIdHasBeenSet = true; m_keyId = std::forward<KeyIdT>(value); }
    template<typename KeyIdT = Aws::String>
    DeriveSharedSecretResult& WithKeyId(KeyIdT&& value) { SetKeyId(std::forward<KeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The raw secret derived from the specified key agreement algorithm, private
     * key in the asymmetric KMS key, and your peer's public key.</p> <p>If the
     * response includes the <code>CiphertextForRecipient</code> field, the
     * <code>SharedSecret</code> field is null or empty.</p>
     */
    inline const Aws::Utils::CryptoBuffer& GetSharedSecret() const { return m_sharedSecret; }
    template<typename SharedSecretT = Aws::Utils::CryptoBuffer>
    void SetSharedSecret(SharedSecretT&& value) { m_sharedSecretHasBeenSet = true; m_sharedSecret = std::forward<SharedSecretT>(value); }
    template<typename SharedSecretT = Aws::Utils::CryptoBuffer>
    DeriveSharedSecretResult& WithSharedSecret(SharedSecretT&& value) { SetSharedSecret(std::forward<SharedSecretT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The plaintext shared secret encrypted with the public key in the attestation
     * document.</p> <p>This field is included in the response only when the
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
    DeriveSharedSecretResult& WithCiphertextForRecipient(CiphertextForRecipientT&& value) { SetCiphertextForRecipient(std::forward<CiphertextForRecipientT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Identifies the key agreement algorithm used to derive the shared secret.</p>
     */
    inline KeyAgreementAlgorithmSpec GetKeyAgreementAlgorithm() const { return m_keyAgreementAlgorithm; }
    inline void SetKeyAgreementAlgorithm(KeyAgreementAlgorithmSpec value) { m_keyAgreementAlgorithmHasBeenSet = true; m_keyAgreementAlgorithm = value; }
    inline DeriveSharedSecretResult& WithKeyAgreementAlgorithm(KeyAgreementAlgorithmSpec value) { SetKeyAgreementAlgorithm(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source of the key material for the specified KMS key.</p> <p>When this
     * value is <code>AWS_KMS</code>, KMS created the key material. When this value is
     * <code>EXTERNAL</code>, the key material was imported or the KMS key doesn't have
     * any key material.</p> <p>The only valid values for DeriveSharedSecret are
     * <code>AWS_KMS</code> and <code>EXTERNAL</code>. DeriveSharedSecret does not
     * support KMS keys with a <code>KeyOrigin</code> value of
     * <code>AWS_CLOUDHSM</code> or <code>EXTERNAL_KEY_STORE</code>.</p>
     */
    inline OriginType GetKeyOrigin() const { return m_keyOrigin; }
    inline void SetKeyOrigin(OriginType value) { m_keyOriginHasBeenSet = true; m_keyOrigin = value; }
    inline DeriveSharedSecretResult& WithKeyOrigin(OriginType value) { SetKeyOrigin(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DeriveSharedSecretResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_keyId;
    bool m_keyIdHasBeenSet = false;

    Aws::Utils::CryptoBuffer m_sharedSecret{};
    bool m_sharedSecretHasBeenSet = false;

    Aws::Utils::ByteBuffer m_ciphertextForRecipient{};
    bool m_ciphertextForRecipientHasBeenSet = false;

    KeyAgreementAlgorithmSpec m_keyAgreementAlgorithm{KeyAgreementAlgorithmSpec::NOT_SET};
    bool m_keyAgreementAlgorithmHasBeenSet = false;

    OriginType m_keyOrigin{OriginType::NOT_SET};
    bool m_keyOriginHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace KMS
} // namespace Aws
