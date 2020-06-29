/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kms/KMS_EXPORTS.h>
#include <aws/kms/KMSRequest.h>
#include <aws/core/utils/Array.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class AWS_KMS_API DecryptRequest : public KMSRequest
  {
  public:
    DecryptRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "Decrypt"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Ciphertext to be decrypted. The blob includes metadata.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetCiphertextBlob() const{ return m_ciphertextBlob; }

    /**
     * <p>Ciphertext to be decrypted. The blob includes metadata.</p>
     */
    inline bool CiphertextBlobHasBeenSet() const { return m_ciphertextBlobHasBeenSet; }

    /**
     * <p>Ciphertext to be decrypted. The blob includes metadata.</p>
     */
    inline void SetCiphertextBlob(const Aws::Utils::ByteBuffer& value) { m_ciphertextBlobHasBeenSet = true; m_ciphertextBlob = value; }

    /**
     * <p>Ciphertext to be decrypted. The blob includes metadata.</p>
     */
    inline void SetCiphertextBlob(Aws::Utils::ByteBuffer&& value) { m_ciphertextBlobHasBeenSet = true; m_ciphertextBlob = std::move(value); }

    /**
     * <p>Ciphertext to be decrypted. The blob includes metadata.</p>
     */
    inline DecryptRequest& WithCiphertextBlob(const Aws::Utils::ByteBuffer& value) { SetCiphertextBlob(value); return *this;}

    /**
     * <p>Ciphertext to be decrypted. The blob includes metadata.</p>
     */
    inline DecryptRequest& WithCiphertextBlob(Aws::Utils::ByteBuffer&& value) { SetCiphertextBlob(std::move(value)); return *this;}


    /**
     * <p>Specifies the encryption context to use when decrypting the data. An
     * encryption context is valid only for <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#cryptographic-operations">cryptographic
     * operations</a> with a symmetric CMK. The standard asymmetric encryption
     * algorithms that AWS KMS uses do not support an encryption context.</p> <p>An
     * <i>encryption context</i> is a collection of non-secret key-value pairs that
     * represents additional authenticated data. When you use an encryption context to
     * encrypt data, you must specify the same (an exact case-sensitive match)
     * encryption context to decrypt the data. An encryption context is optional when
     * encrypting with a symmetric CMK, but it is highly recommended.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#encrypt_context">Encryption
     * Context</a> in the <i>AWS Key Management Service Developer Guide</i>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetEncryptionContext() const{ return m_encryptionContext; }

    /**
     * <p>Specifies the encryption context to use when decrypting the data. An
     * encryption context is valid only for <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#cryptographic-operations">cryptographic
     * operations</a> with a symmetric CMK. The standard asymmetric encryption
     * algorithms that AWS KMS uses do not support an encryption context.</p> <p>An
     * <i>encryption context</i> is a collection of non-secret key-value pairs that
     * represents additional authenticated data. When you use an encryption context to
     * encrypt data, you must specify the same (an exact case-sensitive match)
     * encryption context to decrypt the data. An encryption context is optional when
     * encrypting with a symmetric CMK, but it is highly recommended.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#encrypt_context">Encryption
     * Context</a> in the <i>AWS Key Management Service Developer Guide</i>.</p>
     */
    inline bool EncryptionContextHasBeenSet() const { return m_encryptionContextHasBeenSet; }

    /**
     * <p>Specifies the encryption context to use when decrypting the data. An
     * encryption context is valid only for <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#cryptographic-operations">cryptographic
     * operations</a> with a symmetric CMK. The standard asymmetric encryption
     * algorithms that AWS KMS uses do not support an encryption context.</p> <p>An
     * <i>encryption context</i> is a collection of non-secret key-value pairs that
     * represents additional authenticated data. When you use an encryption context to
     * encrypt data, you must specify the same (an exact case-sensitive match)
     * encryption context to decrypt the data. An encryption context is optional when
     * encrypting with a symmetric CMK, but it is highly recommended.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#encrypt_context">Encryption
     * Context</a> in the <i>AWS Key Management Service Developer Guide</i>.</p>
     */
    inline void SetEncryptionContext(const Aws::Map<Aws::String, Aws::String>& value) { m_encryptionContextHasBeenSet = true; m_encryptionContext = value; }

    /**
     * <p>Specifies the encryption context to use when decrypting the data. An
     * encryption context is valid only for <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#cryptographic-operations">cryptographic
     * operations</a> with a symmetric CMK. The standard asymmetric encryption
     * algorithms that AWS KMS uses do not support an encryption context.</p> <p>An
     * <i>encryption context</i> is a collection of non-secret key-value pairs that
     * represents additional authenticated data. When you use an encryption context to
     * encrypt data, you must specify the same (an exact case-sensitive match)
     * encryption context to decrypt the data. An encryption context is optional when
     * encrypting with a symmetric CMK, but it is highly recommended.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#encrypt_context">Encryption
     * Context</a> in the <i>AWS Key Management Service Developer Guide</i>.</p>
     */
    inline void SetEncryptionContext(Aws::Map<Aws::String, Aws::String>&& value) { m_encryptionContextHasBeenSet = true; m_encryptionContext = std::move(value); }

    /**
     * <p>Specifies the encryption context to use when decrypting the data. An
     * encryption context is valid only for <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#cryptographic-operations">cryptographic
     * operations</a> with a symmetric CMK. The standard asymmetric encryption
     * algorithms that AWS KMS uses do not support an encryption context.</p> <p>An
     * <i>encryption context</i> is a collection of non-secret key-value pairs that
     * represents additional authenticated data. When you use an encryption context to
     * encrypt data, you must specify the same (an exact case-sensitive match)
     * encryption context to decrypt the data. An encryption context is optional when
     * encrypting with a symmetric CMK, but it is highly recommended.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#encrypt_context">Encryption
     * Context</a> in the <i>AWS Key Management Service Developer Guide</i>.</p>
     */
    inline DecryptRequest& WithEncryptionContext(const Aws::Map<Aws::String, Aws::String>& value) { SetEncryptionContext(value); return *this;}

    /**
     * <p>Specifies the encryption context to use when decrypting the data. An
     * encryption context is valid only for <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#cryptographic-operations">cryptographic
     * operations</a> with a symmetric CMK. The standard asymmetric encryption
     * algorithms that AWS KMS uses do not support an encryption context.</p> <p>An
     * <i>encryption context</i> is a collection of non-secret key-value pairs that
     * represents additional authenticated data. When you use an encryption context to
     * encrypt data, you must specify the same (an exact case-sensitive match)
     * encryption context to decrypt the data. An encryption context is optional when
     * encrypting with a symmetric CMK, but it is highly recommended.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#encrypt_context">Encryption
     * Context</a> in the <i>AWS Key Management Service Developer Guide</i>.</p>
     */
    inline DecryptRequest& WithEncryptionContext(Aws::Map<Aws::String, Aws::String>&& value) { SetEncryptionContext(std::move(value)); return *this;}

    /**
     * <p>Specifies the encryption context to use when decrypting the data. An
     * encryption context is valid only for <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#cryptographic-operations">cryptographic
     * operations</a> with a symmetric CMK. The standard asymmetric encryption
     * algorithms that AWS KMS uses do not support an encryption context.</p> <p>An
     * <i>encryption context</i> is a collection of non-secret key-value pairs that
     * represents additional authenticated data. When you use an encryption context to
     * encrypt data, you must specify the same (an exact case-sensitive match)
     * encryption context to decrypt the data. An encryption context is optional when
     * encrypting with a symmetric CMK, but it is highly recommended.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#encrypt_context">Encryption
     * Context</a> in the <i>AWS Key Management Service Developer Guide</i>.</p>
     */
    inline DecryptRequest& AddEncryptionContext(const Aws::String& key, const Aws::String& value) { m_encryptionContextHasBeenSet = true; m_encryptionContext.emplace(key, value); return *this; }

    /**
     * <p>Specifies the encryption context to use when decrypting the data. An
     * encryption context is valid only for <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#cryptographic-operations">cryptographic
     * operations</a> with a symmetric CMK. The standard asymmetric encryption
     * algorithms that AWS KMS uses do not support an encryption context.</p> <p>An
     * <i>encryption context</i> is a collection of non-secret key-value pairs that
     * represents additional authenticated data. When you use an encryption context to
     * encrypt data, you must specify the same (an exact case-sensitive match)
     * encryption context to decrypt the data. An encryption context is optional when
     * encrypting with a symmetric CMK, but it is highly recommended.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#encrypt_context">Encryption
     * Context</a> in the <i>AWS Key Management Service Developer Guide</i>.</p>
     */
    inline DecryptRequest& AddEncryptionContext(Aws::String&& key, const Aws::String& value) { m_encryptionContextHasBeenSet = true; m_encryptionContext.emplace(std::move(key), value); return *this; }

    /**
     * <p>Specifies the encryption context to use when decrypting the data. An
     * encryption context is valid only for <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#cryptographic-operations">cryptographic
     * operations</a> with a symmetric CMK. The standard asymmetric encryption
     * algorithms that AWS KMS uses do not support an encryption context.</p> <p>An
     * <i>encryption context</i> is a collection of non-secret key-value pairs that
     * represents additional authenticated data. When you use an encryption context to
     * encrypt data, you must specify the same (an exact case-sensitive match)
     * encryption context to decrypt the data. An encryption context is optional when
     * encrypting with a symmetric CMK, but it is highly recommended.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#encrypt_context">Encryption
     * Context</a> in the <i>AWS Key Management Service Developer Guide</i>.</p>
     */
    inline DecryptRequest& AddEncryptionContext(const Aws::String& key, Aws::String&& value) { m_encryptionContextHasBeenSet = true; m_encryptionContext.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Specifies the encryption context to use when decrypting the data. An
     * encryption context is valid only for <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#cryptographic-operations">cryptographic
     * operations</a> with a symmetric CMK. The standard asymmetric encryption
     * algorithms that AWS KMS uses do not support an encryption context.</p> <p>An
     * <i>encryption context</i> is a collection of non-secret key-value pairs that
     * represents additional authenticated data. When you use an encryption context to
     * encrypt data, you must specify the same (an exact case-sensitive match)
     * encryption context to decrypt the data. An encryption context is optional when
     * encrypting with a symmetric CMK, but it is highly recommended.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#encrypt_context">Encryption
     * Context</a> in the <i>AWS Key Management Service Developer Guide</i>.</p>
     */
    inline DecryptRequest& AddEncryptionContext(Aws::String&& key, Aws::String&& value) { m_encryptionContextHasBeenSet = true; m_encryptionContext.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Specifies the encryption context to use when decrypting the data. An
     * encryption context is valid only for <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#cryptographic-operations">cryptographic
     * operations</a> with a symmetric CMK. The standard asymmetric encryption
     * algorithms that AWS KMS uses do not support an encryption context.</p> <p>An
     * <i>encryption context</i> is a collection of non-secret key-value pairs that
     * represents additional authenticated data. When you use an encryption context to
     * encrypt data, you must specify the same (an exact case-sensitive match)
     * encryption context to decrypt the data. An encryption context is optional when
     * encrypting with a symmetric CMK, but it is highly recommended.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#encrypt_context">Encryption
     * Context</a> in the <i>AWS Key Management Service Developer Guide</i>.</p>
     */
    inline DecryptRequest& AddEncryptionContext(const char* key, Aws::String&& value) { m_encryptionContextHasBeenSet = true; m_encryptionContext.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Specifies the encryption context to use when decrypting the data. An
     * encryption context is valid only for <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#cryptographic-operations">cryptographic
     * operations</a> with a symmetric CMK. The standard asymmetric encryption
     * algorithms that AWS KMS uses do not support an encryption context.</p> <p>An
     * <i>encryption context</i> is a collection of non-secret key-value pairs that
     * represents additional authenticated data. When you use an encryption context to
     * encrypt data, you must specify the same (an exact case-sensitive match)
     * encryption context to decrypt the data. An encryption context is optional when
     * encrypting with a symmetric CMK, but it is highly recommended.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#encrypt_context">Encryption
     * Context</a> in the <i>AWS Key Management Service Developer Guide</i>.</p>
     */
    inline DecryptRequest& AddEncryptionContext(Aws::String&& key, const char* value) { m_encryptionContextHasBeenSet = true; m_encryptionContext.emplace(std::move(key), value); return *this; }

    /**
     * <p>Specifies the encryption context to use when decrypting the data. An
     * encryption context is valid only for <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#cryptographic-operations">cryptographic
     * operations</a> with a symmetric CMK. The standard asymmetric encryption
     * algorithms that AWS KMS uses do not support an encryption context.</p> <p>An
     * <i>encryption context</i> is a collection of non-secret key-value pairs that
     * represents additional authenticated data. When you use an encryption context to
     * encrypt data, you must specify the same (an exact case-sensitive match)
     * encryption context to decrypt the data. An encryption context is optional when
     * encrypting with a symmetric CMK, but it is highly recommended.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#encrypt_context">Encryption
     * Context</a> in the <i>AWS Key Management Service Developer Guide</i>.</p>
     */
    inline DecryptRequest& AddEncryptionContext(const char* key, const char* value) { m_encryptionContextHasBeenSet = true; m_encryptionContext.emplace(key, value); return *this; }


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
    inline DecryptRequest& WithGrantTokens(const Aws::Vector<Aws::String>& value) { SetGrantTokens(value); return *this;}

    /**
     * <p>A list of grant tokens.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#grant_token">Grant
     * Tokens</a> in the <i>AWS Key Management Service Developer Guide</i>.</p>
     */
    inline DecryptRequest& WithGrantTokens(Aws::Vector<Aws::String>&& value) { SetGrantTokens(std::move(value)); return *this;}

    /**
     * <p>A list of grant tokens.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#grant_token">Grant
     * Tokens</a> in the <i>AWS Key Management Service Developer Guide</i>.</p>
     */
    inline DecryptRequest& AddGrantTokens(const Aws::String& value) { m_grantTokensHasBeenSet = true; m_grantTokens.push_back(value); return *this; }

    /**
     * <p>A list of grant tokens.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#grant_token">Grant
     * Tokens</a> in the <i>AWS Key Management Service Developer Guide</i>.</p>
     */
    inline DecryptRequest& AddGrantTokens(Aws::String&& value) { m_grantTokensHasBeenSet = true; m_grantTokens.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of grant tokens.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#grant_token">Grant
     * Tokens</a> in the <i>AWS Key Management Service Developer Guide</i>.</p>
     */
    inline DecryptRequest& AddGrantTokens(const char* value) { m_grantTokensHasBeenSet = true; m_grantTokens.push_back(value); return *this; }


    /**
     * <p>Specifies the customer master key (CMK) that AWS KMS will use to decrypt the
     * ciphertext. Enter a key ID of the CMK that was used to encrypt the
     * ciphertext.</p> <p>If you specify a <code>KeyId</code> value, the
     * <code>Decrypt</code> operation succeeds only if the specified CMK was used to
     * encrypt the ciphertext.</p> <p>This parameter is required only when the
     * ciphertext was encrypted under an asymmetric CMK. Otherwise, AWS KMS uses the
     * metadata that it adds to the ciphertext blob to determine which CMK was used to
     * encrypt the ciphertext. However, you can use this parameter to ensure that a
     * particular CMK (of any kind) is used to decrypt the ciphertext.</p> <p>To
     * specify a CMK, use its key ID, Amazon Resource Name (ARN), alias name, or alias
     * ARN. When using an alias name, prefix it with <code>"alias/"</code>.</p> <p>For
     * example:</p> <ul> <li> <p>Key ID:
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
     * <p>Specifies the customer master key (CMK) that AWS KMS will use to decrypt the
     * ciphertext. Enter a key ID of the CMK that was used to encrypt the
     * ciphertext.</p> <p>If you specify a <code>KeyId</code> value, the
     * <code>Decrypt</code> operation succeeds only if the specified CMK was used to
     * encrypt the ciphertext.</p> <p>This parameter is required only when the
     * ciphertext was encrypted under an asymmetric CMK. Otherwise, AWS KMS uses the
     * metadata that it adds to the ciphertext blob to determine which CMK was used to
     * encrypt the ciphertext. However, you can use this parameter to ensure that a
     * particular CMK (of any kind) is used to decrypt the ciphertext.</p> <p>To
     * specify a CMK, use its key ID, Amazon Resource Name (ARN), alias name, or alias
     * ARN. When using an alias name, prefix it with <code>"alias/"</code>.</p> <p>For
     * example:</p> <ul> <li> <p>Key ID:
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
     * <p>Specifies the customer master key (CMK) that AWS KMS will use to decrypt the
     * ciphertext. Enter a key ID of the CMK that was used to encrypt the
     * ciphertext.</p> <p>If you specify a <code>KeyId</code> value, the
     * <code>Decrypt</code> operation succeeds only if the specified CMK was used to
     * encrypt the ciphertext.</p> <p>This parameter is required only when the
     * ciphertext was encrypted under an asymmetric CMK. Otherwise, AWS KMS uses the
     * metadata that it adds to the ciphertext blob to determine which CMK was used to
     * encrypt the ciphertext. However, you can use this parameter to ensure that a
     * particular CMK (of any kind) is used to decrypt the ciphertext.</p> <p>To
     * specify a CMK, use its key ID, Amazon Resource Name (ARN), alias name, or alias
     * ARN. When using an alias name, prefix it with <code>"alias/"</code>.</p> <p>For
     * example:</p> <ul> <li> <p>Key ID:
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
     * <p>Specifies the customer master key (CMK) that AWS KMS will use to decrypt the
     * ciphertext. Enter a key ID of the CMK that was used to encrypt the
     * ciphertext.</p> <p>If you specify a <code>KeyId</code> value, the
     * <code>Decrypt</code> operation succeeds only if the specified CMK was used to
     * encrypt the ciphertext.</p> <p>This parameter is required only when the
     * ciphertext was encrypted under an asymmetric CMK. Otherwise, AWS KMS uses the
     * metadata that it adds to the ciphertext blob to determine which CMK was used to
     * encrypt the ciphertext. However, you can use this parameter to ensure that a
     * particular CMK (of any kind) is used to decrypt the ciphertext.</p> <p>To
     * specify a CMK, use its key ID, Amazon Resource Name (ARN), alias name, or alias
     * ARN. When using an alias name, prefix it with <code>"alias/"</code>.</p> <p>For
     * example:</p> <ul> <li> <p>Key ID:
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
     * <p>Specifies the customer master key (CMK) that AWS KMS will use to decrypt the
     * ciphertext. Enter a key ID of the CMK that was used to encrypt the
     * ciphertext.</p> <p>If you specify a <code>KeyId</code> value, the
     * <code>Decrypt</code> operation succeeds only if the specified CMK was used to
     * encrypt the ciphertext.</p> <p>This parameter is required only when the
     * ciphertext was encrypted under an asymmetric CMK. Otherwise, AWS KMS uses the
     * metadata that it adds to the ciphertext blob to determine which CMK was used to
     * encrypt the ciphertext. However, you can use this parameter to ensure that a
     * particular CMK (of any kind) is used to decrypt the ciphertext.</p> <p>To
     * specify a CMK, use its key ID, Amazon Resource Name (ARN), alias name, or alias
     * ARN. When using an alias name, prefix it with <code>"alias/"</code>.</p> <p>For
     * example:</p> <ul> <li> <p>Key ID:
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
     * <p>Specifies the customer master key (CMK) that AWS KMS will use to decrypt the
     * ciphertext. Enter a key ID of the CMK that was used to encrypt the
     * ciphertext.</p> <p>If you specify a <code>KeyId</code> value, the
     * <code>Decrypt</code> operation succeeds only if the specified CMK was used to
     * encrypt the ciphertext.</p> <p>This parameter is required only when the
     * ciphertext was encrypted under an asymmetric CMK. Otherwise, AWS KMS uses the
     * metadata that it adds to the ciphertext blob to determine which CMK was used to
     * encrypt the ciphertext. However, you can use this parameter to ensure that a
     * particular CMK (of any kind) is used to decrypt the ciphertext.</p> <p>To
     * specify a CMK, use its key ID, Amazon Resource Name (ARN), alias name, or alias
     * ARN. When using an alias name, prefix it with <code>"alias/"</code>.</p> <p>For
     * example:</p> <ul> <li> <p>Key ID:
     * <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li> <li> <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> <li> <p>Alias name: <code>alias/ExampleAlias</code> </p> </li> <li>
     * <p>Alias ARN: <code>arn:aws:kms:us-east-2:111122223333:alias/ExampleAlias</code>
     * </p> </li> </ul> <p>To get the key ID and key ARN for a CMK, use <a>ListKeys</a>
     * or <a>DescribeKey</a>. To get the alias name and alias ARN, use
     * <a>ListAliases</a>.</p>
     */
    inline DecryptRequest& WithKeyId(const Aws::String& value) { SetKeyId(value); return *this;}

    /**
     * <p>Specifies the customer master key (CMK) that AWS KMS will use to decrypt the
     * ciphertext. Enter a key ID of the CMK that was used to encrypt the
     * ciphertext.</p> <p>If you specify a <code>KeyId</code> value, the
     * <code>Decrypt</code> operation succeeds only if the specified CMK was used to
     * encrypt the ciphertext.</p> <p>This parameter is required only when the
     * ciphertext was encrypted under an asymmetric CMK. Otherwise, AWS KMS uses the
     * metadata that it adds to the ciphertext blob to determine which CMK was used to
     * encrypt the ciphertext. However, you can use this parameter to ensure that a
     * particular CMK (of any kind) is used to decrypt the ciphertext.</p> <p>To
     * specify a CMK, use its key ID, Amazon Resource Name (ARN), alias name, or alias
     * ARN. When using an alias name, prefix it with <code>"alias/"</code>.</p> <p>For
     * example:</p> <ul> <li> <p>Key ID:
     * <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li> <li> <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> <li> <p>Alias name: <code>alias/ExampleAlias</code> </p> </li> <li>
     * <p>Alias ARN: <code>arn:aws:kms:us-east-2:111122223333:alias/ExampleAlias</code>
     * </p> </li> </ul> <p>To get the key ID and key ARN for a CMK, use <a>ListKeys</a>
     * or <a>DescribeKey</a>. To get the alias name and alias ARN, use
     * <a>ListAliases</a>.</p>
     */
    inline DecryptRequest& WithKeyId(Aws::String&& value) { SetKeyId(std::move(value)); return *this;}

    /**
     * <p>Specifies the customer master key (CMK) that AWS KMS will use to decrypt the
     * ciphertext. Enter a key ID of the CMK that was used to encrypt the
     * ciphertext.</p> <p>If you specify a <code>KeyId</code> value, the
     * <code>Decrypt</code> operation succeeds only if the specified CMK was used to
     * encrypt the ciphertext.</p> <p>This parameter is required only when the
     * ciphertext was encrypted under an asymmetric CMK. Otherwise, AWS KMS uses the
     * metadata that it adds to the ciphertext blob to determine which CMK was used to
     * encrypt the ciphertext. However, you can use this parameter to ensure that a
     * particular CMK (of any kind) is used to decrypt the ciphertext.</p> <p>To
     * specify a CMK, use its key ID, Amazon Resource Name (ARN), alias name, or alias
     * ARN. When using an alias name, prefix it with <code>"alias/"</code>.</p> <p>For
     * example:</p> <ul> <li> <p>Key ID:
     * <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li> <li> <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> <li> <p>Alias name: <code>alias/ExampleAlias</code> </p> </li> <li>
     * <p>Alias ARN: <code>arn:aws:kms:us-east-2:111122223333:alias/ExampleAlias</code>
     * </p> </li> </ul> <p>To get the key ID and key ARN for a CMK, use <a>ListKeys</a>
     * or <a>DescribeKey</a>. To get the alias name and alias ARN, use
     * <a>ListAliases</a>.</p>
     */
    inline DecryptRequest& WithKeyId(const char* value) { SetKeyId(value); return *this;}


    /**
     * <p>Specifies the encryption algorithm that will be used to decrypt the
     * ciphertext. Specify the same algorithm that was used to encrypt the data. If you
     * specify a different algorithm, the <code>Decrypt</code> operation fails.</p>
     * <p>This parameter is required only when the ciphertext was encrypted under an
     * asymmetric CMK. The default value, <code>SYMMETRIC_DEFAULT</code>, represents
     * the only supported algorithm that is valid for symmetric CMKs.</p>
     */
    inline const EncryptionAlgorithmSpec& GetEncryptionAlgorithm() const{ return m_encryptionAlgorithm; }

    /**
     * <p>Specifies the encryption algorithm that will be used to decrypt the
     * ciphertext. Specify the same algorithm that was used to encrypt the data. If you
     * specify a different algorithm, the <code>Decrypt</code> operation fails.</p>
     * <p>This parameter is required only when the ciphertext was encrypted under an
     * asymmetric CMK. The default value, <code>SYMMETRIC_DEFAULT</code>, represents
     * the only supported algorithm that is valid for symmetric CMKs.</p>
     */
    inline bool EncryptionAlgorithmHasBeenSet() const { return m_encryptionAlgorithmHasBeenSet; }

    /**
     * <p>Specifies the encryption algorithm that will be used to decrypt the
     * ciphertext. Specify the same algorithm that was used to encrypt the data. If you
     * specify a different algorithm, the <code>Decrypt</code> operation fails.</p>
     * <p>This parameter is required only when the ciphertext was encrypted under an
     * asymmetric CMK. The default value, <code>SYMMETRIC_DEFAULT</code>, represents
     * the only supported algorithm that is valid for symmetric CMKs.</p>
     */
    inline void SetEncryptionAlgorithm(const EncryptionAlgorithmSpec& value) { m_encryptionAlgorithmHasBeenSet = true; m_encryptionAlgorithm = value; }

    /**
     * <p>Specifies the encryption algorithm that will be used to decrypt the
     * ciphertext. Specify the same algorithm that was used to encrypt the data. If you
     * specify a different algorithm, the <code>Decrypt</code> operation fails.</p>
     * <p>This parameter is required only when the ciphertext was encrypted under an
     * asymmetric CMK. The default value, <code>SYMMETRIC_DEFAULT</code>, represents
     * the only supported algorithm that is valid for symmetric CMKs.</p>
     */
    inline void SetEncryptionAlgorithm(EncryptionAlgorithmSpec&& value) { m_encryptionAlgorithmHasBeenSet = true; m_encryptionAlgorithm = std::move(value); }

    /**
     * <p>Specifies the encryption algorithm that will be used to decrypt the
     * ciphertext. Specify the same algorithm that was used to encrypt the data. If you
     * specify a different algorithm, the <code>Decrypt</code> operation fails.</p>
     * <p>This parameter is required only when the ciphertext was encrypted under an
     * asymmetric CMK. The default value, <code>SYMMETRIC_DEFAULT</code>, represents
     * the only supported algorithm that is valid for symmetric CMKs.</p>
     */
    inline DecryptRequest& WithEncryptionAlgorithm(const EncryptionAlgorithmSpec& value) { SetEncryptionAlgorithm(value); return *this;}

    /**
     * <p>Specifies the encryption algorithm that will be used to decrypt the
     * ciphertext. Specify the same algorithm that was used to encrypt the data. If you
     * specify a different algorithm, the <code>Decrypt</code> operation fails.</p>
     * <p>This parameter is required only when the ciphertext was encrypted under an
     * asymmetric CMK. The default value, <code>SYMMETRIC_DEFAULT</code>, represents
     * the only supported algorithm that is valid for symmetric CMKs.</p>
     */
    inline DecryptRequest& WithEncryptionAlgorithm(EncryptionAlgorithmSpec&& value) { SetEncryptionAlgorithm(std::move(value)); return *this;}

  private:

    Aws::Utils::ByteBuffer m_ciphertextBlob;
    bool m_ciphertextBlobHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_encryptionContext;
    bool m_encryptionContextHasBeenSet;

    Aws::Vector<Aws::String> m_grantTokens;
    bool m_grantTokensHasBeenSet;

    Aws::String m_keyId;
    bool m_keyIdHasBeenSet;

    EncryptionAlgorithmSpec m_encryptionAlgorithm;
    bool m_encryptionAlgorithmHasBeenSet;
  };

} // namespace Model
} // namespace KMS
} // namespace Aws
