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
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/kms/model/DataKeySpec.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws
{
namespace KMS
{
namespace Model
{

  /**
   */
  class AWS_KMS_API GenerateDataKeyRequest : public KMSRequest
  {
  public:
    GenerateDataKeyRequest();
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
    inline GenerateDataKeyRequest& WithKeyId(const Aws::String& value) { SetKeyId(value); return *this;}

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
    inline GenerateDataKeyRequest& WithKeyId(Aws::String&& value) { SetKeyId(value); return *this;}

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
    inline GenerateDataKeyRequest& WithKeyId(const char* value) { SetKeyId(value); return *this;}

    /**
     * <p>Name/value pair that contains additional data to be authenticated during the
     * encryption and decryption processes that use the key. This value is logged by
     * AWS CloudTrail to provide context around the data encrypted by the key.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetEncryptionContext() const{ return m_encryptionContext; }

    /**
     * <p>Name/value pair that contains additional data to be authenticated during the
     * encryption and decryption processes that use the key. This value is logged by
     * AWS CloudTrail to provide context around the data encrypted by the key.</p>
     */
    inline void SetEncryptionContext(const Aws::Map<Aws::String, Aws::String>& value) { m_encryptionContextHasBeenSet = true; m_encryptionContext = value; }

    /**
     * <p>Name/value pair that contains additional data to be authenticated during the
     * encryption and decryption processes that use the key. This value is logged by
     * AWS CloudTrail to provide context around the data encrypted by the key.</p>
     */
    inline void SetEncryptionContext(Aws::Map<Aws::String, Aws::String>&& value) { m_encryptionContextHasBeenSet = true; m_encryptionContext = value; }

    /**
     * <p>Name/value pair that contains additional data to be authenticated during the
     * encryption and decryption processes that use the key. This value is logged by
     * AWS CloudTrail to provide context around the data encrypted by the key.</p>
     */
    inline GenerateDataKeyRequest& WithEncryptionContext(const Aws::Map<Aws::String, Aws::String>& value) { SetEncryptionContext(value); return *this;}

    /**
     * <p>Name/value pair that contains additional data to be authenticated during the
     * encryption and decryption processes that use the key. This value is logged by
     * AWS CloudTrail to provide context around the data encrypted by the key.</p>
     */
    inline GenerateDataKeyRequest& WithEncryptionContext(Aws::Map<Aws::String, Aws::String>&& value) { SetEncryptionContext(value); return *this;}

    /**
     * <p>Name/value pair that contains additional data to be authenticated during the
     * encryption and decryption processes that use the key. This value is logged by
     * AWS CloudTrail to provide context around the data encrypted by the key.</p>
     */
    inline GenerateDataKeyRequest& AddEncryptionContext(const Aws::String& key, const Aws::String& value) { m_encryptionContextHasBeenSet = true; m_encryptionContext[key] = value; return *this; }

    /**
     * <p>Name/value pair that contains additional data to be authenticated during the
     * encryption and decryption processes that use the key. This value is logged by
     * AWS CloudTrail to provide context around the data encrypted by the key.</p>
     */
    inline GenerateDataKeyRequest& AddEncryptionContext(Aws::String&& key, const Aws::String& value) { m_encryptionContextHasBeenSet = true; m_encryptionContext[key] = value; return *this; }

    /**
     * <p>Name/value pair that contains additional data to be authenticated during the
     * encryption and decryption processes that use the key. This value is logged by
     * AWS CloudTrail to provide context around the data encrypted by the key.</p>
     */
    inline GenerateDataKeyRequest& AddEncryptionContext(const Aws::String& key, Aws::String&& value) { m_encryptionContextHasBeenSet = true; m_encryptionContext[key] = value; return *this; }

    /**
     * <p>Name/value pair that contains additional data to be authenticated during the
     * encryption and decryption processes that use the key. This value is logged by
     * AWS CloudTrail to provide context around the data encrypted by the key.</p>
     */
    inline GenerateDataKeyRequest& AddEncryptionContext(Aws::String&& key, Aws::String&& value) { m_encryptionContextHasBeenSet = true; m_encryptionContext[key] = value; return *this; }

    /**
     * <p>Name/value pair that contains additional data to be authenticated during the
     * encryption and decryption processes that use the key. This value is logged by
     * AWS CloudTrail to provide context around the data encrypted by the key.</p>
     */
    inline GenerateDataKeyRequest& AddEncryptionContext(const char* key, Aws::String&& value) { m_encryptionContextHasBeenSet = true; m_encryptionContext[key] = value; return *this; }

    /**
     * <p>Name/value pair that contains additional data to be authenticated during the
     * encryption and decryption processes that use the key. This value is logged by
     * AWS CloudTrail to provide context around the data encrypted by the key.</p>
     */
    inline GenerateDataKeyRequest& AddEncryptionContext(Aws::String&& key, const char* value) { m_encryptionContextHasBeenSet = true; m_encryptionContext[key] = value; return *this; }

    /**
     * <p>Name/value pair that contains additional data to be authenticated during the
     * encryption and decryption processes that use the key. This value is logged by
     * AWS CloudTrail to provide context around the data encrypted by the key.</p>
     */
    inline GenerateDataKeyRequest& AddEncryptionContext(const char* key, const char* value) { m_encryptionContextHasBeenSet = true; m_encryptionContext[key] = value; return *this; }

    /**
     * <p>Integer that contains the number of bytes to generate. Common values are 128,
     * 256, 512, and 1024. 1024 is the current limit. We recommend that you use the
     * <code>KeySpec</code> parameter instead.</p>
     */
    inline int GetNumberOfBytes() const{ return m_numberOfBytes; }

    /**
     * <p>Integer that contains the number of bytes to generate. Common values are 128,
     * 256, 512, and 1024. 1024 is the current limit. We recommend that you use the
     * <code>KeySpec</code> parameter instead.</p>
     */
    inline void SetNumberOfBytes(int value) { m_numberOfBytesHasBeenSet = true; m_numberOfBytes = value; }

    /**
     * <p>Integer that contains the number of bytes to generate. Common values are 128,
     * 256, 512, and 1024. 1024 is the current limit. We recommend that you use the
     * <code>KeySpec</code> parameter instead.</p>
     */
    inline GenerateDataKeyRequest& WithNumberOfBytes(int value) { SetNumberOfBytes(value); return *this;}

    /**
     * <p>Value that identifies the encryption algorithm and key size to generate a
     * data key for. Currently this can be AES_128 or AES_256.</p>
     */
    inline const DataKeySpec& GetKeySpec() const{ return m_keySpec; }

    /**
     * <p>Value that identifies the encryption algorithm and key size to generate a
     * data key for. Currently this can be AES_128 or AES_256.</p>
     */
    inline void SetKeySpec(const DataKeySpec& value) { m_keySpecHasBeenSet = true; m_keySpec = value; }

    /**
     * <p>Value that identifies the encryption algorithm and key size to generate a
     * data key for. Currently this can be AES_128 or AES_256.</p>
     */
    inline void SetKeySpec(DataKeySpec&& value) { m_keySpecHasBeenSet = true; m_keySpec = value; }

    /**
     * <p>Value that identifies the encryption algorithm and key size to generate a
     * data key for. Currently this can be AES_128 or AES_256.</p>
     */
    inline GenerateDataKeyRequest& WithKeySpec(const DataKeySpec& value) { SetKeySpec(value); return *this;}

    /**
     * <p>Value that identifies the encryption algorithm and key size to generate a
     * data key for. Currently this can be AES_128 or AES_256.</p>
     */
    inline GenerateDataKeyRequest& WithKeySpec(DataKeySpec&& value) { SetKeySpec(value); return *this;}

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
    inline GenerateDataKeyRequest& WithGrantTokens(const Aws::Vector<Aws::String>& value) { SetGrantTokens(value); return *this;}

    /**
     * <p>A list of grant tokens.</p> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#grant_token">Grant
     * Tokens</a> in the <i>AWS Key Management Service Developer Guide</i>.</p>
     */
    inline GenerateDataKeyRequest& WithGrantTokens(Aws::Vector<Aws::String>&& value) { SetGrantTokens(value); return *this;}

    /**
     * <p>A list of grant tokens.</p> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#grant_token">Grant
     * Tokens</a> in the <i>AWS Key Management Service Developer Guide</i>.</p>
     */
    inline GenerateDataKeyRequest& AddGrantTokens(const Aws::String& value) { m_grantTokensHasBeenSet = true; m_grantTokens.push_back(value); return *this; }

    /**
     * <p>A list of grant tokens.</p> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#grant_token">Grant
     * Tokens</a> in the <i>AWS Key Management Service Developer Guide</i>.</p>
     */
    inline GenerateDataKeyRequest& AddGrantTokens(Aws::String&& value) { m_grantTokensHasBeenSet = true; m_grantTokens.push_back(value); return *this; }

    /**
     * <p>A list of grant tokens.</p> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#grant_token">Grant
     * Tokens</a> in the <i>AWS Key Management Service Developer Guide</i>.</p>
     */
    inline GenerateDataKeyRequest& AddGrantTokens(const char* value) { m_grantTokensHasBeenSet = true; m_grantTokens.push_back(value); return *this; }

  private:
    Aws::String m_keyId;
    bool m_keyIdHasBeenSet;
    Aws::Map<Aws::String, Aws::String> m_encryptionContext;
    bool m_encryptionContextHasBeenSet;
    int m_numberOfBytes;
    bool m_numberOfBytesHasBeenSet;
    DataKeySpec m_keySpec;
    bool m_keySpecHasBeenSet;
    Aws::Vector<Aws::String> m_grantTokens;
    bool m_grantTokensHasBeenSet;
  };

} // namespace Model
} // namespace KMS
} // namespace Aws
