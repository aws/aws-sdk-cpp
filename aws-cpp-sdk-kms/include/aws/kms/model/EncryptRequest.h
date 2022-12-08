/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kms/KMS_EXPORTS.h>
#include <aws/kms/KMSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/Array.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kms/model/EncryptionAlgorithmSpec.h>
#include <utility>

namespace Aws
{
namespace KMS
{
namespace Model
{

  /**
   */
  class EncryptRequest : public KMSRequest
  {
  public:
    AWS_KMS_API EncryptRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "Encrypt"; }

    AWS_KMS_API Aws::String SerializePayload() const override;

    AWS_KMS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Identifies the KMS key to use in the encryption operation. The KMS key must
     * have a <code>KeyUsage</code> of <code>ENCRYPT_DECRYPT</code>. To find the
     * <code>KeyUsage</code> of a KMS key, use the <a>DescribeKey</a> operation.</p>
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
     * <p>Identifies the KMS key to use in the encryption operation. The KMS key must
     * have a <code>KeyUsage</code> of <code>ENCRYPT_DECRYPT</code>. To find the
     * <code>KeyUsage</code> of a KMS key, use the <a>DescribeKey</a> operation.</p>
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
     * <p>Identifies the KMS key to use in the encryption operation. The KMS key must
     * have a <code>KeyUsage</code> of <code>ENCRYPT_DECRYPT</code>. To find the
     * <code>KeyUsage</code> of a KMS key, use the <a>DescribeKey</a> operation.</p>
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
     * <p>Identifies the KMS key to use in the encryption operation. The KMS key must
     * have a <code>KeyUsage</code> of <code>ENCRYPT_DECRYPT</code>. To find the
     * <code>KeyUsage</code> of a KMS key, use the <a>DescribeKey</a> operation.</p>
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
     * <p>Identifies the KMS key to use in the encryption operation. The KMS key must
     * have a <code>KeyUsage</code> of <code>ENCRYPT_DECRYPT</code>. To find the
     * <code>KeyUsage</code> of a KMS key, use the <a>DescribeKey</a> operation.</p>
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
     * <p>Identifies the KMS key to use in the encryption operation. The KMS key must
     * have a <code>KeyUsage</code> of <code>ENCRYPT_DECRYPT</code>. To find the
     * <code>KeyUsage</code> of a KMS key, use the <a>DescribeKey</a> operation.</p>
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
    inline EncryptRequest& WithKeyId(const Aws::String& value) { SetKeyId(value); return *this;}

    /**
     * <p>Identifies the KMS key to use in the encryption operation. The KMS key must
     * have a <code>KeyUsage</code> of <code>ENCRYPT_DECRYPT</code>. To find the
     * <code>KeyUsage</code> of a KMS key, use the <a>DescribeKey</a> operation.</p>
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
    inline EncryptRequest& WithKeyId(Aws::String&& value) { SetKeyId(std::move(value)); return *this;}

    /**
     * <p>Identifies the KMS key to use in the encryption operation. The KMS key must
     * have a <code>KeyUsage</code> of <code>ENCRYPT_DECRYPT</code>. To find the
     * <code>KeyUsage</code> of a KMS key, use the <a>DescribeKey</a> operation.</p>
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
    inline EncryptRequest& WithKeyId(const char* value) { SetKeyId(value); return *this;}


    /**
     * <p>Data to be encrypted.</p>
     */
    inline const Aws::Utils::CryptoBuffer& GetPlaintext() const{ return m_plaintext; }

    /**
     * <p>Data to be encrypted.</p>
     */
    inline bool PlaintextHasBeenSet() const { return m_plaintextHasBeenSet; }

    /**
     * <p>Data to be encrypted.</p>
     */
    inline void SetPlaintext(const Aws::Utils::CryptoBuffer& value) { m_plaintextHasBeenSet = true; m_plaintext = value; }

    /**
     * <p>Data to be encrypted.</p>
     */
    inline void SetPlaintext(Aws::Utils::CryptoBuffer&& value) { m_plaintextHasBeenSet = true; m_plaintext = std::move(value); }

    /**
     * <p>Data to be encrypted.</p>
     */
    inline EncryptRequest& WithPlaintext(const Aws::Utils::CryptoBuffer& value) { SetPlaintext(value); return *this;}

    /**
     * <p>Data to be encrypted.</p>
     */
    inline EncryptRequest& WithPlaintext(Aws::Utils::CryptoBuffer&& value) { SetPlaintext(std::move(value)); return *this;}


    /**
     * <p>Specifies the encryption context that will be used to encrypt the data. An
     * encryption context is valid only for <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#cryptographic-operations">cryptographic
     * operations</a> with a symmetric encryption KMS key. The standard asymmetric
     * encryption algorithms and HMAC algorithms that KMS uses do not support an
     * encryption context. </p> <p>An <i>encryption context</i> is a collection of
     * non-secret key-value pairs that represent additional authenticated data. When
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
     * <p>Specifies the encryption context that will be used to encrypt the data. An
     * encryption context is valid only for <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#cryptographic-operations">cryptographic
     * operations</a> with a symmetric encryption KMS key. The standard asymmetric
     * encryption algorithms and HMAC algorithms that KMS uses do not support an
     * encryption context. </p> <p>An <i>encryption context</i> is a collection of
     * non-secret key-value pairs that represent additional authenticated data. When
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
     * <p>Specifies the encryption context that will be used to encrypt the data. An
     * encryption context is valid only for <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#cryptographic-operations">cryptographic
     * operations</a> with a symmetric encryption KMS key. The standard asymmetric
     * encryption algorithms and HMAC algorithms that KMS uses do not support an
     * encryption context. </p> <p>An <i>encryption context</i> is a collection of
     * non-secret key-value pairs that represent additional authenticated data. When
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
     * <p>Specifies the encryption context that will be used to encrypt the data. An
     * encryption context is valid only for <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#cryptographic-operations">cryptographic
     * operations</a> with a symmetric encryption KMS key. The standard asymmetric
     * encryption algorithms and HMAC algorithms that KMS uses do not support an
     * encryption context. </p> <p>An <i>encryption context</i> is a collection of
     * non-secret key-value pairs that represent additional authenticated data. When
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
     * <p>Specifies the encryption context that will be used to encrypt the data. An
     * encryption context is valid only for <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#cryptographic-operations">cryptographic
     * operations</a> with a symmetric encryption KMS key. The standard asymmetric
     * encryption algorithms and HMAC algorithms that KMS uses do not support an
     * encryption context. </p> <p>An <i>encryption context</i> is a collection of
     * non-secret key-value pairs that represent additional authenticated data. When
     * you use an encryption context to encrypt data, you must specify the same (an
     * exact case-sensitive match) encryption context to decrypt the data. An
     * encryption context is supported only on operations with symmetric encryption KMS
     * keys. On operations with symmetric encryption KMS keys, an encryption context is
     * optional, but it is strongly recommended.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#encrypt_context">Encryption
     * context</a> in the <i>Key Management Service Developer Guide</i>.</p>
     */
    inline EncryptRequest& WithEncryptionContext(const Aws::Map<Aws::String, Aws::String>& value) { SetEncryptionContext(value); return *this;}

    /**
     * <p>Specifies the encryption context that will be used to encrypt the data. An
     * encryption context is valid only for <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#cryptographic-operations">cryptographic
     * operations</a> with a symmetric encryption KMS key. The standard asymmetric
     * encryption algorithms and HMAC algorithms that KMS uses do not support an
     * encryption context. </p> <p>An <i>encryption context</i> is a collection of
     * non-secret key-value pairs that represent additional authenticated data. When
     * you use an encryption context to encrypt data, you must specify the same (an
     * exact case-sensitive match) encryption context to decrypt the data. An
     * encryption context is supported only on operations with symmetric encryption KMS
     * keys. On operations with symmetric encryption KMS keys, an encryption context is
     * optional, but it is strongly recommended.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#encrypt_context">Encryption
     * context</a> in the <i>Key Management Service Developer Guide</i>.</p>
     */
    inline EncryptRequest& WithEncryptionContext(Aws::Map<Aws::String, Aws::String>&& value) { SetEncryptionContext(std::move(value)); return *this;}

    /**
     * <p>Specifies the encryption context that will be used to encrypt the data. An
     * encryption context is valid only for <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#cryptographic-operations">cryptographic
     * operations</a> with a symmetric encryption KMS key. The standard asymmetric
     * encryption algorithms and HMAC algorithms that KMS uses do not support an
     * encryption context. </p> <p>An <i>encryption context</i> is a collection of
     * non-secret key-value pairs that represent additional authenticated data. When
     * you use an encryption context to encrypt data, you must specify the same (an
     * exact case-sensitive match) encryption context to decrypt the data. An
     * encryption context is supported only on operations with symmetric encryption KMS
     * keys. On operations with symmetric encryption KMS keys, an encryption context is
     * optional, but it is strongly recommended.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#encrypt_context">Encryption
     * context</a> in the <i>Key Management Service Developer Guide</i>.</p>
     */
    inline EncryptRequest& AddEncryptionContext(const Aws::String& key, const Aws::String& value) { m_encryptionContextHasBeenSet = true; m_encryptionContext.emplace(key, value); return *this; }

    /**
     * <p>Specifies the encryption context that will be used to encrypt the data. An
     * encryption context is valid only for <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#cryptographic-operations">cryptographic
     * operations</a> with a symmetric encryption KMS key. The standard asymmetric
     * encryption algorithms and HMAC algorithms that KMS uses do not support an
     * encryption context. </p> <p>An <i>encryption context</i> is a collection of
     * non-secret key-value pairs that represent additional authenticated data. When
     * you use an encryption context to encrypt data, you must specify the same (an
     * exact case-sensitive match) encryption context to decrypt the data. An
     * encryption context is supported only on operations with symmetric encryption KMS
     * keys. On operations with symmetric encryption KMS keys, an encryption context is
     * optional, but it is strongly recommended.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#encrypt_context">Encryption
     * context</a> in the <i>Key Management Service Developer Guide</i>.</p>
     */
    inline EncryptRequest& AddEncryptionContext(Aws::String&& key, const Aws::String& value) { m_encryptionContextHasBeenSet = true; m_encryptionContext.emplace(std::move(key), value); return *this; }

    /**
     * <p>Specifies the encryption context that will be used to encrypt the data. An
     * encryption context is valid only for <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#cryptographic-operations">cryptographic
     * operations</a> with a symmetric encryption KMS key. The standard asymmetric
     * encryption algorithms and HMAC algorithms that KMS uses do not support an
     * encryption context. </p> <p>An <i>encryption context</i> is a collection of
     * non-secret key-value pairs that represent additional authenticated data. When
     * you use an encryption context to encrypt data, you must specify the same (an
     * exact case-sensitive match) encryption context to decrypt the data. An
     * encryption context is supported only on operations with symmetric encryption KMS
     * keys. On operations with symmetric encryption KMS keys, an encryption context is
     * optional, but it is strongly recommended.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#encrypt_context">Encryption
     * context</a> in the <i>Key Management Service Developer Guide</i>.</p>
     */
    inline EncryptRequest& AddEncryptionContext(const Aws::String& key, Aws::String&& value) { m_encryptionContextHasBeenSet = true; m_encryptionContext.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Specifies the encryption context that will be used to encrypt the data. An
     * encryption context is valid only for <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#cryptographic-operations">cryptographic
     * operations</a> with a symmetric encryption KMS key. The standard asymmetric
     * encryption algorithms and HMAC algorithms that KMS uses do not support an
     * encryption context. </p> <p>An <i>encryption context</i> is a collection of
     * non-secret key-value pairs that represent additional authenticated data. When
     * you use an encryption context to encrypt data, you must specify the same (an
     * exact case-sensitive match) encryption context to decrypt the data. An
     * encryption context is supported only on operations with symmetric encryption KMS
     * keys. On operations with symmetric encryption KMS keys, an encryption context is
     * optional, but it is strongly recommended.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#encrypt_context">Encryption
     * context</a> in the <i>Key Management Service Developer Guide</i>.</p>
     */
    inline EncryptRequest& AddEncryptionContext(Aws::String&& key, Aws::String&& value) { m_encryptionContextHasBeenSet = true; m_encryptionContext.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Specifies the encryption context that will be used to encrypt the data. An
     * encryption context is valid only for <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#cryptographic-operations">cryptographic
     * operations</a> with a symmetric encryption KMS key. The standard asymmetric
     * encryption algorithms and HMAC algorithms that KMS uses do not support an
     * encryption context. </p> <p>An <i>encryption context</i> is a collection of
     * non-secret key-value pairs that represent additional authenticated data. When
     * you use an encryption context to encrypt data, you must specify the same (an
     * exact case-sensitive match) encryption context to decrypt the data. An
     * encryption context is supported only on operations with symmetric encryption KMS
     * keys. On operations with symmetric encryption KMS keys, an encryption context is
     * optional, but it is strongly recommended.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#encrypt_context">Encryption
     * context</a> in the <i>Key Management Service Developer Guide</i>.</p>
     */
    inline EncryptRequest& AddEncryptionContext(const char* key, Aws::String&& value) { m_encryptionContextHasBeenSet = true; m_encryptionContext.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Specifies the encryption context that will be used to encrypt the data. An
     * encryption context is valid only for <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#cryptographic-operations">cryptographic
     * operations</a> with a symmetric encryption KMS key. The standard asymmetric
     * encryption algorithms and HMAC algorithms that KMS uses do not support an
     * encryption context. </p> <p>An <i>encryption context</i> is a collection of
     * non-secret key-value pairs that represent additional authenticated data. When
     * you use an encryption context to encrypt data, you must specify the same (an
     * exact case-sensitive match) encryption context to decrypt the data. An
     * encryption context is supported only on operations with symmetric encryption KMS
     * keys. On operations with symmetric encryption KMS keys, an encryption context is
     * optional, but it is strongly recommended.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#encrypt_context">Encryption
     * context</a> in the <i>Key Management Service Developer Guide</i>.</p>
     */
    inline EncryptRequest& AddEncryptionContext(Aws::String&& key, const char* value) { m_encryptionContextHasBeenSet = true; m_encryptionContext.emplace(std::move(key), value); return *this; }

    /**
     * <p>Specifies the encryption context that will be used to encrypt the data. An
     * encryption context is valid only for <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#cryptographic-operations">cryptographic
     * operations</a> with a symmetric encryption KMS key. The standard asymmetric
     * encryption algorithms and HMAC algorithms that KMS uses do not support an
     * encryption context. </p> <p>An <i>encryption context</i> is a collection of
     * non-secret key-value pairs that represent additional authenticated data. When
     * you use an encryption context to encrypt data, you must specify the same (an
     * exact case-sensitive match) encryption context to decrypt the data. An
     * encryption context is supported only on operations with symmetric encryption KMS
     * keys. On operations with symmetric encryption KMS keys, an encryption context is
     * optional, but it is strongly recommended.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#encrypt_context">Encryption
     * context</a> in the <i>Key Management Service Developer Guide</i>.</p>
     */
    inline EncryptRequest& AddEncryptionContext(const char* key, const char* value) { m_encryptionContextHasBeenSet = true; m_encryptionContext.emplace(key, value); return *this; }


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
    inline EncryptRequest& WithGrantTokens(const Aws::Vector<Aws::String>& value) { SetGrantTokens(value); return *this;}

    /**
     * <p>A list of grant tokens.</p> <p>Use a grant token when your permission to call
     * this operation comes from a new grant that has not yet achieved <i>eventual
     * consistency</i>. For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/grants.html#grant_token">Grant
     * token</a> and <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/grant-manage.html#using-grant-token">Using
     * a grant token</a> in the <i>Key Management Service Developer Guide</i>.</p>
     */
    inline EncryptRequest& WithGrantTokens(Aws::Vector<Aws::String>&& value) { SetGrantTokens(std::move(value)); return *this;}

    /**
     * <p>A list of grant tokens.</p> <p>Use a grant token when your permission to call
     * this operation comes from a new grant that has not yet achieved <i>eventual
     * consistency</i>. For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/grants.html#grant_token">Grant
     * token</a> and <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/grant-manage.html#using-grant-token">Using
     * a grant token</a> in the <i>Key Management Service Developer Guide</i>.</p>
     */
    inline EncryptRequest& AddGrantTokens(const Aws::String& value) { m_grantTokensHasBeenSet = true; m_grantTokens.push_back(value); return *this; }

    /**
     * <p>A list of grant tokens.</p> <p>Use a grant token when your permission to call
     * this operation comes from a new grant that has not yet achieved <i>eventual
     * consistency</i>. For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/grants.html#grant_token">Grant
     * token</a> and <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/grant-manage.html#using-grant-token">Using
     * a grant token</a> in the <i>Key Management Service Developer Guide</i>.</p>
     */
    inline EncryptRequest& AddGrantTokens(Aws::String&& value) { m_grantTokensHasBeenSet = true; m_grantTokens.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of grant tokens.</p> <p>Use a grant token when your permission to call
     * this operation comes from a new grant that has not yet achieved <i>eventual
     * consistency</i>. For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/grants.html#grant_token">Grant
     * token</a> and <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/grant-manage.html#using-grant-token">Using
     * a grant token</a> in the <i>Key Management Service Developer Guide</i>.</p>
     */
    inline EncryptRequest& AddGrantTokens(const char* value) { m_grantTokensHasBeenSet = true; m_grantTokens.push_back(value); return *this; }


    /**
     * <p>Specifies the encryption algorithm that KMS will use to encrypt the plaintext
     * message. The algorithm must be compatible with the KMS key that you specify.</p>
     * <p>This parameter is required only for asymmetric KMS keys. The default value,
     * <code>SYMMETRIC_DEFAULT</code>, is the algorithm used for symmetric encryption
     * KMS keys. If you are using an asymmetric KMS key, we recommend
     * RSAES_OAEP_SHA_256.</p> <p>The SM2PKE algorithm is only available in China
     * Regions.</p>
     */
    inline const EncryptionAlgorithmSpec& GetEncryptionAlgorithm() const{ return m_encryptionAlgorithm; }

    /**
     * <p>Specifies the encryption algorithm that KMS will use to encrypt the plaintext
     * message. The algorithm must be compatible with the KMS key that you specify.</p>
     * <p>This parameter is required only for asymmetric KMS keys. The default value,
     * <code>SYMMETRIC_DEFAULT</code>, is the algorithm used for symmetric encryption
     * KMS keys. If you are using an asymmetric KMS key, we recommend
     * RSAES_OAEP_SHA_256.</p> <p>The SM2PKE algorithm is only available in China
     * Regions.</p>
     */
    inline bool EncryptionAlgorithmHasBeenSet() const { return m_encryptionAlgorithmHasBeenSet; }

    /**
     * <p>Specifies the encryption algorithm that KMS will use to encrypt the plaintext
     * message. The algorithm must be compatible with the KMS key that you specify.</p>
     * <p>This parameter is required only for asymmetric KMS keys. The default value,
     * <code>SYMMETRIC_DEFAULT</code>, is the algorithm used for symmetric encryption
     * KMS keys. If you are using an asymmetric KMS key, we recommend
     * RSAES_OAEP_SHA_256.</p> <p>The SM2PKE algorithm is only available in China
     * Regions.</p>
     */
    inline void SetEncryptionAlgorithm(const EncryptionAlgorithmSpec& value) { m_encryptionAlgorithmHasBeenSet = true; m_encryptionAlgorithm = value; }

    /**
     * <p>Specifies the encryption algorithm that KMS will use to encrypt the plaintext
     * message. The algorithm must be compatible with the KMS key that you specify.</p>
     * <p>This parameter is required only for asymmetric KMS keys. The default value,
     * <code>SYMMETRIC_DEFAULT</code>, is the algorithm used for symmetric encryption
     * KMS keys. If you are using an asymmetric KMS key, we recommend
     * RSAES_OAEP_SHA_256.</p> <p>The SM2PKE algorithm is only available in China
     * Regions.</p>
     */
    inline void SetEncryptionAlgorithm(EncryptionAlgorithmSpec&& value) { m_encryptionAlgorithmHasBeenSet = true; m_encryptionAlgorithm = std::move(value); }

    /**
     * <p>Specifies the encryption algorithm that KMS will use to encrypt the plaintext
     * message. The algorithm must be compatible with the KMS key that you specify.</p>
     * <p>This parameter is required only for asymmetric KMS keys. The default value,
     * <code>SYMMETRIC_DEFAULT</code>, is the algorithm used for symmetric encryption
     * KMS keys. If you are using an asymmetric KMS key, we recommend
     * RSAES_OAEP_SHA_256.</p> <p>The SM2PKE algorithm is only available in China
     * Regions.</p>
     */
    inline EncryptRequest& WithEncryptionAlgorithm(const EncryptionAlgorithmSpec& value) { SetEncryptionAlgorithm(value); return *this;}

    /**
     * <p>Specifies the encryption algorithm that KMS will use to encrypt the plaintext
     * message. The algorithm must be compatible with the KMS key that you specify.</p>
     * <p>This parameter is required only for asymmetric KMS keys. The default value,
     * <code>SYMMETRIC_DEFAULT</code>, is the algorithm used for symmetric encryption
     * KMS keys. If you are using an asymmetric KMS key, we recommend
     * RSAES_OAEP_SHA_256.</p> <p>The SM2PKE algorithm is only available in China
     * Regions.</p>
     */
    inline EncryptRequest& WithEncryptionAlgorithm(EncryptionAlgorithmSpec&& value) { SetEncryptionAlgorithm(std::move(value)); return *this;}

  private:

    Aws::String m_keyId;
    bool m_keyIdHasBeenSet = false;

    Aws::Utils::CryptoBuffer m_plaintext;
    bool m_plaintextHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_encryptionContext;
    bool m_encryptionContextHasBeenSet = false;

    Aws::Vector<Aws::String> m_grantTokens;
    bool m_grantTokensHasBeenSet = false;

    EncryptionAlgorithmSpec m_encryptionAlgorithm;
    bool m_encryptionAlgorithmHasBeenSet = false;
  };

} // namespace Model
} // namespace KMS
} // namespace Aws
