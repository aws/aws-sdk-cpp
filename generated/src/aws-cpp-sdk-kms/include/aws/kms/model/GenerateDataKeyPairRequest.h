/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kms/KMS_EXPORTS.h>
#include <aws/kms/KMSRequest.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kms/model/DataKeyPairSpec.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kms/model/RecipientInfo.h>
#include <utility>

namespace Aws
{
namespace KMS
{
namespace Model
{

  /**
   */
  class GenerateDataKeyPairRequest : public KMSRequest
  {
  public:
    AWS_KMS_API GenerateDataKeyPairRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GenerateDataKeyPair"; }

    AWS_KMS_API Aws::String SerializePayload() const override;

    AWS_KMS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Specifies the encryption context that will be used when encrypting the
     * private key in the data key pair.</p>  <p>Do not include confidential
     * or sensitive information in this field. This field may be displayed in plaintext
     * in CloudTrail logs and other output.</p>  <p>An <i>encryption
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
    GenerateDataKeyPairRequest& WithEncryptionContext(EncryptionContextT&& value) { SetEncryptionContext(std::forward<EncryptionContextT>(value)); return *this;}
    template<typename EncryptionContextKeyT = Aws::String, typename EncryptionContextValueT = Aws::String>
    GenerateDataKeyPairRequest& AddEncryptionContext(EncryptionContextKeyT&& key, EncryptionContextValueT&& value) {
      m_encryptionContextHasBeenSet = true; m_encryptionContext.emplace(std::forward<EncryptionContextKeyT>(key), std::forward<EncryptionContextValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Specifies the symmetric encryption KMS key that encrypts the private key in
     * the data key pair. You cannot specify an asymmetric KMS key or a KMS key in a
     * custom key store. To get the type and origin of your KMS key, use the
     * <a>DescribeKey</a> operation.</p> <p>To specify a KMS key, use its key ID, key
     * ARN, alias name, or alias ARN. When using an alias name, prefix it with
     * <code>"alias/"</code>. To specify a KMS key in a different Amazon Web Services
     * account, you must use the key ARN or alias ARN.</p> <p>For example:</p> <ul>
     * <li> <p>Key ID: <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li>
     * <li> <p>Key ARN:
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
    GenerateDataKeyPairRequest& WithKeyId(KeyIdT&& value) { SetKeyId(std::forward<KeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines the type of data key pair that is generated. </p> <p>The KMS rule
     * that restricts the use of asymmetric RSA and SM2 KMS keys to encrypt and decrypt
     * or to sign and verify (but not both), the rule that permits you to use ECC KMS
     * keys only to sign and verify, and the rule that permits you to use ML-DSA key
     * pairs to sign and verify only are not effective on data key pairs, which are
     * used outside of KMS. The SM2 key spec is only available in China Regions.</p>
     */
    inline DataKeyPairSpec GetKeyPairSpec() const { return m_keyPairSpec; }
    inline bool KeyPairSpecHasBeenSet() const { return m_keyPairSpecHasBeenSet; }
    inline void SetKeyPairSpec(DataKeyPairSpec value) { m_keyPairSpecHasBeenSet = true; m_keyPairSpec = value; }
    inline GenerateDataKeyPairRequest& WithKeyPairSpec(DataKeyPairSpec value) { SetKeyPairSpec(value); return *this;}
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
    GenerateDataKeyPairRequest& WithGrantTokens(GrantTokensT&& value) { SetGrantTokens(std::forward<GrantTokensT>(value)); return *this;}
    template<typename GrantTokensT = Aws::String>
    GenerateDataKeyPairRequest& AddGrantTokens(GrantTokensT&& value) { m_grantTokensHasBeenSet = true; m_grantTokens.emplace_back(std::forward<GrantTokensT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A signed <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/nitro-enclave-how.html#term-attestdoc">attestation
     * document</a> from an Amazon Web Services Nitro enclave and the encryption
     * algorithm to use with the enclave's public key. The only valid encryption
     * algorithm is <code>RSAES_OAEP_SHA_256</code>. </p> <p>This parameter only
     * supports attestation documents for Amazon Web Services Nitro Enclaves. To call
     * DeriveSharedSecret for an Amazon Web Services Nitro Enclaves, use the <a
     * href="https://docs.aws.amazon.com/enclaves/latest/user/developing-applications.html#sdk">Amazon
     * Web Services Nitro Enclaves SDK</a> to generate the attestation document and
     * then use the Recipient parameter from any Amazon Web Services SDK to provide the
     * attestation document for the enclave.</p> <p>When you use this parameter,
     * instead of returning a plaintext copy of the private data key, KMS encrypts the
     * plaintext private data key under the public key in the attestation document, and
     * returns the resulting ciphertext in the <code>CiphertextForRecipient</code>
     * field in the response. This ciphertext can be decrypted only with the private
     * key in the enclave. The <code>CiphertextBlob</code> field in the response
     * contains a copy of the private data key encrypted under the KMS key specified by
     * the <code>KeyId</code> parameter. The <code>PrivateKeyPlaintext</code> field in
     * the response is null or empty.</p> <p>For information about the interaction
     * between KMS and Amazon Web Services Nitro Enclaves, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/services-nitro-enclaves.html">How
     * Amazon Web Services Nitro Enclaves uses KMS</a> in the <i>Key Management Service
     * Developer Guide</i>.</p>
     */
    inline const RecipientInfo& GetRecipient() const { return m_recipient; }
    inline bool RecipientHasBeenSet() const { return m_recipientHasBeenSet; }
    template<typename RecipientT = RecipientInfo>
    void SetRecipient(RecipientT&& value) { m_recipientHasBeenSet = true; m_recipient = std::forward<RecipientT>(value); }
    template<typename RecipientT = RecipientInfo>
    GenerateDataKeyPairRequest& WithRecipient(RecipientT&& value) { SetRecipient(std::forward<RecipientT>(value)); return *this;}
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
    inline GenerateDataKeyPairRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}
  private:

    Aws::Map<Aws::String, Aws::String> m_encryptionContext;
    bool m_encryptionContextHasBeenSet = false;

    Aws::String m_keyId;
    bool m_keyIdHasBeenSet = false;

    DataKeyPairSpec m_keyPairSpec{DataKeyPairSpec::NOT_SET};
    bool m_keyPairSpecHasBeenSet = false;

    Aws::Vector<Aws::String> m_grantTokens;
    bool m_grantTokensHasBeenSet = false;

    RecipientInfo m_recipient;
    bool m_recipientHasBeenSet = false;

    bool m_dryRun{false};
    bool m_dryRunHasBeenSet = false;
  };

} // namespace Model
} // namespace KMS
} // namespace Aws
