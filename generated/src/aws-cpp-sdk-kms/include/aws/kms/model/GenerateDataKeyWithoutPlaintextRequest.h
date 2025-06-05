/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kms/KMS_EXPORTS.h>
#include <aws/kms/KMSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/kms/model/DataKeySpec.h>
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
  class GenerateDataKeyWithoutPlaintextRequest : public KMSRequest
  {
  public:
    AWS_KMS_API GenerateDataKeyWithoutPlaintextRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GenerateDataKeyWithoutPlaintext"; }

    AWS_KMS_API Aws::String SerializePayload() const override;

    AWS_KMS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Specifies the symmetric encryption KMS key that encrypts the data key. You
     * cannot specify an asymmetric KMS key or a KMS key in a custom key store. To get
     * the type and origin of your KMS key, use the <a>DescribeKey</a> operation.</p>
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
    inline const Aws::String& GetKeyId() const { return m_keyId; }
    inline bool KeyIdHasBeenSet() const { return m_keyIdHasBeenSet; }
    template<typename KeyIdT = Aws::String>
    void SetKeyId(KeyIdT&& value) { m_keyIdHasBeenSet = true; m_keyId = std::forward<KeyIdT>(value); }
    template<typename KeyIdT = Aws::String>
    GenerateDataKeyWithoutPlaintextRequest& WithKeyId(KeyIdT&& value) { SetKeyId(std::forward<KeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the encryption context that will be used when encrypting the data
     * key.</p>  <p>Do not include confidential or sensitive information in
     * this field. This field may be displayed in plaintext in CloudTrail logs and
     * other output.</p>  <p>An <i>encryption context</i> is a collection
     * of non-secret key-value pairs that represent additional authenticated data. When
     * you use an encryption context to encrypt data, you must specify the same (an
     * exact case-sensitive match) encryption context to decrypt the data. An
     * encryption context is supported only on operations with symmetric encryption KMS
     * keys. On operations with symmetric encryption KMS keys, an encryption context is
     * optional, but it is strongly recommended.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/encrypt_context.html">Encryption
     * context</a> in the <i>Key Management Service Developer Guide</i>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetEncryptionContext() const { return m_encryptionContext; }
    inline bool EncryptionContextHasBeenSet() const { return m_encryptionContextHasBeenSet; }
    template<typename EncryptionContextT = Aws::Map<Aws::String, Aws::String>>
    void SetEncryptionContext(EncryptionContextT&& value) { m_encryptionContextHasBeenSet = true; m_encryptionContext = std::forward<EncryptionContextT>(value); }
    template<typename EncryptionContextT = Aws::Map<Aws::String, Aws::String>>
    GenerateDataKeyWithoutPlaintextRequest& WithEncryptionContext(EncryptionContextT&& value) { SetEncryptionContext(std::forward<EncryptionContextT>(value)); return *this;}
    template<typename EncryptionContextKeyT = Aws::String, typename EncryptionContextValueT = Aws::String>
    GenerateDataKeyWithoutPlaintextRequest& AddEncryptionContext(EncryptionContextKeyT&& key, EncryptionContextValueT&& value) {
      m_encryptionContextHasBeenSet = true; m_encryptionContext.emplace(std::forward<EncryptionContextKeyT>(key), std::forward<EncryptionContextValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The length of the data key. Use <code>AES_128</code> to generate a 128-bit
     * symmetric key, or <code>AES_256</code> to generate a 256-bit symmetric key.</p>
     */
    inline DataKeySpec GetKeySpec() const { return m_keySpec; }
    inline bool KeySpecHasBeenSet() const { return m_keySpecHasBeenSet; }
    inline void SetKeySpec(DataKeySpec value) { m_keySpecHasBeenSet = true; m_keySpec = value; }
    inline GenerateDataKeyWithoutPlaintextRequest& WithKeySpec(DataKeySpec value) { SetKeySpec(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The length of the data key in bytes. For example, use the value 64 to
     * generate a 512-bit data key (64 bytes is 512 bits). For common key lengths
     * (128-bit and 256-bit symmetric keys), we recommend that you use the
     * <code>KeySpec</code> field instead of this one.</p>
     */
    inline int GetNumberOfBytes() const { return m_numberOfBytes; }
    inline bool NumberOfBytesHasBeenSet() const { return m_numberOfBytesHasBeenSet; }
    inline void SetNumberOfBytes(int value) { m_numberOfBytesHasBeenSet = true; m_numberOfBytes = value; }
    inline GenerateDataKeyWithoutPlaintextRequest& WithNumberOfBytes(int value) { SetNumberOfBytes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of grant tokens.</p> <p>Use a grant token when your permission to call
     * this operation comes from a new grant that has not yet achieved <i>eventual
     * consistency</i>. For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/grants.html#grant_token">Grant
     * token</a> and <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/using-grant-token.html">Using
     * a grant token</a> in the <i>Key Management Service Developer Guide</i>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetGrantTokens() const { return m_grantTokens; }
    inline bool GrantTokensHasBeenSet() const { return m_grantTokensHasBeenSet; }
    template<typename GrantTokensT = Aws::Vector<Aws::String>>
    void SetGrantTokens(GrantTokensT&& value) { m_grantTokensHasBeenSet = true; m_grantTokens = std::forward<GrantTokensT>(value); }
    template<typename GrantTokensT = Aws::Vector<Aws::String>>
    GenerateDataKeyWithoutPlaintextRequest& WithGrantTokens(GrantTokensT&& value) { SetGrantTokens(std::forward<GrantTokensT>(value)); return *this;}
    template<typename GrantTokensT = Aws::String>
    GenerateDataKeyWithoutPlaintextRequest& AddGrantTokens(GrantTokensT&& value) { m_grantTokensHasBeenSet = true; m_grantTokens.emplace_back(std::forward<GrantTokensT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Checks if your request will succeed. <code>DryRun</code> is an optional
     * parameter. </p> <p>To learn more about how to use this parameter, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/testing-permissions.html">Testing
     * your permissions</a> in the <i>Key Management Service Developer Guide</i>.</p>
     */
    inline bool GetDryRun() const { return m_dryRun; }
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }
    inline GenerateDataKeyWithoutPlaintextRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}
  private:

    Aws::String m_keyId;
    bool m_keyIdHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_encryptionContext;
    bool m_encryptionContextHasBeenSet = false;

    DataKeySpec m_keySpec{DataKeySpec::NOT_SET};
    bool m_keySpecHasBeenSet = false;

    int m_numberOfBytes{0};
    bool m_numberOfBytesHasBeenSet = false;

    Aws::Vector<Aws::String> m_grantTokens;
    bool m_grantTokensHasBeenSet = false;

    bool m_dryRun{false};
    bool m_dryRunHasBeenSet = false;
  };

} // namespace Model
} // namespace KMS
} // namespace Aws
