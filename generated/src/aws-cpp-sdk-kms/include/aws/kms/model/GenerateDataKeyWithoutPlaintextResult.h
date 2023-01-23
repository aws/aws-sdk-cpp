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
  class GenerateDataKeyWithoutPlaintextResult
  {
  public:
    AWS_KMS_API GenerateDataKeyWithoutPlaintextResult();
    AWS_KMS_API GenerateDataKeyWithoutPlaintextResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KMS_API GenerateDataKeyWithoutPlaintextResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The encrypted data key. When you use the HTTP API or the Amazon Web Services
     * CLI, the value is Base64-encoded. Otherwise, it is not Base64-encoded.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetCiphertextBlob() const{ return m_ciphertextBlob; }

    /**
     * <p>The encrypted data key. When you use the HTTP API or the Amazon Web Services
     * CLI, the value is Base64-encoded. Otherwise, it is not Base64-encoded.</p>
     */
    inline void SetCiphertextBlob(const Aws::Utils::ByteBuffer& value) { m_ciphertextBlob = value; }

    /**
     * <p>The encrypted data key. When you use the HTTP API or the Amazon Web Services
     * CLI, the value is Base64-encoded. Otherwise, it is not Base64-encoded.</p>
     */
    inline void SetCiphertextBlob(Aws::Utils::ByteBuffer&& value) { m_ciphertextBlob = std::move(value); }

    /**
     * <p>The encrypted data key. When you use the HTTP API or the Amazon Web Services
     * CLI, the value is Base64-encoded. Otherwise, it is not Base64-encoded.</p>
     */
    inline GenerateDataKeyWithoutPlaintextResult& WithCiphertextBlob(const Aws::Utils::ByteBuffer& value) { SetCiphertextBlob(value); return *this;}

    /**
     * <p>The encrypted data key. When you use the HTTP API or the Amazon Web Services
     * CLI, the value is Base64-encoded. Otherwise, it is not Base64-encoded.</p>
     */
    inline GenerateDataKeyWithoutPlaintextResult& WithCiphertextBlob(Aws::Utils::ByteBuffer&& value) { SetCiphertextBlob(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#key-id-key-ARN">key
     * ARN</a>) of the KMS key that encrypted the data key.</p>
     */
    inline const Aws::String& GetKeyId() const{ return m_keyId; }

    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#key-id-key-ARN">key
     * ARN</a>) of the KMS key that encrypted the data key.</p>
     */
    inline void SetKeyId(const Aws::String& value) { m_keyId = value; }

    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#key-id-key-ARN">key
     * ARN</a>) of the KMS key that encrypted the data key.</p>
     */
    inline void SetKeyId(Aws::String&& value) { m_keyId = std::move(value); }

    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#key-id-key-ARN">key
     * ARN</a>) of the KMS key that encrypted the data key.</p>
     */
    inline void SetKeyId(const char* value) { m_keyId.assign(value); }

    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#key-id-key-ARN">key
     * ARN</a>) of the KMS key that encrypted the data key.</p>
     */
    inline GenerateDataKeyWithoutPlaintextResult& WithKeyId(const Aws::String& value) { SetKeyId(value); return *this;}

    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#key-id-key-ARN">key
     * ARN</a>) of the KMS key that encrypted the data key.</p>
     */
    inline GenerateDataKeyWithoutPlaintextResult& WithKeyId(Aws::String&& value) { SetKeyId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#key-id-key-ARN">key
     * ARN</a>) of the KMS key that encrypted the data key.</p>
     */
    inline GenerateDataKeyWithoutPlaintextResult& WithKeyId(const char* value) { SetKeyId(value); return *this;}

  private:

    Aws::Utils::ByteBuffer m_ciphertextBlob;

    Aws::String m_keyId;
  };

} // namespace Model
} // namespace KMS
} // namespace Aws
