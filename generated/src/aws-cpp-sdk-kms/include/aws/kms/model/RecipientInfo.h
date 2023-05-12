/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kms/KMS_EXPORTS.h>
#include <aws/kms/model/KeyEncryptionMechanism.h>
#include <aws/core/utils/Array.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace KMS
{
namespace Model
{

  /**
   * <p>Contains information about the party that receives the response from the API
   * operation.</p> <p>This data type is designed to support Amazon Web Services
   * Nitro Enclaves, which lets you create an isolated compute environment in Amazon
   * EC2. For information about the interaction between KMS and Amazon Web Services
   * Nitro Enclaves, see <a
   * href="https://docs.aws.amazon.com/kms/latest/developerguide/services-nitro-enclaves.html">How
   * Amazon Web Services Nitro Enclaves uses KMS</a> in the <i>Key Management Service
   * Developer Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kms-2014-11-01/RecipientInfo">AWS
   * API Reference</a></p>
   */
  class RecipientInfo
  {
  public:
    AWS_KMS_API RecipientInfo();
    AWS_KMS_API RecipientInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_KMS_API RecipientInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The encryption algorithm that KMS should use with the public key for an
     * Amazon Web Services Nitro Enclave to encrypt plaintext values for the response.
     * The only valid value is <code>RSAES_OAEP_SHA_256</code>.</p>
     */
    inline const KeyEncryptionMechanism& GetKeyEncryptionAlgorithm() const{ return m_keyEncryptionAlgorithm; }

    /**
     * <p>The encryption algorithm that KMS should use with the public key for an
     * Amazon Web Services Nitro Enclave to encrypt plaintext values for the response.
     * The only valid value is <code>RSAES_OAEP_SHA_256</code>.</p>
     */
    inline bool KeyEncryptionAlgorithmHasBeenSet() const { return m_keyEncryptionAlgorithmHasBeenSet; }

    /**
     * <p>The encryption algorithm that KMS should use with the public key for an
     * Amazon Web Services Nitro Enclave to encrypt plaintext values for the response.
     * The only valid value is <code>RSAES_OAEP_SHA_256</code>.</p>
     */
    inline void SetKeyEncryptionAlgorithm(const KeyEncryptionMechanism& value) { m_keyEncryptionAlgorithmHasBeenSet = true; m_keyEncryptionAlgorithm = value; }

    /**
     * <p>The encryption algorithm that KMS should use with the public key for an
     * Amazon Web Services Nitro Enclave to encrypt plaintext values for the response.
     * The only valid value is <code>RSAES_OAEP_SHA_256</code>.</p>
     */
    inline void SetKeyEncryptionAlgorithm(KeyEncryptionMechanism&& value) { m_keyEncryptionAlgorithmHasBeenSet = true; m_keyEncryptionAlgorithm = std::move(value); }

    /**
     * <p>The encryption algorithm that KMS should use with the public key for an
     * Amazon Web Services Nitro Enclave to encrypt plaintext values for the response.
     * The only valid value is <code>RSAES_OAEP_SHA_256</code>.</p>
     */
    inline RecipientInfo& WithKeyEncryptionAlgorithm(const KeyEncryptionMechanism& value) { SetKeyEncryptionAlgorithm(value); return *this;}

    /**
     * <p>The encryption algorithm that KMS should use with the public key for an
     * Amazon Web Services Nitro Enclave to encrypt plaintext values for the response.
     * The only valid value is <code>RSAES_OAEP_SHA_256</code>.</p>
     */
    inline RecipientInfo& WithKeyEncryptionAlgorithm(KeyEncryptionMechanism&& value) { SetKeyEncryptionAlgorithm(std::move(value)); return *this;}


    /**
     * <p>The attestation document for an Amazon Web Services Nitro Enclave. This
     * document includes the enclave's public key.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetAttestationDocument() const{ return m_attestationDocument; }

    /**
     * <p>The attestation document for an Amazon Web Services Nitro Enclave. This
     * document includes the enclave's public key.</p>
     */
    inline bool AttestationDocumentHasBeenSet() const { return m_attestationDocumentHasBeenSet; }

    /**
     * <p>The attestation document for an Amazon Web Services Nitro Enclave. This
     * document includes the enclave's public key.</p>
     */
    inline void SetAttestationDocument(const Aws::Utils::ByteBuffer& value) { m_attestationDocumentHasBeenSet = true; m_attestationDocument = value; }

    /**
     * <p>The attestation document for an Amazon Web Services Nitro Enclave. This
     * document includes the enclave's public key.</p>
     */
    inline void SetAttestationDocument(Aws::Utils::ByteBuffer&& value) { m_attestationDocumentHasBeenSet = true; m_attestationDocument = std::move(value); }

    /**
     * <p>The attestation document for an Amazon Web Services Nitro Enclave. This
     * document includes the enclave's public key.</p>
     */
    inline RecipientInfo& WithAttestationDocument(const Aws::Utils::ByteBuffer& value) { SetAttestationDocument(value); return *this;}

    /**
     * <p>The attestation document for an Amazon Web Services Nitro Enclave. This
     * document includes the enclave's public key.</p>
     */
    inline RecipientInfo& WithAttestationDocument(Aws::Utils::ByteBuffer&& value) { SetAttestationDocument(std::move(value)); return *this;}

  private:

    KeyEncryptionMechanism m_keyEncryptionAlgorithm;
    bool m_keyEncryptionAlgorithmHasBeenSet = false;

    Aws::Utils::ByteBuffer m_attestationDocument;
    bool m_attestationDocumentHasBeenSet = false;
  };

} // namespace Model
} // namespace KMS
} // namespace Aws
