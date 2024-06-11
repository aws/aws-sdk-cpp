﻿/**
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
    AWS_KMS_API DecryptResult();
    AWS_KMS_API DecryptResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KMS_API DecryptResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#key-id-key-ARN">key
     * ARN</a>) of the KMS key that was used to decrypt the ciphertext.</p>
     */
    inline const Aws::String& GetKeyId() const{ return m_keyId; }
    inline void SetKeyId(const Aws::String& value) { m_keyId = value; }
    inline void SetKeyId(Aws::String&& value) { m_keyId = std::move(value); }
    inline void SetKeyId(const char* value) { m_keyId.assign(value); }
    inline DecryptResult& WithKeyId(const Aws::String& value) { SetKeyId(value); return *this;}
    inline DecryptResult& WithKeyId(Aws::String&& value) { SetKeyId(std::move(value)); return *this;}
    inline DecryptResult& WithKeyId(const char* value) { SetKeyId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Decrypted plaintext data. When you use the HTTP API or the Amazon Web
     * Services CLI, the value is Base64-encoded. Otherwise, it is not
     * Base64-encoded.</p> <p>If the response includes the
     * <code>CiphertextForRecipient</code> field, the <code>Plaintext</code> field is
     * null or empty.</p>
     */
    inline const Aws::Utils::CryptoBuffer& GetPlaintext() const{ return m_plaintext; }
    inline void SetPlaintext(const Aws::Utils::CryptoBuffer& value) { m_plaintext = value; }
    inline void SetPlaintext(Aws::Utils::CryptoBuffer&& value) { m_plaintext = std::move(value); }
    inline DecryptResult& WithPlaintext(const Aws::Utils::CryptoBuffer& value) { SetPlaintext(value); return *this;}
    inline DecryptResult& WithPlaintext(Aws::Utils::CryptoBuffer&& value) { SetPlaintext(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The encryption algorithm that was used to decrypt the ciphertext.</p>
     */
    inline const EncryptionAlgorithmSpec& GetEncryptionAlgorithm() const{ return m_encryptionAlgorithm; }
    inline void SetEncryptionAlgorithm(const EncryptionAlgorithmSpec& value) { m_encryptionAlgorithm = value; }
    inline void SetEncryptionAlgorithm(EncryptionAlgorithmSpec&& value) { m_encryptionAlgorithm = std::move(value); }
    inline DecryptResult& WithEncryptionAlgorithm(const EncryptionAlgorithmSpec& value) { SetEncryptionAlgorithm(value); return *this;}
    inline DecryptResult& WithEncryptionAlgorithm(EncryptionAlgorithmSpec&& value) { SetEncryptionAlgorithm(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The plaintext data encrypted with the public key in the attestation document.
     * </p> <p>This field is included in the response only when the
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
    inline DecryptResult& WithCiphertextForRecipient(const Aws::Utils::ByteBuffer& value) { SetCiphertextForRecipient(value); return *this;}
    inline DecryptResult& WithCiphertextForRecipient(Aws::Utils::ByteBuffer&& value) { SetCiphertextForRecipient(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DecryptResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DecryptResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DecryptResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_keyId;

    Aws::Utils::CryptoBuffer m_plaintext;

    EncryptionAlgorithmSpec m_encryptionAlgorithm;

    Aws::Utils::ByteBuffer m_ciphertextForRecipient;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace KMS
} // namespace Aws
