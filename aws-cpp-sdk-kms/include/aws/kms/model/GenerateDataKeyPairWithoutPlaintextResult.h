/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kms/KMS_EXPORTS.h>
#include <aws/core/utils/Array.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kms/model/DataKeyPairSpec.h>
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
  class GenerateDataKeyPairWithoutPlaintextResult
  {
  public:
    AWS_KMS_API GenerateDataKeyPairWithoutPlaintextResult();
    AWS_KMS_API GenerateDataKeyPairWithoutPlaintextResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KMS_API GenerateDataKeyPairWithoutPlaintextResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The encrypted copy of the private key. When you use the HTTP API or the
     * Amazon Web Services CLI, the value is Base64-encoded. Otherwise, it is not
     * Base64-encoded.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetPrivateKeyCiphertextBlob() const{ return m_privateKeyCiphertextBlob; }

    /**
     * <p>The encrypted copy of the private key. When you use the HTTP API or the
     * Amazon Web Services CLI, the value is Base64-encoded. Otherwise, it is not
     * Base64-encoded.</p>
     */
    inline void SetPrivateKeyCiphertextBlob(const Aws::Utils::ByteBuffer& value) { m_privateKeyCiphertextBlob = value; }

    /**
     * <p>The encrypted copy of the private key. When you use the HTTP API or the
     * Amazon Web Services CLI, the value is Base64-encoded. Otherwise, it is not
     * Base64-encoded.</p>
     */
    inline void SetPrivateKeyCiphertextBlob(Aws::Utils::ByteBuffer&& value) { m_privateKeyCiphertextBlob = std::move(value); }

    /**
     * <p>The encrypted copy of the private key. When you use the HTTP API or the
     * Amazon Web Services CLI, the value is Base64-encoded. Otherwise, it is not
     * Base64-encoded.</p>
     */
    inline GenerateDataKeyPairWithoutPlaintextResult& WithPrivateKeyCiphertextBlob(const Aws::Utils::ByteBuffer& value) { SetPrivateKeyCiphertextBlob(value); return *this;}

    /**
     * <p>The encrypted copy of the private key. When you use the HTTP API or the
     * Amazon Web Services CLI, the value is Base64-encoded. Otherwise, it is not
     * Base64-encoded.</p>
     */
    inline GenerateDataKeyPairWithoutPlaintextResult& WithPrivateKeyCiphertextBlob(Aws::Utils::ByteBuffer&& value) { SetPrivateKeyCiphertextBlob(std::move(value)); return *this;}


    /**
     * <p>The public key (in plaintext). When you use the HTTP API or the Amazon Web
     * Services CLI, the value is Base64-encoded. Otherwise, it is not
     * Base64-encoded.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetPublicKey() const{ return m_publicKey; }

    /**
     * <p>The public key (in plaintext). When you use the HTTP API or the Amazon Web
     * Services CLI, the value is Base64-encoded. Otherwise, it is not
     * Base64-encoded.</p>
     */
    inline void SetPublicKey(const Aws::Utils::ByteBuffer& value) { m_publicKey = value; }

    /**
     * <p>The public key (in plaintext). When you use the HTTP API or the Amazon Web
     * Services CLI, the value is Base64-encoded. Otherwise, it is not
     * Base64-encoded.</p>
     */
    inline void SetPublicKey(Aws::Utils::ByteBuffer&& value) { m_publicKey = std::move(value); }

    /**
     * <p>The public key (in plaintext). When you use the HTTP API or the Amazon Web
     * Services CLI, the value is Base64-encoded. Otherwise, it is not
     * Base64-encoded.</p>
     */
    inline GenerateDataKeyPairWithoutPlaintextResult& WithPublicKey(const Aws::Utils::ByteBuffer& value) { SetPublicKey(value); return *this;}

    /**
     * <p>The public key (in plaintext). When you use the HTTP API or the Amazon Web
     * Services CLI, the value is Base64-encoded. Otherwise, it is not
     * Base64-encoded.</p>
     */
    inline GenerateDataKeyPairWithoutPlaintextResult& WithPublicKey(Aws::Utils::ByteBuffer&& value) { SetPublicKey(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#key-id-key-ARN">key
     * ARN</a>) of the KMS key that encrypted the private key.</p>
     */
    inline const Aws::String& GetKeyId() const{ return m_keyId; }

    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#key-id-key-ARN">key
     * ARN</a>) of the KMS key that encrypted the private key.</p>
     */
    inline void SetKeyId(const Aws::String& value) { m_keyId = value; }

    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#key-id-key-ARN">key
     * ARN</a>) of the KMS key that encrypted the private key.</p>
     */
    inline void SetKeyId(Aws::String&& value) { m_keyId = std::move(value); }

    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#key-id-key-ARN">key
     * ARN</a>) of the KMS key that encrypted the private key.</p>
     */
    inline void SetKeyId(const char* value) { m_keyId.assign(value); }

    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#key-id-key-ARN">key
     * ARN</a>) of the KMS key that encrypted the private key.</p>
     */
    inline GenerateDataKeyPairWithoutPlaintextResult& WithKeyId(const Aws::String& value) { SetKeyId(value); return *this;}

    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#key-id-key-ARN">key
     * ARN</a>) of the KMS key that encrypted the private key.</p>
     */
    inline GenerateDataKeyPairWithoutPlaintextResult& WithKeyId(Aws::String&& value) { SetKeyId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#key-id-key-ARN">key
     * ARN</a>) of the KMS key that encrypted the private key.</p>
     */
    inline GenerateDataKeyPairWithoutPlaintextResult& WithKeyId(const char* value) { SetKeyId(value); return *this;}


    /**
     * <p>The type of data key pair that was generated.</p>
     */
    inline const DataKeyPairSpec& GetKeyPairSpec() const{ return m_keyPairSpec; }

    /**
     * <p>The type of data key pair that was generated.</p>
     */
    inline void SetKeyPairSpec(const DataKeyPairSpec& value) { m_keyPairSpec = value; }

    /**
     * <p>The type of data key pair that was generated.</p>
     */
    inline void SetKeyPairSpec(DataKeyPairSpec&& value) { m_keyPairSpec = std::move(value); }

    /**
     * <p>The type of data key pair that was generated.</p>
     */
    inline GenerateDataKeyPairWithoutPlaintextResult& WithKeyPairSpec(const DataKeyPairSpec& value) { SetKeyPairSpec(value); return *this;}

    /**
     * <p>The type of data key pair that was generated.</p>
     */
    inline GenerateDataKeyPairWithoutPlaintextResult& WithKeyPairSpec(DataKeyPairSpec&& value) { SetKeyPairSpec(std::move(value)); return *this;}

  private:

    Aws::Utils::ByteBuffer m_privateKeyCiphertextBlob;

    Aws::Utils::ByteBuffer m_publicKey;

    Aws::String m_keyId;

    DataKeyPairSpec m_keyPairSpec;
  };

} // namespace Model
} // namespace KMS
} // namespace Aws
