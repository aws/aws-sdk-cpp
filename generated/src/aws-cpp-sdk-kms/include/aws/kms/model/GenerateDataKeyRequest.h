/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kms/KMS_EXPORTS.h>
#include <aws/kms/KMSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/kms/model/DataKeySpec.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kms/model/RecipientInfo.h>
#include <utility>

namespace Aws
{
namespace KMS
{
namespace Model
{

  /**
   */
  class GenerateDataKeyRequest : public KMSRequest
  {
  public:
    AWS_KMS_API GenerateDataKeyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GenerateDataKey"; }

    AWS_KMS_API Aws::String SerializePayload() const override;

    AWS_KMS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Specifies the symmetric encryption KMS key that encrypts the data key. You
     * cannot specify an asymmetric KMS key or a KMS key in a custom key store. To get
     * the type and origin of your KMS key, use the <a>DescribeKey</a> operation.</p>
     * <p>To specify a KMS key, use its key ID, key ARN, alias name, or alias ARN. When
     * using an alias name, prefix it with <code>"alias/"</code>. To specify a KMS key
     * in a different Amazon Web Services account, you must use the key ARN or alias
     * ARN.</p> <p>For example:</p> <ul> <li> <p>Key ID:
     * <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li> <li> <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> <li> <p>Alias name: <code>alias/ExampleAlias</code> </p> </li> <li>
     * <p>Alias ARN: <code>arn:aws:kms:us-east-2:111122223333:alias/ExampleAlias</code>
     * </p> </li> </ul> <p>To get the key ID and key ARN for a KMS key, use
     * <a>ListKeys</a> or <a>DescribeKey</a>. To get the alias name and alias ARN, use
     * <a>ListAliases</a>.</p>
     */
    inline const Aws::String& GetKeyId() const{ return m_keyId; }

    /**
     * <p>Specifies the symmetric encryption KMS key that encrypts the data key. You
     * cannot specify an asymmetric KMS key or a KMS key in a custom key store. To get
     * the type and origin of your KMS key, use the <a>DescribeKey</a> operation.</p>
     * <p>To specify a KMS key, use its key ID, key ARN, alias name, or alias ARN. When
     * using an alias name, prefix it with <code>"alias/"</code>. To specify a KMS key
     * in a different Amazon Web Services account, you must use the key ARN or alias
     * ARN.</p> <p>For example:</p> <ul> <li> <p>Key ID:
     * <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li> <li> <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> <li> <p>Alias name: <code>alias/ExampleAlias</code> </p> </li> <li>
     * <p>Alias ARN: <code>arn:aws:kms:us-east-2:111122223333:alias/ExampleAlias</code>
     * </p> </li> </ul> <p>To get the key ID and key ARN for a KMS key, use
     * <a>ListKeys</a> or <a>DescribeKey</a>. To get the alias name and alias ARN, use
     * <a>ListAliases</a>.</p>
     */
    inline bool KeyIdHasBeenSet() const { return m_keyIdHasBeenSet; }

    /**
     * <p>Specifies the symmetric encryption KMS key that encrypts the data key. You
     * cannot specify an asymmetric KMS key or a KMS key in a custom key store. To get
     * the type and origin of your KMS key, use the <a>DescribeKey</a> operation.</p>
     * <p>To specify a KMS key, use its key ID, key ARN, alias name, or alias ARN. When
     * using an alias name, prefix it with <code>"alias/"</code>. To specify a KMS key
     * in a different Amazon Web Services account, you must use the key ARN or alias
     * ARN.</p> <p>For example:</p> <ul> <li> <p>Key ID:
     * <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li> <li> <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> <li> <p>Alias name: <code>alias/ExampleAlias</code> </p> </li> <li>
     * <p>Alias ARN: <code>arn:aws:kms:us-east-2:111122223333:alias/ExampleAlias</code>
     * </p> </li> </ul> <p>To get the key ID and key ARN for a KMS key, use
     * <a>ListKeys</a> or <a>DescribeKey</a>. To get the alias name and alias ARN, use
     * <a>ListAliases</a>.</p>
     */
    inline void SetKeyId(const Aws::String& value) { m_keyIdHasBeenSet = true; m_keyId = value; }

    /**
     * <p>Specifies the symmetric encryption KMS key that encrypts the data key. You
     * cannot specify an asymmetric KMS key or a KMS key in a custom key store. To get
     * the type and origin of your KMS key, use the <a>DescribeKey</a> operation.</p>
     * <p>To specify a KMS key, use its key ID, key ARN, alias name, or alias ARN. When
     * using an alias name, prefix it with <code>"alias/"</code>. To specify a KMS key
     * in a different Amazon Web Services account, you must use the key ARN or alias
     * ARN.</p> <p>For example:</p> <ul> <li> <p>Key ID:
     * <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li> <li> <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> <li> <p>Alias name: <code>alias/ExampleAlias</code> </p> </li> <li>
     * <p>Alias ARN: <code>arn:aws:kms:us-east-2:111122223333:alias/ExampleAlias</code>
     * </p> </li> </ul> <p>To get the key ID and key ARN for a KMS key, use
     * <a>ListKeys</a> or <a>DescribeKey</a>. To get the alias name and alias ARN, use
     * <a>ListAliases</a>.</p>
     */
    inline void SetKeyId(Aws::String&& value) { m_keyIdHasBeenSet = true; m_keyId = std::move(value); }

    /**
     * <p>Specifies the symmetric encryption KMS key that encrypts the data key. You
     * cannot specify an asymmetric KMS key or a KMS key in a custom key store. To get
     * the type and origin of your KMS key, use the <a>DescribeKey</a> operation.</p>
     * <p>To specify a KMS key, use its key ID, key ARN, alias name, or alias ARN. When
     * using an alias name, prefix it with <code>"alias/"</code>. To specify a KMS key
     * in a different Amazon Web Services account, you must use the key ARN or alias
     * ARN.</p> <p>For example:</p> <ul> <li> <p>Key ID:
     * <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li> <li> <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> <li> <p>Alias name: <code>alias/ExampleAlias</code> </p> </li> <li>
     * <p>Alias ARN: <code>arn:aws:kms:us-east-2:111122223333:alias/ExampleAlias</code>
     * </p> </li> </ul> <p>To get the key ID and key ARN for a KMS key, use
     * <a>ListKeys</a> or <a>DescribeKey</a>. To get the alias name and alias ARN, use
     * <a>ListAliases</a>.</p>
     */
    inline void SetKeyId(const char* value) { m_keyIdHasBeenSet = true; m_keyId.assign(value); }

    /**
     * <p>Specifies the symmetric encryption KMS key that encrypts the data key. You
     * cannot specify an asymmetric KMS key or a KMS key in a custom key store. To get
     * the type and origin of your KMS key, use the <a>DescribeKey</a> operation.</p>
     * <p>To specify a KMS key, use its key ID, key ARN, alias name, or alias ARN. When
     * using an alias name, prefix it with <code>"alias/"</code>. To specify a KMS key
     * in a different Amazon Web Services account, you must use the key ARN or alias
     * ARN.</p> <p>For example:</p> <ul> <li> <p>Key ID:
     * <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li> <li> <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> <li> <p>Alias name: <code>alias/ExampleAlias</code> </p> </li> <li>
     * <p>Alias ARN: <code>arn:aws:kms:us-east-2:111122223333:alias/ExampleAlias</code>
     * </p> </li> </ul> <p>To get the key ID and key ARN for a KMS key, use
     * <a>ListKeys</a> or <a>DescribeKey</a>. To get the alias name and alias ARN, use
     * <a>ListAliases</a>.</p>
     */
    inline GenerateDataKeyRequest& WithKeyId(const Aws::String& value) { SetKeyId(value); return *this;}

    /**
     * <p>Specifies the symmetric encryption KMS key that encrypts the data key. You
     * cannot specify an asymmetric KMS key or a KMS key in a custom key store. To get
     * the type and origin of your KMS key, use the <a>DescribeKey</a> operation.</p>
     * <p>To specify a KMS key, use its key ID, key ARN, alias name, or alias ARN. When
     * using an alias name, prefix it with <code>"alias/"</code>. To specify a KMS key
     * in a different Amazon Web Services account, you must use the key ARN or alias
     * ARN.</p> <p>For example:</p> <ul> <li> <p>Key ID:
     * <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li> <li> <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> <li> <p>Alias name: <code>alias/ExampleAlias</code> </p> </li> <li>
     * <p>Alias ARN: <code>arn:aws:kms:us-east-2:111122223333:alias/ExampleAlias</code>
     * </p> </li> </ul> <p>To get the key ID and key ARN for a KMS key, use
     * <a>ListKeys</a> or <a>DescribeKey</a>. To get the alias name and alias ARN, use
     * <a>ListAliases</a>.</p>
     */
    inline GenerateDataKeyRequest& WithKeyId(Aws::String&& value) { SetKeyId(std::move(value)); return *this;}

    /**
     * <p>Specifies the symmetric encryption KMS key that encrypts the data key. You
     * cannot specify an asymmetric KMS key or a KMS key in a custom key store. To get
     * the type and origin of your KMS key, use the <a>DescribeKey</a> operation.</p>
     * <p>To specify a KMS key, use its key ID, key ARN, alias name, or alias ARN. When
     * using an alias name, prefix it with <code>"alias/"</code>. To specify a KMS key
     * in a different Amazon Web Services account, you must use the key ARN or alias
     * ARN.</p> <p>For example:</p> <ul> <li> <p>Key ID:
     * <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li> <li> <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> <li> <p>Alias name: <code>alias/ExampleAlias</code> </p> </li> <li>
     * <p>Alias ARN: <code>arn:aws:kms:us-east-2:111122223333:alias/ExampleAlias</code>
     * </p> </li> </ul> <p>To get the key ID and key ARN for a KMS key, use
     * <a>ListKeys</a> or <a>DescribeKey</a>. To get the alias name and alias ARN, use
     * <a>ListAliases</a>.</p>
     */
    inline GenerateDataKeyRequest& WithKeyId(const char* value) { SetKeyId(value); return *this;}


    /**
     * <p>Specifies the encryption context that will be used when encrypting the data
     * key.</p>  <p>Do not include confidential or sensitive information in
     * this field. This field may be displayed in plaintext in CloudTrail logs and
     * other output.</p>  <p>An <i>encryption context</i> is a collection
     * of non-secret key-value pairs that represent additional authenticated data. When
     * you use an encryption context to encrypt data, you must specify the same (an
     * exact case-sensitive match) encryption context to decrypt the data. An
     * encryption context is supported only on operations with symmetric encryption KMS
     * keys. On operations with symmetric encryption KMS keys, an encryption context is
     * optional, but it is strongly recommended.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#encrypt_context">Encryption
     * context</a> in the <i>Key Management Service Developer Guide</i>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetEncryptionContext() const{ return m_encryptionContext; }

    /**
     * <p>Specifies the encryption context that will be used when encrypting the data
     * key.</p>  <p>Do not include confidential or sensitive information in
     * this field. This field may be displayed in plaintext in CloudTrail logs and
     * other output.</p>  <p>An <i>encryption context</i> is a collection
     * of non-secret key-value pairs that represent additional authenticated data. When
     * you use an encryption context to encrypt data, you must specify the same (an
     * exact case-sensitive match) encryption context to decrypt the data. An
     * encryption context is supported only on operations with symmetric encryption KMS
     * keys. On operations with symmetric encryption KMS keys, an encryption context is
     * optional, but it is strongly recommended.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#encrypt_context">Encryption
     * context</a> in the <i>Key Management Service Developer Guide</i>.</p>
     */
    inline bool EncryptionContextHasBeenSet() const { return m_encryptionContextHasBeenSet; }

    /**
     * <p>Specifies the encryption context that will be used when encrypting the data
     * key.</p>  <p>Do not include confidential or sensitive information in
     * this field. This field may be displayed in plaintext in CloudTrail logs and
     * other output.</p>  <p>An <i>encryption context</i> is a collection
     * of non-secret key-value pairs that represent additional authenticated data. When
     * you use an encryption context to encrypt data, you must specify the same (an
     * exact case-sensitive match) encryption context to decrypt the data. An
     * encryption context is supported only on operations with symmetric encryption KMS
     * keys. On operations with symmetric encryption KMS keys, an encryption context is
     * optional, but it is strongly recommended.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#encrypt_context">Encryption
     * context</a> in the <i>Key Management Service Developer Guide</i>.</p>
     */
    inline void SetEncryptionContext(const Aws::Map<Aws::String, Aws::String>& value) { m_encryptionContextHasBeenSet = true; m_encryptionContext = value; }

    /**
     * <p>Specifies the encryption context that will be used when encrypting the data
     * key.</p>  <p>Do not include confidential or sensitive information in
     * this field. This field may be displayed in plaintext in CloudTrail logs and
     * other output.</p>  <p>An <i>encryption context</i> is a collection
     * of non-secret key-value pairs that represent additional authenticated data. When
     * you use an encryption context to encrypt data, you must specify the same (an
     * exact case-sensitive match) encryption context to decrypt the data. An
     * encryption context is supported only on operations with symmetric encryption KMS
     * keys. On operations with symmetric encryption KMS keys, an encryption context is
     * optional, but it is strongly recommended.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#encrypt_context">Encryption
     * context</a> in the <i>Key Management Service Developer Guide</i>.</p>
     */
    inline void SetEncryptionContext(Aws::Map<Aws::String, Aws::String>&& value) { m_encryptionContextHasBeenSet = true; m_encryptionContext = std::move(value); }

    /**
     * <p>Specifies the encryption context that will be used when encrypting the data
     * key.</p>  <p>Do not include confidential or sensitive information in
     * this field. This field may be displayed in plaintext in CloudTrail logs and
     * other output.</p>  <p>An <i>encryption context</i> is a collection
     * of non-secret key-value pairs that represent additional authenticated data. When
     * you use an encryption context to encrypt data, you must specify the same (an
     * exact case-sensitive match) encryption context to decrypt the data. An
     * encryption context is supported only on operations with symmetric encryption KMS
     * keys. On operations with symmetric encryption KMS keys, an encryption context is
     * optional, but it is strongly recommended.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#encrypt_context">Encryption
     * context</a> in the <i>Key Management Service Developer Guide</i>.</p>
     */
    inline GenerateDataKeyRequest& WithEncryptionContext(const Aws::Map<Aws::String, Aws::String>& value) { SetEncryptionContext(value); return *this;}

    /**
     * <p>Specifies the encryption context that will be used when encrypting the data
     * key.</p>  <p>Do not include confidential or sensitive information in
     * this field. This field may be displayed in plaintext in CloudTrail logs and
     * other output.</p>  <p>An <i>encryption context</i> is a collection
     * of non-secret key-value pairs that represent additional authenticated data. When
     * you use an encryption context to encrypt data, you must specify the same (an
     * exact case-sensitive match) encryption context to decrypt the data. An
     * encryption context is supported only on operations with symmetric encryption KMS
     * keys. On operations with symmetric encryption KMS keys, an encryption context is
     * optional, but it is strongly recommended.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#encrypt_context">Encryption
     * context</a> in the <i>Key Management Service Developer Guide</i>.</p>
     */
    inline GenerateDataKeyRequest& WithEncryptionContext(Aws::Map<Aws::String, Aws::String>&& value) { SetEncryptionContext(std::move(value)); return *this;}

    /**
     * <p>Specifies the encryption context that will be used when encrypting the data
     * key.</p>  <p>Do not include confidential or sensitive information in
     * this field. This field may be displayed in plaintext in CloudTrail logs and
     * other output.</p>  <p>An <i>encryption context</i> is a collection
     * of non-secret key-value pairs that represent additional authenticated data. When
     * you use an encryption context to encrypt data, you must specify the same (an
     * exact case-sensitive match) encryption context to decrypt the data. An
     * encryption context is supported only on operations with symmetric encryption KMS
     * keys. On operations with symmetric encryption KMS keys, an encryption context is
     * optional, but it is strongly recommended.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#encrypt_context">Encryption
     * context</a> in the <i>Key Management Service Developer Guide</i>.</p>
     */
    inline GenerateDataKeyRequest& AddEncryptionContext(const Aws::String& key, const Aws::String& value) { m_encryptionContextHasBeenSet = true; m_encryptionContext.emplace(key, value); return *this; }

    /**
     * <p>Specifies the encryption context that will be used when encrypting the data
     * key.</p>  <p>Do not include confidential or sensitive information in
     * this field. This field may be displayed in plaintext in CloudTrail logs and
     * other output.</p>  <p>An <i>encryption context</i> is a collection
     * of non-secret key-value pairs that represent additional authenticated data. When
     * you use an encryption context to encrypt data, you must specify the same (an
     * exact case-sensitive match) encryption context to decrypt the data. An
     * encryption context is supported only on operations with symmetric encryption KMS
     * keys. On operations with symmetric encryption KMS keys, an encryption context is
     * optional, but it is strongly recommended.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#encrypt_context">Encryption
     * context</a> in the <i>Key Management Service Developer Guide</i>.</p>
     */
    inline GenerateDataKeyRequest& AddEncryptionContext(Aws::String&& key, const Aws::String& value) { m_encryptionContextHasBeenSet = true; m_encryptionContext.emplace(std::move(key), value); return *this; }

    /**
     * <p>Specifies the encryption context that will be used when encrypting the data
     * key.</p>  <p>Do not include confidential or sensitive information in
     * this field. This field may be displayed in plaintext in CloudTrail logs and
     * other output.</p>  <p>An <i>encryption context</i> is a collection
     * of non-secret key-value pairs that represent additional authenticated data. When
     * you use an encryption context to encrypt data, you must specify the same (an
     * exact case-sensitive match) encryption context to decrypt the data. An
     * encryption context is supported only on operations with symmetric encryption KMS
     * keys. On operations with symmetric encryption KMS keys, an encryption context is
     * optional, but it is strongly recommended.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#encrypt_context">Encryption
     * context</a> in the <i>Key Management Service Developer Guide</i>.</p>
     */
    inline GenerateDataKeyRequest& AddEncryptionContext(const Aws::String& key, Aws::String&& value) { m_encryptionContextHasBeenSet = true; m_encryptionContext.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Specifies the encryption context that will be used when encrypting the data
     * key.</p>  <p>Do not include confidential or sensitive information in
     * this field. This field may be displayed in plaintext in CloudTrail logs and
     * other output.</p>  <p>An <i>encryption context</i> is a collection
     * of non-secret key-value pairs that represent additional authenticated data. When
     * you use an encryption context to encrypt data, you must specify the same (an
     * exact case-sensitive match) encryption context to decrypt the data. An
     * encryption context is supported only on operations with symmetric encryption KMS
     * keys. On operations with symmetric encryption KMS keys, an encryption context is
     * optional, but it is strongly recommended.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#encrypt_context">Encryption
     * context</a> in the <i>Key Management Service Developer Guide</i>.</p>
     */
    inline GenerateDataKeyRequest& AddEncryptionContext(Aws::String&& key, Aws::String&& value) { m_encryptionContextHasBeenSet = true; m_encryptionContext.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Specifies the encryption context that will be used when encrypting the data
     * key.</p>  <p>Do not include confidential or sensitive information in
     * this field. This field may be displayed in plaintext in CloudTrail logs and
     * other output.</p>  <p>An <i>encryption context</i> is a collection
     * of non-secret key-value pairs that represent additional authenticated data. When
     * you use an encryption context to encrypt data, you must specify the same (an
     * exact case-sensitive match) encryption context to decrypt the data. An
     * encryption context is supported only on operations with symmetric encryption KMS
     * keys. On operations with symmetric encryption KMS keys, an encryption context is
     * optional, but it is strongly recommended.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#encrypt_context">Encryption
     * context</a> in the <i>Key Management Service Developer Guide</i>.</p>
     */
    inline GenerateDataKeyRequest& AddEncryptionContext(const char* key, Aws::String&& value) { m_encryptionContextHasBeenSet = true; m_encryptionContext.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Specifies the encryption context that will be used when encrypting the data
     * key.</p>  <p>Do not include confidential or sensitive information in
     * this field. This field may be displayed in plaintext in CloudTrail logs and
     * other output.</p>  <p>An <i>encryption context</i> is a collection
     * of non-secret key-value pairs that represent additional authenticated data. When
     * you use an encryption context to encrypt data, you must specify the same (an
     * exact case-sensitive match) encryption context to decrypt the data. An
     * encryption context is supported only on operations with symmetric encryption KMS
     * keys. On operations with symmetric encryption KMS keys, an encryption context is
     * optional, but it is strongly recommended.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#encrypt_context">Encryption
     * context</a> in the <i>Key Management Service Developer Guide</i>.</p>
     */
    inline GenerateDataKeyRequest& AddEncryptionContext(Aws::String&& key, const char* value) { m_encryptionContextHasBeenSet = true; m_encryptionContext.emplace(std::move(key), value); return *this; }

    /**
     * <p>Specifies the encryption context that will be used when encrypting the data
     * key.</p>  <p>Do not include confidential or sensitive information in
     * this field. This field may be displayed in plaintext in CloudTrail logs and
     * other output.</p>  <p>An <i>encryption context</i> is a collection
     * of non-secret key-value pairs that represent additional authenticated data. When
     * you use an encryption context to encrypt data, you must specify the same (an
     * exact case-sensitive match) encryption context to decrypt the data. An
     * encryption context is supported only on operations with symmetric encryption KMS
     * keys. On operations with symmetric encryption KMS keys, an encryption context is
     * optional, but it is strongly recommended.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#encrypt_context">Encryption
     * context</a> in the <i>Key Management Service Developer Guide</i>.</p>
     */
    inline GenerateDataKeyRequest& AddEncryptionContext(const char* key, const char* value) { m_encryptionContextHasBeenSet = true; m_encryptionContext.emplace(key, value); return *this; }


    /**
     * <p>Specifies the length of the data key in bytes. For example, use the value 64
     * to generate a 512-bit data key (64 bytes is 512 bits). For 128-bit (16-byte) and
     * 256-bit (32-byte) data keys, use the <code>KeySpec</code> parameter.</p> <p>You
     * must specify either the <code>KeySpec</code> or the <code>NumberOfBytes</code>
     * parameter (but not both) in every <code>GenerateDataKey</code> request.</p>
     */
    inline int GetNumberOfBytes() const{ return m_numberOfBytes; }

    /**
     * <p>Specifies the length of the data key in bytes. For example, use the value 64
     * to generate a 512-bit data key (64 bytes is 512 bits). For 128-bit (16-byte) and
     * 256-bit (32-byte) data keys, use the <code>KeySpec</code> parameter.</p> <p>You
     * must specify either the <code>KeySpec</code> or the <code>NumberOfBytes</code>
     * parameter (but not both) in every <code>GenerateDataKey</code> request.</p>
     */
    inline bool NumberOfBytesHasBeenSet() const { return m_numberOfBytesHasBeenSet; }

    /**
     * <p>Specifies the length of the data key in bytes. For example, use the value 64
     * to generate a 512-bit data key (64 bytes is 512 bits). For 128-bit (16-byte) and
     * 256-bit (32-byte) data keys, use the <code>KeySpec</code> parameter.</p> <p>You
     * must specify either the <code>KeySpec</code> or the <code>NumberOfBytes</code>
     * parameter (but not both) in every <code>GenerateDataKey</code> request.</p>
     */
    inline void SetNumberOfBytes(int value) { m_numberOfBytesHasBeenSet = true; m_numberOfBytes = value; }

    /**
     * <p>Specifies the length of the data key in bytes. For example, use the value 64
     * to generate a 512-bit data key (64 bytes is 512 bits). For 128-bit (16-byte) and
     * 256-bit (32-byte) data keys, use the <code>KeySpec</code> parameter.</p> <p>You
     * must specify either the <code>KeySpec</code> or the <code>NumberOfBytes</code>
     * parameter (but not both) in every <code>GenerateDataKey</code> request.</p>
     */
    inline GenerateDataKeyRequest& WithNumberOfBytes(int value) { SetNumberOfBytes(value); return *this;}


    /**
     * <p>Specifies the length of the data key. Use <code>AES_128</code> to generate a
     * 128-bit symmetric key, or <code>AES_256</code> to generate a 256-bit symmetric
     * key.</p> <p>You must specify either the <code>KeySpec</code> or the
     * <code>NumberOfBytes</code> parameter (but not both) in every
     * <code>GenerateDataKey</code> request.</p>
     */
    inline const DataKeySpec& GetKeySpec() const{ return m_keySpec; }

    /**
     * <p>Specifies the length of the data key. Use <code>AES_128</code> to generate a
     * 128-bit symmetric key, or <code>AES_256</code> to generate a 256-bit symmetric
     * key.</p> <p>You must specify either the <code>KeySpec</code> or the
     * <code>NumberOfBytes</code> parameter (but not both) in every
     * <code>GenerateDataKey</code> request.</p>
     */
    inline bool KeySpecHasBeenSet() const { return m_keySpecHasBeenSet; }

    /**
     * <p>Specifies the length of the data key. Use <code>AES_128</code> to generate a
     * 128-bit symmetric key, or <code>AES_256</code> to generate a 256-bit symmetric
     * key.</p> <p>You must specify either the <code>KeySpec</code> or the
     * <code>NumberOfBytes</code> parameter (but not both) in every
     * <code>GenerateDataKey</code> request.</p>
     */
    inline void SetKeySpec(const DataKeySpec& value) { m_keySpecHasBeenSet = true; m_keySpec = value; }

    /**
     * <p>Specifies the length of the data key. Use <code>AES_128</code> to generate a
     * 128-bit symmetric key, or <code>AES_256</code> to generate a 256-bit symmetric
     * key.</p> <p>You must specify either the <code>KeySpec</code> or the
     * <code>NumberOfBytes</code> parameter (but not both) in every
     * <code>GenerateDataKey</code> request.</p>
     */
    inline void SetKeySpec(DataKeySpec&& value) { m_keySpecHasBeenSet = true; m_keySpec = std::move(value); }

    /**
     * <p>Specifies the length of the data key. Use <code>AES_128</code> to generate a
     * 128-bit symmetric key, or <code>AES_256</code> to generate a 256-bit symmetric
     * key.</p> <p>You must specify either the <code>KeySpec</code> or the
     * <code>NumberOfBytes</code> parameter (but not both) in every
     * <code>GenerateDataKey</code> request.</p>
     */
    inline GenerateDataKeyRequest& WithKeySpec(const DataKeySpec& value) { SetKeySpec(value); return *this;}

    /**
     * <p>Specifies the length of the data key. Use <code>AES_128</code> to generate a
     * 128-bit symmetric key, or <code>AES_256</code> to generate a 256-bit symmetric
     * key.</p> <p>You must specify either the <code>KeySpec</code> or the
     * <code>NumberOfBytes</code> parameter (but not both) in every
     * <code>GenerateDataKey</code> request.</p>
     */
    inline GenerateDataKeyRequest& WithKeySpec(DataKeySpec&& value) { SetKeySpec(std::move(value)); return *this;}


    /**
     * <p>A list of grant tokens.</p> <p>Use a grant token when your permission to call
     * this operation comes from a new grant that has not yet achieved <i>eventual
     * consistency</i>. For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/grants.html#grant_token">Grant
     * token</a> and <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/grant-manage.html#using-grant-token">Using
     * a grant token</a> in the <i>Key Management Service Developer Guide</i>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetGrantTokens() const{ return m_grantTokens; }

    /**
     * <p>A list of grant tokens.</p> <p>Use a grant token when your permission to call
     * this operation comes from a new grant that has not yet achieved <i>eventual
     * consistency</i>. For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/grants.html#grant_token">Grant
     * token</a> and <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/grant-manage.html#using-grant-token">Using
     * a grant token</a> in the <i>Key Management Service Developer Guide</i>.</p>
     */
    inline bool GrantTokensHasBeenSet() const { return m_grantTokensHasBeenSet; }

    /**
     * <p>A list of grant tokens.</p> <p>Use a grant token when your permission to call
     * this operation comes from a new grant that has not yet achieved <i>eventual
     * consistency</i>. For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/grants.html#grant_token">Grant
     * token</a> and <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/grant-manage.html#using-grant-token">Using
     * a grant token</a> in the <i>Key Management Service Developer Guide</i>.</p>
     */
    inline void SetGrantTokens(const Aws::Vector<Aws::String>& value) { m_grantTokensHasBeenSet = true; m_grantTokens = value; }

    /**
     * <p>A list of grant tokens.</p> <p>Use a grant token when your permission to call
     * this operation comes from a new grant that has not yet achieved <i>eventual
     * consistency</i>. For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/grants.html#grant_token">Grant
     * token</a> and <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/grant-manage.html#using-grant-token">Using
     * a grant token</a> in the <i>Key Management Service Developer Guide</i>.</p>
     */
    inline void SetGrantTokens(Aws::Vector<Aws::String>&& value) { m_grantTokensHasBeenSet = true; m_grantTokens = std::move(value); }

    /**
     * <p>A list of grant tokens.</p> <p>Use a grant token when your permission to call
     * this operation comes from a new grant that has not yet achieved <i>eventual
     * consistency</i>. For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/grants.html#grant_token">Grant
     * token</a> and <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/grant-manage.html#using-grant-token">Using
     * a grant token</a> in the <i>Key Management Service Developer Guide</i>.</p>
     */
    inline GenerateDataKeyRequest& WithGrantTokens(const Aws::Vector<Aws::String>& value) { SetGrantTokens(value); return *this;}

    /**
     * <p>A list of grant tokens.</p> <p>Use a grant token when your permission to call
     * this operation comes from a new grant that has not yet achieved <i>eventual
     * consistency</i>. For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/grants.html#grant_token">Grant
     * token</a> and <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/grant-manage.html#using-grant-token">Using
     * a grant token</a> in the <i>Key Management Service Developer Guide</i>.</p>
     */
    inline GenerateDataKeyRequest& WithGrantTokens(Aws::Vector<Aws::String>&& value) { SetGrantTokens(std::move(value)); return *this;}

    /**
     * <p>A list of grant tokens.</p> <p>Use a grant token when your permission to call
     * this operation comes from a new grant that has not yet achieved <i>eventual
     * consistency</i>. For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/grants.html#grant_token">Grant
     * token</a> and <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/grant-manage.html#using-grant-token">Using
     * a grant token</a> in the <i>Key Management Service Developer Guide</i>.</p>
     */
    inline GenerateDataKeyRequest& AddGrantTokens(const Aws::String& value) { m_grantTokensHasBeenSet = true; m_grantTokens.push_back(value); return *this; }

    /**
     * <p>A list of grant tokens.</p> <p>Use a grant token when your permission to call
     * this operation comes from a new grant that has not yet achieved <i>eventual
     * consistency</i>. For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/grants.html#grant_token">Grant
     * token</a> and <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/grant-manage.html#using-grant-token">Using
     * a grant token</a> in the <i>Key Management Service Developer Guide</i>.</p>
     */
    inline GenerateDataKeyRequest& AddGrantTokens(Aws::String&& value) { m_grantTokensHasBeenSet = true; m_grantTokens.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of grant tokens.</p> <p>Use a grant token when your permission to call
     * this operation comes from a new grant that has not yet achieved <i>eventual
     * consistency</i>. For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/grants.html#grant_token">Grant
     * token</a> and <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/grant-manage.html#using-grant-token">Using
     * a grant token</a> in the <i>Key Management Service Developer Guide</i>.</p>
     */
    inline GenerateDataKeyRequest& AddGrantTokens(const char* value) { m_grantTokensHasBeenSet = true; m_grantTokens.push_back(value); return *this; }


    /**
     * <p>A signed <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/nitro-enclave-how.html#term-attestdoc">attestation
     * document</a> from an Amazon Web Services Nitro enclave and the encryption
     * algorithm to use with the enclave's public key. The only valid encryption
     * algorithm is <code>RSAES_OAEP_SHA_256</code>. </p> <p>This parameter only
     * supports attestation documents for Amazon Web Services Nitro Enclaves. To
     * include this parameter, use the <a
     * href="https://docs.aws.amazon.com/enclaves/latest/user/developing-applications.html#sdk">Amazon
     * Web Services Nitro Enclaves SDK</a> or any Amazon Web Services SDK.</p> <p>When
     * you use this parameter, instead of returning the plaintext data key, KMS
     * encrypts the plaintext data key under the public key in the attestation
     * document, and returns the resulting ciphertext in the
     * <code>CiphertextForRecipient</code> field in the response. This ciphertext can
     * be decrypted only with the private key in the enclave. The
     * <code>CiphertextBlob</code> field in the response contains a copy of the data
     * key encrypted under the KMS key specified by the <code>KeyId</code> parameter.
     * The <code>Plaintext</code> field in the response is null or empty.</p> <p>For
     * information about the interaction between KMS and Amazon Web Services Nitro
     * Enclaves, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/services-nitro-enclaves.html">How
     * Amazon Web Services Nitro Enclaves uses KMS</a> in the <i>Key Management Service
     * Developer Guide</i>.</p>
     */
    inline const RecipientInfo& GetRecipient() const{ return m_recipient; }

    /**
     * <p>A signed <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/nitro-enclave-how.html#term-attestdoc">attestation
     * document</a> from an Amazon Web Services Nitro enclave and the encryption
     * algorithm to use with the enclave's public key. The only valid encryption
     * algorithm is <code>RSAES_OAEP_SHA_256</code>. </p> <p>This parameter only
     * supports attestation documents for Amazon Web Services Nitro Enclaves. To
     * include this parameter, use the <a
     * href="https://docs.aws.amazon.com/enclaves/latest/user/developing-applications.html#sdk">Amazon
     * Web Services Nitro Enclaves SDK</a> or any Amazon Web Services SDK.</p> <p>When
     * you use this parameter, instead of returning the plaintext data key, KMS
     * encrypts the plaintext data key under the public key in the attestation
     * document, and returns the resulting ciphertext in the
     * <code>CiphertextForRecipient</code> field in the response. This ciphertext can
     * be decrypted only with the private key in the enclave. The
     * <code>CiphertextBlob</code> field in the response contains a copy of the data
     * key encrypted under the KMS key specified by the <code>KeyId</code> parameter.
     * The <code>Plaintext</code> field in the response is null or empty.</p> <p>For
     * information about the interaction between KMS and Amazon Web Services Nitro
     * Enclaves, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/services-nitro-enclaves.html">How
     * Amazon Web Services Nitro Enclaves uses KMS</a> in the <i>Key Management Service
     * Developer Guide</i>.</p>
     */
    inline bool RecipientHasBeenSet() const { return m_recipientHasBeenSet; }

    /**
     * <p>A signed <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/nitro-enclave-how.html#term-attestdoc">attestation
     * document</a> from an Amazon Web Services Nitro enclave and the encryption
     * algorithm to use with the enclave's public key. The only valid encryption
     * algorithm is <code>RSAES_OAEP_SHA_256</code>. </p> <p>This parameter only
     * supports attestation documents for Amazon Web Services Nitro Enclaves. To
     * include this parameter, use the <a
     * href="https://docs.aws.amazon.com/enclaves/latest/user/developing-applications.html#sdk">Amazon
     * Web Services Nitro Enclaves SDK</a> or any Amazon Web Services SDK.</p> <p>When
     * you use this parameter, instead of returning the plaintext data key, KMS
     * encrypts the plaintext data key under the public key in the attestation
     * document, and returns the resulting ciphertext in the
     * <code>CiphertextForRecipient</code> field in the response. This ciphertext can
     * be decrypted only with the private key in the enclave. The
     * <code>CiphertextBlob</code> field in the response contains a copy of the data
     * key encrypted under the KMS key specified by the <code>KeyId</code> parameter.
     * The <code>Plaintext</code> field in the response is null or empty.</p> <p>For
     * information about the interaction between KMS and Amazon Web Services Nitro
     * Enclaves, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/services-nitro-enclaves.html">How
     * Amazon Web Services Nitro Enclaves uses KMS</a> in the <i>Key Management Service
     * Developer Guide</i>.</p>
     */
    inline void SetRecipient(const RecipientInfo& value) { m_recipientHasBeenSet = true; m_recipient = value; }

    /**
     * <p>A signed <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/nitro-enclave-how.html#term-attestdoc">attestation
     * document</a> from an Amazon Web Services Nitro enclave and the encryption
     * algorithm to use with the enclave's public key. The only valid encryption
     * algorithm is <code>RSAES_OAEP_SHA_256</code>. </p> <p>This parameter only
     * supports attestation documents for Amazon Web Services Nitro Enclaves. To
     * include this parameter, use the <a
     * href="https://docs.aws.amazon.com/enclaves/latest/user/developing-applications.html#sdk">Amazon
     * Web Services Nitro Enclaves SDK</a> or any Amazon Web Services SDK.</p> <p>When
     * you use this parameter, instead of returning the plaintext data key, KMS
     * encrypts the plaintext data key under the public key in the attestation
     * document, and returns the resulting ciphertext in the
     * <code>CiphertextForRecipient</code> field in the response. This ciphertext can
     * be decrypted only with the private key in the enclave. The
     * <code>CiphertextBlob</code> field in the response contains a copy of the data
     * key encrypted under the KMS key specified by the <code>KeyId</code> parameter.
     * The <code>Plaintext</code> field in the response is null or empty.</p> <p>For
     * information about the interaction between KMS and Amazon Web Services Nitro
     * Enclaves, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/services-nitro-enclaves.html">How
     * Amazon Web Services Nitro Enclaves uses KMS</a> in the <i>Key Management Service
     * Developer Guide</i>.</p>
     */
    inline void SetRecipient(RecipientInfo&& value) { m_recipientHasBeenSet = true; m_recipient = std::move(value); }

    /**
     * <p>A signed <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/nitro-enclave-how.html#term-attestdoc">attestation
     * document</a> from an Amazon Web Services Nitro enclave and the encryption
     * algorithm to use with the enclave's public key. The only valid encryption
     * algorithm is <code>RSAES_OAEP_SHA_256</code>. </p> <p>This parameter only
     * supports attestation documents for Amazon Web Services Nitro Enclaves. To
     * include this parameter, use the <a
     * href="https://docs.aws.amazon.com/enclaves/latest/user/developing-applications.html#sdk">Amazon
     * Web Services Nitro Enclaves SDK</a> or any Amazon Web Services SDK.</p> <p>When
     * you use this parameter, instead of returning the plaintext data key, KMS
     * encrypts the plaintext data key under the public key in the attestation
     * document, and returns the resulting ciphertext in the
     * <code>CiphertextForRecipient</code> field in the response. This ciphertext can
     * be decrypted only with the private key in the enclave. The
     * <code>CiphertextBlob</code> field in the response contains a copy of the data
     * key encrypted under the KMS key specified by the <code>KeyId</code> parameter.
     * The <code>Plaintext</code> field in the response is null or empty.</p> <p>For
     * information about the interaction between KMS and Amazon Web Services Nitro
     * Enclaves, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/services-nitro-enclaves.html">How
     * Amazon Web Services Nitro Enclaves uses KMS</a> in the <i>Key Management Service
     * Developer Guide</i>.</p>
     */
    inline GenerateDataKeyRequest& WithRecipient(const RecipientInfo& value) { SetRecipient(value); return *this;}

    /**
     * <p>A signed <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/nitro-enclave-how.html#term-attestdoc">attestation
     * document</a> from an Amazon Web Services Nitro enclave and the encryption
     * algorithm to use with the enclave's public key. The only valid encryption
     * algorithm is <code>RSAES_OAEP_SHA_256</code>. </p> <p>This parameter only
     * supports attestation documents for Amazon Web Services Nitro Enclaves. To
     * include this parameter, use the <a
     * href="https://docs.aws.amazon.com/enclaves/latest/user/developing-applications.html#sdk">Amazon
     * Web Services Nitro Enclaves SDK</a> or any Amazon Web Services SDK.</p> <p>When
     * you use this parameter, instead of returning the plaintext data key, KMS
     * encrypts the plaintext data key under the public key in the attestation
     * document, and returns the resulting ciphertext in the
     * <code>CiphertextForRecipient</code> field in the response. This ciphertext can
     * be decrypted only with the private key in the enclave. The
     * <code>CiphertextBlob</code> field in the response contains a copy of the data
     * key encrypted under the KMS key specified by the <code>KeyId</code> parameter.
     * The <code>Plaintext</code> field in the response is null or empty.</p> <p>For
     * information about the interaction between KMS and Amazon Web Services Nitro
     * Enclaves, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/services-nitro-enclaves.html">How
     * Amazon Web Services Nitro Enclaves uses KMS</a> in the <i>Key Management Service
     * Developer Guide</i>.</p>
     */
    inline GenerateDataKeyRequest& WithRecipient(RecipientInfo&& value) { SetRecipient(std::move(value)); return *this;}


    /**
     * <p>Checks if your request will succeed. <code>DryRun</code> is an optional
     * parameter. </p> <p>To learn more about how to use this parameter, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/programming-dryrun.html">Testing
     * your KMS API calls</a> in the <i>Key Management Service Developer Guide</i>.</p>
     */
    inline bool GetDryRun() const{ return m_dryRun; }

    /**
     * <p>Checks if your request will succeed. <code>DryRun</code> is an optional
     * parameter. </p> <p>To learn more about how to use this parameter, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/programming-dryrun.html">Testing
     * your KMS API calls</a> in the <i>Key Management Service Developer Guide</i>.</p>
     */
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }

    /**
     * <p>Checks if your request will succeed. <code>DryRun</code> is an optional
     * parameter. </p> <p>To learn more about how to use this parameter, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/programming-dryrun.html">Testing
     * your KMS API calls</a> in the <i>Key Management Service Developer Guide</i>.</p>
     */
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }

    /**
     * <p>Checks if your request will succeed. <code>DryRun</code> is an optional
     * parameter. </p> <p>To learn more about how to use this parameter, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/programming-dryrun.html">Testing
     * your KMS API calls</a> in the <i>Key Management Service Developer Guide</i>.</p>
     */
    inline GenerateDataKeyRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}

  private:

    Aws::String m_keyId;
    bool m_keyIdHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_encryptionContext;
    bool m_encryptionContextHasBeenSet = false;

    int m_numberOfBytes;
    bool m_numberOfBytesHasBeenSet = false;

    DataKeySpec m_keySpec;
    bool m_keySpecHasBeenSet = false;

    Aws::Vector<Aws::String> m_grantTokens;
    bool m_grantTokensHasBeenSet = false;

    RecipientInfo m_recipient;
    bool m_recipientHasBeenSet = false;

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;
  };

} // namespace Model
} // namespace KMS
} // namespace Aws
