/**
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


    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#key-id-key-ARN">key
     * ARN</a>) of the KMS key that was used to decrypt the ciphertext.</p>
     */
    inline const Aws::String& GetKeyId() const{ return m_keyId; }

    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#key-id-key-ARN">key
     * ARN</a>) of the KMS key that was used to decrypt the ciphertext.</p>
     */
    inline void SetKeyId(const Aws::String& value) { m_keyId = value; }

    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#key-id-key-ARN">key
     * ARN</a>) of the KMS key that was used to decrypt the ciphertext.</p>
     */
    inline void SetKeyId(Aws::String&& value) { m_keyId = std::move(value); }

    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#key-id-key-ARN">key
     * ARN</a>) of the KMS key that was used to decrypt the ciphertext.</p>
     */
    inline void SetKeyId(const char* value) { m_keyId.assign(value); }

    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#key-id-key-ARN">key
     * ARN</a>) of the KMS key that was used to decrypt the ciphertext.</p>
     */
    inline DecryptResult& WithKeyId(const Aws::String& value) { SetKeyId(value); return *this;}

    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#key-id-key-ARN">key
     * ARN</a>) of the KMS key that was used to decrypt the ciphertext.</p>
     */
    inline DecryptResult& WithKeyId(Aws::String&& value) { SetKeyId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#key-id-key-ARN">key
     * ARN</a>) of the KMS key that was used to decrypt the ciphertext.</p>
     */
    inline DecryptResult& WithKeyId(const char* value) { SetKeyId(value); return *this;}


    /**
     * <p>Decrypted plaintext data. When you use the HTTP API or the Amazon Web
     * Services CLI, the value is Base64-encoded. Otherwise, it is not
     * Base64-encoded.</p>
     */
    inline const Aws::Utils::CryptoBuffer& GetPlaintext() const{ return m_plaintext; }

    /**
     * <p>Decrypted plaintext data. When you use the HTTP API or the Amazon Web
     * Services CLI, the value is Base64-encoded. Otherwise, it is not
     * Base64-encoded.</p>
     */
    inline void SetPlaintext(const Aws::Utils::CryptoBuffer& value) { m_plaintext = value; }

    /**
     * <p>Decrypted plaintext data. When you use the HTTP API or the Amazon Web
     * Services CLI, the value is Base64-encoded. Otherwise, it is not
     * Base64-encoded.</p>
     */
    inline void SetPlaintext(Aws::Utils::CryptoBuffer&& value) { m_plaintext = std::move(value); }

    /**
     * <p>Decrypted plaintext data. When you use the HTTP API or the Amazon Web
     * Services CLI, the value is Base64-encoded. Otherwise, it is not
     * Base64-encoded.</p>
     */
    inline DecryptResult& WithPlaintext(const Aws::Utils::CryptoBuffer& value) { SetPlaintext(value); return *this;}

    /**
     * <p>Decrypted plaintext data. When you use the HTTP API or the Amazon Web
     * Services CLI, the value is Base64-encoded. Otherwise, it is not
     * Base64-encoded.</p>
     */
    inline DecryptResult& WithPlaintext(Aws::Utils::CryptoBuffer&& value) { SetPlaintext(std::move(value)); return *this;}


    /**
     * <p>The encryption algorithm that was used to decrypt the ciphertext.</p>
     */
    inline const EncryptionAlgorithmSpec& GetEncryptionAlgorithm() const{ return m_encryptionAlgorithm; }

    /**
     * <p>The encryption algorithm that was used to decrypt the ciphertext.</p>
     */
    inline void SetEncryptionAlgorithm(const EncryptionAlgorithmSpec& value) { m_encryptionAlgorithm = value; }

    /**
     * <p>The encryption algorithm that was used to decrypt the ciphertext.</p>
     */
    inline void SetEncryptionAlgorithm(EncryptionAlgorithmSpec&& value) { m_encryptionAlgorithm = std::move(value); }

    /**
     * <p>The encryption algorithm that was used to decrypt the ciphertext.</p>
     */
    inline DecryptResult& WithEncryptionAlgorithm(const EncryptionAlgorithmSpec& value) { SetEncryptionAlgorithm(value); return *this;}

    /**
     * <p>The encryption algorithm that was used to decrypt the ciphertext.</p>
     */
    inline DecryptResult& WithEncryptionAlgorithm(EncryptionAlgorithmSpec&& value) { SetEncryptionAlgorithm(std::move(value)); return *this;}

  private:

    Aws::String m_keyId;

    Aws::Utils::CryptoBuffer m_plaintext;

    EncryptionAlgorithmSpec m_encryptionAlgorithm;
  };

} // namespace Model
} // namespace KMS
} // namespace Aws
