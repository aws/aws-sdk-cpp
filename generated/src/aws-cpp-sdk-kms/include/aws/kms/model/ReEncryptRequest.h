/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kms/KMS_EXPORTS.h>
#include <aws/kms/KMSRequest.h>
#include <aws/core/utils/Array.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kms/model/EncryptionAlgorithmSpec.h>
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
  class ReEncryptRequest : public KMSRequest
  {
  public:
    AWS_KMS_API ReEncryptRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ReEncrypt"; }

    AWS_KMS_API Aws::String SerializePayload() const override;

    AWS_KMS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Ciphertext of the data to reencrypt.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetCiphertextBlob() const{ return m_ciphertextBlob; }

    /**
     * <p>Ciphertext of the data to reencrypt.</p>
     */
    inline bool CiphertextBlobHasBeenSet() const { return m_ciphertextBlobHasBeenSet; }

    /**
     * <p>Ciphertext of the data to reencrypt.</p>
     */
    inline void SetCiphertextBlob(const Aws::Utils::ByteBuffer& value) { m_ciphertextBlobHasBeenSet = true; m_ciphertextBlob = value; }

    /**
     * <p>Ciphertext of the data to reencrypt.</p>
     */
    inline void SetCiphertextBlob(Aws::Utils::ByteBuffer&& value) { m_ciphertextBlobHasBeenSet = true; m_ciphertextBlob = std::move(value); }

    /**
     * <p>Ciphertext of the data to reencrypt.</p>
     */
    inline ReEncryptRequest& WithCiphertextBlob(const Aws::Utils::ByteBuffer& value) { SetCiphertextBlob(value); return *this;}

    /**
     * <p>Ciphertext of the data to reencrypt.</p>
     */
    inline ReEncryptRequest& WithCiphertextBlob(Aws::Utils::ByteBuffer&& value) { SetCiphertextBlob(std::move(value)); return *this;}


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
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#encrypt_context">Encryption
     * context</a> in the <i>Key Management Service Developer Guide</i>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetSourceEncryptionContext() const{ return m_sourceEncryptionContext; }

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
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#encrypt_context">Encryption
     * context</a> in the <i>Key Management Service Developer Guide</i>.</p>
     */
    inline bool SourceEncryptionContextHasBeenSet() const { return m_sourceEncryptionContextHasBeenSet; }

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
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#encrypt_context">Encryption
     * context</a> in the <i>Key Management Service Developer Guide</i>.</p>
     */
    inline void SetSourceEncryptionContext(const Aws::Map<Aws::String, Aws::String>& value) { m_sourceEncryptionContextHasBeenSet = true; m_sourceEncryptionContext = value; }

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
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#encrypt_context">Encryption
     * context</a> in the <i>Key Management Service Developer Guide</i>.</p>
     */
    inline void SetSourceEncryptionContext(Aws::Map<Aws::String, Aws::String>&& value) { m_sourceEncryptionContextHasBeenSet = true; m_sourceEncryptionContext = std::move(value); }

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
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#encrypt_context">Encryption
     * context</a> in the <i>Key Management Service Developer Guide</i>.</p>
     */
    inline ReEncryptRequest& WithSourceEncryptionContext(const Aws::Map<Aws::String, Aws::String>& value) { SetSourceEncryptionContext(value); return *this;}

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
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#encrypt_context">Encryption
     * context</a> in the <i>Key Management Service Developer Guide</i>.</p>
     */
    inline ReEncryptRequest& WithSourceEncryptionContext(Aws::Map<Aws::String, Aws::String>&& value) { SetSourceEncryptionContext(std::move(value)); return *this;}

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
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#encrypt_context">Encryption
     * context</a> in the <i>Key Management Service Developer Guide</i>.</p>
     */
    inline ReEncryptRequest& AddSourceEncryptionContext(const Aws::String& key, const Aws::String& value) { m_sourceEncryptionContextHasBeenSet = true; m_sourceEncryptionContext.emplace(key, value); return *this; }

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
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#encrypt_context">Encryption
     * context</a> in the <i>Key Management Service Developer Guide</i>.</p>
     */
    inline ReEncryptRequest& AddSourceEncryptionContext(Aws::String&& key, const Aws::String& value) { m_sourceEncryptionContextHasBeenSet = true; m_sourceEncryptionContext.emplace(std::move(key), value); return *this; }

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
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#encrypt_context">Encryption
     * context</a> in the <i>Key Management Service Developer Guide</i>.</p>
     */
    inline ReEncryptRequest& AddSourceEncryptionContext(const Aws::String& key, Aws::String&& value) { m_sourceEncryptionContextHasBeenSet = true; m_sourceEncryptionContext.emplace(key, std::move(value)); return *this; }

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
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#encrypt_context">Encryption
     * context</a> in the <i>Key Management Service Developer Guide</i>.</p>
     */
    inline ReEncryptRequest& AddSourceEncryptionContext(Aws::String&& key, Aws::String&& value) { m_sourceEncryptionContextHasBeenSet = true; m_sourceEncryptionContext.emplace(std::move(key), std::move(value)); return *this; }

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
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#encrypt_context">Encryption
     * context</a> in the <i>Key Management Service Developer Guide</i>.</p>
     */
    inline ReEncryptRequest& AddSourceEncryptionContext(const char* key, Aws::String&& value) { m_sourceEncryptionContextHasBeenSet = true; m_sourceEncryptionContext.emplace(key, std::move(value)); return *this; }

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
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#encrypt_context">Encryption
     * context</a> in the <i>Key Management Service Developer Guide</i>.</p>
     */
    inline ReEncryptRequest& AddSourceEncryptionContext(Aws::String&& key, const char* value) { m_sourceEncryptionContextHasBeenSet = true; m_sourceEncryptionContext.emplace(std::move(key), value); return *this; }

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
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#encrypt_context">Encryption
     * context</a> in the <i>Key Management Service Developer Guide</i>.</p>
     */
    inline ReEncryptRequest& AddSourceEncryptionContext(const char* key, const char* value) { m_sourceEncryptionContextHasBeenSet = true; m_sourceEncryptionContext.emplace(key, value); return *this; }


    /**
     * <p>Specifies the KMS key that KMS will use to decrypt the ciphertext before it
     * is re-encrypted.</p> <p>Enter a key ID of the KMS key that was used to encrypt
     * the ciphertext. If you identify a different KMS key, the <code>ReEncrypt</code>
     * operation throws an <code>IncorrectKeyException</code>.</p> <p>This parameter is
     * required only when the ciphertext was encrypted under an asymmetric KMS key. If
     * you used a symmetric encryption KMS key, KMS can get the KMS key from metadata
     * that it adds to the symmetric ciphertext blob. However, it is always recommended
     * as a best practice. This practice ensures that you use the KMS key that you
     * intend.</p> <p>To specify a KMS key, use its key ID, key ARN, alias name, or
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
    inline const Aws::String& GetSourceKeyId() const{ return m_sourceKeyId; }

    /**
     * <p>Specifies the KMS key that KMS will use to decrypt the ciphertext before it
     * is re-encrypted.</p> <p>Enter a key ID of the KMS key that was used to encrypt
     * the ciphertext. If you identify a different KMS key, the <code>ReEncrypt</code>
     * operation throws an <code>IncorrectKeyException</code>.</p> <p>This parameter is
     * required only when the ciphertext was encrypted under an asymmetric KMS key. If
     * you used a symmetric encryption KMS key, KMS can get the KMS key from metadata
     * that it adds to the symmetric ciphertext blob. However, it is always recommended
     * as a best practice. This practice ensures that you use the KMS key that you
     * intend.</p> <p>To specify a KMS key, use its key ID, key ARN, alias name, or
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
    inline bool SourceKeyIdHasBeenSet() const { return m_sourceKeyIdHasBeenSet; }

    /**
     * <p>Specifies the KMS key that KMS will use to decrypt the ciphertext before it
     * is re-encrypted.</p> <p>Enter a key ID of the KMS key that was used to encrypt
     * the ciphertext. If you identify a different KMS key, the <code>ReEncrypt</code>
     * operation throws an <code>IncorrectKeyException</code>.</p> <p>This parameter is
     * required only when the ciphertext was encrypted under an asymmetric KMS key. If
     * you used a symmetric encryption KMS key, KMS can get the KMS key from metadata
     * that it adds to the symmetric ciphertext blob. However, it is always recommended
     * as a best practice. This practice ensures that you use the KMS key that you
     * intend.</p> <p>To specify a KMS key, use its key ID, key ARN, alias name, or
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
    inline void SetSourceKeyId(const Aws::String& value) { m_sourceKeyIdHasBeenSet = true; m_sourceKeyId = value; }

    /**
     * <p>Specifies the KMS key that KMS will use to decrypt the ciphertext before it
     * is re-encrypted.</p> <p>Enter a key ID of the KMS key that was used to encrypt
     * the ciphertext. If you identify a different KMS key, the <code>ReEncrypt</code>
     * operation throws an <code>IncorrectKeyException</code>.</p> <p>This parameter is
     * required only when the ciphertext was encrypted under an asymmetric KMS key. If
     * you used a symmetric encryption KMS key, KMS can get the KMS key from metadata
     * that it adds to the symmetric ciphertext blob. However, it is always recommended
     * as a best practice. This practice ensures that you use the KMS key that you
     * intend.</p> <p>To specify a KMS key, use its key ID, key ARN, alias name, or
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
    inline void SetSourceKeyId(Aws::String&& value) { m_sourceKeyIdHasBeenSet = true; m_sourceKeyId = std::move(value); }

    /**
     * <p>Specifies the KMS key that KMS will use to decrypt the ciphertext before it
     * is re-encrypted.</p> <p>Enter a key ID of the KMS key that was used to encrypt
     * the ciphertext. If you identify a different KMS key, the <code>ReEncrypt</code>
     * operation throws an <code>IncorrectKeyException</code>.</p> <p>This parameter is
     * required only when the ciphertext was encrypted under an asymmetric KMS key. If
     * you used a symmetric encryption KMS key, KMS can get the KMS key from metadata
     * that it adds to the symmetric ciphertext blob. However, it is always recommended
     * as a best practice. This practice ensures that you use the KMS key that you
     * intend.</p> <p>To specify a KMS key, use its key ID, key ARN, alias name, or
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
    inline void SetSourceKeyId(const char* value) { m_sourceKeyIdHasBeenSet = true; m_sourceKeyId.assign(value); }

    /**
     * <p>Specifies the KMS key that KMS will use to decrypt the ciphertext before it
     * is re-encrypted.</p> <p>Enter a key ID of the KMS key that was used to encrypt
     * the ciphertext. If you identify a different KMS key, the <code>ReEncrypt</code>
     * operation throws an <code>IncorrectKeyException</code>.</p> <p>This parameter is
     * required only when the ciphertext was encrypted under an asymmetric KMS key. If
     * you used a symmetric encryption KMS key, KMS can get the KMS key from metadata
     * that it adds to the symmetric ciphertext blob. However, it is always recommended
     * as a best practice. This practice ensures that you use the KMS key that you
     * intend.</p> <p>To specify a KMS key, use its key ID, key ARN, alias name, or
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
    inline ReEncryptRequest& WithSourceKeyId(const Aws::String& value) { SetSourceKeyId(value); return *this;}

    /**
     * <p>Specifies the KMS key that KMS will use to decrypt the ciphertext before it
     * is re-encrypted.</p> <p>Enter a key ID of the KMS key that was used to encrypt
     * the ciphertext. If you identify a different KMS key, the <code>ReEncrypt</code>
     * operation throws an <code>IncorrectKeyException</code>.</p> <p>This parameter is
     * required only when the ciphertext was encrypted under an asymmetric KMS key. If
     * you used a symmetric encryption KMS key, KMS can get the KMS key from metadata
     * that it adds to the symmetric ciphertext blob. However, it is always recommended
     * as a best practice. This practice ensures that you use the KMS key that you
     * intend.</p> <p>To specify a KMS key, use its key ID, key ARN, alias name, or
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
    inline ReEncryptRequest& WithSourceKeyId(Aws::String&& value) { SetSourceKeyId(std::move(value)); return *this;}

    /**
     * <p>Specifies the KMS key that KMS will use to decrypt the ciphertext before it
     * is re-encrypted.</p> <p>Enter a key ID of the KMS key that was used to encrypt
     * the ciphertext. If you identify a different KMS key, the <code>ReEncrypt</code>
     * operation throws an <code>IncorrectKeyException</code>.</p> <p>This parameter is
     * required only when the ciphertext was encrypted under an asymmetric KMS key. If
     * you used a symmetric encryption KMS key, KMS can get the KMS key from metadata
     * that it adds to the symmetric ciphertext blob. However, it is always recommended
     * as a best practice. This practice ensures that you use the KMS key that you
     * intend.</p> <p>To specify a KMS key, use its key ID, key ARN, alias name, or
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
    inline ReEncryptRequest& WithSourceKeyId(const char* value) { SetSourceKeyId(value); return *this;}


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
    inline const Aws::String& GetDestinationKeyId() const{ return m_destinationKeyId; }

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
    inline bool DestinationKeyIdHasBeenSet() const { return m_destinationKeyIdHasBeenSet; }

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
    inline void SetDestinationKeyId(const Aws::String& value) { m_destinationKeyIdHasBeenSet = true; m_destinationKeyId = value; }

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
    inline void SetDestinationKeyId(Aws::String&& value) { m_destinationKeyIdHasBeenSet = true; m_destinationKeyId = std::move(value); }

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
    inline void SetDestinationKeyId(const char* value) { m_destinationKeyIdHasBeenSet = true; m_destinationKeyId.assign(value); }

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
    inline ReEncryptRequest& WithDestinationKeyId(const Aws::String& value) { SetDestinationKeyId(value); return *this;}

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
    inline ReEncryptRequest& WithDestinationKeyId(Aws::String&& value) { SetDestinationKeyId(std::move(value)); return *this;}

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
    inline ReEncryptRequest& WithDestinationKeyId(const char* value) { SetDestinationKeyId(value); return *this;}


    /**
     * <p>Specifies that encryption context to use when the reencrypting the data.</p>
     * <p>A destination encryption context is valid only when the destination KMS key
     * is a symmetric encryption KMS key. The standard ciphertext format for asymmetric
     * KMS keys does not include fields for metadata.</p> <p>An <i>encryption
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
    inline const Aws::Map<Aws::String, Aws::String>& GetDestinationEncryptionContext() const{ return m_destinationEncryptionContext; }

    /**
     * <p>Specifies that encryption context to use when the reencrypting the data.</p>
     * <p>A destination encryption context is valid only when the destination KMS key
     * is a symmetric encryption KMS key. The standard ciphertext format for asymmetric
     * KMS keys does not include fields for metadata.</p> <p>An <i>encryption
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
    inline bool DestinationEncryptionContextHasBeenSet() const { return m_destinationEncryptionContextHasBeenSet; }

    /**
     * <p>Specifies that encryption context to use when the reencrypting the data.</p>
     * <p>A destination encryption context is valid only when the destination KMS key
     * is a symmetric encryption KMS key. The standard ciphertext format for asymmetric
     * KMS keys does not include fields for metadata.</p> <p>An <i>encryption
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
    inline void SetDestinationEncryptionContext(const Aws::Map<Aws::String, Aws::String>& value) { m_destinationEncryptionContextHasBeenSet = true; m_destinationEncryptionContext = value; }

    /**
     * <p>Specifies that encryption context to use when the reencrypting the data.</p>
     * <p>A destination encryption context is valid only when the destination KMS key
     * is a symmetric encryption KMS key. The standard ciphertext format for asymmetric
     * KMS keys does not include fields for metadata.</p> <p>An <i>encryption
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
    inline void SetDestinationEncryptionContext(Aws::Map<Aws::String, Aws::String>&& value) { m_destinationEncryptionContextHasBeenSet = true; m_destinationEncryptionContext = std::move(value); }

    /**
     * <p>Specifies that encryption context to use when the reencrypting the data.</p>
     * <p>A destination encryption context is valid only when the destination KMS key
     * is a symmetric encryption KMS key. The standard ciphertext format for asymmetric
     * KMS keys does not include fields for metadata.</p> <p>An <i>encryption
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
    inline ReEncryptRequest& WithDestinationEncryptionContext(const Aws::Map<Aws::String, Aws::String>& value) { SetDestinationEncryptionContext(value); return *this;}

    /**
     * <p>Specifies that encryption context to use when the reencrypting the data.</p>
     * <p>A destination encryption context is valid only when the destination KMS key
     * is a symmetric encryption KMS key. The standard ciphertext format for asymmetric
     * KMS keys does not include fields for metadata.</p> <p>An <i>encryption
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
    inline ReEncryptRequest& WithDestinationEncryptionContext(Aws::Map<Aws::String, Aws::String>&& value) { SetDestinationEncryptionContext(std::move(value)); return *this;}

    /**
     * <p>Specifies that encryption context to use when the reencrypting the data.</p>
     * <p>A destination encryption context is valid only when the destination KMS key
     * is a symmetric encryption KMS key. The standard ciphertext format for asymmetric
     * KMS keys does not include fields for metadata.</p> <p>An <i>encryption
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
    inline ReEncryptRequest& AddDestinationEncryptionContext(const Aws::String& key, const Aws::String& value) { m_destinationEncryptionContextHasBeenSet = true; m_destinationEncryptionContext.emplace(key, value); return *this; }

    /**
     * <p>Specifies that encryption context to use when the reencrypting the data.</p>
     * <p>A destination encryption context is valid only when the destination KMS key
     * is a symmetric encryption KMS key. The standard ciphertext format for asymmetric
     * KMS keys does not include fields for metadata.</p> <p>An <i>encryption
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
    inline ReEncryptRequest& AddDestinationEncryptionContext(Aws::String&& key, const Aws::String& value) { m_destinationEncryptionContextHasBeenSet = true; m_destinationEncryptionContext.emplace(std::move(key), value); return *this; }

    /**
     * <p>Specifies that encryption context to use when the reencrypting the data.</p>
     * <p>A destination encryption context is valid only when the destination KMS key
     * is a symmetric encryption KMS key. The standard ciphertext format for asymmetric
     * KMS keys does not include fields for metadata.</p> <p>An <i>encryption
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
    inline ReEncryptRequest& AddDestinationEncryptionContext(const Aws::String& key, Aws::String&& value) { m_destinationEncryptionContextHasBeenSet = true; m_destinationEncryptionContext.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Specifies that encryption context to use when the reencrypting the data.</p>
     * <p>A destination encryption context is valid only when the destination KMS key
     * is a symmetric encryption KMS key. The standard ciphertext format for asymmetric
     * KMS keys does not include fields for metadata.</p> <p>An <i>encryption
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
    inline ReEncryptRequest& AddDestinationEncryptionContext(Aws::String&& key, Aws::String&& value) { m_destinationEncryptionContextHasBeenSet = true; m_destinationEncryptionContext.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Specifies that encryption context to use when the reencrypting the data.</p>
     * <p>A destination encryption context is valid only when the destination KMS key
     * is a symmetric encryption KMS key. The standard ciphertext format for asymmetric
     * KMS keys does not include fields for metadata.</p> <p>An <i>encryption
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
    inline ReEncryptRequest& AddDestinationEncryptionContext(const char* key, Aws::String&& value) { m_destinationEncryptionContextHasBeenSet = true; m_destinationEncryptionContext.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Specifies that encryption context to use when the reencrypting the data.</p>
     * <p>A destination encryption context is valid only when the destination KMS key
     * is a symmetric encryption KMS key. The standard ciphertext format for asymmetric
     * KMS keys does not include fields for metadata.</p> <p>An <i>encryption
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
    inline ReEncryptRequest& AddDestinationEncryptionContext(Aws::String&& key, const char* value) { m_destinationEncryptionContextHasBeenSet = true; m_destinationEncryptionContext.emplace(std::move(key), value); return *this; }

    /**
     * <p>Specifies that encryption context to use when the reencrypting the data.</p>
     * <p>A destination encryption context is valid only when the destination KMS key
     * is a symmetric encryption KMS key. The standard ciphertext format for asymmetric
     * KMS keys does not include fields for metadata.</p> <p>An <i>encryption
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
    inline ReEncryptRequest& AddDestinationEncryptionContext(const char* key, const char* value) { m_destinationEncryptionContextHasBeenSet = true; m_destinationEncryptionContext.emplace(key, value); return *this; }


    /**
     * <p>Specifies the encryption algorithm that KMS will use to decrypt the
     * ciphertext before it is reencrypted. The default value,
     * <code>SYMMETRIC_DEFAULT</code>, represents the algorithm used for symmetric
     * encryption KMS keys.</p> <p>Specify the same algorithm that was used to encrypt
     * the ciphertext. If you specify a different algorithm, the decrypt attempt
     * fails.</p> <p>This parameter is required only when the ciphertext was encrypted
     * under an asymmetric KMS key.</p>
     */
    inline const EncryptionAlgorithmSpec& GetSourceEncryptionAlgorithm() const{ return m_sourceEncryptionAlgorithm; }

    /**
     * <p>Specifies the encryption algorithm that KMS will use to decrypt the
     * ciphertext before it is reencrypted. The default value,
     * <code>SYMMETRIC_DEFAULT</code>, represents the algorithm used for symmetric
     * encryption KMS keys.</p> <p>Specify the same algorithm that was used to encrypt
     * the ciphertext. If you specify a different algorithm, the decrypt attempt
     * fails.</p> <p>This parameter is required only when the ciphertext was encrypted
     * under an asymmetric KMS key.</p>
     */
    inline bool SourceEncryptionAlgorithmHasBeenSet() const { return m_sourceEncryptionAlgorithmHasBeenSet; }

    /**
     * <p>Specifies the encryption algorithm that KMS will use to decrypt the
     * ciphertext before it is reencrypted. The default value,
     * <code>SYMMETRIC_DEFAULT</code>, represents the algorithm used for symmetric
     * encryption KMS keys.</p> <p>Specify the same algorithm that was used to encrypt
     * the ciphertext. If you specify a different algorithm, the decrypt attempt
     * fails.</p> <p>This parameter is required only when the ciphertext was encrypted
     * under an asymmetric KMS key.</p>
     */
    inline void SetSourceEncryptionAlgorithm(const EncryptionAlgorithmSpec& value) { m_sourceEncryptionAlgorithmHasBeenSet = true; m_sourceEncryptionAlgorithm = value; }

    /**
     * <p>Specifies the encryption algorithm that KMS will use to decrypt the
     * ciphertext before it is reencrypted. The default value,
     * <code>SYMMETRIC_DEFAULT</code>, represents the algorithm used for symmetric
     * encryption KMS keys.</p> <p>Specify the same algorithm that was used to encrypt
     * the ciphertext. If you specify a different algorithm, the decrypt attempt
     * fails.</p> <p>This parameter is required only when the ciphertext was encrypted
     * under an asymmetric KMS key.</p>
     */
    inline void SetSourceEncryptionAlgorithm(EncryptionAlgorithmSpec&& value) { m_sourceEncryptionAlgorithmHasBeenSet = true; m_sourceEncryptionAlgorithm = std::move(value); }

    /**
     * <p>Specifies the encryption algorithm that KMS will use to decrypt the
     * ciphertext before it is reencrypted. The default value,
     * <code>SYMMETRIC_DEFAULT</code>, represents the algorithm used for symmetric
     * encryption KMS keys.</p> <p>Specify the same algorithm that was used to encrypt
     * the ciphertext. If you specify a different algorithm, the decrypt attempt
     * fails.</p> <p>This parameter is required only when the ciphertext was encrypted
     * under an asymmetric KMS key.</p>
     */
    inline ReEncryptRequest& WithSourceEncryptionAlgorithm(const EncryptionAlgorithmSpec& value) { SetSourceEncryptionAlgorithm(value); return *this;}

    /**
     * <p>Specifies the encryption algorithm that KMS will use to decrypt the
     * ciphertext before it is reencrypted. The default value,
     * <code>SYMMETRIC_DEFAULT</code>, represents the algorithm used for symmetric
     * encryption KMS keys.</p> <p>Specify the same algorithm that was used to encrypt
     * the ciphertext. If you specify a different algorithm, the decrypt attempt
     * fails.</p> <p>This parameter is required only when the ciphertext was encrypted
     * under an asymmetric KMS key.</p>
     */
    inline ReEncryptRequest& WithSourceEncryptionAlgorithm(EncryptionAlgorithmSpec&& value) { SetSourceEncryptionAlgorithm(std::move(value)); return *this;}


    /**
     * <p>Specifies the encryption algorithm that KMS will use to reecrypt the data
     * after it has decrypted it. The default value, <code>SYMMETRIC_DEFAULT</code>,
     * represents the encryption algorithm used for symmetric encryption KMS keys.</p>
     * <p>This parameter is required only when the destination KMS key is an asymmetric
     * KMS key.</p>
     */
    inline const EncryptionAlgorithmSpec& GetDestinationEncryptionAlgorithm() const{ return m_destinationEncryptionAlgorithm; }

    /**
     * <p>Specifies the encryption algorithm that KMS will use to reecrypt the data
     * after it has decrypted it. The default value, <code>SYMMETRIC_DEFAULT</code>,
     * represents the encryption algorithm used for symmetric encryption KMS keys.</p>
     * <p>This parameter is required only when the destination KMS key is an asymmetric
     * KMS key.</p>
     */
    inline bool DestinationEncryptionAlgorithmHasBeenSet() const { return m_destinationEncryptionAlgorithmHasBeenSet; }

    /**
     * <p>Specifies the encryption algorithm that KMS will use to reecrypt the data
     * after it has decrypted it. The default value, <code>SYMMETRIC_DEFAULT</code>,
     * represents the encryption algorithm used for symmetric encryption KMS keys.</p>
     * <p>This parameter is required only when the destination KMS key is an asymmetric
     * KMS key.</p>
     */
    inline void SetDestinationEncryptionAlgorithm(const EncryptionAlgorithmSpec& value) { m_destinationEncryptionAlgorithmHasBeenSet = true; m_destinationEncryptionAlgorithm = value; }

    /**
     * <p>Specifies the encryption algorithm that KMS will use to reecrypt the data
     * after it has decrypted it. The default value, <code>SYMMETRIC_DEFAULT</code>,
     * represents the encryption algorithm used for symmetric encryption KMS keys.</p>
     * <p>This parameter is required only when the destination KMS key is an asymmetric
     * KMS key.</p>
     */
    inline void SetDestinationEncryptionAlgorithm(EncryptionAlgorithmSpec&& value) { m_destinationEncryptionAlgorithmHasBeenSet = true; m_destinationEncryptionAlgorithm = std::move(value); }

    /**
     * <p>Specifies the encryption algorithm that KMS will use to reecrypt the data
     * after it has decrypted it. The default value, <code>SYMMETRIC_DEFAULT</code>,
     * represents the encryption algorithm used for symmetric encryption KMS keys.</p>
     * <p>This parameter is required only when the destination KMS key is an asymmetric
     * KMS key.</p>
     */
    inline ReEncryptRequest& WithDestinationEncryptionAlgorithm(const EncryptionAlgorithmSpec& value) { SetDestinationEncryptionAlgorithm(value); return *this;}

    /**
     * <p>Specifies the encryption algorithm that KMS will use to reecrypt the data
     * after it has decrypted it. The default value, <code>SYMMETRIC_DEFAULT</code>,
     * represents the encryption algorithm used for symmetric encryption KMS keys.</p>
     * <p>This parameter is required only when the destination KMS key is an asymmetric
     * KMS key.</p>
     */
    inline ReEncryptRequest& WithDestinationEncryptionAlgorithm(EncryptionAlgorithmSpec&& value) { SetDestinationEncryptionAlgorithm(std::move(value)); return *this;}


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
    inline ReEncryptRequest& WithGrantTokens(const Aws::Vector<Aws::String>& value) { SetGrantTokens(value); return *this;}

    /**
     * <p>A list of grant tokens.</p> <p>Use a grant token when your permission to call
     * this operation comes from a new grant that has not yet achieved <i>eventual
     * consistency</i>. For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/grants.html#grant_token">Grant
     * token</a> and <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/grant-manage.html#using-grant-token">Using
     * a grant token</a> in the <i>Key Management Service Developer Guide</i>.</p>
     */
    inline ReEncryptRequest& WithGrantTokens(Aws::Vector<Aws::String>&& value) { SetGrantTokens(std::move(value)); return *this;}

    /**
     * <p>A list of grant tokens.</p> <p>Use a grant token when your permission to call
     * this operation comes from a new grant that has not yet achieved <i>eventual
     * consistency</i>. For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/grants.html#grant_token">Grant
     * token</a> and <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/grant-manage.html#using-grant-token">Using
     * a grant token</a> in the <i>Key Management Service Developer Guide</i>.</p>
     */
    inline ReEncryptRequest& AddGrantTokens(const Aws::String& value) { m_grantTokensHasBeenSet = true; m_grantTokens.push_back(value); return *this; }

    /**
     * <p>A list of grant tokens.</p> <p>Use a grant token when your permission to call
     * this operation comes from a new grant that has not yet achieved <i>eventual
     * consistency</i>. For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/grants.html#grant_token">Grant
     * token</a> and <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/grant-manage.html#using-grant-token">Using
     * a grant token</a> in the <i>Key Management Service Developer Guide</i>.</p>
     */
    inline ReEncryptRequest& AddGrantTokens(Aws::String&& value) { m_grantTokensHasBeenSet = true; m_grantTokens.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of grant tokens.</p> <p>Use a grant token when your permission to call
     * this operation comes from a new grant that has not yet achieved <i>eventual
     * consistency</i>. For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/grants.html#grant_token">Grant
     * token</a> and <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/grant-manage.html#using-grant-token">Using
     * a grant token</a> in the <i>Key Management Service Developer Guide</i>.</p>
     */
    inline ReEncryptRequest& AddGrantTokens(const char* value) { m_grantTokensHasBeenSet = true; m_grantTokens.push_back(value); return *this; }

  private:

    Aws::Utils::ByteBuffer m_ciphertextBlob;
    bool m_ciphertextBlobHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_sourceEncryptionContext;
    bool m_sourceEncryptionContextHasBeenSet = false;

    Aws::String m_sourceKeyId;
    bool m_sourceKeyIdHasBeenSet = false;

    Aws::String m_destinationKeyId;
    bool m_destinationKeyIdHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_destinationEncryptionContext;
    bool m_destinationEncryptionContextHasBeenSet = false;

    EncryptionAlgorithmSpec m_sourceEncryptionAlgorithm;
    bool m_sourceEncryptionAlgorithmHasBeenSet = false;

    EncryptionAlgorithmSpec m_destinationEncryptionAlgorithm;
    bool m_destinationEncryptionAlgorithmHasBeenSet = false;

    Aws::Vector<Aws::String> m_grantTokens;
    bool m_grantTokensHasBeenSet = false;
  };

} // namespace Model
} // namespace KMS
} // namespace Aws
