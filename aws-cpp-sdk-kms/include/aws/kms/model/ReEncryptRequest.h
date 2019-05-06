/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
     * <p>Encryption context used to encrypt and decrypt the data specified in the
     * <code>CiphertextBlob</code> parameter.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetSourceEncryptionContext() const{ return m_sourceEncryptionContext; }

    /**
     * <p>Encryption context used to encrypt and decrypt the data specified in the
     * <code>CiphertextBlob</code> parameter.</p>
     */
    inline bool SourceEncryptionContextHasBeenSet() const { return m_sourceEncryptionContextHasBeenSet; }

    /**
     * <p>Encryption context used to encrypt and decrypt the data specified in the
     * <code>CiphertextBlob</code> parameter.</p>
     */
    inline void SetSourceEncryptionContext(const Aws::Map<Aws::String, Aws::String>& value) { m_sourceEncryptionContextHasBeenSet = true; m_sourceEncryptionContext = value; }

    /**
     * <p>Encryption context used to encrypt and decrypt the data specified in the
     * <code>CiphertextBlob</code> parameter.</p>
     */
    inline void SetSourceEncryptionContext(Aws::Map<Aws::String, Aws::String>&& value) { m_sourceEncryptionContextHasBeenSet = true; m_sourceEncryptionContext = std::move(value); }

    /**
     * <p>Encryption context used to encrypt and decrypt the data specified in the
     * <code>CiphertextBlob</code> parameter.</p>
     */
    inline ReEncryptRequest& WithSourceEncryptionContext(const Aws::Map<Aws::String, Aws::String>& value) { SetSourceEncryptionContext(value); return *this;}

    /**
     * <p>Encryption context used to encrypt and decrypt the data specified in the
     * <code>CiphertextBlob</code> parameter.</p>
     */
    inline ReEncryptRequest& WithSourceEncryptionContext(Aws::Map<Aws::String, Aws::String>&& value) { SetSourceEncryptionContext(std::move(value)); return *this;}

    /**
     * <p>Encryption context used to encrypt and decrypt the data specified in the
     * <code>CiphertextBlob</code> parameter.</p>
     */
    inline ReEncryptRequest& AddSourceEncryptionContext(const Aws::String& key, const Aws::String& value) { m_sourceEncryptionContextHasBeenSet = true; m_sourceEncryptionContext.emplace(key, value); return *this; }

    /**
     * <p>Encryption context used to encrypt and decrypt the data specified in the
     * <code>CiphertextBlob</code> parameter.</p>
     */
    inline ReEncryptRequest& AddSourceEncryptionContext(Aws::String&& key, const Aws::String& value) { m_sourceEncryptionContextHasBeenSet = true; m_sourceEncryptionContext.emplace(std::move(key), value); return *this; }

    /**
     * <p>Encryption context used to encrypt and decrypt the data specified in the
     * <code>CiphertextBlob</code> parameter.</p>
     */
    inline ReEncryptRequest& AddSourceEncryptionContext(const Aws::String& key, Aws::String&& value) { m_sourceEncryptionContextHasBeenSet = true; m_sourceEncryptionContext.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Encryption context used to encrypt and decrypt the data specified in the
     * <code>CiphertextBlob</code> parameter.</p>
     */
    inline ReEncryptRequest& AddSourceEncryptionContext(Aws::String&& key, Aws::String&& value) { m_sourceEncryptionContextHasBeenSet = true; m_sourceEncryptionContext.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Encryption context used to encrypt and decrypt the data specified in the
     * <code>CiphertextBlob</code> parameter.</p>
     */
    inline ReEncryptRequest& AddSourceEncryptionContext(const char* key, Aws::String&& value) { m_sourceEncryptionContextHasBeenSet = true; m_sourceEncryptionContext.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Encryption context used to encrypt and decrypt the data specified in the
     * <code>CiphertextBlob</code> parameter.</p>
     */
    inline ReEncryptRequest& AddSourceEncryptionContext(Aws::String&& key, const char* value) { m_sourceEncryptionContextHasBeenSet = true; m_sourceEncryptionContext.emplace(std::move(key), value); return *this; }

    /**
     * <p>Encryption context used to encrypt and decrypt the data specified in the
     * <code>CiphertextBlob</code> parameter.</p>
     */
    inline ReEncryptRequest& AddSourceEncryptionContext(const char* key, const char* value) { m_sourceEncryptionContextHasBeenSet = true; m_sourceEncryptionContext.emplace(key, value); return *this; }


    /**
     * <p>A unique identifier for the CMK that is used to reencrypt the data.</p> <p>To
     * specify a CMK, use its key ID, Amazon Resource Name (ARN), alias name, or alias
     * ARN. When using an alias name, prefix it with <code>"alias/"</code>. To specify
     * a CMK in a different AWS account, you must use the key ARN or alias ARN.</p>
     * <p>For example:</p> <ul> <li> <p>Key ID:
     * <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li> <li> <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> <li> <p>Alias name: <code>alias/ExampleAlias</code> </p> </li> <li>
     * <p>Alias ARN: <code>arn:aws:kms:us-east-2:111122223333:alias/ExampleAlias</code>
     * </p> </li> </ul> <p>To get the key ID and key ARN for a CMK, use <a>ListKeys</a>
     * or <a>DescribeKey</a>. To get the alias name and alias ARN, use
     * <a>ListAliases</a>.</p>
     */
    inline const Aws::String& GetDestinationKeyId() const{ return m_destinationKeyId; }

    /**
     * <p>A unique identifier for the CMK that is used to reencrypt the data.</p> <p>To
     * specify a CMK, use its key ID, Amazon Resource Name (ARN), alias name, or alias
     * ARN. When using an alias name, prefix it with <code>"alias/"</code>. To specify
     * a CMK in a different AWS account, you must use the key ARN or alias ARN.</p>
     * <p>For example:</p> <ul> <li> <p>Key ID:
     * <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li> <li> <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> <li> <p>Alias name: <code>alias/ExampleAlias</code> </p> </li> <li>
     * <p>Alias ARN: <code>arn:aws:kms:us-east-2:111122223333:alias/ExampleAlias</code>
     * </p> </li> </ul> <p>To get the key ID and key ARN for a CMK, use <a>ListKeys</a>
     * or <a>DescribeKey</a>. To get the alias name and alias ARN, use
     * <a>ListAliases</a>.</p>
     */
    inline bool DestinationKeyIdHasBeenSet() const { return m_destinationKeyIdHasBeenSet; }

    /**
     * <p>A unique identifier for the CMK that is used to reencrypt the data.</p> <p>To
     * specify a CMK, use its key ID, Amazon Resource Name (ARN), alias name, or alias
     * ARN. When using an alias name, prefix it with <code>"alias/"</code>. To specify
     * a CMK in a different AWS account, you must use the key ARN or alias ARN.</p>
     * <p>For example:</p> <ul> <li> <p>Key ID:
     * <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li> <li> <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> <li> <p>Alias name: <code>alias/ExampleAlias</code> </p> </li> <li>
     * <p>Alias ARN: <code>arn:aws:kms:us-east-2:111122223333:alias/ExampleAlias</code>
     * </p> </li> </ul> <p>To get the key ID and key ARN for a CMK, use <a>ListKeys</a>
     * or <a>DescribeKey</a>. To get the alias name and alias ARN, use
     * <a>ListAliases</a>.</p>
     */
    inline void SetDestinationKeyId(const Aws::String& value) { m_destinationKeyIdHasBeenSet = true; m_destinationKeyId = value; }

    /**
     * <p>A unique identifier for the CMK that is used to reencrypt the data.</p> <p>To
     * specify a CMK, use its key ID, Amazon Resource Name (ARN), alias name, or alias
     * ARN. When using an alias name, prefix it with <code>"alias/"</code>. To specify
     * a CMK in a different AWS account, you must use the key ARN or alias ARN.</p>
     * <p>For example:</p> <ul> <li> <p>Key ID:
     * <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li> <li> <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> <li> <p>Alias name: <code>alias/ExampleAlias</code> </p> </li> <li>
     * <p>Alias ARN: <code>arn:aws:kms:us-east-2:111122223333:alias/ExampleAlias</code>
     * </p> </li> </ul> <p>To get the key ID and key ARN for a CMK, use <a>ListKeys</a>
     * or <a>DescribeKey</a>. To get the alias name and alias ARN, use
     * <a>ListAliases</a>.</p>
     */
    inline void SetDestinationKeyId(Aws::String&& value) { m_destinationKeyIdHasBeenSet = true; m_destinationKeyId = std::move(value); }

    /**
     * <p>A unique identifier for the CMK that is used to reencrypt the data.</p> <p>To
     * specify a CMK, use its key ID, Amazon Resource Name (ARN), alias name, or alias
     * ARN. When using an alias name, prefix it with <code>"alias/"</code>. To specify
     * a CMK in a different AWS account, you must use the key ARN or alias ARN.</p>
     * <p>For example:</p> <ul> <li> <p>Key ID:
     * <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li> <li> <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> <li> <p>Alias name: <code>alias/ExampleAlias</code> </p> </li> <li>
     * <p>Alias ARN: <code>arn:aws:kms:us-east-2:111122223333:alias/ExampleAlias</code>
     * </p> </li> </ul> <p>To get the key ID and key ARN for a CMK, use <a>ListKeys</a>
     * or <a>DescribeKey</a>. To get the alias name and alias ARN, use
     * <a>ListAliases</a>.</p>
     */
    inline void SetDestinationKeyId(const char* value) { m_destinationKeyIdHasBeenSet = true; m_destinationKeyId.assign(value); }

    /**
     * <p>A unique identifier for the CMK that is used to reencrypt the data.</p> <p>To
     * specify a CMK, use its key ID, Amazon Resource Name (ARN), alias name, or alias
     * ARN. When using an alias name, prefix it with <code>"alias/"</code>. To specify
     * a CMK in a different AWS account, you must use the key ARN or alias ARN.</p>
     * <p>For example:</p> <ul> <li> <p>Key ID:
     * <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li> <li> <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> <li> <p>Alias name: <code>alias/ExampleAlias</code> </p> </li> <li>
     * <p>Alias ARN: <code>arn:aws:kms:us-east-2:111122223333:alias/ExampleAlias</code>
     * </p> </li> </ul> <p>To get the key ID and key ARN for a CMK, use <a>ListKeys</a>
     * or <a>DescribeKey</a>. To get the alias name and alias ARN, use
     * <a>ListAliases</a>.</p>
     */
    inline ReEncryptRequest& WithDestinationKeyId(const Aws::String& value) { SetDestinationKeyId(value); return *this;}

    /**
     * <p>A unique identifier for the CMK that is used to reencrypt the data.</p> <p>To
     * specify a CMK, use its key ID, Amazon Resource Name (ARN), alias name, or alias
     * ARN. When using an alias name, prefix it with <code>"alias/"</code>. To specify
     * a CMK in a different AWS account, you must use the key ARN or alias ARN.</p>
     * <p>For example:</p> <ul> <li> <p>Key ID:
     * <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li> <li> <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> <li> <p>Alias name: <code>alias/ExampleAlias</code> </p> </li> <li>
     * <p>Alias ARN: <code>arn:aws:kms:us-east-2:111122223333:alias/ExampleAlias</code>
     * </p> </li> </ul> <p>To get the key ID and key ARN for a CMK, use <a>ListKeys</a>
     * or <a>DescribeKey</a>. To get the alias name and alias ARN, use
     * <a>ListAliases</a>.</p>
     */
    inline ReEncryptRequest& WithDestinationKeyId(Aws::String&& value) { SetDestinationKeyId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the CMK that is used to reencrypt the data.</p> <p>To
     * specify a CMK, use its key ID, Amazon Resource Name (ARN), alias name, or alias
     * ARN. When using an alias name, prefix it with <code>"alias/"</code>. To specify
     * a CMK in a different AWS account, you must use the key ARN or alias ARN.</p>
     * <p>For example:</p> <ul> <li> <p>Key ID:
     * <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li> <li> <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> <li> <p>Alias name: <code>alias/ExampleAlias</code> </p> </li> <li>
     * <p>Alias ARN: <code>arn:aws:kms:us-east-2:111122223333:alias/ExampleAlias</code>
     * </p> </li> </ul> <p>To get the key ID and key ARN for a CMK, use <a>ListKeys</a>
     * or <a>DescribeKey</a>. To get the alias name and alias ARN, use
     * <a>ListAliases</a>.</p>
     */
    inline ReEncryptRequest& WithDestinationKeyId(const char* value) { SetDestinationKeyId(value); return *this;}


    /**
     * <p>Encryption context to use when the data is reencrypted.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetDestinationEncryptionContext() const{ return m_destinationEncryptionContext; }

    /**
     * <p>Encryption context to use when the data is reencrypted.</p>
     */
    inline bool DestinationEncryptionContextHasBeenSet() const { return m_destinationEncryptionContextHasBeenSet; }

    /**
     * <p>Encryption context to use when the data is reencrypted.</p>
     */
    inline void SetDestinationEncryptionContext(const Aws::Map<Aws::String, Aws::String>& value) { m_destinationEncryptionContextHasBeenSet = true; m_destinationEncryptionContext = value; }

    /**
     * <p>Encryption context to use when the data is reencrypted.</p>
     */
    inline void SetDestinationEncryptionContext(Aws::Map<Aws::String, Aws::String>&& value) { m_destinationEncryptionContextHasBeenSet = true; m_destinationEncryptionContext = std::move(value); }

    /**
     * <p>Encryption context to use when the data is reencrypted.</p>
     */
    inline ReEncryptRequest& WithDestinationEncryptionContext(const Aws::Map<Aws::String, Aws::String>& value) { SetDestinationEncryptionContext(value); return *this;}

    /**
     * <p>Encryption context to use when the data is reencrypted.</p>
     */
    inline ReEncryptRequest& WithDestinationEncryptionContext(Aws::Map<Aws::String, Aws::String>&& value) { SetDestinationEncryptionContext(std::move(value)); return *this;}

    /**
     * <p>Encryption context to use when the data is reencrypted.</p>
     */
    inline ReEncryptRequest& AddDestinationEncryptionContext(const Aws::String& key, const Aws::String& value) { m_destinationEncryptionContextHasBeenSet = true; m_destinationEncryptionContext.emplace(key, value); return *this; }

    /**
     * <p>Encryption context to use when the data is reencrypted.</p>
     */
    inline ReEncryptRequest& AddDestinationEncryptionContext(Aws::String&& key, const Aws::String& value) { m_destinationEncryptionContextHasBeenSet = true; m_destinationEncryptionContext.emplace(std::move(key), value); return *this; }

    /**
     * <p>Encryption context to use when the data is reencrypted.</p>
     */
    inline ReEncryptRequest& AddDestinationEncryptionContext(const Aws::String& key, Aws::String&& value) { m_destinationEncryptionContextHasBeenSet = true; m_destinationEncryptionContext.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Encryption context to use when the data is reencrypted.</p>
     */
    inline ReEncryptRequest& AddDestinationEncryptionContext(Aws::String&& key, Aws::String&& value) { m_destinationEncryptionContextHasBeenSet = true; m_destinationEncryptionContext.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Encryption context to use when the data is reencrypted.</p>
     */
    inline ReEncryptRequest& AddDestinationEncryptionContext(const char* key, Aws::String&& value) { m_destinationEncryptionContextHasBeenSet = true; m_destinationEncryptionContext.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Encryption context to use when the data is reencrypted.</p>
     */
    inline ReEncryptRequest& AddDestinationEncryptionContext(Aws::String&& key, const char* value) { m_destinationEncryptionContextHasBeenSet = true; m_destinationEncryptionContext.emplace(std::move(key), value); return *this; }

    /**
     * <p>Encryption context to use when the data is reencrypted.</p>
     */
    inline ReEncryptRequest& AddDestinationEncryptionContext(const char* key, const char* value) { m_destinationEncryptionContextHasBeenSet = true; m_destinationEncryptionContext.emplace(key, value); return *this; }


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
