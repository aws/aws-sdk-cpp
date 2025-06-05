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
  class DecryptRequest : public KMSRequest
  {
  public:
    AWS_KMS_API DecryptRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "Decrypt"; }

    AWS_KMS_API Aws::String SerializePayload() const override;

    AWS_KMS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Ciphertext to be decrypted. The blob includes metadata.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetCiphertextBlob() const { return m_ciphertextBlob; }
    inline bool CiphertextBlobHasBeenSet() const { return m_ciphertextBlobHasBeenSet; }
    template<typename CiphertextBlobT = Aws::Utils::ByteBuffer>
    void SetCiphertextBlob(CiphertextBlobT&& value) { m_ciphertextBlobHasBeenSet = true; m_ciphertextBlob = std::forward<CiphertextBlobT>(value); }
    template<typename CiphertextBlobT = Aws::Utils::ByteBuffer>
    DecryptRequest& WithCiphertextBlob(CiphertextBlobT&& value) { SetCiphertextBlob(std::forward<CiphertextBlobT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the encryption context to use when decrypting the data. An
     * encryption context is valid only for <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/kms-cryptography.html#cryptographic-operations">cryptographic
     * operations</a> with a symmetric encryption KMS key. The standard asymmetric
     * encryption algorithms and HMAC algorithms that KMS uses do not support an
     * encryption context.</p> <p>An <i>encryption context</i> is a collection of
     * non-secret key-value pairs that represent additional authenticated data. When
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
    DecryptRequest& WithEncryptionContext(EncryptionContextT&& value) { SetEncryptionContext(std::forward<EncryptionContextT>(value)); return *this;}
    template<typename EncryptionContextKeyT = Aws::String, typename EncryptionContextValueT = Aws::String>
    DecryptRequest& AddEncryptionContext(EncryptionContextKeyT&& key, EncryptionContextValueT&& value) {
      m_encryptionContextHasBeenSet = true; m_encryptionContext.emplace(std::forward<EncryptionContextKeyT>(key), std::forward<EncryptionContextValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>A list of grant tokens. </p> <p>Use a grant token when your permission to
     * call this operation comes from a new grant that has not yet achieved <i>eventual
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
    DecryptRequest& WithGrantTokens(GrantTokensT&& value) { SetGrantTokens(std::forward<GrantTokensT>(value)); return *this;}
    template<typename GrantTokensT = Aws::String>
    DecryptRequest& AddGrantTokens(GrantTokensT&& value) { m_grantTokensHasBeenSet = true; m_grantTokens.emplace_back(std::forward<GrantTokensT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies the KMS key that KMS uses to decrypt the ciphertext.</p> <p>Enter a
     * key ID of the KMS key that was used to encrypt the ciphertext. If you identify a
     * different KMS key, the <code>Decrypt</code> operation throws an
     * <code>IncorrectKeyException</code>.</p> <p>This parameter is required only when
     * the ciphertext was encrypted under an asymmetric KMS key. If you used a
     * symmetric encryption KMS key, KMS can get the KMS key from metadata that it adds
     * to the symmetric ciphertext blob. However, it is always recommended as a best
     * practice. This practice ensures that you use the KMS key that you intend.</p>
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
    DecryptRequest& WithKeyId(KeyIdT&& value) { SetKeyId(std::forward<KeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the encryption algorithm that will be used to decrypt the
     * ciphertext. Specify the same algorithm that was used to encrypt the data. If you
     * specify a different algorithm, the <code>Decrypt</code> operation fails.</p>
     * <p>This parameter is required only when the ciphertext was encrypted under an
     * asymmetric KMS key. The default value, <code>SYMMETRIC_DEFAULT</code>,
     * represents the only supported algorithm that is valid for symmetric encryption
     * KMS keys.</p>
     */
    inline EncryptionAlgorithmSpec GetEncryptionAlgorithm() const { return m_encryptionAlgorithm; }
    inline bool EncryptionAlgorithmHasBeenSet() const { return m_encryptionAlgorithmHasBeenSet; }
    inline void SetEncryptionAlgorithm(EncryptionAlgorithmSpec value) { m_encryptionAlgorithmHasBeenSet = true; m_encryptionAlgorithm = value; }
    inline DecryptRequest& WithEncryptionAlgorithm(EncryptionAlgorithmSpec value) { SetEncryptionAlgorithm(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A signed <a
     * href="https://docs.aws.amazon.com/enclaves/latest/user/nitro-enclave-concepts.html#term-attestdoc">attestation
     * document</a> from an Amazon Web Services Nitro enclave and the encryption
     * algorithm to use with the enclave's public key. The only valid encryption
     * algorithm is <code>RSAES_OAEP_SHA_256</code>. </p> <p>This parameter only
     * supports attestation documents for Amazon Web Services Nitro Enclaves. To
     * include this parameter, use the <a
     * href="https://docs.aws.amazon.com/enclaves/latest/user/developing-applications.html#sdk">Amazon
     * Web Services Nitro Enclaves SDK</a> or any Amazon Web Services SDK.</p> <p>When
     * you use this parameter, instead of returning the plaintext data, KMS encrypts
     * the plaintext data with the public key in the attestation document, and returns
     * the resulting ciphertext in the <code>CiphertextForRecipient</code> field in the
     * response. This ciphertext can be decrypted only with the private key in the
     * enclave. The <code>Plaintext</code> field in the response is null or empty.</p>
     * <p>For information about the interaction between KMS and Amazon Web Services
     * Nitro Enclaves, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/services-nitro-enclaves.html">How
     * Amazon Web Services Nitro Enclaves uses KMS</a> in the <i>Key Management Service
     * Developer Guide</i>.</p>
     */
    inline const RecipientInfo& GetRecipient() const { return m_recipient; }
    inline bool RecipientHasBeenSet() const { return m_recipientHasBeenSet; }
    template<typename RecipientT = RecipientInfo>
    void SetRecipient(RecipientT&& value) { m_recipientHasBeenSet = true; m_recipient = std::forward<RecipientT>(value); }
    template<typename RecipientT = RecipientInfo>
    DecryptRequest& WithRecipient(RecipientT&& value) { SetRecipient(std::forward<RecipientT>(value)); return *this;}
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
    inline DecryptRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}
  private:

    Aws::Utils::ByteBuffer m_ciphertextBlob{};
    bool m_ciphertextBlobHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_encryptionContext;
    bool m_encryptionContextHasBeenSet = false;

    Aws::Vector<Aws::String> m_grantTokens;
    bool m_grantTokensHasBeenSet = false;

    Aws::String m_keyId;
    bool m_keyIdHasBeenSet = false;

    EncryptionAlgorithmSpec m_encryptionAlgorithm{EncryptionAlgorithmSpec::NOT_SET};
    bool m_encryptionAlgorithmHasBeenSet = false;

    RecipientInfo m_recipient;
    bool m_recipientHasBeenSet = false;

    bool m_dryRun{false};
    bool m_dryRunHasBeenSet = false;
  };

} // namespace Model
} // namespace KMS
} // namespace Aws
