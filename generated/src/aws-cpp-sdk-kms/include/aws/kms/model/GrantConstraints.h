/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kms/KMS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace KMS
{
namespace Model
{

  /**
   * <p>Use this structure to allow <a
   * href="https://docs.aws.amazon.com/kms/latest/developerguide/kms-cryptography.html#cryptographic-operations">cryptographic
   * operations</a> in the grant only when the operation request includes the
   * specified <a
   * href="https://docs.aws.amazon.com/kms/latest/developerguide/encrypt_context.html">encryption
   * context</a>. </p> <p>KMS applies the grant constraints only to cryptographic
   * operations that support an encryption context, that is, all cryptographic
   * operations with a symmetric KMS key. Grant constraints are not applied to
   * operations that do not support an encryption context, such as cryptographic
   * operations with asymmetric KMS keys and management operations, such as
   * <a>DescribeKey</a> or <a>RetireGrant</a>.</p>  <p>In a cryptographic
   * operation, the encryption context in the decryption operation must be an exact,
   * case-sensitive match for the keys and values in the encryption context of the
   * encryption operation. Only the order of the pairs can vary.</p> <p>However, in a
   * grant constraint, the key in each key-value pair is not case sensitive, but the
   * value is case sensitive.</p> <p>To avoid confusion, do not use multiple
   * encryption context pairs that differ only by case. To require a fully
   * case-sensitive encryption context, use the <code>kms:EncryptionContext:</code>
   * and <code>kms:EncryptionContextKeys</code> conditions in an IAM or key policy.
   * For details, see <a
   * href="https://docs.aws.amazon.com/kms/latest/developerguide/conditions-kms.html#conditions-kms-encryption-context">kms:EncryptionContext:context-key</a>
   * in the <i> <i>Key Management Service Developer Guide</i> </i>.</p>
   * <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kms-2014-11-01/GrantConstraints">AWS
   * API Reference</a></p>
   */
  class GrantConstraints
  {
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
    template<typename EncryptionContextSubsetT = Aws::Map<Aws::String, Aws::String>>
    void SetEncryptionContextSubset(EncryptionContextSubsetT&& value) { m_encryptionContextSubsetHasBeenSet = true; m_encryptionContextSubset = std::forward<EncryptionContextSubsetT>(value); }
    template<typename EncryptionContextSubsetT = Aws::Map<Aws::String, Aws::String>>
    GrantConstraints& WithEncryptionContextSubset(EncryptionContextSubsetT&& value) { SetEncryptionContextSubset(std::forward<EncryptionContextSubsetT>(value)); return *this;}
    template<typename EncryptionContextSubsetKeyT = Aws::String, typename EncryptionContextSubsetValueT = Aws::String>
    GrantConstraints& AddEncryptionContextSubset(EncryptionContextSubsetKeyT&& key, EncryptionContextSubsetValueT&& value) {
      m_encryptionContextSubsetHasBeenSet = true; m_encryptionContextSubset.emplace(std::forward<EncryptionContextSubsetKeyT>(key), std::forward<EncryptionContextSubsetValueT>(value)); return *this;
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
    template<typename EncryptionContextEqualsT = Aws::Map<Aws::String, Aws::String>>
    void SetEncryptionContextEquals(EncryptionContextEqualsT&& value) { m_encryptionContextEqualsHasBeenSet = true; m_encryptionContextEquals = std::forward<EncryptionContextEqualsT>(value); }
    template<typename EncryptionContextEqualsT = Aws::Map<Aws::String, Aws::String>>
    GrantConstraints& WithEncryptionContextEquals(EncryptionContextEqualsT&& value) { SetEncryptionContextEquals(std::forward<EncryptionContextEqualsT>(value)); return *this;}
    template<typename EncryptionContextEqualsKeyT = Aws::String, typename EncryptionContextEqualsValueT = Aws::String>
    GrantConstraints& AddEncryptionContextEquals(EncryptionContextEqualsKeyT&& key, EncryptionContextEqualsValueT&& value) {
      m_encryptionContextEqualsHasBeenSet = true; m_encryptionContextEquals.emplace(std::forward<EncryptionContextEqualsKeyT>(key), std::forward<EncryptionContextEqualsValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::Map<Aws::String, Aws::String> m_encryptionContextSubset;
    bool m_encryptionContextSubsetHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_encryptionContextEquals;
    bool m_encryptionContextEqualsHasBeenSet = false;
  };

} // namespace Model
} // namespace KMS
} // namespace Aws
