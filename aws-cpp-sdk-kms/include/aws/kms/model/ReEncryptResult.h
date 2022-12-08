/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kms/KMS_EXPORTS.h>
#include <aws/core/utils/Array.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class ReEncryptResult
  {
  public:
    AWS_KMS_API ReEncryptResult();
    AWS_KMS_API ReEncryptResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KMS_API ReEncryptResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The reencrypted data. When you use the HTTP API or the Amazon Web Services
     * CLI, the value is Base64-encoded. Otherwise, it is not Base64-encoded.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetCiphertextBlob() const{ return m_ciphertextBlob; }

    /**
     * <p>The reencrypted data. When you use the HTTP API or the Amazon Web Services
     * CLI, the value is Base64-encoded. Otherwise, it is not Base64-encoded.</p>
     */
    inline void SetCiphertextBlob(const Aws::Utils::ByteBuffer& value) { m_ciphertextBlob = value; }

    /**
     * <p>The reencrypted data. When you use the HTTP API or the Amazon Web Services
     * CLI, the value is Base64-encoded. Otherwise, it is not Base64-encoded.</p>
     */
    inline void SetCiphertextBlob(Aws::Utils::ByteBuffer&& value) { m_ciphertextBlob = std::move(value); }

    /**
     * <p>The reencrypted data. When you use the HTTP API or the Amazon Web Services
     * CLI, the value is Base64-encoded. Otherwise, it is not Base64-encoded.</p>
     */
    inline ReEncryptResult& WithCiphertextBlob(const Aws::Utils::ByteBuffer& value) { SetCiphertextBlob(value); return *this;}

    /**
     * <p>The reencrypted data. When you use the HTTP API or the Amazon Web Services
     * CLI, the value is Base64-encoded. Otherwise, it is not Base64-encoded.</p>
     */
    inline ReEncryptResult& WithCiphertextBlob(Aws::Utils::ByteBuffer&& value) { SetCiphertextBlob(std::move(value)); return *this;}


    /**
     * <p>Unique identifier of the KMS key used to originally encrypt the data.</p>
     */
    inline const Aws::String& GetSourceKeyId() const{ return m_sourceKeyId; }

    /**
     * <p>Unique identifier of the KMS key used to originally encrypt the data.</p>
     */
    inline void SetSourceKeyId(const Aws::String& value) { m_sourceKeyId = value; }

    /**
     * <p>Unique identifier of the KMS key used to originally encrypt the data.</p>
     */
    inline void SetSourceKeyId(Aws::String&& value) { m_sourceKeyId = std::move(value); }

    /**
     * <p>Unique identifier of the KMS key used to originally encrypt the data.</p>
     */
    inline void SetSourceKeyId(const char* value) { m_sourceKeyId.assign(value); }

    /**
     * <p>Unique identifier of the KMS key used to originally encrypt the data.</p>
     */
    inline ReEncryptResult& WithSourceKeyId(const Aws::String& value) { SetSourceKeyId(value); return *this;}

    /**
     * <p>Unique identifier of the KMS key used to originally encrypt the data.</p>
     */
    inline ReEncryptResult& WithSourceKeyId(Aws::String&& value) { SetSourceKeyId(std::move(value)); return *this;}

    /**
     * <p>Unique identifier of the KMS key used to originally encrypt the data.</p>
     */
    inline ReEncryptResult& WithSourceKeyId(const char* value) { SetSourceKeyId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#key-id-key-ARN">key
     * ARN</a>) of the KMS key that was used to reencrypt the data.</p>
     */
    inline const Aws::String& GetKeyId() const{ return m_keyId; }

    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#key-id-key-ARN">key
     * ARN</a>) of the KMS key that was used to reencrypt the data.</p>
     */
    inline void SetKeyId(const Aws::String& value) { m_keyId = value; }

    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#key-id-key-ARN">key
     * ARN</a>) of the KMS key that was used to reencrypt the data.</p>
     */
    inline void SetKeyId(Aws::String&& value) { m_keyId = std::move(value); }

    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#key-id-key-ARN">key
     * ARN</a>) of the KMS key that was used to reencrypt the data.</p>
     */
    inline void SetKeyId(const char* value) { m_keyId.assign(value); }

    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#key-id-key-ARN">key
     * ARN</a>) of the KMS key that was used to reencrypt the data.</p>
     */
    inline ReEncryptResult& WithKeyId(const Aws::String& value) { SetKeyId(value); return *this;}

    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#key-id-key-ARN">key
     * ARN</a>) of the KMS key that was used to reencrypt the data.</p>
     */
    inline ReEncryptResult& WithKeyId(Aws::String&& value) { SetKeyId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#key-id-key-ARN">key
     * ARN</a>) of the KMS key that was used to reencrypt the data.</p>
     */
    inline ReEncryptResult& WithKeyId(const char* value) { SetKeyId(value); return *this;}


    /**
     * <p>The encryption algorithm that was used to decrypt the ciphertext before it
     * was reencrypted.</p>
     */
    inline const EncryptionAlgorithmSpec& GetSourceEncryptionAlgorithm() const{ return m_sourceEncryptionAlgorithm; }

    /**
     * <p>The encryption algorithm that was used to decrypt the ciphertext before it
     * was reencrypted.</p>
     */
    inline void SetSourceEncryptionAlgorithm(const EncryptionAlgorithmSpec& value) { m_sourceEncryptionAlgorithm = value; }

    /**
     * <p>The encryption algorithm that was used to decrypt the ciphertext before it
     * was reencrypted.</p>
     */
    inline void SetSourceEncryptionAlgorithm(EncryptionAlgorithmSpec&& value) { m_sourceEncryptionAlgorithm = std::move(value); }

    /**
     * <p>The encryption algorithm that was used to decrypt the ciphertext before it
     * was reencrypted.</p>
     */
    inline ReEncryptResult& WithSourceEncryptionAlgorithm(const EncryptionAlgorithmSpec& value) { SetSourceEncryptionAlgorithm(value); return *this;}

    /**
     * <p>The encryption algorithm that was used to decrypt the ciphertext before it
     * was reencrypted.</p>
     */
    inline ReEncryptResult& WithSourceEncryptionAlgorithm(EncryptionAlgorithmSpec&& value) { SetSourceEncryptionAlgorithm(std::move(value)); return *this;}


    /**
     * <p>The encryption algorithm that was used to reencrypt the data.</p>
     */
    inline const EncryptionAlgorithmSpec& GetDestinationEncryptionAlgorithm() const{ return m_destinationEncryptionAlgorithm; }

    /**
     * <p>The encryption algorithm that was used to reencrypt the data.</p>
     */
    inline void SetDestinationEncryptionAlgorithm(const EncryptionAlgorithmSpec& value) { m_destinationEncryptionAlgorithm = value; }

    /**
     * <p>The encryption algorithm that was used to reencrypt the data.</p>
     */
    inline void SetDestinationEncryptionAlgorithm(EncryptionAlgorithmSpec&& value) { m_destinationEncryptionAlgorithm = std::move(value); }

    /**
     * <p>The encryption algorithm that was used to reencrypt the data.</p>
     */
    inline ReEncryptResult& WithDestinationEncryptionAlgorithm(const EncryptionAlgorithmSpec& value) { SetDestinationEncryptionAlgorithm(value); return *this;}

    /**
     * <p>The encryption algorithm that was used to reencrypt the data.</p>
     */
    inline ReEncryptResult& WithDestinationEncryptionAlgorithm(EncryptionAlgorithmSpec&& value) { SetDestinationEncryptionAlgorithm(std::move(value)); return *this;}

  private:

    Aws::Utils::ByteBuffer m_ciphertextBlob;

    Aws::String m_sourceKeyId;

    Aws::String m_keyId;

    EncryptionAlgorithmSpec m_sourceEncryptionAlgorithm;

    EncryptionAlgorithmSpec m_destinationEncryptionAlgorithm;
  };

} // namespace Model
} // namespace KMS
} // namespace Aws
