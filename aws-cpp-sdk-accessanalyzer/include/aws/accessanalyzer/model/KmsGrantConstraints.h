/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/accessanalyzer/AccessAnalyzer_EXPORTS.h>
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
namespace AccessAnalyzer
{
namespace Model
{

  /**
   * <p>Use this structure to propose allowing <a
   * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#cryptographic-operations">cryptographic
   * operations</a> in the grant only when the operation request includes the
   * specified <a
   * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#encrypt_context">encryption
   * context</a>. You can specify only one type of encryption context. An empty map
   * is treated as not specified. For more information, see <a
   * href="https://docs.aws.amazon.com/kms/latest/APIReference/API_GrantConstraints.html">GrantConstraints</a>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/KmsGrantConstraints">AWS
   * API Reference</a></p>
   */
  class AWS_ACCESSANALYZER_API KmsGrantConstraints
  {
  public:
    KmsGrantConstraints();
    KmsGrantConstraints(Aws::Utils::Json::JsonView jsonValue);
    KmsGrantConstraints& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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
    inline KmsGrantConstraints& WithEncryptionContextEquals(const Aws::Map<Aws::String, Aws::String>& value) { SetEncryptionContextEquals(value); return *this;}

    /**
     * <p>A list of key-value pairs that must match the encryption context in the <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#cryptographic-operations">cryptographic
     * operation</a> request. The grant allows the operation only when the encryption
     * context in the request is the same as the encryption context specified in this
     * constraint.</p>
     */
    inline KmsGrantConstraints& WithEncryptionContextEquals(Aws::Map<Aws::String, Aws::String>&& value) { SetEncryptionContextEquals(std::move(value)); return *this;}

    /**
     * <p>A list of key-value pairs that must match the encryption context in the <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#cryptographic-operations">cryptographic
     * operation</a> request. The grant allows the operation only when the encryption
     * context in the request is the same as the encryption context specified in this
     * constraint.</p>
     */
    inline KmsGrantConstraints& AddEncryptionContextEquals(const Aws::String& key, const Aws::String& value) { m_encryptionContextEqualsHasBeenSet = true; m_encryptionContextEquals.emplace(key, value); return *this; }

    /**
     * <p>A list of key-value pairs that must match the encryption context in the <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#cryptographic-operations">cryptographic
     * operation</a> request. The grant allows the operation only when the encryption
     * context in the request is the same as the encryption context specified in this
     * constraint.</p>
     */
    inline KmsGrantConstraints& AddEncryptionContextEquals(Aws::String&& key, const Aws::String& value) { m_encryptionContextEqualsHasBeenSet = true; m_encryptionContextEquals.emplace(std::move(key), value); return *this; }

    /**
     * <p>A list of key-value pairs that must match the encryption context in the <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#cryptographic-operations">cryptographic
     * operation</a> request. The grant allows the operation only when the encryption
     * context in the request is the same as the encryption context specified in this
     * constraint.</p>
     */
    inline KmsGrantConstraints& AddEncryptionContextEquals(const Aws::String& key, Aws::String&& value) { m_encryptionContextEqualsHasBeenSet = true; m_encryptionContextEquals.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A list of key-value pairs that must match the encryption context in the <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#cryptographic-operations">cryptographic
     * operation</a> request. The grant allows the operation only when the encryption
     * context in the request is the same as the encryption context specified in this
     * constraint.</p>
     */
    inline KmsGrantConstraints& AddEncryptionContextEquals(Aws::String&& key, Aws::String&& value) { m_encryptionContextEqualsHasBeenSet = true; m_encryptionContextEquals.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A list of key-value pairs that must match the encryption context in the <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#cryptographic-operations">cryptographic
     * operation</a> request. The grant allows the operation only when the encryption
     * context in the request is the same as the encryption context specified in this
     * constraint.</p>
     */
    inline KmsGrantConstraints& AddEncryptionContextEquals(const char* key, Aws::String&& value) { m_encryptionContextEqualsHasBeenSet = true; m_encryptionContextEquals.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A list of key-value pairs that must match the encryption context in the <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#cryptographic-operations">cryptographic
     * operation</a> request. The grant allows the operation only when the encryption
     * context in the request is the same as the encryption context specified in this
     * constraint.</p>
     */
    inline KmsGrantConstraints& AddEncryptionContextEquals(Aws::String&& key, const char* value) { m_encryptionContextEqualsHasBeenSet = true; m_encryptionContextEquals.emplace(std::move(key), value); return *this; }

    /**
     * <p>A list of key-value pairs that must match the encryption context in the <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#cryptographic-operations">cryptographic
     * operation</a> request. The grant allows the operation only when the encryption
     * context in the request is the same as the encryption context specified in this
     * constraint.</p>
     */
    inline KmsGrantConstraints& AddEncryptionContextEquals(const char* key, const char* value) { m_encryptionContextEqualsHasBeenSet = true; m_encryptionContextEquals.emplace(key, value); return *this; }


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
    inline KmsGrantConstraints& WithEncryptionContextSubset(const Aws::Map<Aws::String, Aws::String>& value) { SetEncryptionContextSubset(value); return *this;}

    /**
     * <p>A list of key-value pairs that must be included in the encryption context of
     * the <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#cryptographic-operations">cryptographic
     * operation</a> request. The grant allows the cryptographic operation only when
     * the encryption context in the request includes the key-value pairs specified in
     * this constraint, although it can include additional key-value pairs.</p>
     */
    inline KmsGrantConstraints& WithEncryptionContextSubset(Aws::Map<Aws::String, Aws::String>&& value) { SetEncryptionContextSubset(std::move(value)); return *this;}

    /**
     * <p>A list of key-value pairs that must be included in the encryption context of
     * the <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#cryptographic-operations">cryptographic
     * operation</a> request. The grant allows the cryptographic operation only when
     * the encryption context in the request includes the key-value pairs specified in
     * this constraint, although it can include additional key-value pairs.</p>
     */
    inline KmsGrantConstraints& AddEncryptionContextSubset(const Aws::String& key, const Aws::String& value) { m_encryptionContextSubsetHasBeenSet = true; m_encryptionContextSubset.emplace(key, value); return *this; }

    /**
     * <p>A list of key-value pairs that must be included in the encryption context of
     * the <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#cryptographic-operations">cryptographic
     * operation</a> request. The grant allows the cryptographic operation only when
     * the encryption context in the request includes the key-value pairs specified in
     * this constraint, although it can include additional key-value pairs.</p>
     */
    inline KmsGrantConstraints& AddEncryptionContextSubset(Aws::String&& key, const Aws::String& value) { m_encryptionContextSubsetHasBeenSet = true; m_encryptionContextSubset.emplace(std::move(key), value); return *this; }

    /**
     * <p>A list of key-value pairs that must be included in the encryption context of
     * the <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#cryptographic-operations">cryptographic
     * operation</a> request. The grant allows the cryptographic operation only when
     * the encryption context in the request includes the key-value pairs specified in
     * this constraint, although it can include additional key-value pairs.</p>
     */
    inline KmsGrantConstraints& AddEncryptionContextSubset(const Aws::String& key, Aws::String&& value) { m_encryptionContextSubsetHasBeenSet = true; m_encryptionContextSubset.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A list of key-value pairs that must be included in the encryption context of
     * the <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#cryptographic-operations">cryptographic
     * operation</a> request. The grant allows the cryptographic operation only when
     * the encryption context in the request includes the key-value pairs specified in
     * this constraint, although it can include additional key-value pairs.</p>
     */
    inline KmsGrantConstraints& AddEncryptionContextSubset(Aws::String&& key, Aws::String&& value) { m_encryptionContextSubsetHasBeenSet = true; m_encryptionContextSubset.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A list of key-value pairs that must be included in the encryption context of
     * the <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#cryptographic-operations">cryptographic
     * operation</a> request. The grant allows the cryptographic operation only when
     * the encryption context in the request includes the key-value pairs specified in
     * this constraint, although it can include additional key-value pairs.</p>
     */
    inline KmsGrantConstraints& AddEncryptionContextSubset(const char* key, Aws::String&& value) { m_encryptionContextSubsetHasBeenSet = true; m_encryptionContextSubset.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A list of key-value pairs that must be included in the encryption context of
     * the <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#cryptographic-operations">cryptographic
     * operation</a> request. The grant allows the cryptographic operation only when
     * the encryption context in the request includes the key-value pairs specified in
     * this constraint, although it can include additional key-value pairs.</p>
     */
    inline KmsGrantConstraints& AddEncryptionContextSubset(Aws::String&& key, const char* value) { m_encryptionContextSubsetHasBeenSet = true; m_encryptionContextSubset.emplace(std::move(key), value); return *this; }

    /**
     * <p>A list of key-value pairs that must be included in the encryption context of
     * the <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#cryptographic-operations">cryptographic
     * operation</a> request. The grant allows the cryptographic operation only when
     * the encryption context in the request includes the key-value pairs specified in
     * this constraint, although it can include additional key-value pairs.</p>
     */
    inline KmsGrantConstraints& AddEncryptionContextSubset(const char* key, const char* value) { m_encryptionContextSubsetHasBeenSet = true; m_encryptionContextSubset.emplace(key, value); return *this; }

  private:

    Aws::Map<Aws::String, Aws::String> m_encryptionContextEquals;
    bool m_encryptionContextEqualsHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_encryptionContextSubset;
    bool m_encryptionContextSubsetHasBeenSet;
  };

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
