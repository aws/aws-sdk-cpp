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
    AWS_KMS_API EncryptRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "Encrypt"; }

    AWS_KMS_API Aws::String SerializePayload() const override;

    AWS_KMS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
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
    inline const Aws::String& GetKeyId() const { return m_keyId; }
    inline bool KeyIdHasBeenSet() const { return m_keyIdHasBeenSet; }
    template<typename KeyIdT = Aws::String>
    void SetKeyId(KeyIdT&& value) { m_keyIdHasBeenSet = true; m_keyId = std::forward<KeyIdT>(value); }
    template<typename KeyIdT = Aws::String>
    EncryptRequest& WithKeyId(KeyIdT&& value) { SetKeyId(std::forward<KeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Data to be encrypted.</p>
     */
    inline const Aws::Utils::CryptoBuffer& GetPlaintext() const { return m_plaintext; }
    inline bool PlaintextHasBeenSet() const { return m_plaintextHasBeenSet; }
    template<typename PlaintextT = Aws::Utils::CryptoBuffer>
    void SetPlaintext(PlaintextT&& value) { m_plaintextHasBeenSet = true; m_plaintext = std::forward<PlaintextT>(value); }
    template<typename PlaintextT = Aws::Utils::CryptoBuffer>
    EncryptRequest& WithPlaintext(PlaintextT&& value) { SetPlaintext(std::forward<PlaintextT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the encryption context that will be used to encrypt the data. An
     * encryption context is valid only for <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/kms-cryptography.html#cryptographic-operations">cryptographic
     * operations</a> with a symmetric encryption KMS key. The standard asymmetric
     * encryption algorithms and HMAC algorithms that KMS uses do not support an
     * encryption context. </p>  <p>Do not include confidential or sensitive
     * information in this field. This field may be displayed in plaintext in
     * CloudTrail logs and other output.</p>  <p>An <i>encryption
     * context</i> is a collection of non-secret key-value pairs that represent
     * additional authenticated data. When you use an encryption context to encrypt
     * data, you must specify the same (an exact case-sensitive match) encryption
     * context to decrypt the data. An encryption context is supported only on
     * operations with symmetric encryption KMS keys. On operations with symmetric
     * encryption KMS keys, an encryption context is optional, but it is strongly
     * recommended.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/encrypt_context.html">Encryption
     * context</a> in the <i>Key Management Service Developer Guide</i>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetEncryptionContext() const { return m_encryptionContext; }
    inline bool EncryptionContextHasBeenSet() const { return m_encryptionContextHasBeenSet; }
    template<typename EncryptionContextT = Aws::Map<Aws::String, Aws::String>>
    void SetEncryptionContext(EncryptionContextT&& value) { m_encryptionContextHasBeenSet = true; m_encryptionContext = std::forward<EncryptionContextT>(value); }
    template<typename EncryptionContextT = Aws::Map<Aws::String, Aws::String>>
    EncryptRequest& WithEncryptionContext(EncryptionContextT&& value) { SetEncryptionContext(std::forward<EncryptionContextT>(value)); return *this;}
    template<typename EncryptionContextKeyT = Aws::String, typename EncryptionContextValueT = Aws::String>
    EncryptRequest& AddEncryptionContext(EncryptionContextKeyT&& key, EncryptionContextValueT&& value) {
      m_encryptionContextHasBeenSet = true; m_encryptionContext.emplace(std::forward<EncryptionContextKeyT>(key), std::forward<EncryptionContextValueT>(value)); return *this;
    }
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
    EncryptRequest& WithGrantTokens(GrantTokensT&& value) { SetGrantTokens(std::forward<GrantTokensT>(value)); return *this;}
    template<typename GrantTokensT = Aws::String>
    EncryptRequest& AddGrantTokens(GrantTokensT&& value) { m_grantTokensHasBeenSet = true; m_grantTokens.emplace_back(std::forward<GrantTokensT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies the encryption algorithm that KMS will use to encrypt the plaintext
     * message. The algorithm must be compatible with the KMS key that you specify.</p>
     * <p>This parameter is required only for asymmetric KMS keys. The default value,
     * <code>SYMMETRIC_DEFAULT</code>, is the algorithm used for symmetric encryption
     * KMS keys. If you are using an asymmetric KMS key, we recommend
     * RSAES_OAEP_SHA_256.</p> <p>The SM2PKE algorithm is only available in China
     * Regions.</p>
     */
    inline EncryptionAlgorithmSpec GetEncryptionAlgorithm() const { return m_encryptionAlgorithm; }
    inline bool EncryptionAlgorithmHasBeenSet() const { return m_encryptionAlgorithmHasBeenSet; }
    inline void SetEncryptionAlgorithm(EncryptionAlgorithmSpec value) { m_encryptionAlgorithmHasBeenSet = true; m_encryptionAlgorithm = value; }
    inline EncryptRequest& WithEncryptionAlgorithm(EncryptionAlgorithmSpec value) { SetEncryptionAlgorithm(value); return *this;}
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
    inline EncryptRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}
  private:

    Aws::String m_keyId;
    bool m_keyIdHasBeenSet = false;

    Aws::Utils::CryptoBuffer m_plaintext{};
    bool m_plaintextHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_encryptionContext;
    bool m_encryptionContextHasBeenSet = false;

    Aws::Vector<Aws::String> m_grantTokens;
    bool m_grantTokensHasBeenSet = false;

    EncryptionAlgorithmSpec m_encryptionAlgorithm{EncryptionAlgorithmSpec::NOT_SET};
    bool m_encryptionAlgorithmHasBeenSet = false;

    bool m_dryRun{false};
    bool m_dryRunHasBeenSet = false;
  };

} // namespace Model
} // namespace KMS
} // namespace Aws
