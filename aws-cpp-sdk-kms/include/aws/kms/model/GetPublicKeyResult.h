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


    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#key-id-key-ARN">key
     * ARN</a>) of the asymmetric KMS key from which the public key was downloaded.</p>
     */
    inline const Aws::String& GetKeyId() const{ return m_keyId; }

    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#key-id-key-ARN">key
     * ARN</a>) of the asymmetric KMS key from which the public key was downloaded.</p>
     */
    inline void SetKeyId(const Aws::String& value) { m_keyId = value; }

    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#key-id-key-ARN">key
     * ARN</a>) of the asymmetric KMS key from which the public key was downloaded.</p>
     */
    inline void SetKeyId(Aws::String&& value) { m_keyId = std::move(value); }

    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#key-id-key-ARN">key
     * ARN</a>) of the asymmetric KMS key from which the public key was downloaded.</p>
     */
    inline void SetKeyId(const char* value) { m_keyId.assign(value); }

    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#key-id-key-ARN">key
     * ARN</a>) of the asymmetric KMS key from which the public key was downloaded.</p>
     */
    inline GetPublicKeyResult& WithKeyId(const Aws::String& value) { SetKeyId(value); return *this;}

    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#key-id-key-ARN">key
     * ARN</a>) of the asymmetric KMS key from which the public key was downloaded.</p>
     */
    inline GetPublicKeyResult& WithKeyId(Aws::String&& value) { SetKeyId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#key-id-key-ARN">key
     * ARN</a>) of the asymmetric KMS key from which the public key was downloaded.</p>
     */
    inline GetPublicKeyResult& WithKeyId(const char* value) { SetKeyId(value); return *this;}


    /**
     * <p>The exported public key. </p> <p>The value is a DER-encoded X.509 public key,
     * also known as <code>SubjectPublicKeyInfo</code> (SPKI), as defined in <a
     * href="https://tools.ietf.org/html/rfc5280">RFC 5280</a>. When you use the HTTP
     * API or the Amazon Web Services CLI, the value is Base64-encoded. Otherwise, it
     * is not Base64-encoded.</p> <p/>
     */
    inline const Aws::Utils::ByteBuffer& GetPublicKey() const{ return m_publicKey; }

    /**
     * <p>The exported public key. </p> <p>The value is a DER-encoded X.509 public key,
     * also known as <code>SubjectPublicKeyInfo</code> (SPKI), as defined in <a
     * href="https://tools.ietf.org/html/rfc5280">RFC 5280</a>. When you use the HTTP
     * API or the Amazon Web Services CLI, the value is Base64-encoded. Otherwise, it
     * is not Base64-encoded.</p> <p/>
     */
    inline void SetPublicKey(const Aws::Utils::ByteBuffer& value) { m_publicKey = value; }

    /**
     * <p>The exported public key. </p> <p>The value is a DER-encoded X.509 public key,
     * also known as <code>SubjectPublicKeyInfo</code> (SPKI), as defined in <a
     * href="https://tools.ietf.org/html/rfc5280">RFC 5280</a>. When you use the HTTP
     * API or the Amazon Web Services CLI, the value is Base64-encoded. Otherwise, it
     * is not Base64-encoded.</p> <p/>
     */
    inline void SetPublicKey(Aws::Utils::ByteBuffer&& value) { m_publicKey = std::move(value); }

    /**
     * <p>The exported public key. </p> <p>The value is a DER-encoded X.509 public key,
     * also known as <code>SubjectPublicKeyInfo</code> (SPKI), as defined in <a
     * href="https://tools.ietf.org/html/rfc5280">RFC 5280</a>. When you use the HTTP
     * API or the Amazon Web Services CLI, the value is Base64-encoded. Otherwise, it
     * is not Base64-encoded.</p> <p/>
     */
    inline GetPublicKeyResult& WithPublicKey(const Aws::Utils::ByteBuffer& value) { SetPublicKey(value); return *this;}

    /**
     * <p>The exported public key. </p> <p>The value is a DER-encoded X.509 public key,
     * also known as <code>SubjectPublicKeyInfo</code> (SPKI), as defined in <a
     * href="https://tools.ietf.org/html/rfc5280">RFC 5280</a>. When you use the HTTP
     * API or the Amazon Web Services CLI, the value is Base64-encoded. Otherwise, it
     * is not Base64-encoded.</p> <p/>
     */
    inline GetPublicKeyResult& WithPublicKey(Aws::Utils::ByteBuffer&& value) { SetPublicKey(std::move(value)); return *this;}


    /**
     * <p>The type of the of the public key that was downloaded.</p>
     */
    inline const KeySpec& GetKeySpec() const{ return m_keySpec; }

    /**
     * <p>The type of the of the public key that was downloaded.</p>
     */
    inline void SetKeySpec(const KeySpec& value) { m_keySpec = value; }

    /**
     * <p>The type of the of the public key that was downloaded.</p>
     */
    inline void SetKeySpec(KeySpec&& value) { m_keySpec = std::move(value); }

    /**
     * <p>The type of the of the public key that was downloaded.</p>
     */
    inline GetPublicKeyResult& WithKeySpec(const KeySpec& value) { SetKeySpec(value); return *this;}

    /**
     * <p>The type of the of the public key that was downloaded.</p>
     */
    inline GetPublicKeyResult& WithKeySpec(KeySpec&& value) { SetKeySpec(std::move(value)); return *this;}


    /**
     * <p>The permitted use of the public key. Valid values are
     * <code>ENCRYPT_DECRYPT</code> or <code>SIGN_VERIFY</code>. </p> <p>This
     * information is critical. If a public key with <code>SIGN_VERIFY</code> key usage
     * encrypts data outside of KMS, the ciphertext cannot be decrypted. </p>
     */
    inline const KeyUsageType& GetKeyUsage() const{ return m_keyUsage; }

    /**
     * <p>The permitted use of the public key. Valid values are
     * <code>ENCRYPT_DECRYPT</code> or <code>SIGN_VERIFY</code>. </p> <p>This
     * information is critical. If a public key with <code>SIGN_VERIFY</code> key usage
     * encrypts data outside of KMS, the ciphertext cannot be decrypted. </p>
     */
    inline void SetKeyUsage(const KeyUsageType& value) { m_keyUsage = value; }

    /**
     * <p>The permitted use of the public key. Valid values are
     * <code>ENCRYPT_DECRYPT</code> or <code>SIGN_VERIFY</code>. </p> <p>This
     * information is critical. If a public key with <code>SIGN_VERIFY</code> key usage
     * encrypts data outside of KMS, the ciphertext cannot be decrypted. </p>
     */
    inline void SetKeyUsage(KeyUsageType&& value) { m_keyUsage = std::move(value); }

    /**
     * <p>The permitted use of the public key. Valid values are
     * <code>ENCRYPT_DECRYPT</code> or <code>SIGN_VERIFY</code>. </p> <p>This
     * information is critical. If a public key with <code>SIGN_VERIFY</code> key usage
     * encrypts data outside of KMS, the ciphertext cannot be decrypted. </p>
     */
    inline GetPublicKeyResult& WithKeyUsage(const KeyUsageType& value) { SetKeyUsage(value); return *this;}

    /**
     * <p>The permitted use of the public key. Valid values are
     * <code>ENCRYPT_DECRYPT</code> or <code>SIGN_VERIFY</code>. </p> <p>This
     * information is critical. If a public key with <code>SIGN_VERIFY</code> key usage
     * encrypts data outside of KMS, the ciphertext cannot be decrypted. </p>
     */
    inline GetPublicKeyResult& WithKeyUsage(KeyUsageType&& value) { SetKeyUsage(std::move(value)); return *this;}


    /**
     * <p>The encryption algorithms that KMS supports for this key. </p> <p>This
     * information is critical. If a public key encrypts data outside of KMS by using
     * an unsupported encryption algorithm, the ciphertext cannot be decrypted. </p>
     * <p>This field appears in the response only when the <code>KeyUsage</code> of the
     * public key is <code>ENCRYPT_DECRYPT</code>.</p>
     */
    inline const Aws::Vector<EncryptionAlgorithmSpec>& GetEncryptionAlgorithms() const{ return m_encryptionAlgorithms; }

    /**
     * <p>The encryption algorithms that KMS supports for this key. </p> <p>This
     * information is critical. If a public key encrypts data outside of KMS by using
     * an unsupported encryption algorithm, the ciphertext cannot be decrypted. </p>
     * <p>This field appears in the response only when the <code>KeyUsage</code> of the
     * public key is <code>ENCRYPT_DECRYPT</code>.</p>
     */
    inline void SetEncryptionAlgorithms(const Aws::Vector<EncryptionAlgorithmSpec>& value) { m_encryptionAlgorithms = value; }

    /**
     * <p>The encryption algorithms that KMS supports for this key. </p> <p>This
     * information is critical. If a public key encrypts data outside of KMS by using
     * an unsupported encryption algorithm, the ciphertext cannot be decrypted. </p>
     * <p>This field appears in the response only when the <code>KeyUsage</code> of the
     * public key is <code>ENCRYPT_DECRYPT</code>.</p>
     */
    inline void SetEncryptionAlgorithms(Aws::Vector<EncryptionAlgorithmSpec>&& value) { m_encryptionAlgorithms = std::move(value); }

    /**
     * <p>The encryption algorithms that KMS supports for this key. </p> <p>This
     * information is critical. If a public key encrypts data outside of KMS by using
     * an unsupported encryption algorithm, the ciphertext cannot be decrypted. </p>
     * <p>This field appears in the response only when the <code>KeyUsage</code> of the
     * public key is <code>ENCRYPT_DECRYPT</code>.</p>
     */
    inline GetPublicKeyResult& WithEncryptionAlgorithms(const Aws::Vector<EncryptionAlgorithmSpec>& value) { SetEncryptionAlgorithms(value); return *this;}

    /**
     * <p>The encryption algorithms that KMS supports for this key. </p> <p>This
     * information is critical. If a public key encrypts data outside of KMS by using
     * an unsupported encryption algorithm, the ciphertext cannot be decrypted. </p>
     * <p>This field appears in the response only when the <code>KeyUsage</code> of the
     * public key is <code>ENCRYPT_DECRYPT</code>.</p>
     */
    inline GetPublicKeyResult& WithEncryptionAlgorithms(Aws::Vector<EncryptionAlgorithmSpec>&& value) { SetEncryptionAlgorithms(std::move(value)); return *this;}

    /**
     * <p>The encryption algorithms that KMS supports for this key. </p> <p>This
     * information is critical. If a public key encrypts data outside of KMS by using
     * an unsupported encryption algorithm, the ciphertext cannot be decrypted. </p>
     * <p>This field appears in the response only when the <code>KeyUsage</code> of the
     * public key is <code>ENCRYPT_DECRYPT</code>.</p>
     */
    inline GetPublicKeyResult& AddEncryptionAlgorithms(const EncryptionAlgorithmSpec& value) { m_encryptionAlgorithms.push_back(value); return *this; }

    /**
     * <p>The encryption algorithms that KMS supports for this key. </p> <p>This
     * information is critical. If a public key encrypts data outside of KMS by using
     * an unsupported encryption algorithm, the ciphertext cannot be decrypted. </p>
     * <p>This field appears in the response only when the <code>KeyUsage</code> of the
     * public key is <code>ENCRYPT_DECRYPT</code>.</p>
     */
    inline GetPublicKeyResult& AddEncryptionAlgorithms(EncryptionAlgorithmSpec&& value) { m_encryptionAlgorithms.push_back(std::move(value)); return *this; }


    /**
     * <p>The signing algorithms that KMS supports for this key.</p> <p>This field
     * appears in the response only when the <code>KeyUsage</code> of the public key is
     * <code>SIGN_VERIFY</code>.</p>
     */
    inline const Aws::Vector<SigningAlgorithmSpec>& GetSigningAlgorithms() const{ return m_signingAlgorithms; }

    /**
     * <p>The signing algorithms that KMS supports for this key.</p> <p>This field
     * appears in the response only when the <code>KeyUsage</code> of the public key is
     * <code>SIGN_VERIFY</code>.</p>
     */
    inline void SetSigningAlgorithms(const Aws::Vector<SigningAlgorithmSpec>& value) { m_signingAlgorithms = value; }

    /**
     * <p>The signing algorithms that KMS supports for this key.</p> <p>This field
     * appears in the response only when the <code>KeyUsage</code> of the public key is
     * <code>SIGN_VERIFY</code>.</p>
     */
    inline void SetSigningAlgorithms(Aws::Vector<SigningAlgorithmSpec>&& value) { m_signingAlgorithms = std::move(value); }

    /**
     * <p>The signing algorithms that KMS supports for this key.</p> <p>This field
     * appears in the response only when the <code>KeyUsage</code> of the public key is
     * <code>SIGN_VERIFY</code>.</p>
     */
    inline GetPublicKeyResult& WithSigningAlgorithms(const Aws::Vector<SigningAlgorithmSpec>& value) { SetSigningAlgorithms(value); return *this;}

    /**
     * <p>The signing algorithms that KMS supports for this key.</p> <p>This field
     * appears in the response only when the <code>KeyUsage</code> of the public key is
     * <code>SIGN_VERIFY</code>.</p>
     */
    inline GetPublicKeyResult& WithSigningAlgorithms(Aws::Vector<SigningAlgorithmSpec>&& value) { SetSigningAlgorithms(std::move(value)); return *this;}

    /**
     * <p>The signing algorithms that KMS supports for this key.</p> <p>This field
     * appears in the response only when the <code>KeyUsage</code> of the public key is
     * <code>SIGN_VERIFY</code>.</p>
     */
    inline GetPublicKeyResult& AddSigningAlgorithms(const SigningAlgorithmSpec& value) { m_signingAlgorithms.push_back(value); return *this; }

    /**
     * <p>The signing algorithms that KMS supports for this key.</p> <p>This field
     * appears in the response only when the <code>KeyUsage</code> of the public key is
     * <code>SIGN_VERIFY</code>.</p>
     */
    inline GetPublicKeyResult& AddSigningAlgorithms(SigningAlgorithmSpec&& value) { m_signingAlgorithms.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_keyId;

    Aws::Utils::ByteBuffer m_publicKey;

    KeySpec m_keySpec;

    KeyUsageType m_keyUsage;

    Aws::Vector<EncryptionAlgorithmSpec> m_encryptionAlgorithms;

    Aws::Vector<SigningAlgorithmSpec> m_signingAlgorithms;
  };

} // namespace Model
} // namespace KMS
} // namespace Aws
