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
#include <utility>

namespace Aws
{
namespace KMS
{
namespace Model
{

  /**
   */
  class AWS_KMS_API GenerateDataKeyPairRequest : public KMSRequest
  {
  public:
    GenerateDataKeyPairRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GenerateDataKeyPair"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Specifies the encryption context that will be used when encrypting the
     * private key in the data key pair.</p> <p>An <i>encryption context</i> is a
     * collection of non-secret key-value pairs that represents additional
     * authenticated data. When you use an encryption context to encrypt data, you must
     * specify the same (an exact case-sensitive match) encryption context to decrypt
     * the data. An encryption context is optional when encrypting with a symmetric
     * CMK, but it is highly recommended.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#encrypt_context">Encryption
     * Context</a> in the <i>AWS Key Management Service Developer Guide</i>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetEncryptionContext() const{ return m_encryptionContext; }

    /**
     * <p>Specifies the encryption context that will be used when encrypting the
     * private key in the data key pair.</p> <p>An <i>encryption context</i> is a
     * collection of non-secret key-value pairs that represents additional
     * authenticated data. When you use an encryption context to encrypt data, you must
     * specify the same (an exact case-sensitive match) encryption context to decrypt
     * the data. An encryption context is optional when encrypting with a symmetric
     * CMK, but it is highly recommended.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#encrypt_context">Encryption
     * Context</a> in the <i>AWS Key Management Service Developer Guide</i>.</p>
     */
    inline bool EncryptionContextHasBeenSet() const { return m_encryptionContextHasBeenSet; }

    /**
     * <p>Specifies the encryption context that will be used when encrypting the
     * private key in the data key pair.</p> <p>An <i>encryption context</i> is a
     * collection of non-secret key-value pairs that represents additional
     * authenticated data. When you use an encryption context to encrypt data, you must
     * specify the same (an exact case-sensitive match) encryption context to decrypt
     * the data. An encryption context is optional when encrypting with a symmetric
     * CMK, but it is highly recommended.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#encrypt_context">Encryption
     * Context</a> in the <i>AWS Key Management Service Developer Guide</i>.</p>
     */
    inline void SetEncryptionContext(const Aws::Map<Aws::String, Aws::String>& value) { m_encryptionContextHasBeenSet = true; m_encryptionContext = value; }

    /**
     * <p>Specifies the encryption context that will be used when encrypting the
     * private key in the data key pair.</p> <p>An <i>encryption context</i> is a
     * collection of non-secret key-value pairs that represents additional
     * authenticated data. When you use an encryption context to encrypt data, you must
     * specify the same (an exact case-sensitive match) encryption context to decrypt
     * the data. An encryption context is optional when encrypting with a symmetric
     * CMK, but it is highly recommended.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#encrypt_context">Encryption
     * Context</a> in the <i>AWS Key Management Service Developer Guide</i>.</p>
     */
    inline void SetEncryptionContext(Aws::Map<Aws::String, Aws::String>&& value) { m_encryptionContextHasBeenSet = true; m_encryptionContext = std::move(value); }

    /**
     * <p>Specifies the encryption context that will be used when encrypting the
     * private key in the data key pair.</p> <p>An <i>encryption context</i> is a
     * collection of non-secret key-value pairs that represents additional
     * authenticated data. When you use an encryption context to encrypt data, you must
     * specify the same (an exact case-sensitive match) encryption context to decrypt
     * the data. An encryption context is optional when encrypting with a symmetric
     * CMK, but it is highly recommended.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#encrypt_context">Encryption
     * Context</a> in the <i>AWS Key Management Service Developer Guide</i>.</p>
     */
    inline GenerateDataKeyPairRequest& WithEncryptionContext(const Aws::Map<Aws::String, Aws::String>& value) { SetEncryptionContext(value); return *this;}

    /**
     * <p>Specifies the encryption context that will be used when encrypting the
     * private key in the data key pair.</p> <p>An <i>encryption context</i> is a
     * collection of non-secret key-value pairs that represents additional
     * authenticated data. When you use an encryption context to encrypt data, you must
     * specify the same (an exact case-sensitive match) encryption context to decrypt
     * the data. An encryption context is optional when encrypting with a symmetric
     * CMK, but it is highly recommended.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#encrypt_context">Encryption
     * Context</a> in the <i>AWS Key Management Service Developer Guide</i>.</p>
     */
    inline GenerateDataKeyPairRequest& WithEncryptionContext(Aws::Map<Aws::String, Aws::String>&& value) { SetEncryptionContext(std::move(value)); return *this;}

    /**
     * <p>Specifies the encryption context that will be used when encrypting the
     * private key in the data key pair.</p> <p>An <i>encryption context</i> is a
     * collection of non-secret key-value pairs that represents additional
     * authenticated data. When you use an encryption context to encrypt data, you must
     * specify the same (an exact case-sensitive match) encryption context to decrypt
     * the data. An encryption context is optional when encrypting with a symmetric
     * CMK, but it is highly recommended.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#encrypt_context">Encryption
     * Context</a> in the <i>AWS Key Management Service Developer Guide</i>.</p>
     */
    inline GenerateDataKeyPairRequest& AddEncryptionContext(const Aws::String& key, const Aws::String& value) { m_encryptionContextHasBeenSet = true; m_encryptionContext.emplace(key, value); return *this; }

    /**
     * <p>Specifies the encryption context that will be used when encrypting the
     * private key in the data key pair.</p> <p>An <i>encryption context</i> is a
     * collection of non-secret key-value pairs that represents additional
     * authenticated data. When you use an encryption context to encrypt data, you must
     * specify the same (an exact case-sensitive match) encryption context to decrypt
     * the data. An encryption context is optional when encrypting with a symmetric
     * CMK, but it is highly recommended.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#encrypt_context">Encryption
     * Context</a> in the <i>AWS Key Management Service Developer Guide</i>.</p>
     */
    inline GenerateDataKeyPairRequest& AddEncryptionContext(Aws::String&& key, const Aws::String& value) { m_encryptionContextHasBeenSet = true; m_encryptionContext.emplace(std::move(key), value); return *this; }

    /**
     * <p>Specifies the encryption context that will be used when encrypting the
     * private key in the data key pair.</p> <p>An <i>encryption context</i> is a
     * collection of non-secret key-value pairs that represents additional
     * authenticated data. When you use an encryption context to encrypt data, you must
     * specify the same (an exact case-sensitive match) encryption context to decrypt
     * the data. An encryption context is optional when encrypting with a symmetric
     * CMK, but it is highly recommended.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#encrypt_context">Encryption
     * Context</a> in the <i>AWS Key Management Service Developer Guide</i>.</p>
     */
    inline GenerateDataKeyPairRequest& AddEncryptionContext(const Aws::String& key, Aws::String&& value) { m_encryptionContextHasBeenSet = true; m_encryptionContext.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Specifies the encryption context that will be used when encrypting the
     * private key in the data key pair.</p> <p>An <i>encryption context</i> is a
     * collection of non-secret key-value pairs that represents additional
     * authenticated data. When you use an encryption context to encrypt data, you must
     * specify the same (an exact case-sensitive match) encryption context to decrypt
     * the data. An encryption context is optional when encrypting with a symmetric
     * CMK, but it is highly recommended.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#encrypt_context">Encryption
     * Context</a> in the <i>AWS Key Management Service Developer Guide</i>.</p>
     */
    inline GenerateDataKeyPairRequest& AddEncryptionContext(Aws::String&& key, Aws::String&& value) { m_encryptionContextHasBeenSet = true; m_encryptionContext.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Specifies the encryption context that will be used when encrypting the
     * private key in the data key pair.</p> <p>An <i>encryption context</i> is a
     * collection of non-secret key-value pairs that represents additional
     * authenticated data. When you use an encryption context to encrypt data, you must
     * specify the same (an exact case-sensitive match) encryption context to decrypt
     * the data. An encryption context is optional when encrypting with a symmetric
     * CMK, but it is highly recommended.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#encrypt_context">Encryption
     * Context</a> in the <i>AWS Key Management Service Developer Guide</i>.</p>
     */
    inline GenerateDataKeyPairRequest& AddEncryptionContext(const char* key, Aws::String&& value) { m_encryptionContextHasBeenSet = true; m_encryptionContext.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Specifies the encryption context that will be used when encrypting the
     * private key in the data key pair.</p> <p>An <i>encryption context</i> is a
     * collection of non-secret key-value pairs that represents additional
     * authenticated data. When you use an encryption context to encrypt data, you must
     * specify the same (an exact case-sensitive match) encryption context to decrypt
     * the data. An encryption context is optional when encrypting with a symmetric
     * CMK, but it is highly recommended.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#encrypt_context">Encryption
     * Context</a> in the <i>AWS Key Management Service Developer Guide</i>.</p>
     */
    inline GenerateDataKeyPairRequest& AddEncryptionContext(Aws::String&& key, const char* value) { m_encryptionContextHasBeenSet = true; m_encryptionContext.emplace(std::move(key), value); return *this; }

    /**
     * <p>Specifies the encryption context that will be used when encrypting the
     * private key in the data key pair.</p> <p>An <i>encryption context</i> is a
     * collection of non-secret key-value pairs that represents additional
     * authenticated data. When you use an encryption context to encrypt data, you must
     * specify the same (an exact case-sensitive match) encryption context to decrypt
     * the data. An encryption context is optional when encrypting with a symmetric
     * CMK, but it is highly recommended.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#encrypt_context">Encryption
     * Context</a> in the <i>AWS Key Management Service Developer Guide</i>.</p>
     */
    inline GenerateDataKeyPairRequest& AddEncryptionContext(const char* key, const char* value) { m_encryptionContextHasBeenSet = true; m_encryptionContext.emplace(key, value); return *this; }


    /**
     * <p>Specifies the symmetric CMK that encrypts the private key in the data key
     * pair. You cannot specify an asymmetric CMK or a CMK in a custom key store. To
     * get the type and origin of your CMK, use the <a>DescribeKey</a> operation.</p>
     * <p>To specify a CMK, use its key ID, Amazon Resource Name (ARN), alias name, or
     * alias ARN. When using an alias name, prefix it with <code>"alias/"</code>. To
     * specify a CMK in a different AWS account, you must use the key ARN or alias
     * ARN.</p> <p>For example:</p> <ul> <li> <p>Key ID:
     * <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li> <li> <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> <li> <p>Alias name: <code>alias/ExampleAlias</code> </p> </li> <li>
     * <p>Alias ARN: <code>arn:aws:kms:us-east-2:111122223333:alias/ExampleAlias</code>
     * </p> </li> </ul> <p>To get the key ID and key ARN for a CMK, use <a>ListKeys</a>
     * or <a>DescribeKey</a>. To get the alias name and alias ARN, use
     * <a>ListAliases</a>.</p>
     */
    inline const Aws::String& GetKeyId() const{ return m_keyId; }

    /**
     * <p>Specifies the symmetric CMK that encrypts the private key in the data key
     * pair. You cannot specify an asymmetric CMK or a CMK in a custom key store. To
     * get the type and origin of your CMK, use the <a>DescribeKey</a> operation.</p>
     * <p>To specify a CMK, use its key ID, Amazon Resource Name (ARN), alias name, or
     * alias ARN. When using an alias name, prefix it with <code>"alias/"</code>. To
     * specify a CMK in a different AWS account, you must use the key ARN or alias
     * ARN.</p> <p>For example:</p> <ul> <li> <p>Key ID:
     * <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li> <li> <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> <li> <p>Alias name: <code>alias/ExampleAlias</code> </p> </li> <li>
     * <p>Alias ARN: <code>arn:aws:kms:us-east-2:111122223333:alias/ExampleAlias</code>
     * </p> </li> </ul> <p>To get the key ID and key ARN for a CMK, use <a>ListKeys</a>
     * or <a>DescribeKey</a>. To get the alias name and alias ARN, use
     * <a>ListAliases</a>.</p>
     */
    inline bool KeyIdHasBeenSet() const { return m_keyIdHasBeenSet; }

    /**
     * <p>Specifies the symmetric CMK that encrypts the private key in the data key
     * pair. You cannot specify an asymmetric CMK or a CMK in a custom key store. To
     * get the type and origin of your CMK, use the <a>DescribeKey</a> operation.</p>
     * <p>To specify a CMK, use its key ID, Amazon Resource Name (ARN), alias name, or
     * alias ARN. When using an alias name, prefix it with <code>"alias/"</code>. To
     * specify a CMK in a different AWS account, you must use the key ARN or alias
     * ARN.</p> <p>For example:</p> <ul> <li> <p>Key ID:
     * <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li> <li> <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> <li> <p>Alias name: <code>alias/ExampleAlias</code> </p> </li> <li>
     * <p>Alias ARN: <code>arn:aws:kms:us-east-2:111122223333:alias/ExampleAlias</code>
     * </p> </li> </ul> <p>To get the key ID and key ARN for a CMK, use <a>ListKeys</a>
     * or <a>DescribeKey</a>. To get the alias name and alias ARN, use
     * <a>ListAliases</a>.</p>
     */
    inline void SetKeyId(const Aws::String& value) { m_keyIdHasBeenSet = true; m_keyId = value; }

    /**
     * <p>Specifies the symmetric CMK that encrypts the private key in the data key
     * pair. You cannot specify an asymmetric CMK or a CMK in a custom key store. To
     * get the type and origin of your CMK, use the <a>DescribeKey</a> operation.</p>
     * <p>To specify a CMK, use its key ID, Amazon Resource Name (ARN), alias name, or
     * alias ARN. When using an alias name, prefix it with <code>"alias/"</code>. To
     * specify a CMK in a different AWS account, you must use the key ARN or alias
     * ARN.</p> <p>For example:</p> <ul> <li> <p>Key ID:
     * <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li> <li> <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> <li> <p>Alias name: <code>alias/ExampleAlias</code> </p> </li> <li>
     * <p>Alias ARN: <code>arn:aws:kms:us-east-2:111122223333:alias/ExampleAlias</code>
     * </p> </li> </ul> <p>To get the key ID and key ARN for a CMK, use <a>ListKeys</a>
     * or <a>DescribeKey</a>. To get the alias name and alias ARN, use
     * <a>ListAliases</a>.</p>
     */
    inline void SetKeyId(Aws::String&& value) { m_keyIdHasBeenSet = true; m_keyId = std::move(value); }

    /**
     * <p>Specifies the symmetric CMK that encrypts the private key in the data key
     * pair. You cannot specify an asymmetric CMK or a CMK in a custom key store. To
     * get the type and origin of your CMK, use the <a>DescribeKey</a> operation.</p>
     * <p>To specify a CMK, use its key ID, Amazon Resource Name (ARN), alias name, or
     * alias ARN. When using an alias name, prefix it with <code>"alias/"</code>. To
     * specify a CMK in a different AWS account, you must use the key ARN or alias
     * ARN.</p> <p>For example:</p> <ul> <li> <p>Key ID:
     * <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li> <li> <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> <li> <p>Alias name: <code>alias/ExampleAlias</code> </p> </li> <li>
     * <p>Alias ARN: <code>arn:aws:kms:us-east-2:111122223333:alias/ExampleAlias</code>
     * </p> </li> </ul> <p>To get the key ID and key ARN for a CMK, use <a>ListKeys</a>
     * or <a>DescribeKey</a>. To get the alias name and alias ARN, use
     * <a>ListAliases</a>.</p>
     */
    inline void SetKeyId(const char* value) { m_keyIdHasBeenSet = true; m_keyId.assign(value); }

    /**
     * <p>Specifies the symmetric CMK that encrypts the private key in the data key
     * pair. You cannot specify an asymmetric CMK or a CMK in a custom key store. To
     * get the type and origin of your CMK, use the <a>DescribeKey</a> operation.</p>
     * <p>To specify a CMK, use its key ID, Amazon Resource Name (ARN), alias name, or
     * alias ARN. When using an alias name, prefix it with <code>"alias/"</code>. To
     * specify a CMK in a different AWS account, you must use the key ARN or alias
     * ARN.</p> <p>For example:</p> <ul> <li> <p>Key ID:
     * <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li> <li> <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> <li> <p>Alias name: <code>alias/ExampleAlias</code> </p> </li> <li>
     * <p>Alias ARN: <code>arn:aws:kms:us-east-2:111122223333:alias/ExampleAlias</code>
     * </p> </li> </ul> <p>To get the key ID and key ARN for a CMK, use <a>ListKeys</a>
     * or <a>DescribeKey</a>. To get the alias name and alias ARN, use
     * <a>ListAliases</a>.</p>
     */
    inline GenerateDataKeyPairRequest& WithKeyId(const Aws::String& value) { SetKeyId(value); return *this;}

    /**
     * <p>Specifies the symmetric CMK that encrypts the private key in the data key
     * pair. You cannot specify an asymmetric CMK or a CMK in a custom key store. To
     * get the type and origin of your CMK, use the <a>DescribeKey</a> operation.</p>
     * <p>To specify a CMK, use its key ID, Amazon Resource Name (ARN), alias name, or
     * alias ARN. When using an alias name, prefix it with <code>"alias/"</code>. To
     * specify a CMK in a different AWS account, you must use the key ARN or alias
     * ARN.</p> <p>For example:</p> <ul> <li> <p>Key ID:
     * <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li> <li> <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> <li> <p>Alias name: <code>alias/ExampleAlias</code> </p> </li> <li>
     * <p>Alias ARN: <code>arn:aws:kms:us-east-2:111122223333:alias/ExampleAlias</code>
     * </p> </li> </ul> <p>To get the key ID and key ARN for a CMK, use <a>ListKeys</a>
     * or <a>DescribeKey</a>. To get the alias name and alias ARN, use
     * <a>ListAliases</a>.</p>
     */
    inline GenerateDataKeyPairRequest& WithKeyId(Aws::String&& value) { SetKeyId(std::move(value)); return *this;}

    /**
     * <p>Specifies the symmetric CMK that encrypts the private key in the data key
     * pair. You cannot specify an asymmetric CMK or a CMK in a custom key store. To
     * get the type and origin of your CMK, use the <a>DescribeKey</a> operation.</p>
     * <p>To specify a CMK, use its key ID, Amazon Resource Name (ARN), alias name, or
     * alias ARN. When using an alias name, prefix it with <code>"alias/"</code>. To
     * specify a CMK in a different AWS account, you must use the key ARN or alias
     * ARN.</p> <p>For example:</p> <ul> <li> <p>Key ID:
     * <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li> <li> <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> <li> <p>Alias name: <code>alias/ExampleAlias</code> </p> </li> <li>
     * <p>Alias ARN: <code>arn:aws:kms:us-east-2:111122223333:alias/ExampleAlias</code>
     * </p> </li> </ul> <p>To get the key ID and key ARN for a CMK, use <a>ListKeys</a>
     * or <a>DescribeKey</a>. To get the alias name and alias ARN, use
     * <a>ListAliases</a>.</p>
     */
    inline GenerateDataKeyPairRequest& WithKeyId(const char* value) { SetKeyId(value); return *this;}


    /**
     * <p>Determines the type of data key pair that is generated. </p> <p>The AWS KMS
     * rule that restricts the use of asymmetric RSA CMKs to encrypt and decrypt or to
     * sign and verify (but not both), and the rule that permits you to use ECC CMKs
     * only to sign and verify, are not effective outside of AWS KMS.</p>
     */
    inline const DataKeyPairSpec& GetKeyPairSpec() const{ return m_keyPairSpec; }

    /**
     * <p>Determines the type of data key pair that is generated. </p> <p>The AWS KMS
     * rule that restricts the use of asymmetric RSA CMKs to encrypt and decrypt or to
     * sign and verify (but not both), and the rule that permits you to use ECC CMKs
     * only to sign and verify, are not effective outside of AWS KMS.</p>
     */
    inline bool KeyPairSpecHasBeenSet() const { return m_keyPairSpecHasBeenSet; }

    /**
     * <p>Determines the type of data key pair that is generated. </p> <p>The AWS KMS
     * rule that restricts the use of asymmetric RSA CMKs to encrypt and decrypt or to
     * sign and verify (but not both), and the rule that permits you to use ECC CMKs
     * only to sign and verify, are not effective outside of AWS KMS.</p>
     */
    inline void SetKeyPairSpec(const DataKeyPairSpec& value) { m_keyPairSpecHasBeenSet = true; m_keyPairSpec = value; }

    /**
     * <p>Determines the type of data key pair that is generated. </p> <p>The AWS KMS
     * rule that restricts the use of asymmetric RSA CMKs to encrypt and decrypt or to
     * sign and verify (but not both), and the rule that permits you to use ECC CMKs
     * only to sign and verify, are not effective outside of AWS KMS.</p>
     */
    inline void SetKeyPairSpec(DataKeyPairSpec&& value) { m_keyPairSpecHasBeenSet = true; m_keyPairSpec = std::move(value); }

    /**
     * <p>Determines the type of data key pair that is generated. </p> <p>The AWS KMS
     * rule that restricts the use of asymmetric RSA CMKs to encrypt and decrypt or to
     * sign and verify (but not both), and the rule that permits you to use ECC CMKs
     * only to sign and verify, are not effective outside of AWS KMS.</p>
     */
    inline GenerateDataKeyPairRequest& WithKeyPairSpec(const DataKeyPairSpec& value) { SetKeyPairSpec(value); return *this;}

    /**
     * <p>Determines the type of data key pair that is generated. </p> <p>The AWS KMS
     * rule that restricts the use of asymmetric RSA CMKs to encrypt and decrypt or to
     * sign and verify (but not both), and the rule that permits you to use ECC CMKs
     * only to sign and verify, are not effective outside of AWS KMS.</p>
     */
    inline GenerateDataKeyPairRequest& WithKeyPairSpec(DataKeyPairSpec&& value) { SetKeyPairSpec(std::move(value)); return *this;}


    /**
     * <p>A list of grant tokens.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#grant_token">Grant
     * Tokens</a> in the <i>AWS Key Management Service Developer Guide</i>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetGrantTokens() const{ return m_grantTokens; }

    /**
     * <p>A list of grant tokens.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#grant_token">Grant
     * Tokens</a> in the <i>AWS Key Management Service Developer Guide</i>.</p>
     */
    inline bool GrantTokensHasBeenSet() const { return m_grantTokensHasBeenSet; }

    /**
     * <p>A list of grant tokens.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#grant_token">Grant
     * Tokens</a> in the <i>AWS Key Management Service Developer Guide</i>.</p>
     */
    inline void SetGrantTokens(const Aws::Vector<Aws::String>& value) { m_grantTokensHasBeenSet = true; m_grantTokens = value; }

    /**
     * <p>A list of grant tokens.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#grant_token">Grant
     * Tokens</a> in the <i>AWS Key Management Service Developer Guide</i>.</p>
     */
    inline void SetGrantTokens(Aws::Vector<Aws::String>&& value) { m_grantTokensHasBeenSet = true; m_grantTokens = std::move(value); }

    /**
     * <p>A list of grant tokens.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#grant_token">Grant
     * Tokens</a> in the <i>AWS Key Management Service Developer Guide</i>.</p>
     */
    inline GenerateDataKeyPairRequest& WithGrantTokens(const Aws::Vector<Aws::String>& value) { SetGrantTokens(value); return *this;}

    /**
     * <p>A list of grant tokens.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#grant_token">Grant
     * Tokens</a> in the <i>AWS Key Management Service Developer Guide</i>.</p>
     */
    inline GenerateDataKeyPairRequest& WithGrantTokens(Aws::Vector<Aws::String>&& value) { SetGrantTokens(std::move(value)); return *this;}

    /**
     * <p>A list of grant tokens.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#grant_token">Grant
     * Tokens</a> in the <i>AWS Key Management Service Developer Guide</i>.</p>
     */
    inline GenerateDataKeyPairRequest& AddGrantTokens(const Aws::String& value) { m_grantTokensHasBeenSet = true; m_grantTokens.push_back(value); return *this; }

    /**
     * <p>A list of grant tokens.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#grant_token">Grant
     * Tokens</a> in the <i>AWS Key Management Service Developer Guide</i>.</p>
     */
    inline GenerateDataKeyPairRequest& AddGrantTokens(Aws::String&& value) { m_grantTokensHasBeenSet = true; m_grantTokens.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of grant tokens.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#grant_token">Grant
     * Tokens</a> in the <i>AWS Key Management Service Developer Guide</i>.</p>
     */
    inline GenerateDataKeyPairRequest& AddGrantTokens(const char* value) { m_grantTokensHasBeenSet = true; m_grantTokens.push_back(value); return *this; }

  private:

    Aws::Map<Aws::String, Aws::String> m_encryptionContext;
    bool m_encryptionContextHasBeenSet;

    Aws::String m_keyId;
    bool m_keyIdHasBeenSet;

    DataKeyPairSpec m_keyPairSpec;
    bool m_keyPairSpecHasBeenSet;

    Aws::Vector<Aws::String> m_grantTokens;
    bool m_grantTokensHasBeenSet;
  };

} // namespace Model
} // namespace KMS
} // namespace Aws
