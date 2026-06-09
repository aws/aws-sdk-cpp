/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kms/KMS_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace KMS {
namespace Model {

/**
 * <p>Use this structure to allow <a
 * href="https://docs.aws.amazon.com/kms/latest/developerguide/kms-cryptography.html#cryptographic-operations">cryptographic
 * operations</a> in the grant only when the operation request meets the specified
 * constraints.</p> <p>KMS supports the following grant constraints:</p> <ul> <li>
 * <p> <code>EncryptionContextEquals</code> and
 * <code>EncryptionContextSubset</code> — These encryption context constraints
 * apply only to cryptographic operations that support an encryption context, that
 * is, all cryptographic operations with a symmetric KMS key. Encryption context
 * grant constraints are not applied to operations that do not support an
 * encryption context, such as cryptographic operations with asymmetric KMS keys
 * and management operations, such as <a>DescribeKey</a> or <a>RetireGrant</a>.</p>
 *  <p>In a cryptographic operation, the encryption context in the
 * decryption operation must be an exact, case-sensitive match for the keys and
 * values in the encryption context of the encryption operation. Only the order of
 * the pairs can vary.</p> <p>However, in a grant constraint, the key in each
 * key-value pair is not case sensitive, but the value is case sensitive.</p> <p>To
 * avoid confusion, do not use multiple encryption context pairs that differ only
 * by case. To require a fully case-sensitive encryption context, use the
 * <code>kms:EncryptionContext:</code> and <code>kms:EncryptionContextKeys</code>
 * conditions in an IAM or key policy. For details, see <a
 * href="https://docs.aws.amazon.com/kms/latest/developerguide/conditions-kms.html#conditions-kms-encryption-context">kms:EncryptionContext:context-key</a>
 * in the <i> <i>Key Management Service Developer Guide</i> </i>.</p>
 * </li> <li> <p> <code>SourceArn</code> — This grant constraint allows the
 * permissions in the grant only when the request is made on behalf of a specific
 * Amazon Web Services resource, identified by its <a
 * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
 * Resource Name (ARN)</a>. This is effectively the same as having the <a
 * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies_condition-keys.html#condition-keys-sourcearn">aws:SourceArn</a>
 * global condition key in the grant. The SourceArn constraint is supported on
 * grants for all types of KMS keys and can also be applied to the
 * <a>DescribeKey</a> operation when specified in the request. However, it does not
 * apply to <a>RetireGrant</a> operation.</p> </li> </ul><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/kms-2014-11-01/GrantConstraints">AWS
 * API Reference</a></p>
 */
class GrantConstraints {
 public:
  AWS_KMS_API GrantConstraints() = default;
  AWS_KMS_API GrantConstraints(Aws::Utils::Json::JsonView jsonValue);
  AWS_KMS_API GrantConstraints& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_KMS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A list of key-value pairs that must be included in the encryption context of
   * the <a
   * href="https://docs.aws.amazon.com/kms/latest/developerguide/kms-cryptography.html#cryptographic-operations">cryptographic
   * operation</a> request. The grant allows the cryptographic operation only when
   * the encryption context in the request includes the key-value pairs specified in
   * this constraint, although it can include additional key-value pairs.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetEncryptionContextSubset() const { return m_encryptionContextSubset; }
  inline bool EncryptionContextSubsetHasBeenSet() const { return m_encryptionContextSubsetHasBeenSet; }
  template <typename EncryptionContextSubsetT = Aws::Map<Aws::String, Aws::String>>
  void SetEncryptionContextSubset(EncryptionContextSubsetT&& value) {
    m_encryptionContextSubsetHasBeenSet = true;
    m_encryptionContextSubset = std::forward<EncryptionContextSubsetT>(value);
  }
  template <typename EncryptionContextSubsetT = Aws::Map<Aws::String, Aws::String>>
  GrantConstraints& WithEncryptionContextSubset(EncryptionContextSubsetT&& value) {
    SetEncryptionContextSubset(std::forward<EncryptionContextSubsetT>(value));
    return *this;
  }
  template <typename EncryptionContextSubsetKeyT = Aws::String, typename EncryptionContextSubsetValueT = Aws::String>
  GrantConstraints& AddEncryptionContextSubset(EncryptionContextSubsetKeyT&& key, EncryptionContextSubsetValueT&& value) {
    m_encryptionContextSubsetHasBeenSet = true;
    m_encryptionContextSubset.emplace(std::forward<EncryptionContextSubsetKeyT>(key), std::forward<EncryptionContextSubsetValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of key-value pairs that must match the encryption context in the <a
   * href="https://docs.aws.amazon.com/kms/latest/developerguide/kms-cryptography.html#cryptographic-operations">cryptographic
   * operation</a> request. The grant allows the operation only when the encryption
   * context in the request is the same as the encryption context specified in this
   * constraint.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetEncryptionContextEquals() const { return m_encryptionContextEquals; }
  inline bool EncryptionContextEqualsHasBeenSet() const { return m_encryptionContextEqualsHasBeenSet; }
  template <typename EncryptionContextEqualsT = Aws::Map<Aws::String, Aws::String>>
  void SetEncryptionContextEquals(EncryptionContextEqualsT&& value) {
    m_encryptionContextEqualsHasBeenSet = true;
    m_encryptionContextEquals = std::forward<EncryptionContextEqualsT>(value);
  }
  template <typename EncryptionContextEqualsT = Aws::Map<Aws::String, Aws::String>>
  GrantConstraints& WithEncryptionContextEquals(EncryptionContextEqualsT&& value) {
    SetEncryptionContextEquals(std::forward<EncryptionContextEqualsT>(value));
    return *this;
  }
  template <typename EncryptionContextEqualsKeyT = Aws::String, typename EncryptionContextEqualsValueT = Aws::String>
  GrantConstraints& AddEncryptionContextEquals(EncryptionContextEqualsKeyT&& key, EncryptionContextEqualsValueT&& value) {
    m_encryptionContextEqualsHasBeenSet = true;
    m_encryptionContextEquals.emplace(std::forward<EncryptionContextEqualsKeyT>(key), std::forward<EncryptionContextEqualsValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The <a
   * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
   * Amazon Resource Name (ARN)</a> of an Amazon Web Services resource on behalf of
   * which the request is made. This is effectively the same as having the <a
   * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies_condition-keys.html#condition-keys-sourcearn">aws:SourceArn</a>
   * global condition key in the grant. The SourceArn constraint ensures that the
   * principal can use the KMS key only when the request is made on behalf of the
   * specified resource.</p>
   */
  inline const Aws::String& GetSourceArn() const { return m_sourceArn; }
  inline bool SourceArnHasBeenSet() const { return m_sourceArnHasBeenSet; }
  template <typename SourceArnT = Aws::String>
  void SetSourceArn(SourceArnT&& value) {
    m_sourceArnHasBeenSet = true;
    m_sourceArn = std::forward<SourceArnT>(value);
  }
  template <typename SourceArnT = Aws::String>
  GrantConstraints& WithSourceArn(SourceArnT&& value) {
    SetSourceArn(std::forward<SourceArnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Map<Aws::String, Aws::String> m_encryptionContextSubset;

  Aws::Map<Aws::String, Aws::String> m_encryptionContextEquals;

  Aws::String m_sourceArn;
  bool m_encryptionContextSubsetHasBeenSet = false;
  bool m_encryptionContextEqualsHasBeenSet = false;
  bool m_sourceArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace KMS
}  // namespace Aws
