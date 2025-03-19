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
    AWS_KMS_API ReEncryptResult() = default;
    AWS_KMS_API ReEncryptResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KMS_API ReEncryptResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The reencrypted data. When you use the HTTP API or the Amazon Web Services
     * CLI, the value is Base64-encoded. Otherwise, it is not Base64-encoded.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetCiphertextBlob() const { return m_ciphertextBlob; }
    template<typename CiphertextBlobT = Aws::Utils::ByteBuffer>
    void SetCiphertextBlob(CiphertextBlobT&& value) { m_ciphertextBlobHasBeenSet = true; m_ciphertextBlob = std::forward<CiphertextBlobT>(value); }
    template<typename CiphertextBlobT = Aws::Utils::ByteBuffer>
    ReEncryptResult& WithCiphertextBlob(CiphertextBlobT&& value) { SetCiphertextBlob(std::forward<CiphertextBlobT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Unique identifier of the KMS key used to originally encrypt the data.</p>
     */
    inline const Aws::String& GetSourceKeyId() const { return m_sourceKeyId; }
    template<typename SourceKeyIdT = Aws::String>
    void SetSourceKeyId(SourceKeyIdT&& value) { m_sourceKeyIdHasBeenSet = true; m_sourceKeyId = std::forward<SourceKeyIdT>(value); }
    template<typename SourceKeyIdT = Aws::String>
    ReEncryptResult& WithSourceKeyId(SourceKeyIdT&& value) { SetSourceKeyId(std::forward<SourceKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#key-id-key-ARN">key
     * ARN</a>) of the KMS key that was used to reencrypt the data.</p>
     */
    inline const Aws::String& GetKeyId() const { return m_keyId; }
    template<typename KeyIdT = Aws::String>
    void SetKeyId(KeyIdT&& value) { m_keyIdHasBeenSet = true; m_keyId = std::forward<KeyIdT>(value); }
    template<typename KeyIdT = Aws::String>
    ReEncryptResult& WithKeyId(KeyIdT&& value) { SetKeyId(std::forward<KeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The encryption algorithm that was used to decrypt the ciphertext before it
     * was reencrypted.</p>
     */
    inline EncryptionAlgorithmSpec GetSourceEncryptionAlgorithm() const { return m_sourceEncryptionAlgorithm; }
    inline void SetSourceEncryptionAlgorithm(EncryptionAlgorithmSpec value) { m_sourceEncryptionAlgorithmHasBeenSet = true; m_sourceEncryptionAlgorithm = value; }
    inline ReEncryptResult& WithSourceEncryptionAlgorithm(EncryptionAlgorithmSpec value) { SetSourceEncryptionAlgorithm(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The encryption algorithm that was used to reencrypt the data.</p>
     */
    inline EncryptionAlgorithmSpec GetDestinationEncryptionAlgorithm() const { return m_destinationEncryptionAlgorithm; }
    inline void SetDestinationEncryptionAlgorithm(EncryptionAlgorithmSpec value) { m_destinationEncryptionAlgorithmHasBeenSet = true; m_destinationEncryptionAlgorithm = value; }
    inline ReEncryptResult& WithDestinationEncryptionAlgorithm(EncryptionAlgorithmSpec value) { SetDestinationEncryptionAlgorithm(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ReEncryptResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::ByteBuffer m_ciphertextBlob{};
    bool m_ciphertextBlobHasBeenSet = false;

    Aws::String m_sourceKeyId;
    bool m_sourceKeyIdHasBeenSet = false;

    Aws::String m_keyId;
    bool m_keyIdHasBeenSet = false;

    EncryptionAlgorithmSpec m_sourceEncryptionAlgorithm{EncryptionAlgorithmSpec::NOT_SET};
    bool m_sourceEncryptionAlgorithmHasBeenSet = false;

    EncryptionAlgorithmSpec m_destinationEncryptionAlgorithm{EncryptionAlgorithmSpec::NOT_SET};
    bool m_destinationEncryptionAlgorithmHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace KMS
} // namespace Aws
