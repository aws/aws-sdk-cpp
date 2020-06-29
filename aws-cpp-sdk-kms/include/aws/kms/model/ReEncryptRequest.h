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
  class AWS_KMS_API ReEncryptRequest : public KMSRequest
  {
  public:
    ReEncryptRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ReEncrypt"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


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
     * represents additional authenticated data. When you use an encryption context to
     * encrypt data, you must specify the same (an exact case-sensitive match)
     * encryption context to decrypt the data. An encryption context is optional when
     * encrypting with a symmetric CMK, but it is highly recommended.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#encrypt_context">Encryption
     * Context</a> in the <i>AWS Key Management Service Developer Guide</i>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetSourceEncryptionContext() const{ return m_sourceEncryptionContext; }

    /**
     * <p>Specifies the encryption context to use to decrypt the ciphertext. Enter the
     * same encryption context that was used to encrypt the ciphertext.</p> <p>An
     * <i>encryption context</i> is a collection of non-secret key-value pairs that
     * represents additional authenticated data. When you use an encryption context to
     * encrypt data, you must specify the same (an exact case-sensitive match)
     * encryption context to decrypt the data. An encryption context is optional when
     * encrypting with a symmetric CMK, but it is highly recommended.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#encrypt_context">Encryption
     * Context</a> in the <i>AWS Key Management Service Developer Guide</i>.</p>
     */
    inline bool SourceEncryptionContextHasBeenSet() const { return m_sourceEncryptionContextHasBeenSet; }

    /**
     * <p>Specifies the encryption context to use to decrypt the ciphertext. Enter the
     * same encryption context that was used to encrypt the ciphertext.</p> <p>An
     * <i>encryption context</i> is a collection of non-secret key-value pairs that
     * represents additional authenticated data. When you use an encryption context to
     * encrypt data, you must specify the same (an exact case-sensitive match)
     * encryption context to decrypt the data. An encryption context is optional when
     * encrypting with a symmetric CMK, but it is highly recommended.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#encrypt_context">Encryption
     * Context</a> in the <i>AWS Key Management Service Developer Guide</i>.</p>
     */
    inline void SetSourceEncryptionContext(const Aws::Map<Aws::String, Aws::String>& value) { m_sourceEncryptionContextHasBeenSet = true; m_sourceEncryptionContext = value; }

    /**
     * <p>Specifies the encryption context to use to decrypt the ciphertext. Enter the
     * same encryption context that was used to encrypt the ciphertext.</p> <p>An
     * <i>encryption context</i> is a collection of non-secret key-value pairs that
     * represents additional authenticated data. When you use an encryption context to
     * encrypt data, you must specify the same (an exact case-sensitive match)
     * encryption context to decrypt the data. An encryption context is optional when
     * encrypting with a symmetric CMK, but it is highly recommended.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#encrypt_context">Encryption
     * Context</a> in the <i>AWS Key Management Service Developer Guide</i>.</p>
     */
    inline void SetSourceEncryptionContext(Aws::Map<Aws::String, Aws::String>&& value) { m_sourceEncryptionContextHasBeenSet = true; m_sourceEncryptionContext = std::move(value); }

    /**
     * <p>Specifies the encryption context to use to decrypt the ciphertext. Enter the
     * same encryption context that was used to encrypt the ciphertext.</p> <p>An
     * <i>encryption context</i> is a collection of non-secret key-value pairs that
     * represents additional authenticated data. When you use an encryption context to
     * encrypt data, you must specify the same (an exact case-sensitive match)
     * encryption context to decrypt the data. An encryption context is optional when
     * encrypting with a symmetric CMK, but it is highly recommended.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#encrypt_context">Encryption
     * Context</a> in the <i>AWS Key Management Service Developer Guide</i>.</p>
     */
    inline ReEncryptRequest& WithSourceEncryptionContext(const Aws::Map<Aws::String, Aws::String>& value) { SetSourceEncryptionContext(value); return *this;}

    /**
     * <p>Specifies the encryption context to use to decrypt the ciphertext. Enter the
     * same encryption context that was used to encrypt the ciphertext.</p> <p>An
     * <i>encryption context</i> is a collection of non-secret key-value pairs that
     * represents additional authenticated data. When you use an encryption context to
     * encrypt data, you must specify the same (an exact case-sensitive match)
     * encryption context to decrypt the data. An encryption context is optional when
     * encrypting with a symmetric CMK, but it is highly recommended.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#encrypt_context">Encryption
     * Context</a> in the <i>AWS Key Management Service Developer Guide</i>.</p>
     */
    inline ReEncryptRequest& WithSourceEncryptionContext(Aws::Map<Aws::String, Aws::String>&& value) { SetSourceEncryptionContext(std::move(value)); return *this;}

    /**
     * <p>Specifies the encryption context to use to decrypt the ciphertext. Enter the
     * same encryption context that was used to encrypt the ciphertext.</p> <p>An
     * <i>encryption context</i> is a collection of non-secret key-value pairs that
     * represents additional authenticated data. When you use an encryption context to
     * encrypt data, you must specify the same (an exact case-sensitive match)
     * encryption context to decrypt the data. An encryption context is optional when
     * encrypting with a symmetric CMK, but it is highly recommended.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#encrypt_context">Encryption
     * Context</a> in the <i>AWS Key Management Service Developer Guide</i>.</p>
     */
    inline ReEncryptRequest& AddSourceEncryptionContext(const Aws::String& key, const Aws::String& value) { m_sourceEncryptionContextHasBeenSet = true; m_sourceEncryptionContext.emplace(key, value); return *this; }

    /**
     * <p>Specifies the encryption context to use to decrypt the ciphertext. Enter the
     * same encryption context that was used to encrypt the ciphertext.</p> <p>An
     * <i>encryption context</i> is a collection of non-secret key-value pairs that
     * represents additional authenticated data. When you use an encryption context to
     * encrypt data, you must specify the same (an exact case-sensitive match)
     * encryption context to decrypt the data. An encryption context is optional when
     * encrypting with a symmetric CMK, but it is highly recommended.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#encrypt_context">Encryption
     * Context</a> in the <i>AWS Key Management Service Developer Guide</i>.</p>
     */
    inline ReEncryptRequest& AddSourceEncryptionContext(Aws::String&& key, const Aws::String& value) { m_sourceEncryptionContextHasBeenSet = true; m_sourceEncryptionContext.emplace(std::move(key), value); return *this; }

    /**
     * <p>Specifies the encryption context to use to decrypt the ciphertext. Enter the
     * same encryption context that was used to encrypt the ciphertext.</p> <p>An
     * <i>encryption context</i> is a collection of non-secret key-value pairs that
     * represents additional authenticated data. When you use an encryption context to
     * encrypt data, you must specify the same (an exact case-sensitive match)
     * encryption context to decrypt the data. An encryption context is optional when
     * encrypting with a symmetric CMK, but it is highly recommended.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#encrypt_context">Encryption
     * Context</a> in the <i>AWS Key Management Service Developer Guide</i>.</p>
     */
    inline ReEncryptRequest& AddSourceEncryptionContext(const Aws::String& key, Aws::String&& value) { m_sourceEncryptionContextHasBeenSet = true; m_sourceEncryptionContext.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Specifies the encryption context to use to decrypt the ciphertext. Enter the
     * same encryption context that was used to encrypt the ciphertext.</p> <p>An
     * <i>encryption context</i> is a collection of non-secret key-value pairs that
     * represents additional authenticated data. When you use an encryption context to
     * encrypt data, you must specify the same (an exact case-sensitive match)
     * encryption context to decrypt the data. An encryption context is optional when
     * encrypting with a symmetric CMK, but it is highly recommended.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#encrypt_context">Encryption
     * Context</a> in the <i>AWS Key Management Service Developer Guide</i>.</p>
     */
    inline ReEncryptRequest& AddSourceEncryptionContext(Aws::String&& key, Aws::String&& value) { m_sourceEncryptionContextHasBeenSet = true; m_sourceEncryptionContext.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Specifies the encryption context to use to decrypt the ciphertext. Enter the
     * same encryption context that was used to encrypt the ciphertext.</p> <p>An
     * <i>encryption context</i> is a collection of non-secret key-value pairs that
     * represents additional authenticated data. When you use an encryption context to
     * encrypt data, you must specify the same (an exact case-sensitive match)
     * encryption context to decrypt the data. An encryption context is optional when
     * encrypting with a symmetric CMK, but it is highly recommended.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#encrypt_context">Encryption
     * Context</a> in the <i>AWS Key Management Service Developer Guide</i>.</p>
     */
    inline ReEncryptRequest& AddSourceEncryptionContext(const char* key, Aws::String&& value) { m_sourceEncryptionContextHasBeenSet = true; m_sourceEncryptionContext.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Specifies the encryption context to use to decrypt the ciphertext. Enter the
     * same encryption context that was used to encrypt the ciphertext.</p> <p>An
     * <i>encryption context</i> is a collection of non-secret key-value pairs that
     * represents additional authenticated data. When you use an encryption context to
     * encrypt data, you must specify the same (an exact case-sensitive match)
     * encryption context to decrypt the data. An encryption context is optional when
     * encrypting with a symmetric CMK, but it is highly recommended.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#encrypt_context">Encryption
     * Context</a> in the <i>AWS Key Management Service Developer Guide</i>.</p>
     */
    inline ReEncryptRequest& AddSourceEncryptionContext(Aws::String&& key, const char* value) { m_sourceEncryptionContextHasBeenSet = true; m_sourceEncryptionContext.emplace(std::move(key), value); return *this; }

    /**
     * <p>Specifies the encryption context to use to decrypt the ciphertext. Enter the
     * same encryption context that was used to encrypt the ciphertext.</p> <p>An
     * <i>encryption context</i> is a collection of non-secret key-value pairs that
     * represents additional authenticated data. When you use an encryption context to
     * encrypt data, you must specify the same (an exact case-sensitive match)
     * encryption context to decrypt the data. An encryption context is optional when
     * encrypting with a symmetric CMK, but it is highly recommended.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#encrypt_context">Encryption
     * Context</a> in the <i>AWS Key Management Service Developer Guide</i>.</p>
     */
    inline ReEncryptRequest& AddSourceEncryptionContext(const char* key, const char* value) { m_sourceEncryptionContextHasBeenSet = true; m_sourceEncryptionContext.emplace(key, value); return *this; }


    /**
     * <p>A unique identifier for the CMK that is used to decrypt the ciphertext before
     * it reencrypts it using the destination CMK.</p> <p>This parameter is required
     * only when the ciphertext was encrypted under an asymmetric CMK. Otherwise, AWS
     * KMS uses the metadata that it adds to the ciphertext blob to determine which CMK
     * was used to encrypt the ciphertext. However, you can use this parameter to
     * ensure that a particular CMK (of any kind) is used to decrypt the ciphertext
     * before it is reencrypted.</p> <p>If you specify a <code>KeyId</code> value, the
     * decrypt part of the <code>ReEncrypt</code> operation succeeds only if the
     * specified CMK was used to encrypt the ciphertext.</p> <p>To specify a CMK, use
     * its key ID, Amazon Resource Name (ARN), alias name, or alias ARN. When using an
     * alias name, prefix it with <code>"alias/"</code>.</p> <p>For example:</p> <ul>
     * <li> <p>Key ID: <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li>
     * <li> <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> <li> <p>Alias name: <code>alias/ExampleAlias</code> </p> </li> <li>
     * <p>Alias ARN: <code>arn:aws:kms:us-east-2:111122223333:alias/ExampleAlias</code>
     * </p> </li> </ul> <p>To get the key ID and key ARN for a CMK, use <a>ListKeys</a>
     * or <a>DescribeKey</a>. To get the alias name and alias ARN, use
     * <a>ListAliases</a>.</p>
     */
    inline const Aws::String& GetSourceKeyId() const{ return m_sourceKeyId; }

    /**
     * <p>A unique identifier for the CMK that is used to decrypt the ciphertext before
     * it reencrypts it using the destination CMK.</p> <p>This parameter is required
     * only when the ciphertext was encrypted under an asymmetric CMK. Otherwise, AWS
     * KMS uses the metadata that it adds to the ciphertext blob to determine which CMK
     * was used to encrypt the ciphertext. However, you can use this parameter to
     * ensure that a particular CMK (of any kind) is used to decrypt the ciphertext
     * before it is reencrypted.</p> <p>If you specify a <code>KeyId</code> value, the
     * decrypt part of the <code>ReEncrypt</code> operation succeeds only if the
     * specified CMK was used to encrypt the ciphertext.</p> <p>To specify a CMK, use
     * its key ID, Amazon Resource Name (ARN), alias name, or alias ARN. When using an
     * alias name, prefix it with <code>"alias/"</code>.</p> <p>For example:</p> <ul>
     * <li> <p>Key ID: <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li>
     * <li> <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> <li> <p>Alias name: <code>alias/ExampleAlias</code> </p> </li> <li>
     * <p>Alias ARN: <code>arn:aws:kms:us-east-2:111122223333:alias/ExampleAlias</code>
     * </p> </li> </ul> <p>To get the key ID and key ARN for a CMK, use <a>ListKeys</a>
     * or <a>DescribeKey</a>. To get the alias name and alias ARN, use
     * <a>ListAliases</a>.</p>
     */
    inline bool SourceKeyIdHasBeenSet() const { return m_sourceKeyIdHasBeenSet; }

    /**
     * <p>A unique identifier for the CMK that is used to decrypt the ciphertext before
     * it reencrypts it using the destination CMK.</p> <p>This parameter is required
     * only when the ciphertext was encrypted under an asymmetric CMK. Otherwise, AWS
     * KMS uses the metadata that it adds to the ciphertext blob to determine which CMK
     * was used to encrypt the ciphertext. However, you can use this parameter to
     * ensure that a particular CMK (of any kind) is used to decrypt the ciphertext
     * before it is reencrypted.</p> <p>If you specify a <code>KeyId</code> value, the
     * decrypt part of the <code>ReEncrypt</code> operation succeeds only if the
     * specified CMK was used to encrypt the ciphertext.</p> <p>To specify a CMK, use
     * its key ID, Amazon Resource Name (ARN), alias name, or alias ARN. When using an
     * alias name, prefix it with <code>"alias/"</code>.</p> <p>For example:</p> <ul>
     * <li> <p>Key ID: <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li>
     * <li> <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> <li> <p>Alias name: <code>alias/ExampleAlias</code> </p> </li> <li>
     * <p>Alias ARN: <code>arn:aws:kms:us-east-2:111122223333:alias/ExampleAlias</code>
     * </p> </li> </ul> <p>To get the key ID and key ARN for a CMK, use <a>ListKeys</a>
     * or <a>DescribeKey</a>. To get the alias name and alias ARN, use
     * <a>ListAliases</a>.</p>
     */
    inline void SetSourceKeyId(const Aws::String& value) { m_sourceKeyIdHasBeenSet = true; m_sourceKeyId = value; }

    /**
     * <p>A unique identifier for the CMK that is used to decrypt the ciphertext before
     * it reencrypts it using the destination CMK.</p> <p>This parameter is required
     * only when the ciphertext was encrypted under an asymmetric CMK. Otherwise, AWS
     * KMS uses the metadata that it adds to the ciphertext blob to determine which CMK
     * was used to encrypt the ciphertext. However, you can use this parameter to
     * ensure that a particular CMK (of any kind) is used to decrypt the ciphertext
     * before it is reencrypted.</p> <p>If you specify a <code>KeyId</code> value, the
     * decrypt part of the <code>ReEncrypt</code> operation succeeds only if the
     * specified CMK was used to encrypt the ciphertext.</p> <p>To specify a CMK, use
     * its key ID, Amazon Resource Name (ARN), alias name, or alias ARN. When using an
     * alias name, prefix it with <code>"alias/"</code>.</p> <p>For example:</p> <ul>
     * <li> <p>Key ID: <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li>
     * <li> <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> <li> <p>Alias name: <code>alias/ExampleAlias</code> </p> </li> <li>
     * <p>Alias ARN: <code>arn:aws:kms:us-east-2:111122223333:alias/ExampleAlias</code>
     * </p> </li> </ul> <p>To get the key ID and key ARN for a CMK, use <a>ListKeys</a>
     * or <a>DescribeKey</a>. To get the alias name and alias ARN, use
     * <a>ListAliases</a>.</p>
     */
    inline void SetSourceKeyId(Aws::String&& value) { m_sourceKeyIdHasBeenSet = true; m_sourceKeyId = std::move(value); }

    /**
     * <p>A unique identifier for the CMK that is used to decrypt the ciphertext before
     * it reencrypts it using the destination CMK.</p> <p>This parameter is required
     * only when the ciphertext was encrypted under an asymmetric CMK. Otherwise, AWS
     * KMS uses the metadata that it adds to the ciphertext blob to determine which CMK
     * was used to encrypt the ciphertext. However, you can use this parameter to
     * ensure that a particular CMK (of any kind) is used to decrypt the ciphertext
     * before it is reencrypted.</p> <p>If you specify a <code>KeyId</code> value, the
     * decrypt part of the <code>ReEncrypt</code> operation succeeds only if the
     * specified CMK was used to encrypt the ciphertext.</p> <p>To specify a CMK, use
     * its key ID, Amazon Resource Name (ARN), alias name, or alias ARN. When using an
     * alias name, prefix it with <code>"alias/"</code>.</p> <p>For example:</p> <ul>
     * <li> <p>Key ID: <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li>
     * <li> <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> <li> <p>Alias name: <code>alias/ExampleAlias</code> </p> </li> <li>
     * <p>Alias ARN: <code>arn:aws:kms:us-east-2:111122223333:alias/ExampleAlias</code>
     * </p> </li> </ul> <p>To get the key ID and key ARN for a CMK, use <a>ListKeys</a>
     * or <a>DescribeKey</a>. To get the alias name and alias ARN, use
     * <a>ListAliases</a>.</p>
     */
    inline void SetSourceKeyId(const char* value) { m_sourceKeyIdHasBeenSet = true; m_sourceKeyId.assign(value); }

    /**
     * <p>A unique identifier for the CMK that is used to decrypt the ciphertext before
     * it reencrypts it using the destination CMK.</p> <p>This parameter is required
     * only when the ciphertext was encrypted under an asymmetric CMK. Otherwise, AWS
     * KMS uses the metadata that it adds to the ciphertext blob to determine which CMK
     * was used to encrypt the ciphertext. However, you can use this parameter to
     * ensure that a particular CMK (of any kind) is used to decrypt the ciphertext
     * before it is reencrypted.</p> <p>If you specify a <code>KeyId</code> value, the
     * decrypt part of the <code>ReEncrypt</code> operation succeeds only if the
     * specified CMK was used to encrypt the ciphertext.</p> <p>To specify a CMK, use
     * its key ID, Amazon Resource Name (ARN), alias name, or alias ARN. When using an
     * alias name, prefix it with <code>"alias/"</code>.</p> <p>For example:</p> <ul>
     * <li> <p>Key ID: <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li>
     * <li> <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> <li> <p>Alias name: <code>alias/ExampleAlias</code> </p> </li> <li>
     * <p>Alias ARN: <code>arn:aws:kms:us-east-2:111122223333:alias/ExampleAlias</code>
     * </p> </li> </ul> <p>To get the key ID and key ARN for a CMK, use <a>ListKeys</a>
     * or <a>DescribeKey</a>. To get the alias name and alias ARN, use
     * <a>ListAliases</a>.</p>
     */
    inline ReEncryptRequest& WithSourceKeyId(const Aws::String& value) { SetSourceKeyId(value); return *this;}

    /**
     * <p>A unique identifier for the CMK that is used to decrypt the ciphertext before
     * it reencrypts it using the destination CMK.</p> <p>This parameter is required
     * only when the ciphertext was encrypted under an asymmetric CMK. Otherwise, AWS
     * KMS uses the metadata that it adds to the ciphertext blob to determine which CMK
     * was used to encrypt the ciphertext. However, you can use this parameter to
     * ensure that a particular CMK (of any kind) is used to decrypt the ciphertext
     * before it is reencrypted.</p> <p>If you specify a <code>KeyId</code> value, the
     * decrypt part of the <code>ReEncrypt</code> operation succeeds only if the
     * specified CMK was used to encrypt the ciphertext.</p> <p>To specify a CMK, use
     * its key ID, Amazon Resource Name (ARN), alias name, or alias ARN. When using an
     * alias name, prefix it with <code>"alias/"</code>.</p> <p>For example:</p> <ul>
     * <li> <p>Key ID: <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li>
     * <li> <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> <li> <p>Alias name: <code>alias/ExampleAlias</code> </p> </li> <li>
     * <p>Alias ARN: <code>arn:aws:kms:us-east-2:111122223333:alias/ExampleAlias</code>
     * </p> </li> </ul> <p>To get the key ID and key ARN for a CMK, use <a>ListKeys</a>
     * or <a>DescribeKey</a>. To get the alias name and alias ARN, use
     * <a>ListAliases</a>.</p>
     */
    inline ReEncryptRequest& WithSourceKeyId(Aws::String&& value) { SetSourceKeyId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the CMK that is used to decrypt the ciphertext before
     * it reencrypts it using the destination CMK.</p> <p>This parameter is required
     * only when the ciphertext was encrypted under an asymmetric CMK. Otherwise, AWS
     * KMS uses the metadata that it adds to the ciphertext blob to determine which CMK
     * was used to encrypt the ciphertext. However, you can use this parameter to
     * ensure that a particular CMK (of any kind) is used to decrypt the ciphertext
     * before it is reencrypted.</p> <p>If you specify a <code>KeyId</code> value, the
     * decrypt part of the <code>ReEncrypt</code> operation succeeds only if the
     * specified CMK was used to encrypt the ciphertext.</p> <p>To specify a CMK, use
     * its key ID, Amazon Resource Name (ARN), alias name, or alias ARN. When using an
     * alias name, prefix it with <code>"alias/"</code>.</p> <p>For example:</p> <ul>
     * <li> <p>Key ID: <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li>
     * <li> <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> <li> <p>Alias name: <code>alias/ExampleAlias</code> </p> </li> <li>
     * <p>Alias ARN: <code>arn:aws:kms:us-east-2:111122223333:alias/ExampleAlias</code>
     * </p> </li> </ul> <p>To get the key ID and key ARN for a CMK, use <a>ListKeys</a>
     * or <a>DescribeKey</a>. To get the alias name and alias ARN, use
     * <a>ListAliases</a>.</p>
     */
    inline ReEncryptRequest& WithSourceKeyId(const char* value) { SetSourceKeyId(value); return *this;}


    /**
     * <p>A unique identifier for the CMK that is used to reencrypt the data. Specify a
     * symmetric or asymmetric CMK with a <code>KeyUsage</code> value of
     * <code>ENCRYPT_DECRYPT</code>. To find the <code>KeyUsage</code> value of a CMK,
     * use the <a>DescribeKey</a> operation.</p> <p>To specify a CMK, use its key ID,
     * Amazon Resource Name (ARN), alias name, or alias ARN. When using an alias name,
     * prefix it with <code>"alias/"</code>. To specify a CMK in a different AWS
     * account, you must use the key ARN or alias ARN.</p> <p>For example:</p> <ul>
     * <li> <p>Key ID: <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li>
     * <li> <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> <li> <p>Alias name: <code>alias/ExampleAlias</code> </p> </li> <li>
     * <p>Alias ARN: <code>arn:aws:kms:us-east-2:111122223333:alias/ExampleAlias</code>
     * </p> </li> </ul> <p>To get the key ID and key ARN for a CMK, use <a>ListKeys</a>
     * or <a>DescribeKey</a>. To get the alias name and alias ARN, use
     * <a>ListAliases</a>.</p>
     */
    inline const Aws::String& GetDestinationKeyId() const{ return m_destinationKeyId; }

    /**
     * <p>A unique identifier for the CMK that is used to reencrypt the data. Specify a
     * symmetric or asymmetric CMK with a <code>KeyUsage</code> value of
     * <code>ENCRYPT_DECRYPT</code>. To find the <code>KeyUsage</code> value of a CMK,
     * use the <a>DescribeKey</a> operation.</p> <p>To specify a CMK, use its key ID,
     * Amazon Resource Name (ARN), alias name, or alias ARN. When using an alias name,
     * prefix it with <code>"alias/"</code>. To specify a CMK in a different AWS
     * account, you must use the key ARN or alias ARN.</p> <p>For example:</p> <ul>
     * <li> <p>Key ID: <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li>
     * <li> <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> <li> <p>Alias name: <code>alias/ExampleAlias</code> </p> </li> <li>
     * <p>Alias ARN: <code>arn:aws:kms:us-east-2:111122223333:alias/ExampleAlias</code>
     * </p> </li> </ul> <p>To get the key ID and key ARN for a CMK, use <a>ListKeys</a>
     * or <a>DescribeKey</a>. To get the alias name and alias ARN, use
     * <a>ListAliases</a>.</p>
     */
    inline bool DestinationKeyIdHasBeenSet() const { return m_destinationKeyIdHasBeenSet; }

    /**
     * <p>A unique identifier for the CMK that is used to reencrypt the data. Specify a
     * symmetric or asymmetric CMK with a <code>KeyUsage</code> value of
     * <code>ENCRYPT_DECRYPT</code>. To find the <code>KeyUsage</code> value of a CMK,
     * use the <a>DescribeKey</a> operation.</p> <p>To specify a CMK, use its key ID,
     * Amazon Resource Name (ARN), alias name, or alias ARN. When using an alias name,
     * prefix it with <code>"alias/"</code>. To specify a CMK in a different AWS
     * account, you must use the key ARN or alias ARN.</p> <p>For example:</p> <ul>
     * <li> <p>Key ID: <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li>
     * <li> <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> <li> <p>Alias name: <code>alias/ExampleAlias</code> </p> </li> <li>
     * <p>Alias ARN: <code>arn:aws:kms:us-east-2:111122223333:alias/ExampleAlias</code>
     * </p> </li> </ul> <p>To get the key ID and key ARN for a CMK, use <a>ListKeys</a>
     * or <a>DescribeKey</a>. To get the alias name and alias ARN, use
     * <a>ListAliases</a>.</p>
     */
    inline void SetDestinationKeyId(const Aws::String& value) { m_destinationKeyIdHasBeenSet = true; m_destinationKeyId = value; }

    /**
     * <p>A unique identifier for the CMK that is used to reencrypt the data. Specify a
     * symmetric or asymmetric CMK with a <code>KeyUsage</code> value of
     * <code>ENCRYPT_DECRYPT</code>. To find the <code>KeyUsage</code> value of a CMK,
     * use the <a>DescribeKey</a> operation.</p> <p>To specify a CMK, use its key ID,
     * Amazon Resource Name (ARN), alias name, or alias ARN. When using an alias name,
     * prefix it with <code>"alias/"</code>. To specify a CMK in a different AWS
     * account, you must use the key ARN or alias ARN.</p> <p>For example:</p> <ul>
     * <li> <p>Key ID: <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li>
     * <li> <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> <li> <p>Alias name: <code>alias/ExampleAlias</code> </p> </li> <li>
     * <p>Alias ARN: <code>arn:aws:kms:us-east-2:111122223333:alias/ExampleAlias</code>
     * </p> </li> </ul> <p>To get the key ID and key ARN for a CMK, use <a>ListKeys</a>
     * or <a>DescribeKey</a>. To get the alias name and alias ARN, use
     * <a>ListAliases</a>.</p>
     */
    inline void SetDestinationKeyId(Aws::String&& value) { m_destinationKeyIdHasBeenSet = true; m_destinationKeyId = std::move(value); }

    /**
     * <p>A unique identifier for the CMK that is used to reencrypt the data. Specify a
     * symmetric or asymmetric CMK with a <code>KeyUsage</code> value of
     * <code>ENCRYPT_DECRYPT</code>. To find the <code>KeyUsage</code> value of a CMK,
     * use the <a>DescribeKey</a> operation.</p> <p>To specify a CMK, use its key ID,
     * Amazon Resource Name (ARN), alias name, or alias ARN. When using an alias name,
     * prefix it with <code>"alias/"</code>. To specify a CMK in a different AWS
     * account, you must use the key ARN or alias ARN.</p> <p>For example:</p> <ul>
     * <li> <p>Key ID: <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li>
     * <li> <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> <li> <p>Alias name: <code>alias/ExampleAlias</code> </p> </li> <li>
     * <p>Alias ARN: <code>arn:aws:kms:us-east-2:111122223333:alias/ExampleAlias</code>
     * </p> </li> </ul> <p>To get the key ID and key ARN for a CMK, use <a>ListKeys</a>
     * or <a>DescribeKey</a>. To get the alias name and alias ARN, use
     * <a>ListAliases</a>.</p>
     */
    inline void SetDestinationKeyId(const char* value) { m_destinationKeyIdHasBeenSet = true; m_destinationKeyId.assign(value); }

    /**
     * <p>A unique identifier for the CMK that is used to reencrypt the data. Specify a
     * symmetric or asymmetric CMK with a <code>KeyUsage</code> value of
     * <code>ENCRYPT_DECRYPT</code>. To find the <code>KeyUsage</code> value of a CMK,
     * use the <a>DescribeKey</a> operation.</p> <p>To specify a CMK, use its key ID,
     * Amazon Resource Name (ARN), alias name, or alias ARN. When using an alias name,
     * prefix it with <code>"alias/"</code>. To specify a CMK in a different AWS
     * account, you must use the key ARN or alias ARN.</p> <p>For example:</p> <ul>
     * <li> <p>Key ID: <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li>
     * <li> <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> <li> <p>Alias name: <code>alias/ExampleAlias</code> </p> </li> <li>
     * <p>Alias ARN: <code>arn:aws:kms:us-east-2:111122223333:alias/ExampleAlias</code>
     * </p> </li> </ul> <p>To get the key ID and key ARN for a CMK, use <a>ListKeys</a>
     * or <a>DescribeKey</a>. To get the alias name and alias ARN, use
     * <a>ListAliases</a>.</p>
     */
    inline ReEncryptRequest& WithDestinationKeyId(const Aws::String& value) { SetDestinationKeyId(value); return *this;}

    /**
     * <p>A unique identifier for the CMK that is used to reencrypt the data. Specify a
     * symmetric or asymmetric CMK with a <code>KeyUsage</code> value of
     * <code>ENCRYPT_DECRYPT</code>. To find the <code>KeyUsage</code> value of a CMK,
     * use the <a>DescribeKey</a> operation.</p> <p>To specify a CMK, use its key ID,
     * Amazon Resource Name (ARN), alias name, or alias ARN. When using an alias name,
     * prefix it with <code>"alias/"</code>. To specify a CMK in a different AWS
     * account, you must use the key ARN or alias ARN.</p> <p>For example:</p> <ul>
     * <li> <p>Key ID: <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li>
     * <li> <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> <li> <p>Alias name: <code>alias/ExampleAlias</code> </p> </li> <li>
     * <p>Alias ARN: <code>arn:aws:kms:us-east-2:111122223333:alias/ExampleAlias</code>
     * </p> </li> </ul> <p>To get the key ID and key ARN for a CMK, use <a>ListKeys</a>
     * or <a>DescribeKey</a>. To get the alias name and alias ARN, use
     * <a>ListAliases</a>.</p>
     */
    inline ReEncryptRequest& WithDestinationKeyId(Aws::String&& value) { SetDestinationKeyId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the CMK that is used to reencrypt the data. Specify a
     * symmetric or asymmetric CMK with a <code>KeyUsage</code> value of
     * <code>ENCRYPT_DECRYPT</code>. To find the <code>KeyUsage</code> value of a CMK,
     * use the <a>DescribeKey</a> operation.</p> <p>To specify a CMK, use its key ID,
     * Amazon Resource Name (ARN), alias name, or alias ARN. When using an alias name,
     * prefix it with <code>"alias/"</code>. To specify a CMK in a different AWS
     * account, you must use the key ARN or alias ARN.</p> <p>For example:</p> <ul>
     * <li> <p>Key ID: <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li>
     * <li> <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> <li> <p>Alias name: <code>alias/ExampleAlias</code> </p> </li> <li>
     * <p>Alias ARN: <code>arn:aws:kms:us-east-2:111122223333:alias/ExampleAlias</code>
     * </p> </li> </ul> <p>To get the key ID and key ARN for a CMK, use <a>ListKeys</a>
     * or <a>DescribeKey</a>. To get the alias name and alias ARN, use
     * <a>ListAliases</a>.</p>
     */
    inline ReEncryptRequest& WithDestinationKeyId(const char* value) { SetDestinationKeyId(value); return *this;}


    /**
     * <p>Specifies that encryption context to use when the reencrypting the data.</p>
     * <p>A destination encryption context is valid only when the destination CMK is a
     * symmetric CMK. The standard ciphertext format for asymmetric CMKs does not
     * include fields for metadata.</p> <p>An <i>encryption context</i> is a collection
     * of non-secret key-value pairs that represents additional authenticated data.
     * When you use an encryption context to encrypt data, you must specify the same
     * (an exact case-sensitive match) encryption context to decrypt the data. An
     * encryption context is optional when encrypting with a symmetric CMK, but it is
     * highly recommended.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#encrypt_context">Encryption
     * Context</a> in the <i>AWS Key Management Service Developer Guide</i>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetDestinationEncryptionContext() const{ return m_destinationEncryptionContext; }

    /**
     * <p>Specifies that encryption context to use when the reencrypting the data.</p>
     * <p>A destination encryption context is valid only when the destination CMK is a
     * symmetric CMK. The standard ciphertext format for asymmetric CMKs does not
     * include fields for metadata.</p> <p>An <i>encryption context</i> is a collection
     * of non-secret key-value pairs that represents additional authenticated data.
     * When you use an encryption context to encrypt data, you must specify the same
     * (an exact case-sensitive match) encryption context to decrypt the data. An
     * encryption context is optional when encrypting with a symmetric CMK, but it is
     * highly recommended.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#encrypt_context">Encryption
     * Context</a> in the <i>AWS Key Management Service Developer Guide</i>.</p>
     */
    inline bool DestinationEncryptionContextHasBeenSet() const { return m_destinationEncryptionContextHasBeenSet; }

    /**
     * <p>Specifies that encryption context to use when the reencrypting the data.</p>
     * <p>A destination encryption context is valid only when the destination CMK is a
     * symmetric CMK. The standard ciphertext format for asymmetric CMKs does not
     * include fields for metadata.</p> <p>An <i>encryption context</i> is a collection
     * of non-secret key-value pairs that represents additional authenticated data.
     * When you use an encryption context to encrypt data, you must specify the same
     * (an exact case-sensitive match) encryption context to decrypt the data. An
     * encryption context is optional when encrypting with a symmetric CMK, but it is
     * highly recommended.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#encrypt_context">Encryption
     * Context</a> in the <i>AWS Key Management Service Developer Guide</i>.</p>
     */
    inline void SetDestinationEncryptionContext(const Aws::Map<Aws::String, Aws::String>& value) { m_destinationEncryptionContextHasBeenSet = true; m_destinationEncryptionContext = value; }

    /**
     * <p>Specifies that encryption context to use when the reencrypting the data.</p>
     * <p>A destination encryption context is valid only when the destination CMK is a
     * symmetric CMK. The standard ciphertext format for asymmetric CMKs does not
     * include fields for metadata.</p> <p>An <i>encryption context</i> is a collection
     * of non-secret key-value pairs that represents additional authenticated data.
     * When you use an encryption context to encrypt data, you must specify the same
     * (an exact case-sensitive match) encryption context to decrypt the data. An
     * encryption context is optional when encrypting with a symmetric CMK, but it is
     * highly recommended.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#encrypt_context">Encryption
     * Context</a> in the <i>AWS Key Management Service Developer Guide</i>.</p>
     */
    inline void SetDestinationEncryptionContext(Aws::Map<Aws::String, Aws::String>&& value) { m_destinationEncryptionContextHasBeenSet = true; m_destinationEncryptionContext = std::move(value); }

    /**
     * <p>Specifies that encryption context to use when the reencrypting the data.</p>
     * <p>A destination encryption context is valid only when the destination CMK is a
     * symmetric CMK. The standard ciphertext format for asymmetric CMKs does not
     * include fields for metadata.</p> <p>An <i>encryption context</i> is a collection
     * of non-secret key-value pairs that represents additional authenticated data.
     * When you use an encryption context to encrypt data, you must specify the same
     * (an exact case-sensitive match) encryption context to decrypt the data. An
     * encryption context is optional when encrypting with a symmetric CMK, but it is
     * highly recommended.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#encrypt_context">Encryption
     * Context</a> in the <i>AWS Key Management Service Developer Guide</i>.</p>
     */
    inline ReEncryptRequest& WithDestinationEncryptionContext(const Aws::Map<Aws::String, Aws::String>& value) { SetDestinationEncryptionContext(value); return *this;}

    /**
     * <p>Specifies that encryption context to use when the reencrypting the data.</p>
     * <p>A destination encryption context is valid only when the destination CMK is a
     * symmetric CMK. The standard ciphertext format for asymmetric CMKs does not
     * include fields for metadata.</p> <p>An <i>encryption context</i> is a collection
     * of non-secret key-value pairs that represents additional authenticated data.
     * When you use an encryption context to encrypt data, you must specify the same
     * (an exact case-sensitive match) encryption context to decrypt the data. An
     * encryption context is optional when encrypting with a symmetric CMK, but it is
     * highly recommended.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#encrypt_context">Encryption
     * Context</a> in the <i>AWS Key Management Service Developer Guide</i>.</p>
     */
    inline ReEncryptRequest& WithDestinationEncryptionContext(Aws::Map<Aws::String, Aws::String>&& value) { SetDestinationEncryptionContext(std::move(value)); return *this;}

    /**
     * <p>Specifies that encryption context to use when the reencrypting the data.</p>
     * <p>A destination encryption context is valid only when the destination CMK is a
     * symmetric CMK. The standard ciphertext format for asymmetric CMKs does not
     * include fields for metadata.</p> <p>An <i>encryption context</i> is a collection
     * of non-secret key-value pairs that represents additional authenticated data.
     * When you use an encryption context to encrypt data, you must specify the same
     * (an exact case-sensitive match) encryption context to decrypt the data. An
     * encryption context is optional when encrypting with a symmetric CMK, but it is
     * highly recommended.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#encrypt_context">Encryption
     * Context</a> in the <i>AWS Key Management Service Developer Guide</i>.</p>
     */
    inline ReEncryptRequest& AddDestinationEncryptionContext(const Aws::String& key, const Aws::String& value) { m_destinationEncryptionContextHasBeenSet = true; m_destinationEncryptionContext.emplace(key, value); return *this; }

    /**
     * <p>Specifies that encryption context to use when the reencrypting the data.</p>
     * <p>A destination encryption context is valid only when the destination CMK is a
     * symmetric CMK. The standard ciphertext format for asymmetric CMKs does not
     * include fields for metadata.</p> <p>An <i>encryption context</i> is a collection
     * of non-secret key-value pairs that represents additional authenticated data.
     * When you use an encryption context to encrypt data, you must specify the same
     * (an exact case-sensitive match) encryption context to decrypt the data. An
     * encryption context is optional when encrypting with a symmetric CMK, but it is
     * highly recommended.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#encrypt_context">Encryption
     * Context</a> in the <i>AWS Key Management Service Developer Guide</i>.</p>
     */
    inline ReEncryptRequest& AddDestinationEncryptionContext(Aws::String&& key, const Aws::String& value) { m_destinationEncryptionContextHasBeenSet = true; m_destinationEncryptionContext.emplace(std::move(key), value); return *this; }

    /**
     * <p>Specifies that encryption context to use when the reencrypting the data.</p>
     * <p>A destination encryption context is valid only when the destination CMK is a
     * symmetric CMK. The standard ciphertext format for asymmetric CMKs does not
     * include fields for metadata.</p> <p>An <i>encryption context</i> is a collection
     * of non-secret key-value pairs that represents additional authenticated data.
     * When you use an encryption context to encrypt data, you must specify the same
     * (an exact case-sensitive match) encryption context to decrypt the data. An
     * encryption context is optional when encrypting with a symmetric CMK, but it is
     * highly recommended.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#encrypt_context">Encryption
     * Context</a> in the <i>AWS Key Management Service Developer Guide</i>.</p>
     */
    inline ReEncryptRequest& AddDestinationEncryptionContext(const Aws::String& key, Aws::String&& value) { m_destinationEncryptionContextHasBeenSet = true; m_destinationEncryptionContext.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Specifies that encryption context to use when the reencrypting the data.</p>
     * <p>A destination encryption context is valid only when the destination CMK is a
     * symmetric CMK. The standard ciphertext format for asymmetric CMKs does not
     * include fields for metadata.</p> <p>An <i>encryption context</i> is a collection
     * of non-secret key-value pairs that represents additional authenticated data.
     * When you use an encryption context to encrypt data, you must specify the same
     * (an exact case-sensitive match) encryption context to decrypt the data. An
     * encryption context is optional when encrypting with a symmetric CMK, but it is
     * highly recommended.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#encrypt_context">Encryption
     * Context</a> in the <i>AWS Key Management Service Developer Guide</i>.</p>
     */
    inline ReEncryptRequest& AddDestinationEncryptionContext(Aws::String&& key, Aws::String&& value) { m_destinationEncryptionContextHasBeenSet = true; m_destinationEncryptionContext.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Specifies that encryption context to use when the reencrypting the data.</p>
     * <p>A destination encryption context is valid only when the destination CMK is a
     * symmetric CMK. The standard ciphertext format for asymmetric CMKs does not
     * include fields for metadata.</p> <p>An <i>encryption context</i> is a collection
     * of non-secret key-value pairs that represents additional authenticated data.
     * When you use an encryption context to encrypt data, you must specify the same
     * (an exact case-sensitive match) encryption context to decrypt the data. An
     * encryption context is optional when encrypting with a symmetric CMK, but it is
     * highly recommended.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#encrypt_context">Encryption
     * Context</a> in the <i>AWS Key Management Service Developer Guide</i>.</p>
     */
    inline ReEncryptRequest& AddDestinationEncryptionContext(const char* key, Aws::String&& value) { m_destinationEncryptionContextHasBeenSet = true; m_destinationEncryptionContext.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Specifies that encryption context to use when the reencrypting the data.</p>
     * <p>A destination encryption context is valid only when the destination CMK is a
     * symmetric CMK. The standard ciphertext format for asymmetric CMKs does not
     * include fields for metadata.</p> <p>An <i>encryption context</i> is a collection
     * of non-secret key-value pairs that represents additional authenticated data.
     * When you use an encryption context to encrypt data, you must specify the same
     * (an exact case-sensitive match) encryption context to decrypt the data. An
     * encryption context is optional when encrypting with a symmetric CMK, but it is
     * highly recommended.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#encrypt_context">Encryption
     * Context</a> in the <i>AWS Key Management Service Developer Guide</i>.</p>
     */
    inline ReEncryptRequest& AddDestinationEncryptionContext(Aws::String&& key, const char* value) { m_destinationEncryptionContextHasBeenSet = true; m_destinationEncryptionContext.emplace(std::move(key), value); return *this; }

    /**
     * <p>Specifies that encryption context to use when the reencrypting the data.</p>
     * <p>A destination encryption context is valid only when the destination CMK is a
     * symmetric CMK. The standard ciphertext format for asymmetric CMKs does not
     * include fields for metadata.</p> <p>An <i>encryption context</i> is a collection
     * of non-secret key-value pairs that represents additional authenticated data.
     * When you use an encryption context to encrypt data, you must specify the same
     * (an exact case-sensitive match) encryption context to decrypt the data. An
     * encryption context is optional when encrypting with a symmetric CMK, but it is
     * highly recommended.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#encrypt_context">Encryption
     * Context</a> in the <i>AWS Key Management Service Developer Guide</i>.</p>
     */
    inline ReEncryptRequest& AddDestinationEncryptionContext(const char* key, const char* value) { m_destinationEncryptionContextHasBeenSet = true; m_destinationEncryptionContext.emplace(key, value); return *this; }


    /**
     * <p>Specifies the encryption algorithm that AWS KMS will use to decrypt the
     * ciphertext before it is reencrypted. The default value,
     * <code>SYMMETRIC_DEFAULT</code>, represents the algorithm used for symmetric
     * CMKs.</p> <p>Specify the same algorithm that was used to encrypt the ciphertext.
     * If you specify a different algorithm, the decrypt attempt fails.</p> <p>This
     * parameter is required only when the ciphertext was encrypted under an asymmetric
     * CMK.</p>
     */
    inline const EncryptionAlgorithmSpec& GetSourceEncryptionAlgorithm() const{ return m_sourceEncryptionAlgorithm; }

    /**
     * <p>Specifies the encryption algorithm that AWS KMS will use to decrypt the
     * ciphertext before it is reencrypted. The default value,
     * <code>SYMMETRIC_DEFAULT</code>, represents the algorithm used for symmetric
     * CMKs.</p> <p>Specify the same algorithm that was used to encrypt the ciphertext.
     * If you specify a different algorithm, the decrypt attempt fails.</p> <p>This
     * parameter is required only when the ciphertext was encrypted under an asymmetric
     * CMK.</p>
     */
    inline bool SourceEncryptionAlgorithmHasBeenSet() const { return m_sourceEncryptionAlgorithmHasBeenSet; }

    /**
     * <p>Specifies the encryption algorithm that AWS KMS will use to decrypt the
     * ciphertext before it is reencrypted. The default value,
     * <code>SYMMETRIC_DEFAULT</code>, represents the algorithm used for symmetric
     * CMKs.</p> <p>Specify the same algorithm that was used to encrypt the ciphertext.
     * If you specify a different algorithm, the decrypt attempt fails.</p> <p>This
     * parameter is required only when the ciphertext was encrypted under an asymmetric
     * CMK.</p>
     */
    inline void SetSourceEncryptionAlgorithm(const EncryptionAlgorithmSpec& value) { m_sourceEncryptionAlgorithmHasBeenSet = true; m_sourceEncryptionAlgorithm = value; }

    /**
     * <p>Specifies the encryption algorithm that AWS KMS will use to decrypt the
     * ciphertext before it is reencrypted. The default value,
     * <code>SYMMETRIC_DEFAULT</code>, represents the algorithm used for symmetric
     * CMKs.</p> <p>Specify the same algorithm that was used to encrypt the ciphertext.
     * If you specify a different algorithm, the decrypt attempt fails.</p> <p>This
     * parameter is required only when the ciphertext was encrypted under an asymmetric
     * CMK.</p>
     */
    inline void SetSourceEncryptionAlgorithm(EncryptionAlgorithmSpec&& value) { m_sourceEncryptionAlgorithmHasBeenSet = true; m_sourceEncryptionAlgorithm = std::move(value); }

    /**
     * <p>Specifies the encryption algorithm that AWS KMS will use to decrypt the
     * ciphertext before it is reencrypted. The default value,
     * <code>SYMMETRIC_DEFAULT</code>, represents the algorithm used for symmetric
     * CMKs.</p> <p>Specify the same algorithm that was used to encrypt the ciphertext.
     * If you specify a different algorithm, the decrypt attempt fails.</p> <p>This
     * parameter is required only when the ciphertext was encrypted under an asymmetric
     * CMK.</p>
     */
    inline ReEncryptRequest& WithSourceEncryptionAlgorithm(const EncryptionAlgorithmSpec& value) { SetSourceEncryptionAlgorithm(value); return *this;}

    /**
     * <p>Specifies the encryption algorithm that AWS KMS will use to decrypt the
     * ciphertext before it is reencrypted. The default value,
     * <code>SYMMETRIC_DEFAULT</code>, represents the algorithm used for symmetric
     * CMKs.</p> <p>Specify the same algorithm that was used to encrypt the ciphertext.
     * If you specify a different algorithm, the decrypt attempt fails.</p> <p>This
     * parameter is required only when the ciphertext was encrypted under an asymmetric
     * CMK.</p>
     */
    inline ReEncryptRequest& WithSourceEncryptionAlgorithm(EncryptionAlgorithmSpec&& value) { SetSourceEncryptionAlgorithm(std::move(value)); return *this;}


    /**
     * <p>Specifies the encryption algorithm that AWS KMS will use to reecrypt the data
     * after it has decrypted it. The default value, <code>SYMMETRIC_DEFAULT</code>,
     * represents the encryption algorithm used for symmetric CMKs.</p> <p>This
     * parameter is required only when the destination CMK is an asymmetric CMK.</p>
     */
    inline const EncryptionAlgorithmSpec& GetDestinationEncryptionAlgorithm() const{ return m_destinationEncryptionAlgorithm; }

    /**
     * <p>Specifies the encryption algorithm that AWS KMS will use to reecrypt the data
     * after it has decrypted it. The default value, <code>SYMMETRIC_DEFAULT</code>,
     * represents the encryption algorithm used for symmetric CMKs.</p> <p>This
     * parameter is required only when the destination CMK is an asymmetric CMK.</p>
     */
    inline bool DestinationEncryptionAlgorithmHasBeenSet() const { return m_destinationEncryptionAlgorithmHasBeenSet; }

    /**
     * <p>Specifies the encryption algorithm that AWS KMS will use to reecrypt the data
     * after it has decrypted it. The default value, <code>SYMMETRIC_DEFAULT</code>,
     * represents the encryption algorithm used for symmetric CMKs.</p> <p>This
     * parameter is required only when the destination CMK is an asymmetric CMK.</p>
     */
    inline void SetDestinationEncryptionAlgorithm(const EncryptionAlgorithmSpec& value) { m_destinationEncryptionAlgorithmHasBeenSet = true; m_destinationEncryptionAlgorithm = value; }

    /**
     * <p>Specifies the encryption algorithm that AWS KMS will use to reecrypt the data
     * after it has decrypted it. The default value, <code>SYMMETRIC_DEFAULT</code>,
     * represents the encryption algorithm used for symmetric CMKs.</p> <p>This
     * parameter is required only when the destination CMK is an asymmetric CMK.</p>
     */
    inline void SetDestinationEncryptionAlgorithm(EncryptionAlgorithmSpec&& value) { m_destinationEncryptionAlgorithmHasBeenSet = true; m_destinationEncryptionAlgorithm = std::move(value); }

    /**
     * <p>Specifies the encryption algorithm that AWS KMS will use to reecrypt the data
     * after it has decrypted it. The default value, <code>SYMMETRIC_DEFAULT</code>,
     * represents the encryption algorithm used for symmetric CMKs.</p> <p>This
     * parameter is required only when the destination CMK is an asymmetric CMK.</p>
     */
    inline ReEncryptRequest& WithDestinationEncryptionAlgorithm(const EncryptionAlgorithmSpec& value) { SetDestinationEncryptionAlgorithm(value); return *this;}

    /**
     * <p>Specifies the encryption algorithm that AWS KMS will use to reecrypt the data
     * after it has decrypted it. The default value, <code>SYMMETRIC_DEFAULT</code>,
     * represents the encryption algorithm used for symmetric CMKs.</p> <p>This
     * parameter is required only when the destination CMK is an asymmetric CMK.</p>
     */
    inline ReEncryptRequest& WithDestinationEncryptionAlgorithm(EncryptionAlgorithmSpec&& value) { SetDestinationEncryptionAlgorithm(std::move(value)); return *this;}


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
    inline ReEncryptRequest& WithGrantTokens(const Aws::Vector<Aws::String>& value) { SetGrantTokens(value); return *this;}

    /**
     * <p>A list of grant tokens.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#grant_token">Grant
     * Tokens</a> in the <i>AWS Key Management Service Developer Guide</i>.</p>
     */
    inline ReEncryptRequest& WithGrantTokens(Aws::Vector<Aws::String>&& value) { SetGrantTokens(std::move(value)); return *this;}

    /**
     * <p>A list of grant tokens.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#grant_token">Grant
     * Tokens</a> in the <i>AWS Key Management Service Developer Guide</i>.</p>
     */
    inline ReEncryptRequest& AddGrantTokens(const Aws::String& value) { m_grantTokensHasBeenSet = true; m_grantTokens.push_back(value); return *this; }

    /**
     * <p>A list of grant tokens.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#grant_token">Grant
     * Tokens</a> in the <i>AWS Key Management Service Developer Guide</i>.</p>
     */
    inline ReEncryptRequest& AddGrantTokens(Aws::String&& value) { m_grantTokensHasBeenSet = true; m_grantTokens.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of grant tokens.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#grant_token">Grant
     * Tokens</a> in the <i>AWS Key Management Service Developer Guide</i>.</p>
     */
    inline ReEncryptRequest& AddGrantTokens(const char* value) { m_grantTokensHasBeenSet = true; m_grantTokens.push_back(value); return *this; }

  private:

    Aws::Utils::ByteBuffer m_ciphertextBlob;
    bool m_ciphertextBlobHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_sourceEncryptionContext;
    bool m_sourceEncryptionContextHasBeenSet;

    Aws::String m_sourceKeyId;
    bool m_sourceKeyIdHasBeenSet;

    Aws::String m_destinationKeyId;
    bool m_destinationKeyIdHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_destinationEncryptionContext;
    bool m_destinationEncryptionContextHasBeenSet;

    EncryptionAlgorithmSpec m_sourceEncryptionAlgorithm;
    bool m_sourceEncryptionAlgorithmHasBeenSet;

    EncryptionAlgorithmSpec m_destinationEncryptionAlgorithm;
    bool m_destinationEncryptionAlgorithmHasBeenSet;

    Aws::Vector<Aws::String> m_grantTokens;
    bool m_grantTokensHasBeenSet;
  };

} // namespace Model
} // namespace KMS
} // namespace Aws
