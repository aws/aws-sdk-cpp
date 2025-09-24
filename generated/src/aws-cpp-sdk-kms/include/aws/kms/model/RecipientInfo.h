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
   * Nitro Enclaves and Amazon Web Services NitroTPM, which lets you create an
   * attested environment in Amazon EC2. For information about the interaction
   * between KMS and Amazon Web Services Nitro Enclaves or Amazon Web Services
   * NitroTPM, see <a
   * href="https://docs.aws.amazon.com/kms/latest/developerguide/cryptographic-attestation.html">Cryptographic
   * attestation support in KMS</a> in the <i>Key Management Service Developer
   * Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kms-2014-11-01/RecipientInfo">AWS
   * API Reference</a></p>
   */
  class RecipientInfo
  {
  public:
    AWS_KMS_API RecipientInfo() = default;
    AWS_KMS_API RecipientInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_KMS_API RecipientInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The encryption algorithm that KMS should use with the public key for an
     * Amazon Web Services Nitro Enclave or NitroTPM to encrypt plaintext values for
     * the response. The only valid value is <code>RSAES_OAEP_SHA_256</code>.</p>
     */
    inline KeyEncryptionMechanism GetKeyEncryptionAlgorithm() const { return m_keyEncryptionAlgorithm; }
    inline bool KeyEncryptionAlgorithmHasBeenSet() const { return m_keyEncryptionAlgorithmHasBeenSet; }
    inline void SetKeyEncryptionAlgorithm(KeyEncryptionMechanism value) { m_keyEncryptionAlgorithmHasBeenSet = true; m_keyEncryptionAlgorithm = value; }
    inline RecipientInfo& WithKeyEncryptionAlgorithm(KeyEncryptionMechanism value) { SetKeyEncryptionAlgorithm(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The attestation document for an Amazon Web Services Nitro Enclave or a
     * NitroTPM. This document includes the enclave's public key.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetAttestationDocument() const { return m_attestationDocument; }
    inline bool AttestationDocumentHasBeenSet() const { return m_attestationDocumentHasBeenSet; }
    template<typename AttestationDocumentT = Aws::Utils::ByteBuffer>
    void SetAttestationDocument(AttestationDocumentT&& value) { m_attestationDocumentHasBeenSet = true; m_attestationDocument = std::forward<AttestationDocumentT>(value); }
    template<typename AttestationDocumentT = Aws::Utils::ByteBuffer>
    RecipientInfo& WithAttestationDocument(AttestationDocumentT&& value) { SetAttestationDocument(std::forward<AttestationDocumentT>(value)); return *this;}
    ///@}
  private:

    KeyEncryptionMechanism m_keyEncryptionAlgorithm{KeyEncryptionMechanism::NOT_SET};
    bool m_keyEncryptionAlgorithmHasBeenSet = false;

    Aws::Utils::ByteBuffer m_attestationDocument{};
    bool m_attestationDocumentHasBeenSet = false;
  };

} // namespace Model
} // namespace KMS
} // namespace Aws
