/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/kms/KMS_EXPORTS.h>
#include <aws/kms/KMSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/Array.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws
{
namespace KMS
{
namespace Model
{

  /**
   */
  class AWS_KMS_API EncryptRequest : public KMSRequest
  {
  public:
    EncryptRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>A unique identifier for the customer master key. This value can be a globally
     * unique identifier, a fully specified ARN to either an alias or a key, or an
     * alias name prefixed by "alias/".</p> <ul> <li> <p>Key ARN Example -
     * arn:aws:kms:us-east-1:123456789012:key/12345678-1234-1234-1234-123456789012</p>
     * </li> <li> <p>Alias ARN Example -
     * arn:aws:kms:us-east-1:123456789012:alias/MyAliasName</p> </li> <li> <p>Globally
     * Unique Key ID Example - 12345678-1234-1234-1234-123456789012</p> </li> <li>
     * <p>Alias Name Example - alias/MyAliasName</p> </li> </ul>
     */
    inline const Aws::String& GetKeyId() const{ return m_keyId; }

    /**
     * <p>A unique identifier for the customer master key. This value can be a globally
     * unique identifier, a fully specified ARN to either an alias or a key, or an
     * alias name prefixed by "alias/".</p> <ul> <li> <p>Key ARN Example -
     * arn:aws:kms:us-east-1:123456789012:key/12345678-1234-1234-1234-123456789012</p>
     * </li> <li> <p>Alias ARN Example -
     * arn:aws:kms:us-east-1:123456789012:alias/MyAliasName</p> </li> <li> <p>Globally
     * Unique Key ID Example - 12345678-1234-1234-1234-123456789012</p> </li> <li>
     * <p>Alias Name Example - alias/MyAliasName</p> </li> </ul>
     */
    inline void SetKeyId(const Aws::String& value) { m_keyIdHasBeenSet = true; m_keyId = value; }

    /**
     * <p>A unique identifier for the customer master key. This value can be a globally
     * unique identifier, a fully specified ARN to either an alias or a key, or an
     * alias name prefixed by "alias/".</p> <ul> <li> <p>Key ARN Example -
     * arn:aws:kms:us-east-1:123456789012:key/12345678-1234-1234-1234-123456789012</p>
     * </li> <li> <p>Alias ARN Example -
     * arn:aws:kms:us-east-1:123456789012:alias/MyAliasName</p> </li> <li> <p>Globally
     * Unique Key ID Example - 12345678-1234-1234-1234-123456789012</p> </li> <li>
     * <p>Alias Name Example - alias/MyAliasName</p> </li> </ul>
     */
    inline void SetKeyId(Aws::String&& value) { m_keyIdHasBeenSet = true; m_keyId = value; }

    /**
     * <p>A unique identifier for the customer master key. This value can be a globally
     * unique identifier, a fully specified ARN to either an alias or a key, or an
     * alias name prefixed by "alias/".</p> <ul> <li> <p>Key ARN Example -
     * arn:aws:kms:us-east-1:123456789012:key/12345678-1234-1234-1234-123456789012</p>
     * </li> <li> <p>Alias ARN Example -
     * arn:aws:kms:us-east-1:123456789012:alias/MyAliasName</p> </li> <li> <p>Globally
     * Unique Key ID Example - 12345678-1234-1234-1234-123456789012</p> </li> <li>
     * <p>Alias Name Example - alias/MyAliasName</p> </li> </ul>
     */
    inline void SetKeyId(const char* value) { m_keyIdHasBeenSet = true; m_keyId.assign(value); }

    /**
     * <p>A unique identifier for the customer master key. This value can be a globally
     * unique identifier, a fully specified ARN to either an alias or a key, or an
     * alias name prefixed by "alias/".</p> <ul> <li> <p>Key ARN Example -
     * arn:aws:kms:us-east-1:123456789012:key/12345678-1234-1234-1234-123456789012</p>
     * </li> <li> <p>Alias ARN Example -
     * arn:aws:kms:us-east-1:123456789012:alias/MyAliasName</p> </li> <li> <p>Globally
     * Unique Key ID Example - 12345678-1234-1234-1234-123456789012</p> </li> <li>
     * <p>Alias Name Example - alias/MyAliasName</p> </li> </ul>
     */
    inline EncryptRequest& WithKeyId(const Aws::String& value) { SetKeyId(value); return *this;}

    /**
     * <p>A unique identifier for the customer master key. This value can be a globally
     * unique identifier, a fully specified ARN to either an alias or a key, or an
     * alias name prefixed by "alias/".</p> <ul> <li> <p>Key ARN Example -
     * arn:aws:kms:us-east-1:123456789012:key/12345678-1234-1234-1234-123456789012</p>
     * </li> <li> <p>Alias ARN Example -
     * arn:aws:kms:us-east-1:123456789012:alias/MyAliasName</p> </li> <li> <p>Globally
     * Unique Key ID Example - 12345678-1234-1234-1234-123456789012</p> </li> <li>
     * <p>Alias Name Example - alias/MyAliasName</p> </li> </ul>
     */
    inline EncryptRequest& WithKeyId(Aws::String&& value) { SetKeyId(value); return *this;}

    /**
     * <p>A unique identifier for the customer master key. This value can be a globally
     * unique identifier, a fully specified ARN to either an alias or a key, or an
     * alias name prefixed by "alias/".</p> <ul> <li> <p>Key ARN Example -
     * arn:aws:kms:us-east-1:123456789012:key/12345678-1234-1234-1234-123456789012</p>
     * </li> <li> <p>Alias ARN Example -
     * arn:aws:kms:us-east-1:123456789012:alias/MyAliasName</p> </li> <li> <p>Globally
     * Unique Key ID Example - 12345678-1234-1234-1234-123456789012</p> </li> <li>
     * <p>Alias Name Example - alias/MyAliasName</p> </li> </ul>
     */
    inline EncryptRequest& WithKeyId(const char* value) { SetKeyId(value); return *this;}

    /**
     * <p>Data to be encrypted.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetPlaintext() const{ return m_plaintext; }

    /**
     * <p>Data to be encrypted.</p>
     */
    inline void SetPlaintext(const Aws::Utils::ByteBuffer& value) { m_plaintextHasBeenSet = true; m_plaintext = value; }

    /**
     * <p>Data to be encrypted.</p>
     */
    inline void SetPlaintext(Aws::Utils::ByteBuffer&& value) { m_plaintextHasBeenSet = true; m_plaintext = value; }

    /**
     * <p>Data to be encrypted.</p>
     */
    inline EncryptRequest& WithPlaintext(const Aws::Utils::ByteBuffer& value) { SetPlaintext(value); return *this;}

    /**
     * <p>Data to be encrypted.</p>
     */
    inline EncryptRequest& WithPlaintext(Aws::Utils::ByteBuffer&& value) { SetPlaintext(value); return *this;}

    /**
     * <p>Name-value pair that specifies the encryption context to be used for
     * authenticated encryption. If used here, the same value must be supplied to the
     * <code>Decrypt</code> API or decryption will fail. For more information, see <a
     * href="http://docs.aws.amazon.com/kms/latest/developerguide/encryption-context.html">Encryption
     * Context</a>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetEncryptionContext() const{ return m_encryptionContext; }

    /**
     * <p>Name-value pair that specifies the encryption context to be used for
     * authenticated encryption. If used here, the same value must be supplied to the
     * <code>Decrypt</code> API or decryption will fail. For more information, see <a
     * href="http://docs.aws.amazon.com/kms/latest/developerguide/encryption-context.html">Encryption
     * Context</a>.</p>
     */
    inline void SetEncryptionContext(const Aws::Map<Aws::String, Aws::String>& value) { m_encryptionContextHasBeenSet = true; m_encryptionContext = value; }

    /**
     * <p>Name-value pair that specifies the encryption context to be used for
     * authenticated encryption. If used here, the same value must be supplied to the
     * <code>Decrypt</code> API or decryption will fail. For more information, see <a
     * href="http://docs.aws.amazon.com/kms/latest/developerguide/encryption-context.html">Encryption
     * Context</a>.</p>
     */
    inline void SetEncryptionContext(Aws::Map<Aws::String, Aws::String>&& value) { m_encryptionContextHasBeenSet = true; m_encryptionContext = value; }

    /**
     * <p>Name-value pair that specifies the encryption context to be used for
     * authenticated encryption. If used here, the same value must be supplied to the
     * <code>Decrypt</code> API or decryption will fail. For more information, see <a
     * href="http://docs.aws.amazon.com/kms/latest/developerguide/encryption-context.html">Encryption
     * Context</a>.</p>
     */
    inline EncryptRequest& WithEncryptionContext(const Aws::Map<Aws::String, Aws::String>& value) { SetEncryptionContext(value); return *this;}

    /**
     * <p>Name-value pair that specifies the encryption context to be used for
     * authenticated encryption. If used here, the same value must be supplied to the
     * <code>Decrypt</code> API or decryption will fail. For more information, see <a
     * href="http://docs.aws.amazon.com/kms/latest/developerguide/encryption-context.html">Encryption
     * Context</a>.</p>
     */
    inline EncryptRequest& WithEncryptionContext(Aws::Map<Aws::String, Aws::String>&& value) { SetEncryptionContext(value); return *this;}

    /**
     * <p>Name-value pair that specifies the encryption context to be used for
     * authenticated encryption. If used here, the same value must be supplied to the
     * <code>Decrypt</code> API or decryption will fail. For more information, see <a
     * href="http://docs.aws.amazon.com/kms/latest/developerguide/encryption-context.html">Encryption
     * Context</a>.</p>
     */
    inline EncryptRequest& AddEncryptionContext(const Aws::String& key, const Aws::String& value) { m_encryptionContextHasBeenSet = true; m_encryptionContext[key] = value; return *this; }

    /**
     * <p>Name-value pair that specifies the encryption context to be used for
     * authenticated encryption. If used here, the same value must be supplied to the
     * <code>Decrypt</code> API or decryption will fail. For more information, see <a
     * href="http://docs.aws.amazon.com/kms/latest/developerguide/encryption-context.html">Encryption
     * Context</a>.</p>
     */
    inline EncryptRequest& AddEncryptionContext(Aws::String&& key, const Aws::String& value) { m_encryptionContextHasBeenSet = true; m_encryptionContext[key] = value; return *this; }

    /**
     * <p>Name-value pair that specifies the encryption context to be used for
     * authenticated encryption. If used here, the same value must be supplied to the
     * <code>Decrypt</code> API or decryption will fail. For more information, see <a
     * href="http://docs.aws.amazon.com/kms/latest/developerguide/encryption-context.html">Encryption
     * Context</a>.</p>
     */
    inline EncryptRequest& AddEncryptionContext(const Aws::String& key, Aws::String&& value) { m_encryptionContextHasBeenSet = true; m_encryptionContext[key] = value; return *this; }

    /**
     * <p>Name-value pair that specifies the encryption context to be used for
     * authenticated encryption. If used here, the same value must be supplied to the
     * <code>Decrypt</code> API or decryption will fail. For more information, see <a
     * href="http://docs.aws.amazon.com/kms/latest/developerguide/encryption-context.html">Encryption
     * Context</a>.</p>
     */
    inline EncryptRequest& AddEncryptionContext(Aws::String&& key, Aws::String&& value) { m_encryptionContextHasBeenSet = true; m_encryptionContext[key] = value; return *this; }

    /**
     * <p>Name-value pair that specifies the encryption context to be used for
     * authenticated encryption. If used here, the same value must be supplied to the
     * <code>Decrypt</code> API or decryption will fail. For more information, see <a
     * href="http://docs.aws.amazon.com/kms/latest/developerguide/encryption-context.html">Encryption
     * Context</a>.</p>
     */
    inline EncryptRequest& AddEncryptionContext(const char* key, Aws::String&& value) { m_encryptionContextHasBeenSet = true; m_encryptionContext[key] = value; return *this; }

    /**
     * <p>Name-value pair that specifies the encryption context to be used for
     * authenticated encryption. If used here, the same value must be supplied to the
     * <code>Decrypt</code> API or decryption will fail. For more information, see <a
     * href="http://docs.aws.amazon.com/kms/latest/developerguide/encryption-context.html">Encryption
     * Context</a>.</p>
     */
    inline EncryptRequest& AddEncryptionContext(Aws::String&& key, const char* value) { m_encryptionContextHasBeenSet = true; m_encryptionContext[key] = value; return *this; }

    /**
     * <p>Name-value pair that specifies the encryption context to be used for
     * authenticated encryption. If used here, the same value must be supplied to the
     * <code>Decrypt</code> API or decryption will fail. For more information, see <a
     * href="http://docs.aws.amazon.com/kms/latest/developerguide/encryption-context.html">Encryption
     * Context</a>.</p>
     */
    inline EncryptRequest& AddEncryptionContext(const char* key, const char* value) { m_encryptionContextHasBeenSet = true; m_encryptionContext[key] = value; return *this; }

    /**
     * <p>A list of grant tokens.</p> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#grant_token">Grant
     * Tokens</a> in the <i>AWS Key Management Service Developer Guide</i>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetGrantTokens() const{ return m_grantTokens; }

    /**
     * <p>A list of grant tokens.</p> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#grant_token">Grant
     * Tokens</a> in the <i>AWS Key Management Service Developer Guide</i>.</p>
     */
    inline void SetGrantTokens(const Aws::Vector<Aws::String>& value) { m_grantTokensHasBeenSet = true; m_grantTokens = value; }

    /**
     * <p>A list of grant tokens.</p> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#grant_token">Grant
     * Tokens</a> in the <i>AWS Key Management Service Developer Guide</i>.</p>
     */
    inline void SetGrantTokens(Aws::Vector<Aws::String>&& value) { m_grantTokensHasBeenSet = true; m_grantTokens = value; }

    /**
     * <p>A list of grant tokens.</p> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#grant_token">Grant
     * Tokens</a> in the <i>AWS Key Management Service Developer Guide</i>.</p>
     */
    inline EncryptRequest& WithGrantTokens(const Aws::Vector<Aws::String>& value) { SetGrantTokens(value); return *this;}

    /**
     * <p>A list of grant tokens.</p> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#grant_token">Grant
     * Tokens</a> in the <i>AWS Key Management Service Developer Guide</i>.</p>
     */
    inline EncryptRequest& WithGrantTokens(Aws::Vector<Aws::String>&& value) { SetGrantTokens(value); return *this;}

    /**
     * <p>A list of grant tokens.</p> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#grant_token">Grant
     * Tokens</a> in the <i>AWS Key Management Service Developer Guide</i>.</p>
     */
    inline EncryptRequest& AddGrantTokens(const Aws::String& value) { m_grantTokensHasBeenSet = true; m_grantTokens.push_back(value); return *this; }

    /**
     * <p>A list of grant tokens.</p> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#grant_token">Grant
     * Tokens</a> in the <i>AWS Key Management Service Developer Guide</i>.</p>
     */
    inline EncryptRequest& AddGrantTokens(Aws::String&& value) { m_grantTokensHasBeenSet = true; m_grantTokens.push_back(value); return *this; }

    /**
     * <p>A list of grant tokens.</p> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#grant_token">Grant
     * Tokens</a> in the <i>AWS Key Management Service Developer Guide</i>.</p>
     */
    inline EncryptRequest& AddGrantTokens(const char* value) { m_grantTokensHasBeenSet = true; m_grantTokens.push_back(value); return *this; }

  private:
    Aws::String m_keyId;
    bool m_keyIdHasBeenSet;
    Aws::Utils::ByteBuffer m_plaintext;
    bool m_plaintextHasBeenSet;
    Aws::Map<Aws::String, Aws::String> m_encryptionContext;
    bool m_encryptionContextHasBeenSet;
    Aws::Vector<Aws::String> m_grantTokens;
    bool m_grantTokensHasBeenSet;
  };

} // namespace Model
} // namespace KMS
} // namespace Aws
