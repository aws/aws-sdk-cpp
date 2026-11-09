/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Array.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kms/KMSRequest.h>
#include <aws/kms/KMS_EXPORTS.h>
#include <aws/kms/model/EncapsulationAlgorithmSpec.h>

#include <utility>

namespace Aws {
namespace KMS {
namespace Model {

/**
 */
class DecapsulateRequest : public KMSRequest {
 public:
  AWS_KMS_API DecapsulateRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "Decapsulate"; }

  AWS_KMS_API Aws::String SerializePayload() const override;

  AWS_KMS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>Identifies the asymmetric ML-KEM KMS key whose public key was used to produce
   * the encapsulated shared secret. KMS uses the private key in the specified key
   * pair to decapsulate the shared secret. </p> <p>To specify a KMS key, use its key
   * ID, key ARN, alias name, or alias ARN. When using an alias name, prefix it with
   * <code>"alias/"</code>. To specify a KMS key in a different Amazon Web Services
   * account, you must use the key ARN or alias ARN.</p> <p>For example:</p> <ul>
   * <li> <p>Key ID: <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li>
   * <li> <p>Key ARN:
   * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
   * </p> </li> <li> <p>Alias name: <code>alias/ExampleAlias</code> </p> </li> <li>
   * <p>Alias ARN: <code>arn:aws:kms:us-east-2:111122223333:alias/ExampleAlias</code>
   * </p> </li> </ul> <p>To get the key ID and key ARN for a KMS key, use
   * <a>ListKeys</a> or <a>DescribeKey</a>. To get the alias name and alias ARN, use
   * <a>ListAliases</a>.</p>
   */
  inline const Aws::String& GetKeyId() const { return m_keyId; }
  inline bool KeyIdHasBeenSet() const { return m_keyIdHasBeenSet; }
  template <typename KeyIdT = Aws::String>
  void SetKeyId(KeyIdT&& value) {
    m_keyIdHasBeenSet = true;
    m_keyId = std::forward<KeyIdT>(value);
  }
  template <typename KeyIdT = Aws::String>
  DecapsulateRequest& WithKeyId(KeyIdT&& value) {
    SetKeyId(std::forward<KeyIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The encapsulated (ciphertext) form of the shared secret to recover. This is
   * the <code>SharedSecretCiphertextBlob</code> value that the <a>Encapsulate</a>
   * operation returns. When you use the HTTP API or the Amazon Web Services CLI, the
   * value is Base64-encoded. Otherwise, it is not Base64-encoded.</p>
   */
  inline const Aws::Utils::ByteBuffer& GetSharedSecretCiphertextBlob() const { return m_sharedSecretCiphertextBlob; }
  inline bool SharedSecretCiphertextBlobHasBeenSet() const { return m_sharedSecretCiphertextBlobHasBeenSet; }
  template <typename SharedSecretCiphertextBlobT = Aws::Utils::ByteBuffer>
  void SetSharedSecretCiphertextBlob(SharedSecretCiphertextBlobT&& value) {
    m_sharedSecretCiphertextBlobHasBeenSet = true;
    m_sharedSecretCiphertextBlob = std::forward<SharedSecretCiphertextBlobT>(value);
  }
  template <typename SharedSecretCiphertextBlobT = Aws::Utils::ByteBuffer>
  DecapsulateRequest& WithSharedSecretCiphertextBlob(SharedSecretCiphertextBlobT&& value) {
    SetSharedSecretCiphertextBlob(std::forward<SharedSecretCiphertextBlobT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies the key encapsulation algorithm used to recover the shared secret.
   * The only valid value is <code>ML_KEM</code>.</p>
   */
  inline EncapsulationAlgorithmSpec GetEncapsulationAlgorithm() const { return m_encapsulationAlgorithm; }
  inline bool EncapsulationAlgorithmHasBeenSet() const { return m_encapsulationAlgorithmHasBeenSet; }
  inline void SetEncapsulationAlgorithm(EncapsulationAlgorithmSpec value) {
    m_encapsulationAlgorithmHasBeenSet = true;
    m_encapsulationAlgorithm = value;
  }
  inline DecapsulateRequest& WithEncapsulationAlgorithm(EncapsulationAlgorithmSpec value) {
    SetEncapsulationAlgorithm(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of grant tokens.</p> <p>Use a grant token when your permission to call
   * this operation comes from a new grant that has not yet achieved <i>eventual
   * consistency</i>. For more information, see <a
   * href="https://docs.aws.amazon.com/kms/latest/developerguide/grants.html#grant_token">Grant
   * token</a> and <a
   * href="https://docs.aws.amazon.com/kms/latest/developerguide/using-grant-token.html">Using
   * a grant token</a> in the <i>Key Management Service Developer Guide</i>.</p>
   */
  inline const Aws::Vector<Aws::String>& GetGrantTokens() const { return m_grantTokens; }
  inline bool GrantTokensHasBeenSet() const { return m_grantTokensHasBeenSet; }
  template <typename GrantTokensT = Aws::Vector<Aws::String>>
  void SetGrantTokens(GrantTokensT&& value) {
    m_grantTokensHasBeenSet = true;
    m_grantTokens = std::forward<GrantTokensT>(value);
  }
  template <typename GrantTokensT = Aws::Vector<Aws::String>>
  DecapsulateRequest& WithGrantTokens(GrantTokensT&& value) {
    SetGrantTokens(std::forward<GrantTokensT>(value));
    return *this;
  }
  template <typename GrantTokensT = Aws::String>
  DecapsulateRequest& AddGrantTokens(GrantTokensT&& value) {
    m_grantTokensHasBeenSet = true;
    m_grantTokens.emplace_back(std::forward<GrantTokensT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Checks if your request will succeed. <code>DryRun</code> is an optional
   * parameter. </p> <p>To learn more about how to use this parameter, see <a
   * href="https://docs.aws.amazon.com/kms/latest/developerguide/testing-permissions.html">Testing
   * your permissions</a> in the <i>Key Management Service Developer Guide</i>.</p>
   */
  inline bool GetDryRun() const { return m_dryRun; }
  inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
  inline void SetDryRun(bool value) {
    m_dryRunHasBeenSet = true;
    m_dryRun = value;
  }
  inline DecapsulateRequest& WithDryRun(bool value) {
    SetDryRun(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_keyId;

  Aws::Utils::ByteBuffer m_sharedSecretCiphertextBlob{};

  EncapsulationAlgorithmSpec m_encapsulationAlgorithm{EncapsulationAlgorithmSpec::NOT_SET};

  Aws::Vector<Aws::String> m_grantTokens;

  bool m_dryRun{false};
  bool m_keyIdHasBeenSet = false;
  bool m_sharedSecretCiphertextBlobHasBeenSet = false;
  bool m_encapsulationAlgorithmHasBeenSet = false;
  bool m_grantTokensHasBeenSet = false;
  bool m_dryRunHasBeenSet = false;
};

}  // namespace Model
}  // namespace KMS
}  // namespace Aws
