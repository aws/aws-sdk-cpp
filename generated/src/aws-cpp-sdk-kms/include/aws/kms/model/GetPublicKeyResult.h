/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kms/KMS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/Array.h>
#include <aws/kms/model/KeySpec.h>
#include <aws/kms/model/KeyUsageType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kms/model/EncryptionAlgorithmSpec.h>
#include <aws/kms/model/SigningAlgorithmSpec.h>
#include <aws/kms/model/KeyAgreementAlgorithmSpec.h>
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
  class GetPublicKeyResult
  {
  public:
    AWS_KMS_API GetPublicKeyResult();
    AWS_KMS_API GetPublicKeyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KMS_API GetPublicKeyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#key-id-key-ARN">key
     * ARN</a>) of the asymmetric KMS key from which the public key was downloaded.</p>
     */
    inline const Aws::String& GetKeyId() const{ return m_keyId; }
    inline void SetKeyId(const Aws::String& value) { m_keyId = value; }
    inline void SetKeyId(Aws::String&& value) { m_keyId = std::move(value); }
    inline void SetKeyId(const char* value) { m_keyId.assign(value); }
    inline GetPublicKeyResult& WithKeyId(const Aws::String& value) { SetKeyId(value); return *this;}
    inline GetPublicKeyResult& WithKeyId(Aws::String&& value) { SetKeyId(std::move(value)); return *this;}
    inline GetPublicKeyResult& WithKeyId(const char* value) { SetKeyId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The exported public key. </p> <p>The value is a DER-encoded X.509 public key,
     * also known as <code>SubjectPublicKeyInfo</code> (SPKI), as defined in <a
     * href="https://tools.ietf.org/html/rfc5280">RFC 5280</a>. When you use the HTTP
     * API or the Amazon Web Services CLI, the value is Base64-encoded. Otherwise, it
     * is not Base64-encoded.</p> <p/>
     */
    inline const Aws::Utils::ByteBuffer& GetPublicKey() const{ return m_publicKey; }
    inline void SetPublicKey(const Aws::Utils::ByteBuffer& value) { m_publicKey = value; }
    inline void SetPublicKey(Aws::Utils::ByteBuffer&& value) { m_publicKey = std::move(value); }
    inline GetPublicKeyResult& WithPublicKey(const Aws::Utils::ByteBuffer& value) { SetPublicKey(value); return *this;}
    inline GetPublicKeyResult& WithPublicKey(Aws::Utils::ByteBuffer&& value) { SetPublicKey(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the of the public key that was downloaded.</p>
     */
    inline const KeySpec& GetKeySpec() const{ return m_keySpec; }
    inline void SetKeySpec(const KeySpec& value) { m_keySpec = value; }
    inline void SetKeySpec(KeySpec&& value) { m_keySpec = std::move(value); }
    inline GetPublicKeyResult& WithKeySpec(const KeySpec& value) { SetKeySpec(value); return *this;}
    inline GetPublicKeyResult& WithKeySpec(KeySpec&& value) { SetKeySpec(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The permitted use of the public key. Valid values for asymmetric key pairs
     * are <code>ENCRYPT_DECRYPT</code>, <code>SIGN_VERIFY</code>, and
     * <code>KEY_AGREEMENT</code>. </p> <p>This information is critical. For example,
     * if a public key with <code>SIGN_VERIFY</code> key usage encrypts data outside of
     * KMS, the ciphertext cannot be decrypted. </p>
     */
    inline const KeyUsageType& GetKeyUsage() const{ return m_keyUsage; }
    inline void SetKeyUsage(const KeyUsageType& value) { m_keyUsage = value; }
    inline void SetKeyUsage(KeyUsageType&& value) { m_keyUsage = std::move(value); }
    inline GetPublicKeyResult& WithKeyUsage(const KeyUsageType& value) { SetKeyUsage(value); return *this;}
    inline GetPublicKeyResult& WithKeyUsage(KeyUsageType&& value) { SetKeyUsage(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The encryption algorithms that KMS supports for this key. </p> <p>This
     * information is critical. If a public key encrypts data outside of KMS by using
     * an unsupported encryption algorithm, the ciphertext cannot be decrypted. </p>
     * <p>This field appears in the response only when the <code>KeyUsage</code> of the
     * public key is <code>ENCRYPT_DECRYPT</code>.</p>
     */
    inline const Aws::Vector<EncryptionAlgorithmSpec>& GetEncryptionAlgorithms() const{ return m_encryptionAlgorithms; }
    inline void SetEncryptionAlgorithms(const Aws::Vector<EncryptionAlgorithmSpec>& value) { m_encryptionAlgorithms = value; }
    inline void SetEncryptionAlgorithms(Aws::Vector<EncryptionAlgorithmSpec>&& value) { m_encryptionAlgorithms = std::move(value); }
    inline GetPublicKeyResult& WithEncryptionAlgorithms(const Aws::Vector<EncryptionAlgorithmSpec>& value) { SetEncryptionAlgorithms(value); return *this;}
    inline GetPublicKeyResult& WithEncryptionAlgorithms(Aws::Vector<EncryptionAlgorithmSpec>&& value) { SetEncryptionAlgorithms(std::move(value)); return *this;}
    inline GetPublicKeyResult& AddEncryptionAlgorithms(const EncryptionAlgorithmSpec& value) { m_encryptionAlgorithms.push_back(value); return *this; }
    inline GetPublicKeyResult& AddEncryptionAlgorithms(EncryptionAlgorithmSpec&& value) { m_encryptionAlgorithms.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The signing algorithms that KMS supports for this key.</p> <p>This field
     * appears in the response only when the <code>KeyUsage</code> of the public key is
     * <code>SIGN_VERIFY</code>.</p>
     */
    inline const Aws::Vector<SigningAlgorithmSpec>& GetSigningAlgorithms() const{ return m_signingAlgorithms; }
    inline void SetSigningAlgorithms(const Aws::Vector<SigningAlgorithmSpec>& value) { m_signingAlgorithms = value; }
    inline void SetSigningAlgorithms(Aws::Vector<SigningAlgorithmSpec>&& value) { m_signingAlgorithms = std::move(value); }
    inline GetPublicKeyResult& WithSigningAlgorithms(const Aws::Vector<SigningAlgorithmSpec>& value) { SetSigningAlgorithms(value); return *this;}
    inline GetPublicKeyResult& WithSigningAlgorithms(Aws::Vector<SigningAlgorithmSpec>&& value) { SetSigningAlgorithms(std::move(value)); return *this;}
    inline GetPublicKeyResult& AddSigningAlgorithms(const SigningAlgorithmSpec& value) { m_signingAlgorithms.push_back(value); return *this; }
    inline GetPublicKeyResult& AddSigningAlgorithms(SigningAlgorithmSpec&& value) { m_signingAlgorithms.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The key agreement algorithm used to derive a shared secret. This field is
     * present only when the KMS key has a <code>KeyUsage</code> value of
     * <code>KEY_AGREEMENT</code>.</p>
     */
    inline const Aws::Vector<KeyAgreementAlgorithmSpec>& GetKeyAgreementAlgorithms() const{ return m_keyAgreementAlgorithms; }
    inline void SetKeyAgreementAlgorithms(const Aws::Vector<KeyAgreementAlgorithmSpec>& value) { m_keyAgreementAlgorithms = value; }
    inline void SetKeyAgreementAlgorithms(Aws::Vector<KeyAgreementAlgorithmSpec>&& value) { m_keyAgreementAlgorithms = std::move(value); }
    inline GetPublicKeyResult& WithKeyAgreementAlgorithms(const Aws::Vector<KeyAgreementAlgorithmSpec>& value) { SetKeyAgreementAlgorithms(value); return *this;}
    inline GetPublicKeyResult& WithKeyAgreementAlgorithms(Aws::Vector<KeyAgreementAlgorithmSpec>&& value) { SetKeyAgreementAlgorithms(std::move(value)); return *this;}
    inline GetPublicKeyResult& AddKeyAgreementAlgorithms(const KeyAgreementAlgorithmSpec& value) { m_keyAgreementAlgorithms.push_back(value); return *this; }
    inline GetPublicKeyResult& AddKeyAgreementAlgorithms(KeyAgreementAlgorithmSpec&& value) { m_keyAgreementAlgorithms.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetPublicKeyResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetPublicKeyResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetPublicKeyResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_keyId;

    Aws::Utils::ByteBuffer m_publicKey;

    KeySpec m_keySpec;

    KeyUsageType m_keyUsage;

    Aws::Vector<EncryptionAlgorithmSpec> m_encryptionAlgorithms;

    Aws::Vector<SigningAlgorithmSpec> m_signingAlgorithms;

    Aws::Vector<KeyAgreementAlgorithmSpec> m_keyAgreementAlgorithms;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace KMS
} // namespace Aws
