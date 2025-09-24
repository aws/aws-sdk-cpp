/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kms/KMS_EXPORTS.h>
#include <aws/core/utils/Array.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class GenerateRandomResult
  {
  public:
    AWS_KMS_API GenerateRandomResult() = default;
    AWS_KMS_API GenerateRandomResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KMS_API GenerateRandomResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The random byte string. When you use the HTTP API or the Amazon Web Services
     * CLI, the value is Base64-encoded. Otherwise, it is not Base64-encoded.</p> <p>If
     * the response includes the <code>CiphertextForRecipient</code> field, the
     * <code>Plaintext</code> field is null or empty.</p>
     */
    inline const Aws::Utils::CryptoBuffer& GetPlaintext() const { return m_plaintext; }
    template<typename PlaintextT = Aws::Utils::CryptoBuffer>
    void SetPlaintext(PlaintextT&& value) { m_plaintextHasBeenSet = true; m_plaintext = std::forward<PlaintextT>(value); }
    template<typename PlaintextT = Aws::Utils::CryptoBuffer>
    GenerateRandomResult& WithPlaintext(PlaintextT&& value) { SetPlaintext(std::forward<PlaintextT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The plaintext random bytes encrypted with the public key from the attestation
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
    GenerateRandomResult& WithCiphertextForRecipient(CiphertextForRecipientT&& value) { SetCiphertextForRecipient(std::forward<CiphertextForRecipientT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GenerateRandomResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::CryptoBuffer m_plaintext{};
    bool m_plaintextHasBeenSet = false;

    Aws::Utils::ByteBuffer m_ciphertextForRecipient{};
    bool m_ciphertextForRecipientHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace KMS
} // namespace Aws
