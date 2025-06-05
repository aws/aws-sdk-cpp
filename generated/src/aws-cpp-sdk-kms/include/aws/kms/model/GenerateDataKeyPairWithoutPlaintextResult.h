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
    AWS_KMS_API GenerateDataKeyPairWithoutPlaintextResult() = default;
    AWS_KMS_API GenerateDataKeyPairWithoutPlaintextResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KMS_API GenerateDataKeyPairWithoutPlaintextResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The encrypted copy of the private key. When you use the HTTP API or the
     * Amazon Web Services CLI, the value is Base64-encoded. Otherwise, it is not
     * Base64-encoded.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetPrivateKeyCiphertextBlob() const { return m_privateKeyCiphertextBlob; }
    template<typename PrivateKeyCiphertextBlobT = Aws::Utils::ByteBuffer>
    void SetPrivateKeyCiphertextBlob(PrivateKeyCiphertextBlobT&& value) { m_privateKeyCiphertextBlobHasBeenSet = true; m_privateKeyCiphertextBlob = std::forward<PrivateKeyCiphertextBlobT>(value); }
    template<typename PrivateKeyCiphertextBlobT = Aws::Utils::ByteBuffer>
    GenerateDataKeyPairWithoutPlaintextResult& WithPrivateKeyCiphertextBlob(PrivateKeyCiphertextBlobT&& value) { SetPrivateKeyCiphertextBlob(std::forward<PrivateKeyCiphertextBlobT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The public key (in plaintext). When you use the HTTP API or the Amazon Web
     * Services CLI, the value is Base64-encoded. Otherwise, it is not
     * Base64-encoded.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetPublicKey() const { return m_publicKey; }
    template<typename PublicKeyT = Aws::Utils::ByteBuffer>
    void SetPublicKey(PublicKeyT&& value) { m_publicKeyHasBeenSet = true; m_publicKey = std::forward<PublicKeyT>(value); }
    template<typename PublicKeyT = Aws::Utils::ByteBuffer>
    GenerateDataKeyPairWithoutPlaintextResult& WithPublicKey(PublicKeyT&& value) { SetPublicKey(std::forward<PublicKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#key-id-key-ARN">key
     * ARN</a>) of the KMS key that encrypted the private key.</p>
     */
    inline const Aws::String& GetKeyId() const { return m_keyId; }
    template<typename KeyIdT = Aws::String>
    void SetKeyId(KeyIdT&& value) { m_keyIdHasBeenSet = true; m_keyId = std::forward<KeyIdT>(value); }
    template<typename KeyIdT = Aws::String>
    GenerateDataKeyPairWithoutPlaintextResult& WithKeyId(KeyIdT&& value) { SetKeyId(std::forward<KeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of data key pair that was generated.</p>
     */
    inline DataKeyPairSpec GetKeyPairSpec() const { return m_keyPairSpec; }
    inline void SetKeyPairSpec(DataKeyPairSpec value) { m_keyPairSpecHasBeenSet = true; m_keyPairSpec = value; }
    inline GenerateDataKeyPairWithoutPlaintextResult& WithKeyPairSpec(DataKeyPairSpec value) { SetKeyPairSpec(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the key material used to encrypt the private key.</p>
     */
    inline const Aws::String& GetKeyMaterialId() const { return m_keyMaterialId; }
    template<typename KeyMaterialIdT = Aws::String>
    void SetKeyMaterialId(KeyMaterialIdT&& value) { m_keyMaterialIdHasBeenSet = true; m_keyMaterialId = std::forward<KeyMaterialIdT>(value); }
    template<typename KeyMaterialIdT = Aws::String>
    GenerateDataKeyPairWithoutPlaintextResult& WithKeyMaterialId(KeyMaterialIdT&& value) { SetKeyMaterialId(std::forward<KeyMaterialIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GenerateDataKeyPairWithoutPlaintextResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::ByteBuffer m_privateKeyCiphertextBlob{};
    bool m_privateKeyCiphertextBlobHasBeenSet = false;

    Aws::Utils::ByteBuffer m_publicKey{};
    bool m_publicKeyHasBeenSet = false;

    Aws::String m_keyId;
    bool m_keyIdHasBeenSet = false;

    DataKeyPairSpec m_keyPairSpec{DataKeyPairSpec::NOT_SET};
    bool m_keyPairSpecHasBeenSet = false;

    Aws::String m_keyMaterialId;
    bool m_keyMaterialIdHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace KMS
} // namespace Aws
