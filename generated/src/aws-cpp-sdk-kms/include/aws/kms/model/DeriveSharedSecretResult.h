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
    AWS_KMS_API DeriveSharedSecretResult();
    AWS_KMS_API DeriveSharedSecretResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KMS_API DeriveSharedSecretResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Identifies the KMS key used to derive the shared secret.</p>
     */
    inline const Aws::String& GetKeyId() const{ return m_keyId; }
    inline void SetKeyId(const Aws::String& value) { m_keyId = value; }
    inline void SetKeyId(Aws::String&& value) { m_keyId = std::move(value); }
    inline void SetKeyId(const char* value) { m_keyId.assign(value); }
    inline DeriveSharedSecretResult& WithKeyId(const Aws::String& value) { SetKeyId(value); return *this;}
    inline DeriveSharedSecretResult& WithKeyId(Aws::String&& value) { SetKeyId(std::move(value)); return *this;}
    inline DeriveSharedSecretResult& WithKeyId(const char* value) { SetKeyId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The raw secret derived from the specified key agreement algorithm, private
     * key in the asymmetric KMS key, and your peer's public key.</p> <p>If the
     * response includes the <code>CiphertextForRecipient</code> field, the
     * <code>SharedSecret</code> field is null or empty.</p>
     */
    inline const Aws::Utils::CryptoBuffer& GetSharedSecret() const{ return m_sharedSecret; }
    inline void SetSharedSecret(const Aws::Utils::CryptoBuffer& value) { m_sharedSecret = value; }
    inline void SetSharedSecret(Aws::Utils::CryptoBuffer&& value) { m_sharedSecret = std::move(value); }
    inline DeriveSharedSecretResult& WithSharedSecret(const Aws::Utils::CryptoBuffer& value) { SetSharedSecret(value); return *this;}
    inline DeriveSharedSecretResult& WithSharedSecret(Aws::Utils::CryptoBuffer&& value) { SetSharedSecret(std::move(value)); return *this;}
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
    inline const Aws::Utils::ByteBuffer& GetCiphertextForRecipient() const{ return m_ciphertextForRecipient; }
    inline void SetCiphertextForRecipient(const Aws::Utils::ByteBuffer& value) { m_ciphertextForRecipient = value; }
    inline void SetCiphertextForRecipient(Aws::Utils::ByteBuffer&& value) { m_ciphertextForRecipient = std::move(value); }
    inline DeriveSharedSecretResult& WithCiphertextForRecipient(const Aws::Utils::ByteBuffer& value) { SetCiphertextForRecipient(value); return *this;}
    inline DeriveSharedSecretResult& WithCiphertextForRecipient(Aws::Utils::ByteBuffer&& value) { SetCiphertextForRecipient(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Identifies the key agreement algorithm used to derive the shared secret.</p>
     */
    inline const KeyAgreementAlgorithmSpec& GetKeyAgreementAlgorithm() const{ return m_keyAgreementAlgorithm; }
    inline void SetKeyAgreementAlgorithm(const KeyAgreementAlgorithmSpec& value) { m_keyAgreementAlgorithm = value; }
    inline void SetKeyAgreementAlgorithm(KeyAgreementAlgorithmSpec&& value) { m_keyAgreementAlgorithm = std::move(value); }
    inline DeriveSharedSecretResult& WithKeyAgreementAlgorithm(const KeyAgreementAlgorithmSpec& value) { SetKeyAgreementAlgorithm(value); return *this;}
    inline DeriveSharedSecretResult& WithKeyAgreementAlgorithm(KeyAgreementAlgorithmSpec&& value) { SetKeyAgreementAlgorithm(std::move(value)); return *this;}
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
    inline const OriginType& GetKeyOrigin() const{ return m_keyOrigin; }
    inline void SetKeyOrigin(const OriginType& value) { m_keyOrigin = value; }
    inline void SetKeyOrigin(OriginType&& value) { m_keyOrigin = std::move(value); }
    inline DeriveSharedSecretResult& WithKeyOrigin(const OriginType& value) { SetKeyOrigin(value); return *this;}
    inline DeriveSharedSecretResult& WithKeyOrigin(OriginType&& value) { SetKeyOrigin(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DeriveSharedSecretResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DeriveSharedSecretResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DeriveSharedSecretResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_keyId;

    Aws::Utils::CryptoBuffer m_sharedSecret;

    Aws::Utils::ByteBuffer m_ciphertextForRecipient;

    KeyAgreementAlgorithmSpec m_keyAgreementAlgorithm;

    OriginType m_keyOrigin;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace KMS
} // namespace Aws
