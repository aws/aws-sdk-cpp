/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kms/KMS_EXPORTS.h>
#include <aws/kms/KMSRequest.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kms/model/DataKeyPairSpec.h>
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
  class GenerateDataKeyPairRequest : public KMSRequest
  {
  public:
    AWS_KMS_API GenerateDataKeyPairRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GenerateDataKeyPair"; }

    AWS_KMS_API Aws::String SerializePayload() const override;

    AWS_KMS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Specifies the encryption context that will be used when encrypting the
     * private key in the data key pair.</p>  <p>Do not include confidential
     * or sensitive information in this field. This field may be displayed in plaintext
     * in CloudTrail logs and other output.</p>  <p>An <i>encryption
     * context</i> is a collection of non-secret key-value pairs that represent
     * additional authenticated data. When you use an encryption context to encrypt
     * data, you must specify the same (an exact case-sensitive match) encryption
     * context to decrypt the data. An encryption context is supported only on
     * operations with symmetric encryption KMS keys. On operations with symmetric
     * encryption KMS keys, an encryption context is optional, but it is strongly
     * recommended.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#encrypt_context">Encryption
     * context</a> in the <i>Key Management Service Developer Guide</i>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetEncryptionContext() const{ return m_encryptionContext; }

    /**
     * <p>Specifies the encryption context that will be used when encrypting the
     * private key in the data key pair.</p>  <p>Do not include confidential
     * or sensitive information in this field. This field may be displayed in plaintext
     * in CloudTrail logs and other output.</p>  <p>An <i>encryption
     * context</i> is a collection of non-secret key-value pairs that represent
     * additional authenticated data. When you use an encryption context to encrypt
     * data, you must specify the same (an exact case-sensitive match) encryption
     * context to decrypt the data. An encryption context is supported only on
     * operations with symmetric encryption KMS keys. On operations with symmetric
     * encryption KMS keys, an encryption context is optional, but it is strongly
     * recommended.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#encrypt_context">Encryption
     * context</a> in the <i>Key Management Service Developer Guide</i>.</p>
     */
    inline bool EncryptionContextHasBeenSet() const { return m_encryptionContextHasBeenSet; }

    /**
     * <p>Specifies the encryption context that will be used when encrypting the
     * private key in the data key pair.</p>  <p>Do not include confidential
     * or sensitive information in this field. This field may be displayed in plaintext
     * in CloudTrail logs and other output.</p>  <p>An <i>encryption
     * context</i> is a collection of non-secret key-value pairs that represent
     * additional authenticated data. When you use an encryption context to encrypt
     * data, you must specify the same (an exact case-sensitive match) encryption
     * context to decrypt the data. An encryption context is supported only on
     * operations with symmetric encryption KMS keys. On operations with symmetric
     * encryption KMS keys, an encryption context is optional, but it is strongly
     * recommended.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#encrypt_context">Encryption
     * context</a> in the <i>Key Management Service Developer Guide</i>.</p>
     */
    inline void SetEncryptionContext(const Aws::Map<Aws::String, Aws::String>& value) { m_encryptionContextHasBeenSet = true; m_encryptionContext = value; }

    /**
     * <p>Specifies the encryption context that will be used when encrypting the
     * private key in the data key pair.</p>  <p>Do not include confidential
     * or sensitive information in this field. This field may be displayed in plaintext
     * in CloudTrail logs and other output.</p>  <p>An <i>encryption
     * context</i> is a collection of non-secret key-value pairs that represent
     * additional authenticated data. When you use an encryption context to encrypt
     * data, you must specify the same (an exact case-sensitive match) encryption
     * context to decrypt the data. An encryption context is supported only on
     * operations with symmetric encryption KMS keys. On operations with symmetric
     * encryption KMS keys, an encryption context is optional, but it is strongly
     * recommended.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#encrypt_context">Encryption
     * context</a> in the <i>Key Management Service Developer Guide</i>.</p>
     */
    inline void SetEncryptionContext(Aws::Map<Aws::String, Aws::String>&& value) { m_encryptionContextHasBeenSet = true; m_encryptionContext = std::move(value); }

    /**
     * <p>Specifies the encryption context that will be used when encrypting the
     * private key in the data key pair.</p>  <p>Do not include confidential
     * or sensitive information in this field. This field may be displayed in plaintext
     * in CloudTrail logs and other output.</p>  <p>An <i>encryption
     * context</i> is a collection of non-secret key-value pairs that represent
     * additional authenticated data. When you use an encryption context to encrypt
     * data, you must specify the same (an exact case-sensitive match) encryption
     * context to decrypt the data. An encryption context is supported only on
     * operations with symmetric encryption KMS keys. On operations with symmetric
     * encryption KMS keys, an encryption context is optional, but it is strongly
     * recommended.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#encrypt_context">Encryption
     * context</a> in the <i>Key Management Service Developer Guide</i>.</p>
     */
    inline GenerateDataKeyPairRequest& WithEncryptionContext(const Aws::Map<Aws::String, Aws::String>& value) { SetEncryptionContext(value); return *this;}

    /**
     * <p>Specifies the encryption context that will be used when encrypting the
     * private key in the data key pair.</p>  <p>Do not include confidential
     * or sensitive information in this field. This field may be displayed in plaintext
     * in CloudTrail logs and other output.</p>  <p>An <i>encryption
     * context</i> is a collection of non-secret key-value pairs that represent
     * additional authenticated data. When you use an encryption context to encrypt
     * data, you must specify the same (an exact case-sensitive match) encryption
     * context to decrypt the data. An encryption context is supported only on
     * operations with symmetric encryption KMS keys. On operations with symmetric
     * encryption KMS keys, an encryption context is optional, but it is strongly
     * recommended.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#encrypt_context">Encryption
     * context</a> in the <i>Key Management Service Developer Guide</i>.</p>
     */
    inline GenerateDataKeyPairRequest& WithEncryptionContext(Aws::Map<Aws::String, Aws::String>&& value) { SetEncryptionContext(std::move(value)); return *this;}

    /**
     * <p>Specifies the encryption context that will be used when encrypting the
     * private key in the data key pair.</p>  <p>Do not include confidential
     * or sensitive information in this field. This field may be displayed in plaintext
     * in CloudTrail logs and other output.</p>  <p>An <i>encryption
     * context</i> is a collection of non-secret key-value pairs that represent
     * additional authenticated data. When you use an encryption context to encrypt
     * data, you must specify the same (an exact case-sensitive match) encryption
     * context to decrypt the data. An encryption context is supported only on
     * operations with symmetric encryption KMS keys. On operations with symmetric
     * encryption KMS keys, an encryption context is optional, but it is strongly
     * recommended.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#encrypt_context">Encryption
     * context</a> in the <i>Key Management Service Developer Guide</i>.</p>
     */
    inline GenerateDataKeyPairRequest& AddEncryptionContext(const Aws::String& key, const Aws::String& value) { m_encryptionContextHasBeenSet = true; m_encryptionContext.emplace(key, value); return *this; }

    /**
     * <p>Specifies the encryption context that will be used when encrypting the
     * private key in the data key pair.</p>  <p>Do not include confidential
     * or sensitive information in this field. This field may be displayed in plaintext
     * in CloudTrail logs and other output.</p>  <p>An <i>encryption
     * context</i> is a collection of non-secret key-value pairs that represent
     * additional authenticated data. When you use an encryption context to encrypt
     * data, you must specify the same (an exact case-sensitive match) encryption
     * context to decrypt the data. An encryption context is supported only on
     * operations with symmetric encryption KMS keys. On operations with symmetric
     * encryption KMS keys, an encryption context is optional, but it is strongly
     * recommended.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#encrypt_context">Encryption
     * context</a> in the <i>Key Management Service Developer Guide</i>.</p>
     */
    inline GenerateDataKeyPairRequest& AddEncryptionContext(Aws::String&& key, const Aws::String& value) { m_encryptionContextHasBeenSet = true; m_encryptionContext.emplace(std::move(key), value); return *this; }

    /**
     * <p>Specifies the encryption context that will be used when encrypting the
     * private key in the data key pair.</p>  <p>Do not include confidential
     * or sensitive information in this field. This field may be displayed in plaintext
     * in CloudTrail logs and other output.</p>  <p>An <i>encryption
     * context</i> is a collection of non-secret key-value pairs that represent
     * additional authenticated data. When you use an encryption context to encrypt
     * data, you must specify the same (an exact case-sensitive match) encryption
     * context to decrypt the data. An encryption context is supported only on
     * operations with symmetric encryption KMS keys. On operations with symmetric
     * encryption KMS keys, an encryption context is optional, but it is strongly
     * recommended.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#encrypt_context">Encryption
     * context</a> in the <i>Key Management Service Developer Guide</i>.</p>
     */
    inline GenerateDataKeyPairRequest& AddEncryptionContext(const Aws::String& key, Aws::String&& value) { m_encryptionContextHasBeenSet = true; m_encryptionContext.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Specifies the encryption context that will be used when encrypting the
     * private key in the data key pair.</p>  <p>Do not include confidential
     * or sensitive information in this field. This field may be displayed in plaintext
     * in CloudTrail logs and other output.</p>  <p>An <i>encryption
     * context</i> is a collection of non-secret key-value pairs that represent
     * additional authenticated data. When you use an encryption context to encrypt
     * data, you must specify the same (an exact case-sensitive match) encryption
     * context to decrypt the data. An encryption context is supported only on
     * operations with symmetric encryption KMS keys. On operations with symmetric
     * encryption KMS keys, an encryption context is optional, but it is strongly
     * recommended.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#encrypt_context">Encryption
     * context</a> in the <i>Key Management Service Developer Guide</i>.</p>
     */
    inline GenerateDataKeyPairRequest& AddEncryptionContext(Aws::String&& key, Aws::String&& value) { m_encryptionContextHasBeenSet = true; m_encryptionContext.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Specifies the encryption context that will be used when encrypting the
     * private key in the data key pair.</p>  <p>Do not include confidential
     * or sensitive information in this field. This field may be displayed in plaintext
     * in CloudTrail logs and other output.</p>  <p>An <i>encryption
     * context</i> is a collection of non-secret key-value pairs that represent
     * additional authenticated data. When you use an encryption context to encrypt
     * data, you must specify the same (an exact case-sensitive match) encryption
     * context to decrypt the data. An encryption context is supported only on
     * operations with symmetric encryption KMS keys. On operations with symmetric
     * encryption KMS keys, an encryption context is optional, but it is strongly
     * recommended.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#encrypt_context">Encryption
     * context</a> in the <i>Key Management Service Developer Guide</i>.</p>
     */
    inline GenerateDataKeyPairRequest& AddEncryptionContext(const char* key, Aws::String&& value) { m_encryptionContextHasBeenSet = true; m_encryptionContext.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Specifies the encryption context that will be used when encrypting the
     * private key in the data key pair.</p>  <p>Do not include confidential
     * or sensitive information in this field. This field may be displayed in plaintext
     * in CloudTrail logs and other output.</p>  <p>An <i>encryption
     * context</i> is a collection of non-secret key-value pairs that represent
     * additional authenticated data. When you use an encryption context to encrypt
     * data, you must specify the same (an exact case-sensitive match) encryption
     * context to decrypt the data. An encryption context is supported only on
     * operations with symmetric encryption KMS keys. On operations with symmetric
     * encryption KMS keys, an encryption context is optional, but it is strongly
     * recommended.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#encrypt_context">Encryption
     * context</a> in the <i>Key Management Service Developer Guide</i>.</p>
     */
    inline GenerateDataKeyPairRequest& AddEncryptionContext(Aws::String&& key, const char* value) { m_encryptionContextHasBeenSet = true; m_encryptionContext.emplace(std::move(key), value); return *this; }

    /**
     * <p>Specifies the encryption context that will be used when encrypting the
     * private key in the data key pair.</p>  <p>Do not include confidential
     * or sensitive information in this field. This field may be displayed in plaintext
     * in CloudTrail logs and other output.</p>  <p>An <i>encryption
     * context</i> is a collection of non-secret key-value pairs that represent
     * additional authenticated data. When you use an encryption context to encrypt
     * data, you must specify the same (an exact case-sensitive match) encryption
     * context to decrypt the data. An encryption context is supported only on
     * operations with symmetric encryption KMS keys. On operations with symmetric
     * encryption KMS keys, an encryption context is optional, but it is strongly
     * recommended.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#encrypt_context">Encryption
     * context</a> in the <i>Key Management Service Developer Guide</i>.</p>
     */
    inline GenerateDataKeyPairRequest& AddEncryptionContext(const char* key, const char* value) { m_encryptionContextHasBeenSet = true; m_encryptionContext.emplace(key, value); return *this; }


    /**
     * <p>Specifies the symmetric encryption KMS key that encrypts the private key in
     * the data key pair. You cannot specify an asymmetric KMS key or a KMS key in a
     * custom key store. To get the type and origin of your KMS key, use the
     * <a>DescribeKey</a> operation.</p> <p>To specify a KMS key, use its key ID, key
     * ARN, alias name, or alias ARN. When using an alias name, prefix it with
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
    inline const Aws::String& GetKeyId() const{ return m_keyId; }

    /**
     * <p>Specifies the symmetric encryption KMS key that encrypts the private key in
     * the data key pair. You cannot specify an asymmetric KMS key or a KMS key in a
     * custom key store. To get the type and origin of your KMS key, use the
     * <a>DescribeKey</a> operation.</p> <p>To specify a KMS key, use its key ID, key
     * ARN, alias name, or alias ARN. When using an alias name, prefix it with
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
    inline bool KeyIdHasBeenSet() const { return m_keyIdHasBeenSet; }

    /**
     * <p>Specifies the symmetric encryption KMS key that encrypts the private key in
     * the data key pair. You cannot specify an asymmetric KMS key or a KMS key in a
     * custom key store. To get the type and origin of your KMS key, use the
     * <a>DescribeKey</a> operation.</p> <p>To specify a KMS key, use its key ID, key
     * ARN, alias name, or alias ARN. When using an alias name, prefix it with
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
    inline void SetKeyId(const Aws::String& value) { m_keyIdHasBeenSet = true; m_keyId = value; }

    /**
     * <p>Specifies the symmetric encryption KMS key that encrypts the private key in
     * the data key pair. You cannot specify an asymmetric KMS key or a KMS key in a
     * custom key store. To get the type and origin of your KMS key, use the
     * <a>DescribeKey</a> operation.</p> <p>To specify a KMS key, use its key ID, key
     * ARN, alias name, or alias ARN. When using an alias name, prefix it with
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
    inline void SetKeyId(Aws::String&& value) { m_keyIdHasBeenSet = true; m_keyId = std::move(value); }

    /**
     * <p>Specifies the symmetric encryption KMS key that encrypts the private key in
     * the data key pair. You cannot specify an asymmetric KMS key or a KMS key in a
     * custom key store. To get the type and origin of your KMS key, use the
     * <a>DescribeKey</a> operation.</p> <p>To specify a KMS key, use its key ID, key
     * ARN, alias name, or alias ARN. When using an alias name, prefix it with
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
    inline void SetKeyId(const char* value) { m_keyIdHasBeenSet = true; m_keyId.assign(value); }

    /**
     * <p>Specifies the symmetric encryption KMS key that encrypts the private key in
     * the data key pair. You cannot specify an asymmetric KMS key or a KMS key in a
     * custom key store. To get the type and origin of your KMS key, use the
     * <a>DescribeKey</a> operation.</p> <p>To specify a KMS key, use its key ID, key
     * ARN, alias name, or alias ARN. When using an alias name, prefix it with
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
    inline GenerateDataKeyPairRequest& WithKeyId(const Aws::String& value) { SetKeyId(value); return *this;}

    /**
     * <p>Specifies the symmetric encryption KMS key that encrypts the private key in
     * the data key pair. You cannot specify an asymmetric KMS key or a KMS key in a
     * custom key store. To get the type and origin of your KMS key, use the
     * <a>DescribeKey</a> operation.</p> <p>To specify a KMS key, use its key ID, key
     * ARN, alias name, or alias ARN. When using an alias name, prefix it with
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
    inline GenerateDataKeyPairRequest& WithKeyId(Aws::String&& value) { SetKeyId(std::move(value)); return *this;}

    /**
     * <p>Specifies the symmetric encryption KMS key that encrypts the private key in
     * the data key pair. You cannot specify an asymmetric KMS key or a KMS key in a
     * custom key store. To get the type and origin of your KMS key, use the
     * <a>DescribeKey</a> operation.</p> <p>To specify a KMS key, use its key ID, key
     * ARN, alias name, or alias ARN. When using an alias name, prefix it with
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
    inline GenerateDataKeyPairRequest& WithKeyId(const char* value) { SetKeyId(value); return *this;}


    /**
     * <p>Determines the type of data key pair that is generated. </p> <p>The KMS rule
     * that restricts the use of asymmetric RSA and SM2 KMS keys to encrypt and decrypt
     * or to sign and verify (but not both), and the rule that permits you to use ECC
     * KMS keys only to sign and verify, are not effective on data key pairs, which are
     * used outside of KMS. The SM2 key spec is only available in China Regions.</p>
     */
    inline const DataKeyPairSpec& GetKeyPairSpec() const{ return m_keyPairSpec; }

    /**
     * <p>Determines the type of data key pair that is generated. </p> <p>The KMS rule
     * that restricts the use of asymmetric RSA and SM2 KMS keys to encrypt and decrypt
     * or to sign and verify (but not both), and the rule that permits you to use ECC
     * KMS keys only to sign and verify, are not effective on data key pairs, which are
     * used outside of KMS. The SM2 key spec is only available in China Regions.</p>
     */
    inline bool KeyPairSpecHasBeenSet() const { return m_keyPairSpecHasBeenSet; }

    /**
     * <p>Determines the type of data key pair that is generated. </p> <p>The KMS rule
     * that restricts the use of asymmetric RSA and SM2 KMS keys to encrypt and decrypt
     * or to sign and verify (but not both), and the rule that permits you to use ECC
     * KMS keys only to sign and verify, are not effective on data key pairs, which are
     * used outside of KMS. The SM2 key spec is only available in China Regions.</p>
     */
    inline void SetKeyPairSpec(const DataKeyPairSpec& value) { m_keyPairSpecHasBeenSet = true; m_keyPairSpec = value; }

    /**
     * <p>Determines the type of data key pair that is generated. </p> <p>The KMS rule
     * that restricts the use of asymmetric RSA and SM2 KMS keys to encrypt and decrypt
     * or to sign and verify (but not both), and the rule that permits you to use ECC
     * KMS keys only to sign and verify, are not effective on data key pairs, which are
     * used outside of KMS. The SM2 key spec is only available in China Regions.</p>
     */
    inline void SetKeyPairSpec(DataKeyPairSpec&& value) { m_keyPairSpecHasBeenSet = true; m_keyPairSpec = std::move(value); }

    /**
     * <p>Determines the type of data key pair that is generated. </p> <p>The KMS rule
     * that restricts the use of asymmetric RSA and SM2 KMS keys to encrypt and decrypt
     * or to sign and verify (but not both), and the rule that permits you to use ECC
     * KMS keys only to sign and verify, are not effective on data key pairs, which are
     * used outside of KMS. The SM2 key spec is only available in China Regions.</p>
     */
    inline GenerateDataKeyPairRequest& WithKeyPairSpec(const DataKeyPairSpec& value) { SetKeyPairSpec(value); return *this;}

    /**
     * <p>Determines the type of data key pair that is generated. </p> <p>The KMS rule
     * that restricts the use of asymmetric RSA and SM2 KMS keys to encrypt and decrypt
     * or to sign and verify (but not both), and the rule that permits you to use ECC
     * KMS keys only to sign and verify, are not effective on data key pairs, which are
     * used outside of KMS. The SM2 key spec is only available in China Regions.</p>
     */
    inline GenerateDataKeyPairRequest& WithKeyPairSpec(DataKeyPairSpec&& value) { SetKeyPairSpec(std::move(value)); return *this;}


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
    inline GenerateDataKeyPairRequest& WithGrantTokens(const Aws::Vector<Aws::String>& value) { SetGrantTokens(value); return *this;}

    /**
     * <p>A list of grant tokens.</p> <p>Use a grant token when your permission to call
     * this operation comes from a new grant that has not yet achieved <i>eventual
     * consistency</i>. For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/grants.html#grant_token">Grant
     * token</a> and <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/grant-manage.html#using-grant-token">Using
     * a grant token</a> in the <i>Key Management Service Developer Guide</i>.</p>
     */
    inline GenerateDataKeyPairRequest& WithGrantTokens(Aws::Vector<Aws::String>&& value) { SetGrantTokens(std::move(value)); return *this;}

    /**
     * <p>A list of grant tokens.</p> <p>Use a grant token when your permission to call
     * this operation comes from a new grant that has not yet achieved <i>eventual
     * consistency</i>. For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/grants.html#grant_token">Grant
     * token</a> and <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/grant-manage.html#using-grant-token">Using
     * a grant token</a> in the <i>Key Management Service Developer Guide</i>.</p>
     */
    inline GenerateDataKeyPairRequest& AddGrantTokens(const Aws::String& value) { m_grantTokensHasBeenSet = true; m_grantTokens.push_back(value); return *this; }

    /**
     * <p>A list of grant tokens.</p> <p>Use a grant token when your permission to call
     * this operation comes from a new grant that has not yet achieved <i>eventual
     * consistency</i>. For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/grants.html#grant_token">Grant
     * token</a> and <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/grant-manage.html#using-grant-token">Using
     * a grant token</a> in the <i>Key Management Service Developer Guide</i>.</p>
     */
    inline GenerateDataKeyPairRequest& AddGrantTokens(Aws::String&& value) { m_grantTokensHasBeenSet = true; m_grantTokens.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of grant tokens.</p> <p>Use a grant token when your permission to call
     * this operation comes from a new grant that has not yet achieved <i>eventual
     * consistency</i>. For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/grants.html#grant_token">Grant
     * token</a> and <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/grant-manage.html#using-grant-token">Using
     * a grant token</a> in the <i>Key Management Service Developer Guide</i>.</p>
     */
    inline GenerateDataKeyPairRequest& AddGrantTokens(const char* value) { m_grantTokensHasBeenSet = true; m_grantTokens.push_back(value); return *this; }


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
     * you use this parameter, instead of returning a plaintext copy of the private
     * data key, KMS encrypts the plaintext private data key under the public key in
     * the attestation document, and returns the resulting ciphertext in the
     * <code>CiphertextForRecipient</code> field in the response. This ciphertext can
     * be decrypted only with the private key in the enclave. The
     * <code>CiphertextBlob</code> field in the response contains a copy of the private
     * data key encrypted under the KMS key specified by the <code>KeyId</code>
     * parameter. The <code>PrivateKeyPlaintext</code> field in the response is null or
     * empty.</p> <p>For information about the interaction between KMS and Amazon Web
     * Services Nitro Enclaves, see <a
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
     * you use this parameter, instead of returning a plaintext copy of the private
     * data key, KMS encrypts the plaintext private data key under the public key in
     * the attestation document, and returns the resulting ciphertext in the
     * <code>CiphertextForRecipient</code> field in the response. This ciphertext can
     * be decrypted only with the private key in the enclave. The
     * <code>CiphertextBlob</code> field in the response contains a copy of the private
     * data key encrypted under the KMS key specified by the <code>KeyId</code>
     * parameter. The <code>PrivateKeyPlaintext</code> field in the response is null or
     * empty.</p> <p>For information about the interaction between KMS and Amazon Web
     * Services Nitro Enclaves, see <a
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
     * you use this parameter, instead of returning a plaintext copy of the private
     * data key, KMS encrypts the plaintext private data key under the public key in
     * the attestation document, and returns the resulting ciphertext in the
     * <code>CiphertextForRecipient</code> field in the response. This ciphertext can
     * be decrypted only with the private key in the enclave. The
     * <code>CiphertextBlob</code> field in the response contains a copy of the private
     * data key encrypted under the KMS key specified by the <code>KeyId</code>
     * parameter. The <code>PrivateKeyPlaintext</code> field in the response is null or
     * empty.</p> <p>For information about the interaction between KMS and Amazon Web
     * Services Nitro Enclaves, see <a
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
     * you use this parameter, instead of returning a plaintext copy of the private
     * data key, KMS encrypts the plaintext private data key under the public key in
     * the attestation document, and returns the resulting ciphertext in the
     * <code>CiphertextForRecipient</code> field in the response. This ciphertext can
     * be decrypted only with the private key in the enclave. The
     * <code>CiphertextBlob</code> field in the response contains a copy of the private
     * data key encrypted under the KMS key specified by the <code>KeyId</code>
     * parameter. The <code>PrivateKeyPlaintext</code> field in the response is null or
     * empty.</p> <p>For information about the interaction between KMS and Amazon Web
     * Services Nitro Enclaves, see <a
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
     * you use this parameter, instead of returning a plaintext copy of the private
     * data key, KMS encrypts the plaintext private data key under the public key in
     * the attestation document, and returns the resulting ciphertext in the
     * <code>CiphertextForRecipient</code> field in the response. This ciphertext can
     * be decrypted only with the private key in the enclave. The
     * <code>CiphertextBlob</code> field in the response contains a copy of the private
     * data key encrypted under the KMS key specified by the <code>KeyId</code>
     * parameter. The <code>PrivateKeyPlaintext</code> field in the response is null or
     * empty.</p> <p>For information about the interaction between KMS and Amazon Web
     * Services Nitro Enclaves, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/services-nitro-enclaves.html">How
     * Amazon Web Services Nitro Enclaves uses KMS</a> in the <i>Key Management Service
     * Developer Guide</i>.</p>
     */
    inline GenerateDataKeyPairRequest& WithRecipient(const RecipientInfo& value) { SetRecipient(value); return *this;}

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
     * you use this parameter, instead of returning a plaintext copy of the private
     * data key, KMS encrypts the plaintext private data key under the public key in
     * the attestation document, and returns the resulting ciphertext in the
     * <code>CiphertextForRecipient</code> field in the response. This ciphertext can
     * be decrypted only with the private key in the enclave. The
     * <code>CiphertextBlob</code> field in the response contains a copy of the private
     * data key encrypted under the KMS key specified by the <code>KeyId</code>
     * parameter. The <code>PrivateKeyPlaintext</code> field in the response is null or
     * empty.</p> <p>For information about the interaction between KMS and Amazon Web
     * Services Nitro Enclaves, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/services-nitro-enclaves.html">How
     * Amazon Web Services Nitro Enclaves uses KMS</a> in the <i>Key Management Service
     * Developer Guide</i>.</p>
     */
    inline GenerateDataKeyPairRequest& WithRecipient(RecipientInfo&& value) { SetRecipient(std::move(value)); return *this;}


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
    inline GenerateDataKeyPairRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}

  private:

    Aws::Map<Aws::String, Aws::String> m_encryptionContext;
    bool m_encryptionContextHasBeenSet = false;

    Aws::String m_keyId;
    bool m_keyIdHasBeenSet = false;

    DataKeyPairSpec m_keyPairSpec;
    bool m_keyPairSpecHasBeenSet = false;

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
