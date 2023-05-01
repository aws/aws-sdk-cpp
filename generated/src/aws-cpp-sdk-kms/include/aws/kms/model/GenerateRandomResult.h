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
    AWS_KMS_API GenerateRandomResult();
    AWS_KMS_API GenerateRandomResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KMS_API GenerateRandomResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The random byte string. When you use the HTTP API or the Amazon Web Services
     * CLI, the value is Base64-encoded. Otherwise, it is not Base64-encoded.</p> <p>If
     * the response includes the <code>CiphertextForRecipient</code> field, the
     * <code>Plaintext</code> field is null or empty.</p>
     */
    inline const Aws::Utils::CryptoBuffer& GetPlaintext() const{ return m_plaintext; }

    /**
     * <p>The random byte string. When you use the HTTP API or the Amazon Web Services
     * CLI, the value is Base64-encoded. Otherwise, it is not Base64-encoded.</p> <p>If
     * the response includes the <code>CiphertextForRecipient</code> field, the
     * <code>Plaintext</code> field is null or empty.</p>
     */
    inline void SetPlaintext(const Aws::Utils::CryptoBuffer& value) { m_plaintext = value; }

    /**
     * <p>The random byte string. When you use the HTTP API or the Amazon Web Services
     * CLI, the value is Base64-encoded. Otherwise, it is not Base64-encoded.</p> <p>If
     * the response includes the <code>CiphertextForRecipient</code> field, the
     * <code>Plaintext</code> field is null or empty.</p>
     */
    inline void SetPlaintext(Aws::Utils::CryptoBuffer&& value) { m_plaintext = std::move(value); }

    /**
     * <p>The random byte string. When you use the HTTP API or the Amazon Web Services
     * CLI, the value is Base64-encoded. Otherwise, it is not Base64-encoded.</p> <p>If
     * the response includes the <code>CiphertextForRecipient</code> field, the
     * <code>Plaintext</code> field is null or empty.</p>
     */
    inline GenerateRandomResult& WithPlaintext(const Aws::Utils::CryptoBuffer& value) { SetPlaintext(value); return *this;}

    /**
     * <p>The random byte string. When you use the HTTP API or the Amazon Web Services
     * CLI, the value is Base64-encoded. Otherwise, it is not Base64-encoded.</p> <p>If
     * the response includes the <code>CiphertextForRecipient</code> field, the
     * <code>Plaintext</code> field is null or empty.</p>
     */
    inline GenerateRandomResult& WithPlaintext(Aws::Utils::CryptoBuffer&& value) { SetPlaintext(std::move(value)); return *this;}


    /**
     * <p>The plaintext random bytes encrypted with the public key from the Nitro
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

    /**
     * <p>The plaintext random bytes encrypted with the public key from the Nitro
     * enclave. This ciphertext can be decrypted only by using a private key in the
     * Nitro enclave. </p> <p>This field is included in the response only when the
     * <code>Recipient</code> parameter in the request includes a valid attestation
     * document from an Amazon Web Services Nitro enclave. For information about the
     * interaction between KMS and Amazon Web Services Nitro Enclaves, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/services-nitro-enclaves.html">How
     * Amazon Web Services Nitro Enclaves uses KMS</a> in the <i>Key Management Service
     * Developer Guide</i>.</p>
     */
    inline void SetCiphertextForRecipient(const Aws::Utils::ByteBuffer& value) { m_ciphertextForRecipient = value; }

    /**
     * <p>The plaintext random bytes encrypted with the public key from the Nitro
     * enclave. This ciphertext can be decrypted only by using a private key in the
     * Nitro enclave. </p> <p>This field is included in the response only when the
     * <code>Recipient</code> parameter in the request includes a valid attestation
     * document from an Amazon Web Services Nitro enclave. For information about the
     * interaction between KMS and Amazon Web Services Nitro Enclaves, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/services-nitro-enclaves.html">How
     * Amazon Web Services Nitro Enclaves uses KMS</a> in the <i>Key Management Service
     * Developer Guide</i>.</p>
     */
    inline void SetCiphertextForRecipient(Aws::Utils::ByteBuffer&& value) { m_ciphertextForRecipient = std::move(value); }

    /**
     * <p>The plaintext random bytes encrypted with the public key from the Nitro
     * enclave. This ciphertext can be decrypted only by using a private key in the
     * Nitro enclave. </p> <p>This field is included in the response only when the
     * <code>Recipient</code> parameter in the request includes a valid attestation
     * document from an Amazon Web Services Nitro enclave. For information about the
     * interaction between KMS and Amazon Web Services Nitro Enclaves, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/services-nitro-enclaves.html">How
     * Amazon Web Services Nitro Enclaves uses KMS</a> in the <i>Key Management Service
     * Developer Guide</i>.</p>
     */
    inline GenerateRandomResult& WithCiphertextForRecipient(const Aws::Utils::ByteBuffer& value) { SetCiphertextForRecipient(value); return *this;}

    /**
     * <p>The plaintext random bytes encrypted with the public key from the Nitro
     * enclave. This ciphertext can be decrypted only by using a private key in the
     * Nitro enclave. </p> <p>This field is included in the response only when the
     * <code>Recipient</code> parameter in the request includes a valid attestation
     * document from an Amazon Web Services Nitro enclave. For information about the
     * interaction between KMS and Amazon Web Services Nitro Enclaves, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/services-nitro-enclaves.html">How
     * Amazon Web Services Nitro Enclaves uses KMS</a> in the <i>Key Management Service
     * Developer Guide</i>.</p>
     */
    inline GenerateRandomResult& WithCiphertextForRecipient(Aws::Utils::ByteBuffer&& value) { SetCiphertextForRecipient(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GenerateRandomResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GenerateRandomResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GenerateRandomResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Utils::CryptoBuffer m_plaintext;

    Aws::Utils::ByteBuffer m_ciphertextForRecipient;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace KMS
} // namespace Aws
