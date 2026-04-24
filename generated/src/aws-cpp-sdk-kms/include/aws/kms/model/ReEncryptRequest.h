/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Array.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kms/KMSRequest.h>
#include <aws/kms/KMS_EXPORTS.h>
#include <aws/kms/model/DryRunModifierType.h>
#include <aws/kms/model/EncryptionAlgorithmSpec.h>

#include <utility>

namespace Aws {
namespace KMS {
namespace Model {

/**
 */
class ReEncryptRequest : public KMSRequest {
 public:
  AWS_KMS_API ReEncryptRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ReEncrypt"; }

  AWS_KMS_API Aws::String SerializePayload() const override;

  AWS_KMS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>Ciphertext of the data to reencrypt.</p> <p>This parameter is required in all
   * cases except when <code>DryRun</code> is <code>true</code> and
   * <code>DryRunModifiers</code> is set to <code>IGNORE_CIPHERTEXT</code>.</p>
   */
  inline const Aws::Utils::ByteBuffer& GetCiphertextBlob() const { return m_ciphertextBlob; }
  inline bool CiphertextBlobHasBeenSet() const { return m_ciphertextBlobHasBeenSet; }
  template <typename CiphertextBlobT = Aws::Utils::ByteBuffer>
  void SetCiphertextBlob(CiphertextBlobT&& value) {
    m_ciphertextBlobHasBeenSet = true;
    m_ciphertextBlob = std::forward<CiphertextBlobT>(value);
  }
  template <typename CiphertextBlobT = Aws::Utils::ByteBuffer>
  ReEncryptRequest& WithCiphertextBlob(CiphertextBlobT&& value) {
    SetCiphertextBlob(std::forward<CiphertextBlobT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies the encryption context to use to decrypt the ciphertext. Enter the
   * same encryption context that was used to encrypt the ciphertext.</p> <p>An
   * <i>encryption context</i> is a collection of non-secret key-value pairs that
   * represent additional authenticated data. When you use an encryption context to
   * encrypt data, you must specify the same (an exact case-sensitive match)
   * encryption context to decrypt the data. An encryption context is supported only
   * on operations with symmetric encryption KMS keys. On operations with symmetric
   * encryption KMS keys, an encryption context is optional, but it is strongly
   * recommended.</p> <p>For more information, see <a
   * href="https://docs.aws.amazon.com/kms/latest/developerguide/encrypt_context.html">Encryption
   * context</a> in the <i>Key Management Service Developer Guide</i>.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetSourceEncryptionContext() const { return m_sourceEncryptionContext; }
  inline bool SourceEncryptionContextHasBeenSet() const { return m_sourceEncryptionContextHasBeenSet; }
  template <typename SourceEncryptionContextT = Aws::Map<Aws::String, Aws::String>>
  void SetSourceEncryptionContext(SourceEncryptionContextT&& value) {
    m_sourceEncryptionContextHasBeenSet = true;
    m_sourceEncryptionContext = std::forward<SourceEncryptionContextT>(value);
  }
  template <typename SourceEncryptionContextT = Aws::Map<Aws::String, Aws::String>>
  ReEncryptRequest& WithSourceEncryptionContext(SourceEncryptionContextT&& value) {
    SetSourceEncryptionContext(std::forward<SourceEncryptionContextT>(value));
    return *this;
  }
  template <typename SourceEncryptionContextKeyT = Aws::String, typename SourceEncryptionContextValueT = Aws::String>
  ReEncryptRequest& AddSourceEncryptionContext(SourceEncryptionContextKeyT&& key, SourceEncryptionContextValueT&& value) {
    m_sourceEncryptionContextHasBeenSet = true;
    m_sourceEncryptionContext.emplace(std::forward<SourceEncryptionContextKeyT>(key), std::forward<SourceEncryptionContextValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies the KMS key that KMS will use to decrypt the ciphertext before it
   * is re-encrypted.</p> <p>Enter a key ID of the KMS key that was used to encrypt
   * the ciphertext. If you identify a different KMS key, the <code>ReEncrypt</code>
   * operation throws an <code>IncorrectKeyException</code>.</p> <p>This parameter is
   * required only when the ciphertext was encrypted under an asymmetric KMS key or
   * when <code>DryRun</code> is <code>true</code> and <code>DryRunModifiers</code>
   * is set to <code>IGNORE_CIPHERTEXT</code>. If you used a symmetric encryption KMS
   * key, KMS can get the KMS key from metadata that it adds to the symmetric
   * ciphertext blob. However, it is always recommended as a best practice. This
   * practice ensures that you use the KMS key that you intend.</p> <p>To specify a
   * KMS key, use its key ID, key ARN, alias name, or alias ARN. When using an alias
   * name, prefix it with <code>"alias/"</code>. To specify a KMS key in a different
   * Amazon Web Services account, you must use the key ARN or alias ARN.</p> <p>For
   * example:</p> <ul> <li> <p>Key ID:
   * <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li> <li> <p>Key ARN:
   * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
   * </p> </li> <li> <p>Alias name: <code>alias/ExampleAlias</code> </p> </li> <li>
   * <p>Alias ARN: <code>arn:aws:kms:us-east-2:111122223333:alias/ExampleAlias</code>
   * </p> </li> </ul> <p>To get the key ID and key ARN for a KMS key, use
   * <a>ListKeys</a> or <a>DescribeKey</a>. To get the alias name and alias ARN, use
   * <a>ListAliases</a>.</p>
   */
  inline const Aws::String& GetSourceKeyId() const { return m_sourceKeyId; }
  inline bool SourceKeyIdHasBeenSet() const { return m_sourceKeyIdHasBeenSet; }
  template <typename SourceKeyIdT = Aws::String>
  void SetSourceKeyId(SourceKeyIdT&& value) {
    m_sourceKeyIdHasBeenSet = true;
    m_sourceKeyId = std::forward<SourceKeyIdT>(value);
  }
  template <typename SourceKeyIdT = Aws::String>
  ReEncryptRequest& WithSourceKeyId(SourceKeyIdT&& value) {
    SetSourceKeyId(std::forward<SourceKeyIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A unique identifier for the KMS key that is used to reencrypt the data.
   * Specify a symmetric encryption KMS key or an asymmetric KMS key with a
   * <code>KeyUsage</code> value of <code>ENCRYPT_DECRYPT</code>. To find the
   * <code>KeyUsage</code> value of a KMS key, use the <a>DescribeKey</a>
   * operation.</p> <p>To specify a KMS key, use its key ID, key ARN, alias name, or
   * alias ARN. When using an alias name, prefix it with <code>"alias/"</code>. To
   * specify a KMS key in a different Amazon Web Services account, you must use the
   * key ARN or alias ARN.</p> <p>For example:</p> <ul> <li> <p>Key ID:
   * <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li> <li> <p>Key ARN:
   * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
   * </p> </li> <li> <p>Alias name: <code>alias/ExampleAlias</code> </p> </li> <li>
   * <p>Alias ARN: <code>arn:aws:kms:us-east-2:111122223333:alias/ExampleAlias</code>
   * </p> </li> </ul> <p>To get the key ID and key ARN for a KMS key, use
   * <a>ListKeys</a> or <a>DescribeKey</a>. To get the alias name and alias ARN, use
   * <a>ListAliases</a>.</p>
   */
  inline const Aws::String& GetDestinationKeyId() const { return m_destinationKeyId; }
  inline bool DestinationKeyIdHasBeenSet() const { return m_destinationKeyIdHasBeenSet; }
  template <typename DestinationKeyIdT = Aws::String>
  void SetDestinationKeyId(DestinationKeyIdT&& value) {
    m_destinationKeyIdHasBeenSet = true;
    m_destinationKeyId = std::forward<DestinationKeyIdT>(value);
  }
  template <typename DestinationKeyIdT = Aws::String>
  ReEncryptRequest& WithDestinationKeyId(DestinationKeyIdT&& value) {
    SetDestinationKeyId(std::forward<DestinationKeyIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies that encryption context to use when the reencrypting the data.</p>
   *  <p>Do not include confidential or sensitive information in this
   * field. This field may be displayed in plaintext in CloudTrail logs and other
   * output.</p>  <p>A destination encryption context is valid only when
   * the destination KMS key is a symmetric encryption KMS key. The standard
   * ciphertext format for asymmetric KMS keys does not include fields for
   * metadata.</p> <p>An <i>encryption context</i> is a collection of non-secret
   * key-value pairs that represent additional authenticated data. When you use an
   * encryption context to encrypt data, you must specify the same (an exact
   * case-sensitive match) encryption context to decrypt the data. An encryption
   * context is supported only on operations with symmetric encryption KMS keys. On
   * operations with symmetric encryption KMS keys, an encryption context is
   * optional, but it is strongly recommended.</p> <p>For more information, see <a
   * href="https://docs.aws.amazon.com/kms/latest/developerguide/encrypt_context.html">Encryption
   * context</a> in the <i>Key Management Service Developer Guide</i>.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetDestinationEncryptionContext() const { return m_destinationEncryptionContext; }
  inline bool DestinationEncryptionContextHasBeenSet() const { return m_destinationEncryptionContextHasBeenSet; }
  template <typename DestinationEncryptionContextT = Aws::Map<Aws::String, Aws::String>>
  void SetDestinationEncryptionContext(DestinationEncryptionContextT&& value) {
    m_destinationEncryptionContextHasBeenSet = true;
    m_destinationEncryptionContext = std::forward<DestinationEncryptionContextT>(value);
  }
  template <typename DestinationEncryptionContextT = Aws::Map<Aws::String, Aws::String>>
  ReEncryptRequest& WithDestinationEncryptionContext(DestinationEncryptionContextT&& value) {
    SetDestinationEncryptionContext(std::forward<DestinationEncryptionContextT>(value));
    return *this;
  }
  template <typename DestinationEncryptionContextKeyT = Aws::String, typename DestinationEncryptionContextValueT = Aws::String>
  ReEncryptRequest& AddDestinationEncryptionContext(DestinationEncryptionContextKeyT&& key, DestinationEncryptionContextValueT&& value) {
    m_destinationEncryptionContextHasBeenSet = true;
    m_destinationEncryptionContext.emplace(std::forward<DestinationEncryptionContextKeyT>(key),
                                           std::forward<DestinationEncryptionContextValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies the encryption algorithm that KMS will use to decrypt the
   * ciphertext before it is reencrypted. The default value,
   * <code>SYMMETRIC_DEFAULT</code>, represents the algorithm used for symmetric
   * encryption KMS keys.</p> <p>Specify the same algorithm that was used to encrypt
   * the ciphertext. If you specify a different algorithm, the decrypt attempt
   * fails.</p> <p>This parameter is required only when the ciphertext was encrypted
   * under an asymmetric KMS key.</p>
   */
  inline EncryptionAlgorithmSpec GetSourceEncryptionAlgorithm() const { return m_sourceEncryptionAlgorithm; }
  inline bool SourceEncryptionAlgorithmHasBeenSet() const { return m_sourceEncryptionAlgorithmHasBeenSet; }
  inline void SetSourceEncryptionAlgorithm(EncryptionAlgorithmSpec value) {
    m_sourceEncryptionAlgorithmHasBeenSet = true;
    m_sourceEncryptionAlgorithm = value;
  }
  inline ReEncryptRequest& WithSourceEncryptionAlgorithm(EncryptionAlgorithmSpec value) {
    SetSourceEncryptionAlgorithm(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies the encryption algorithm that KMS will use to reecrypt the data
   * after it has decrypted it. The default value, <code>SYMMETRIC_DEFAULT</code>,
   * represents the encryption algorithm used for symmetric encryption KMS keys.</p>
   * <p>This parameter is required only when the destination KMS key is an asymmetric
   * KMS key.</p>
   */
  inline EncryptionAlgorithmSpec GetDestinationEncryptionAlgorithm() const { return m_destinationEncryptionAlgorithm; }
  inline bool DestinationEncryptionAlgorithmHasBeenSet() const { return m_destinationEncryptionAlgorithmHasBeenSet; }
  inline void SetDestinationEncryptionAlgorithm(EncryptionAlgorithmSpec value) {
    m_destinationEncryptionAlgorithmHasBeenSet = true;
    m_destinationEncryptionAlgorithm = value;
  }
  inline ReEncryptRequest& WithDestinationEncryptionAlgorithm(EncryptionAlgorithmSpec value) {
    SetDestinationEncryptionAlgorithm(value);
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
  ReEncryptRequest& WithGrantTokens(GrantTokensT&& value) {
    SetGrantTokens(std::forward<GrantTokensT>(value));
    return *this;
  }
  template <typename GrantTokensT = Aws::String>
  ReEncryptRequest& AddGrantTokens(GrantTokensT&& value) {
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
  inline ReEncryptRequest& WithDryRun(bool value) {
    SetDryRun(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies the modifiers to apply to the dry run operation.
   * <code>DryRunModifiers</code> is an optional parameter that only applies when
   * <code>DryRun</code> is set to <code>true</code>.</p> <p>When set to
   * <code>IGNORE_CIPHERTEXT</code>, KMS performs only authorization validation
   * without ciphertext validation. This allows you to test permissions without
   * requiring a valid ciphertext blob.</p> <p>To learn more about how to use this
   * parameter, see <a
   * href="https://docs.aws.amazon.com/kms/latest/developerguide/testing-permissions.html">Testing
   * your permissions</a> in the <i>Key Management Service Developer Guide</i>.</p>
   */
  inline const Aws::Vector<DryRunModifierType>& GetDryRunModifiers() const { return m_dryRunModifiers; }
  inline bool DryRunModifiersHasBeenSet() const { return m_dryRunModifiersHasBeenSet; }
  template <typename DryRunModifiersT = Aws::Vector<DryRunModifierType>>
  void SetDryRunModifiers(DryRunModifiersT&& value) {
    m_dryRunModifiersHasBeenSet = true;
    m_dryRunModifiers = std::forward<DryRunModifiersT>(value);
  }
  template <typename DryRunModifiersT = Aws::Vector<DryRunModifierType>>
  ReEncryptRequest& WithDryRunModifiers(DryRunModifiersT&& value) {
    SetDryRunModifiers(std::forward<DryRunModifiersT>(value));
    return *this;
  }
  inline ReEncryptRequest& AddDryRunModifiers(DryRunModifierType value) {
    m_dryRunModifiersHasBeenSet = true;
    m_dryRunModifiers.push_back(value);
    return *this;
  }
  ///@}
 private:
  Aws::Utils::ByteBuffer m_ciphertextBlob{};

  Aws::Map<Aws::String, Aws::String> m_sourceEncryptionContext;

  Aws::String m_sourceKeyId;

  Aws::String m_destinationKeyId;

  Aws::Map<Aws::String, Aws::String> m_destinationEncryptionContext;

  EncryptionAlgorithmSpec m_sourceEncryptionAlgorithm{EncryptionAlgorithmSpec::NOT_SET};

  EncryptionAlgorithmSpec m_destinationEncryptionAlgorithm{EncryptionAlgorithmSpec::NOT_SET};

  Aws::Vector<Aws::String> m_grantTokens;

  bool m_dryRun{false};

  Aws::Vector<DryRunModifierType> m_dryRunModifiers;
  bool m_ciphertextBlobHasBeenSet = false;
  bool m_sourceEncryptionContextHasBeenSet = false;
  bool m_sourceKeyIdHasBeenSet = false;
  bool m_destinationKeyIdHasBeenSet = false;
  bool m_destinationEncryptionContextHasBeenSet = false;
  bool m_sourceEncryptionAlgorithmHasBeenSet = false;
  bool m_destinationEncryptionAlgorithmHasBeenSet = false;
  bool m_grantTokensHasBeenSet = false;
  bool m_dryRunHasBeenSet = false;
  bool m_dryRunModifiersHasBeenSet = false;
};

}  // namespace Model
}  // namespace KMS
}  // namespace Aws
