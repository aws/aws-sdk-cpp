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
#include <aws/core/utils/Array.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

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
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>Ciphertext of the data to re-encrypt.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetCiphertextBlob() const{ return m_ciphertextBlob; }

    /**
     * <p>Ciphertext of the data to re-encrypt.</p>
     */
    inline void SetCiphertextBlob(const Aws::Utils::ByteBuffer& value) { m_ciphertextBlobHasBeenSet = true; m_ciphertextBlob = value; }

    /**
     * <p>Ciphertext of the data to re-encrypt.</p>
     */
    inline void SetCiphertextBlob(Aws::Utils::ByteBuffer&& value) { m_ciphertextBlobHasBeenSet = true; m_ciphertextBlob = value; }

    /**
     * <p>Ciphertext of the data to re-encrypt.</p>
     */
    inline ReEncryptRequest& WithCiphertextBlob(const Aws::Utils::ByteBuffer& value) { SetCiphertextBlob(value); return *this;}

    /**
     * <p>Ciphertext of the data to re-encrypt.</p>
     */
    inline ReEncryptRequest& WithCiphertextBlob(Aws::Utils::ByteBuffer&& value) { SetCiphertextBlob(value); return *this;}

    /**
     * <p>Encryption context used to encrypt and decrypt the data specified in the
     * <code>CiphertextBlob</code> parameter.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetSourceEncryptionContext() const{ return m_sourceEncryptionContext; }

    /**
     * <p>Encryption context used to encrypt and decrypt the data specified in the
     * <code>CiphertextBlob</code> parameter.</p>
     */
    inline void SetSourceEncryptionContext(const Aws::Map<Aws::String, Aws::String>& value) { m_sourceEncryptionContextHasBeenSet = true; m_sourceEncryptionContext = value; }

    /**
     * <p>Encryption context used to encrypt and decrypt the data specified in the
     * <code>CiphertextBlob</code> parameter.</p>
     */
    inline void SetSourceEncryptionContext(Aws::Map<Aws::String, Aws::String>&& value) { m_sourceEncryptionContextHasBeenSet = true; m_sourceEncryptionContext = value; }

    /**
     * <p>Encryption context used to encrypt and decrypt the data specified in the
     * <code>CiphertextBlob</code> parameter.</p>
     */
    inline ReEncryptRequest& WithSourceEncryptionContext(const Aws::Map<Aws::String, Aws::String>& value) { SetSourceEncryptionContext(value); return *this;}

    /**
     * <p>Encryption context used to encrypt and decrypt the data specified in the
     * <code>CiphertextBlob</code> parameter.</p>
     */
    inline ReEncryptRequest& WithSourceEncryptionContext(Aws::Map<Aws::String, Aws::String>&& value) { SetSourceEncryptionContext(value); return *this;}

    /**
     * <p>Encryption context used to encrypt and decrypt the data specified in the
     * <code>CiphertextBlob</code> parameter.</p>
     */
    inline ReEncryptRequest& AddSourceEncryptionContext(const Aws::String& key, const Aws::String& value) { m_sourceEncryptionContextHasBeenSet = true; m_sourceEncryptionContext[key] = value; return *this; }

    /**
     * <p>Encryption context used to encrypt and decrypt the data specified in the
     * <code>CiphertextBlob</code> parameter.</p>
     */
    inline ReEncryptRequest& AddSourceEncryptionContext(Aws::String&& key, const Aws::String& value) { m_sourceEncryptionContextHasBeenSet = true; m_sourceEncryptionContext[key] = value; return *this; }

    /**
     * <p>Encryption context used to encrypt and decrypt the data specified in the
     * <code>CiphertextBlob</code> parameter.</p>
     */
    inline ReEncryptRequest& AddSourceEncryptionContext(const Aws::String& key, Aws::String&& value) { m_sourceEncryptionContextHasBeenSet = true; m_sourceEncryptionContext[key] = value; return *this; }

    /**
     * <p>Encryption context used to encrypt and decrypt the data specified in the
     * <code>CiphertextBlob</code> parameter.</p>
     */
    inline ReEncryptRequest& AddSourceEncryptionContext(Aws::String&& key, Aws::String&& value) { m_sourceEncryptionContextHasBeenSet = true; m_sourceEncryptionContext[key] = value; return *this; }

    /**
     * <p>Encryption context used to encrypt and decrypt the data specified in the
     * <code>CiphertextBlob</code> parameter.</p>
     */
    inline ReEncryptRequest& AddSourceEncryptionContext(const char* key, Aws::String&& value) { m_sourceEncryptionContextHasBeenSet = true; m_sourceEncryptionContext[key] = value; return *this; }

    /**
     * <p>Encryption context used to encrypt and decrypt the data specified in the
     * <code>CiphertextBlob</code> parameter.</p>
     */
    inline ReEncryptRequest& AddSourceEncryptionContext(Aws::String&& key, const char* value) { m_sourceEncryptionContextHasBeenSet = true; m_sourceEncryptionContext[key] = value; return *this; }

    /**
     * <p>Encryption context used to encrypt and decrypt the data specified in the
     * <code>CiphertextBlob</code> parameter.</p>
     */
    inline ReEncryptRequest& AddSourceEncryptionContext(const char* key, const char* value) { m_sourceEncryptionContextHasBeenSet = true; m_sourceEncryptionContext[key] = value; return *this; }

    /**
     * <p>A unique identifier for the customer master key used to re-encrypt the data.
     * This value can be a globally unique identifier, a fully specified ARN to either
     * an alias or a key, or an alias name prefixed by "alias/".</p> <ul> <li> <p>Key
     * ARN Example -
     * arn:aws:kms:us-east-1:123456789012:key/12345678-1234-1234-1234-123456789012</p>
     * </li> <li> <p>Alias ARN Example -
     * arn:aws:kms:us-east-1:123456789012:alias/MyAliasName</p> </li> <li> <p>Globally
     * Unique Key ID Example - 12345678-1234-1234-1234-123456789012</p> </li> <li>
     * <p>Alias Name Example - alias/MyAliasName</p> </li> </ul>
     */
    inline const Aws::String& GetDestinationKeyId() const{ return m_destinationKeyId; }

    /**
     * <p>A unique identifier for the customer master key used to re-encrypt the data.
     * This value can be a globally unique identifier, a fully specified ARN to either
     * an alias or a key, or an alias name prefixed by "alias/".</p> <ul> <li> <p>Key
     * ARN Example -
     * arn:aws:kms:us-east-1:123456789012:key/12345678-1234-1234-1234-123456789012</p>
     * </li> <li> <p>Alias ARN Example -
     * arn:aws:kms:us-east-1:123456789012:alias/MyAliasName</p> </li> <li> <p>Globally
     * Unique Key ID Example - 12345678-1234-1234-1234-123456789012</p> </li> <li>
     * <p>Alias Name Example - alias/MyAliasName</p> </li> </ul>
     */
    inline void SetDestinationKeyId(const Aws::String& value) { m_destinationKeyIdHasBeenSet = true; m_destinationKeyId = value; }

    /**
     * <p>A unique identifier for the customer master key used to re-encrypt the data.
     * This value can be a globally unique identifier, a fully specified ARN to either
     * an alias or a key, or an alias name prefixed by "alias/".</p> <ul> <li> <p>Key
     * ARN Example -
     * arn:aws:kms:us-east-1:123456789012:key/12345678-1234-1234-1234-123456789012</p>
     * </li> <li> <p>Alias ARN Example -
     * arn:aws:kms:us-east-1:123456789012:alias/MyAliasName</p> </li> <li> <p>Globally
     * Unique Key ID Example - 12345678-1234-1234-1234-123456789012</p> </li> <li>
     * <p>Alias Name Example - alias/MyAliasName</p> </li> </ul>
     */
    inline void SetDestinationKeyId(Aws::String&& value) { m_destinationKeyIdHasBeenSet = true; m_destinationKeyId = value; }

    /**
     * <p>A unique identifier for the customer master key used to re-encrypt the data.
     * This value can be a globally unique identifier, a fully specified ARN to either
     * an alias or a key, or an alias name prefixed by "alias/".</p> <ul> <li> <p>Key
     * ARN Example -
     * arn:aws:kms:us-east-1:123456789012:key/12345678-1234-1234-1234-123456789012</p>
     * </li> <li> <p>Alias ARN Example -
     * arn:aws:kms:us-east-1:123456789012:alias/MyAliasName</p> </li> <li> <p>Globally
     * Unique Key ID Example - 12345678-1234-1234-1234-123456789012</p> </li> <li>
     * <p>Alias Name Example - alias/MyAliasName</p> </li> </ul>
     */
    inline void SetDestinationKeyId(const char* value) { m_destinationKeyIdHasBeenSet = true; m_destinationKeyId.assign(value); }

    /**
     * <p>A unique identifier for the customer master key used to re-encrypt the data.
     * This value can be a globally unique identifier, a fully specified ARN to either
     * an alias or a key, or an alias name prefixed by "alias/".</p> <ul> <li> <p>Key
     * ARN Example -
     * arn:aws:kms:us-east-1:123456789012:key/12345678-1234-1234-1234-123456789012</p>
     * </li> <li> <p>Alias ARN Example -
     * arn:aws:kms:us-east-1:123456789012:alias/MyAliasName</p> </li> <li> <p>Globally
     * Unique Key ID Example - 12345678-1234-1234-1234-123456789012</p> </li> <li>
     * <p>Alias Name Example - alias/MyAliasName</p> </li> </ul>
     */
    inline ReEncryptRequest& WithDestinationKeyId(const Aws::String& value) { SetDestinationKeyId(value); return *this;}

    /**
     * <p>A unique identifier for the customer master key used to re-encrypt the data.
     * This value can be a globally unique identifier, a fully specified ARN to either
     * an alias or a key, or an alias name prefixed by "alias/".</p> <ul> <li> <p>Key
     * ARN Example -
     * arn:aws:kms:us-east-1:123456789012:key/12345678-1234-1234-1234-123456789012</p>
     * </li> <li> <p>Alias ARN Example -
     * arn:aws:kms:us-east-1:123456789012:alias/MyAliasName</p> </li> <li> <p>Globally
     * Unique Key ID Example - 12345678-1234-1234-1234-123456789012</p> </li> <li>
     * <p>Alias Name Example - alias/MyAliasName</p> </li> </ul>
     */
    inline ReEncryptRequest& WithDestinationKeyId(Aws::String&& value) { SetDestinationKeyId(value); return *this;}

    /**
     * <p>A unique identifier for the customer master key used to re-encrypt the data.
     * This value can be a globally unique identifier, a fully specified ARN to either
     * an alias or a key, or an alias name prefixed by "alias/".</p> <ul> <li> <p>Key
     * ARN Example -
     * arn:aws:kms:us-east-1:123456789012:key/12345678-1234-1234-1234-123456789012</p>
     * </li> <li> <p>Alias ARN Example -
     * arn:aws:kms:us-east-1:123456789012:alias/MyAliasName</p> </li> <li> <p>Globally
     * Unique Key ID Example - 12345678-1234-1234-1234-123456789012</p> </li> <li>
     * <p>Alias Name Example - alias/MyAliasName</p> </li> </ul>
     */
    inline ReEncryptRequest& WithDestinationKeyId(const char* value) { SetDestinationKeyId(value); return *this;}

    /**
     * <p>Encryption context to be used when the data is re-encrypted.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetDestinationEncryptionContext() const{ return m_destinationEncryptionContext; }

    /**
     * <p>Encryption context to be used when the data is re-encrypted.</p>
     */
    inline void SetDestinationEncryptionContext(const Aws::Map<Aws::String, Aws::String>& value) { m_destinationEncryptionContextHasBeenSet = true; m_destinationEncryptionContext = value; }

    /**
     * <p>Encryption context to be used when the data is re-encrypted.</p>
     */
    inline void SetDestinationEncryptionContext(Aws::Map<Aws::String, Aws::String>&& value) { m_destinationEncryptionContextHasBeenSet = true; m_destinationEncryptionContext = value; }

    /**
     * <p>Encryption context to be used when the data is re-encrypted.</p>
     */
    inline ReEncryptRequest& WithDestinationEncryptionContext(const Aws::Map<Aws::String, Aws::String>& value) { SetDestinationEncryptionContext(value); return *this;}

    /**
     * <p>Encryption context to be used when the data is re-encrypted.</p>
     */
    inline ReEncryptRequest& WithDestinationEncryptionContext(Aws::Map<Aws::String, Aws::String>&& value) { SetDestinationEncryptionContext(value); return *this;}

    /**
     * <p>Encryption context to be used when the data is re-encrypted.</p>
     */
    inline ReEncryptRequest& AddDestinationEncryptionContext(const Aws::String& key, const Aws::String& value) { m_destinationEncryptionContextHasBeenSet = true; m_destinationEncryptionContext[key] = value; return *this; }

    /**
     * <p>Encryption context to be used when the data is re-encrypted.</p>
     */
    inline ReEncryptRequest& AddDestinationEncryptionContext(Aws::String&& key, const Aws::String& value) { m_destinationEncryptionContextHasBeenSet = true; m_destinationEncryptionContext[key] = value; return *this; }

    /**
     * <p>Encryption context to be used when the data is re-encrypted.</p>
     */
    inline ReEncryptRequest& AddDestinationEncryptionContext(const Aws::String& key, Aws::String&& value) { m_destinationEncryptionContextHasBeenSet = true; m_destinationEncryptionContext[key] = value; return *this; }

    /**
     * <p>Encryption context to be used when the data is re-encrypted.</p>
     */
    inline ReEncryptRequest& AddDestinationEncryptionContext(Aws::String&& key, Aws::String&& value) { m_destinationEncryptionContextHasBeenSet = true; m_destinationEncryptionContext[key] = value; return *this; }

    /**
     * <p>Encryption context to be used when the data is re-encrypted.</p>
     */
    inline ReEncryptRequest& AddDestinationEncryptionContext(const char* key, Aws::String&& value) { m_destinationEncryptionContextHasBeenSet = true; m_destinationEncryptionContext[key] = value; return *this; }

    /**
     * <p>Encryption context to be used when the data is re-encrypted.</p>
     */
    inline ReEncryptRequest& AddDestinationEncryptionContext(Aws::String&& key, const char* value) { m_destinationEncryptionContextHasBeenSet = true; m_destinationEncryptionContext[key] = value; return *this; }

    /**
     * <p>Encryption context to be used when the data is re-encrypted.</p>
     */
    inline ReEncryptRequest& AddDestinationEncryptionContext(const char* key, const char* value) { m_destinationEncryptionContextHasBeenSet = true; m_destinationEncryptionContext[key] = value; return *this; }

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
    inline ReEncryptRequest& WithGrantTokens(const Aws::Vector<Aws::String>& value) { SetGrantTokens(value); return *this;}

    /**
     * <p>A list of grant tokens.</p> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#grant_token">Grant
     * Tokens</a> in the <i>AWS Key Management Service Developer Guide</i>.</p>
     */
    inline ReEncryptRequest& WithGrantTokens(Aws::Vector<Aws::String>&& value) { SetGrantTokens(value); return *this;}

    /**
     * <p>A list of grant tokens.</p> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#grant_token">Grant
     * Tokens</a> in the <i>AWS Key Management Service Developer Guide</i>.</p>
     */
    inline ReEncryptRequest& AddGrantTokens(const Aws::String& value) { m_grantTokensHasBeenSet = true; m_grantTokens.push_back(value); return *this; }

    /**
     * <p>A list of grant tokens.</p> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#grant_token">Grant
     * Tokens</a> in the <i>AWS Key Management Service Developer Guide</i>.</p>
     */
    inline ReEncryptRequest& AddGrantTokens(Aws::String&& value) { m_grantTokensHasBeenSet = true; m_grantTokens.push_back(value); return *this; }

    /**
     * <p>A list of grant tokens.</p> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#grant_token">Grant
     * Tokens</a> in the <i>AWS Key Management Service Developer Guide</i>.</p>
     */
    inline ReEncryptRequest& AddGrantTokens(const char* value) { m_grantTokensHasBeenSet = true; m_grantTokens.push_back(value); return *this; }

  private:
    Aws::Utils::ByteBuffer m_ciphertextBlob;
    bool m_ciphertextBlobHasBeenSet;
    Aws::Map<Aws::String, Aws::String> m_sourceEncryptionContext;
    bool m_sourceEncryptionContextHasBeenSet;
    Aws::String m_destinationKeyId;
    bool m_destinationKeyIdHasBeenSet;
    Aws::Map<Aws::String, Aws::String> m_destinationEncryptionContext;
    bool m_destinationEncryptionContextHasBeenSet;
    Aws::Vector<Aws::String> m_grantTokens;
    bool m_grantTokensHasBeenSet;
  };

} // namespace Model
} // namespace KMS
} // namespace Aws
