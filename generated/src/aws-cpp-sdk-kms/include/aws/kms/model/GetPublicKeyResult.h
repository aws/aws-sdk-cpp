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
    AWS_KMS_API GetPublicKeyResult() = default;
    AWS_KMS_API GetPublicKeyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KMS_API GetPublicKeyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#key-id-key-ARN">key
     * ARN</a>) of the asymmetric KMS key from which the public key was downloaded.</p>
     */
    inline const Aws::String& GetKeyId() const { return m_keyId; }
    template<typename KeyIdT = Aws::String>
    void SetKeyId(KeyIdT&& value) { m_keyIdHasBeenSet = true; m_keyId = std::forward<KeyIdT>(value); }
    template<typename KeyIdT = Aws::String>
    GetPublicKeyResult& WithKeyId(KeyIdT&& value) { SetKeyId(std::forward<KeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The exported public key. </p> <p>The value is a DER-encoded X.509 public key,
     * also known as <code>SubjectPublicKeyInfo</code> (SPKI), as defined in <a
     * href="https://tools.ietf.org/html/rfc5280">RFC 5280</a>. When you use the HTTP
     * API or the Amazon Web Services CLI, the value is Base64-encoded. Otherwise, it
     * is not Base64-encoded.</p> <p/>
     */
    inline const Aws::Utils::ByteBuffer& GetPublicKey() const { return m_publicKey; }
    template<typename PublicKeyT = Aws::Utils::ByteBuffer>
    void SetPublicKey(PublicKeyT&& value) { m_publicKeyHasBeenSet = true; m_publicKey = std::forward<PublicKeyT>(value); }
    template<typename PublicKeyT = Aws::Utils::ByteBuffer>
    GetPublicKeyResult& WithPublicKey(PublicKeyT&& value) { SetPublicKey(std::forward<PublicKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the of the public key that was downloaded.</p>
     */
    inline KeySpec GetKeySpec() const { return m_keySpec; }
    inline void SetKeySpec(KeySpec value) { m_keySpecHasBeenSet = true; m_keySpec = value; }
    inline GetPublicKeyResult& WithKeySpec(KeySpec value) { SetKeySpec(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The permitted use of the public key. Valid values for asymmetric key pairs
     * are <code>ENCRYPT_DECRYPT</code>, <code>SIGN_VERIFY</code>, and
     * <code>KEY_AGREEMENT</code>. </p> <p>This information is critical. For example,
     * if a public key with <code>SIGN_VERIFY</code> key usage encrypts data outside of
     * KMS, the ciphertext cannot be decrypted. </p>
     */
    inline KeyUsageType GetKeyUsage() const { return m_keyUsage; }
    inline void SetKeyUsage(KeyUsageType value) { m_keyUsageHasBeenSet = true; m_keyUsage = value; }
    inline GetPublicKeyResult& WithKeyUsage(KeyUsageType value) { SetKeyUsage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The encryption algorithms that KMS supports for this key. </p> <p>This
     * information is critical. If a public key encrypts data outside of KMS by using
     * an unsupported encryption algorithm, the ciphertext cannot be decrypted. </p>
     * <p>This field appears in the response only when the <code>KeyUsage</code> of the
     * public key is <code>ENCRYPT_DECRYPT</code>.</p>
     */
    inline const Aws::Vector<EncryptionAlgorithmSpec>& GetEncryptionAlgorithms() const { return m_encryptionAlgorithms; }
    template<typename EncryptionAlgorithmsT = Aws::Vector<EncryptionAlgorithmSpec>>
    void SetEncryptionAlgorithms(EncryptionAlgorithmsT&& value) { m_encryptionAlgorithmsHasBeenSet = true; m_encryptionAlgorithms = std::forward<EncryptionAlgorithmsT>(value); }
    template<typename EncryptionAlgorithmsT = Aws::Vector<EncryptionAlgorithmSpec>>
    GetPublicKeyResult& WithEncryptionAlgorithms(EncryptionAlgorithmsT&& value) { SetEncryptionAlgorithms(std::forward<EncryptionAlgorithmsT>(value)); return *this;}
    inline GetPublicKeyResult& AddEncryptionAlgorithms(EncryptionAlgorithmSpec value) { m_encryptionAlgorithmsHasBeenSet = true; m_encryptionAlgorithms.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The signing algorithms that KMS supports for this key.</p> <p>This field
     * appears in the response only when the <code>KeyUsage</code> of the public key is
     * <code>SIGN_VERIFY</code>.</p>
     */
    inline const Aws::Vector<SigningAlgorithmSpec>& GetSigningAlgorithms() const { return m_signingAlgorithms; }
    template<typename SigningAlgorithmsT = Aws::Vector<SigningAlgorithmSpec>>
    void SetSigningAlgorithms(SigningAlgorithmsT&& value) { m_signingAlgorithmsHasBeenSet = true; m_signingAlgorithms = std::forward<SigningAlgorithmsT>(value); }
    template<typename SigningAlgorithmsT = Aws::Vector<SigningAlgorithmSpec>>
    GetPublicKeyResult& WithSigningAlgorithms(SigningAlgorithmsT&& value) { SetSigningAlgorithms(std::forward<SigningAlgorithmsT>(value)); return *this;}
    inline GetPublicKeyResult& AddSigningAlgorithms(SigningAlgorithmSpec value) { m_signingAlgorithmsHasBeenSet = true; m_signingAlgorithms.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The key agreement algorithm used to derive a shared secret. This field is
     * present only when the KMS key has a <code>KeyUsage</code> value of
     * <code>KEY_AGREEMENT</code>.</p>
     */
    inline const Aws::Vector<KeyAgreementAlgorithmSpec>& GetKeyAgreementAlgorithms() const { return m_keyAgreementAlgorithms; }
    template<typename KeyAgreementAlgorithmsT = Aws::Vector<KeyAgreementAlgorithmSpec>>
    void SetKeyAgreementAlgorithms(KeyAgreementAlgorithmsT&& value) { m_keyAgreementAlgorithmsHasBeenSet = true; m_keyAgreementAlgorithms = std::forward<KeyAgreementAlgorithmsT>(value); }
    template<typename KeyAgreementAlgorithmsT = Aws::Vector<KeyAgreementAlgorithmSpec>>
    GetPublicKeyResult& WithKeyAgreementAlgorithms(KeyAgreementAlgorithmsT&& value) { SetKeyAgreementAlgorithms(std::forward<KeyAgreementAlgorithmsT>(value)); return *this;}
    inline GetPublicKeyResult& AddKeyAgreementAlgorithms(KeyAgreementAlgorithmSpec value) { m_keyAgreementAlgorithmsHasBeenSet = true; m_keyAgreementAlgorithms.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetPublicKeyResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_keyId;
    bool m_keyIdHasBeenSet = false;

    Aws::Utils::ByteBuffer m_publicKey{};
    bool m_publicKeyHasBeenSet = false;

    KeySpec m_keySpec{KeySpec::NOT_SET};
    bool m_keySpecHasBeenSet = false;

    KeyUsageType m_keyUsage{KeyUsageType::NOT_SET};
    bool m_keyUsageHasBeenSet = false;

    Aws::Vector<EncryptionAlgorithmSpec> m_encryptionAlgorithms;
    bool m_encryptionAlgorithmsHasBeenSet = false;

    Aws::Vector<SigningAlgorithmSpec> m_signingAlgorithms;
    bool m_signingAlgorithmsHasBeenSet = false;

    Aws::Vector<KeyAgreementAlgorithmSpec> m_keyAgreementAlgorithms;
    bool m_keyAgreementAlgorithmsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace KMS
} // namespace Aws
