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
   * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#cryptographic-operations">cryptographic
   * operations</a> in the grant only when the operation request includes the
   * specified <a
   * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#encrypt_context">encryption
   * context</a>. </p> <p>KMS applies the grant constraints only to cryptographic
   * operations that support an encryption context, that is, all cryptographic
   * operations with a <a
   * href="https://docs.aws.amazon.com/kms/latest/developerguide/symm-asymm-concepts.html#symmetric-cmks">symmetric
   * KMS key</a>. Grant constraints are not applied to operations that do not support
   * an encryption context, such as cryptographic operations with asymmetric KMS keys
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
   * href="https://docs.aws.amazon.com/kms/latest/developerguide/policy-conditions.html#conditions-kms-encryption-context">kms:EncryptionContext:</a>
   * in the <i> <i>Key Management Service Developer Guide</i> </i>.</p>
   * <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kms-2014-11-01/GrantConstraints">AWS
   * API Reference</a></p>
   */
  class GrantConstraints
  {
  public:
    AWS_KMS_API GrantConstraints();
    AWS_KMS_API GrantConstraints(Aws::Utils::Json::JsonView jsonValue);
    AWS_KMS_API GrantConstraints& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A list of key-value pairs that must be included in the encryption context of
     * the <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#cryptographic-operations">cryptographic
     * operation</a> request. The grant allows the cryptographic operation only when
     * the encryption context in the request includes the key-value pairs specified in
     * this constraint, although it can include additional key-value pairs.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetEncryptionContextSubset() const{ return m_encryptionContextSubset; }

    /**
     * <p>A list of key-value pairs that must be included in the encryption context of
     * the <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#cryptographic-operations">cryptographic
     * operation</a> request. The grant allows the cryptographic operation only when
     * the encryption context in the request includes the key-value pairs specified in
     * this constraint, although it can include additional key-value pairs.</p>
     */
    inline bool EncryptionContextSubsetHasBeenSet() const { return m_encryptionContextSubsetHasBeenSet; }

    /**
     * <p>A list of key-value pairs that must be included in the encryption context of
     * the <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#cryptographic-operations">cryptographic
     * operation</a> request. The grant allows the cryptographic operation only when
     * the encryption context in the request includes the key-value pairs specified in
     * this constraint, although it can include additional key-value pairs.</p>
     */
    inline void SetEncryptionContextSubset(const Aws::Map<Aws::String, Aws::String>& value) { m_encryptionContextSubsetHasBeenSet = true; m_encryptionContextSubset = value; }

    /**
     * <p>A list of key-value pairs that must be included in the encryption context of
     * the <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#cryptographic-operations">cryptographic
     * operation</a> request. The grant allows the cryptographic operation only when
     * the encryption context in the request includes the key-value pairs specified in
     * this constraint, although it can include additional key-value pairs.</p>
     */
    inline void SetEncryptionContextSubset(Aws::Map<Aws::String, Aws::String>&& value) { m_encryptionContextSubsetHasBeenSet = true; m_encryptionContextSubset = std::move(value); }

    /**
     * <p>A list of key-value pairs that must be included in the encryption context of
     * the <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#cryptographic-operations">cryptographic
     * operation</a> request. The grant allows the cryptographic operation only when
     * the encryption context in the request includes the key-value pairs specified in
     * this constraint, although it can include additional key-value pairs.</p>
     */
    inline GrantConstraints& WithEncryptionContextSubset(const Aws::Map<Aws::String, Aws::String>& value) { SetEncryptionContextSubset(value); return *this;}

    /**
     * <p>A list of key-value pairs that must be included in the encryption context of
     * the <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#cryptographic-operations">cryptographic
     * operation</a> request. The grant allows the cryptographic operation only when
     * the encryption context in the request includes the key-value pairs specified in
     * this constraint, although it can include additional key-value pairs.</p>
     */
    inline GrantConstraints& WithEncryptionContextSubset(Aws::Map<Aws::String, Aws::String>&& value) { SetEncryptionContextSubset(std::move(value)); return *this;}

    /**
     * <p>A list of key-value pairs that must be included in the encryption context of
     * the <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#cryptographic-operations">cryptographic
     * operation</a> request. The grant allows the cryptographic operation only when
     * the encryption context in the request includes the key-value pairs specified in
     * this constraint, although it can include additional key-value pairs.</p>
     */
    inline GrantConstraints& AddEncryptionContextSubset(const Aws::String& key, const Aws::String& value) { m_encryptionContextSubsetHasBeenSet = true; m_encryptionContextSubset.emplace(key, value); return *this; }

    /**
     * <p>A list of key-value pairs that must be included in the encryption context of
     * the <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#cryptographic-operations">cryptographic
     * operation</a> request. The grant allows the cryptographic operation only when
     * the encryption context in the request includes the key-value pairs specified in
     * this constraint, although it can include additional key-value pairs.</p>
     */
    inline GrantConstraints& AddEncryptionContextSubset(Aws::String&& key, const Aws::String& value) { m_encryptionContextSubsetHasBeenSet = true; m_encryptionContextSubset.emplace(std::move(key), value); return *this; }

    /**
     * <p>A list of key-value pairs that must be included in the encryption context of
     * the <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#cryptographic-operations">cryptographic
     * operation</a> request. The grant allows the cryptographic operation only when
     * the encryption context in the request includes the key-value pairs specified in
     * this constraint, although it can include additional key-value pairs.</p>
     */
    inline GrantConstraints& AddEncryptionContextSubset(const Aws::String& key, Aws::String&& value) { m_encryptionContextSubsetHasBeenSet = true; m_encryptionContextSubset.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A list of key-value pairs that must be included in the encryption context of
     * the <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#cryptographic-operations">cryptographic
     * operation</a> request. The grant allows the cryptographic operation only when
     * the encryption context in the request includes the key-value pairs specified in
     * this constraint, although it can include additional key-value pairs.</p>
     */
    inline GrantConstraints& AddEncryptionContextSubset(Aws::String&& key, Aws::String&& value) { m_encryptionContextSubsetHasBeenSet = true; m_encryptionContextSubset.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A list of key-value pairs that must be included in the encryption context of
     * the <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#cryptographic-operations">cryptographic
     * operation</a> request. The grant allows the cryptographic operation only when
     * the encryption context in the request includes the key-value pairs specified in
     * this constraint, although it can include additional key-value pairs.</p>
     */
    inline GrantConstraints& AddEncryptionContextSubset(const char* key, Aws::String&& value) { m_encryptionContextSubsetHasBeenSet = true; m_encryptionContextSubset.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A list of key-value pairs that must be included in the encryption context of
     * the <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#cryptographic-operations">cryptographic
     * operation</a> request. The grant allows the cryptographic operation only when
     * the encryption context in the request includes the key-value pairs specified in
     * this constraint, although it can include additional key-value pairs.</p>
     */
    inline GrantConstraints& AddEncryptionContextSubset(Aws::String&& key, const char* value) { m_encryptionContextSubsetHasBeenSet = true; m_encryptionContextSubset.emplace(std::move(key), value); return *this; }

    /**
     * <p>A list of key-value pairs that must be included in the encryption context of
     * the <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#cryptographic-operations">cryptographic
     * operation</a> request. The grant allows the cryptographic operation only when
     * the encryption context in the request includes the key-value pairs specified in
     * this constraint, although it can include additional key-value pairs.</p>
     */
    inline GrantConstraints& AddEncryptionContextSubset(const char* key, const char* value) { m_encryptionContextSubsetHasBeenSet = true; m_encryptionContextSubset.emplace(key, value); return *this; }


    /**
     * <p>A list of key-value pairs that must match the encryption context in the <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#cryptographic-operations">cryptographic
     * operation</a> request. The grant allows the operation only when the encryption
     * context in the request is the same as the encryption context specified in this
     * constraint.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetEncryptionContextEquals() const{ return m_encryptionContextEquals; }

    /**
     * <p>A list of key-value pairs that must match the encryption context in the <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#cryptographic-operations">cryptographic
     * operation</a> request. The grant allows the operation only when the encryption
     * context in the request is the same as the encryption context specified in this
     * constraint.</p>
     */
    inline bool EncryptionContextEqualsHasBeenSet() const { return m_encryptionContextEqualsHasBeenSet; }

    /**
     * <p>A list of key-value pairs that must match the encryption context in the <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#cryptographic-operations">cryptographic
     * operation</a> request. The grant allows the operation only when the encryption
     * context in the request is the same as the encryption context specified in this
     * constraint.</p>
     */
    inline void SetEncryptionContextEquals(const Aws::Map<Aws::String, Aws::String>& value) { m_encryptionContextEqualsHasBeenSet = true; m_encryptionContextEquals = value; }

    /**
     * <p>A list of key-value pairs that must match the encryption context in the <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#cryptographic-operations">cryptographic
     * operation</a> request. The grant allows the operation only when the encryption
     * context in the request is the same as the encryption context specified in this
     * constraint.</p>
     */
    inline void SetEncryptionContextEquals(Aws::Map<Aws::String, Aws::String>&& value) { m_encryptionContextEqualsHasBeenSet = true; m_encryptionContextEquals = std::move(value); }

    /**
     * <p>A list of key-value pairs that must match the encryption context in the <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#cryptographic-operations">cryptographic
     * operation</a> request. The grant allows the operation only when the encryption
     * context in the request is the same as the encryption context specified in this
     * constraint.</p>
     */
    inline GrantConstraints& WithEncryptionContextEquals(const Aws::Map<Aws::String, Aws::String>& value) { SetEncryptionContextEquals(value); return *this;}

    /**
     * <p>A list of key-value pairs that must match the encryption context in the <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#cryptographic-operations">cryptographic
     * operation</a> request. The grant allows the operation only when the encryption
     * context in the request is the same as the encryption context specified in this
     * constraint.</p>
     */
    inline GrantConstraints& WithEncryptionContextEquals(Aws::Map<Aws::String, Aws::String>&& value) { SetEncryptionContextEquals(std::move(value)); return *this;}

    /**
     * <p>A list of key-value pairs that must match the encryption context in the <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#cryptographic-operations">cryptographic
     * operation</a> request. The grant allows the operation only when the encryption
     * context in the request is the same as the encryption context specified in this
     * constraint.</p>
     */
    inline GrantConstraints& AddEncryptionContextEquals(const Aws::String& key, const Aws::String& value) { m_encryptionContextEqualsHasBeenSet = true; m_encryptionContextEquals.emplace(key, value); return *this; }

    /**
     * <p>A list of key-value pairs that must match the encryption context in the <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#cryptographic-operations">cryptographic
     * operation</a> request. The grant allows the operation only when the encryption
     * context in the request is the same as the encryption context specified in this
     * constraint.</p>
     */
    inline GrantConstraints& AddEncryptionContextEquals(Aws::String&& key, const Aws::String& value) { m_encryptionContextEqualsHasBeenSet = true; m_encryptionContextEquals.emplace(std::move(key), value); return *this; }

    /**
     * <p>A list of key-value pairs that must match the encryption context in the <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#cryptographic-operations">cryptographic
     * operation</a> request. The grant allows the operation only when the encryption
     * context in the request is the same as the encryption context specified in this
     * constraint.</p>
     */
    inline GrantConstraints& AddEncryptionContextEquals(const Aws::String& key, Aws::String&& value) { m_encryptionContextEqualsHasBeenSet = true; m_encryptionContextEquals.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A list of key-value pairs that must match the encryption context in the <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#cryptographic-operations">cryptographic
     * operation</a> request. The grant allows the operation only when the encryption
     * context in the request is the same as the encryption context specified in this
     * constraint.</p>
     */
    inline GrantConstraints& AddEncryptionContextEquals(Aws::String&& key, Aws::String&& value) { m_encryptionContextEqualsHasBeenSet = true; m_encryptionContextEquals.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A list of key-value pairs that must match the encryption context in the <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#cryptographic-operations">cryptographic
     * operation</a> request. The grant allows the operation only when the encryption
     * context in the request is the same as the encryption context specified in this
     * constraint.</p>
     */
    inline GrantConstraints& AddEncryptionContextEquals(const char* key, Aws::String&& value) { m_encryptionContextEqualsHasBeenSet = true; m_encryptionContextEquals.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A list of key-value pairs that must match the encryption context in the <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#cryptographic-operations">cryptographic
     * operation</a> request. The grant allows the operation only when the encryption
     * context in the request is the same as the encryption context specified in this
     * constraint.</p>
     */
    inline GrantConstraints& AddEncryptionContextEquals(Aws::String&& key, const char* value) { m_encryptionContextEqualsHasBeenSet = true; m_encryptionContextEquals.emplace(std::move(key), value); return *this; }

    /**
     * <p>A list of key-value pairs that must match the encryption context in the <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#cryptographic-operations">cryptographic
     * operation</a> request. The grant allows the operation only when the encryption
     * context in the request is the same as the encryption context specified in this
     * constraint.</p>
     */
    inline GrantConstraints& AddEncryptionContextEquals(const char* key, const char* value) { m_encryptionContextEqualsHasBeenSet = true; m_encryptionContextEquals.emplace(key, value); return *this; }

  private:

    Aws::Map<Aws::String, Aws::String> m_encryptionContextSubset;
    bool m_encryptionContextSubsetHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_encryptionContextEquals;
    bool m_encryptionContextEqualsHasBeenSet = false;
  };

} // namespace Model
} // namespace KMS
} // namespace Aws
