/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kms/KMS_EXPORTS.h>
#include <aws/kms/KMSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kms/model/KeyAgreementAlgorithmSpec.h>
#include <aws/core/utils/Array.h>
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
  class DeriveSharedSecretRequest : public KMSRequest
  {
  public:
    AWS_KMS_API DeriveSharedSecretRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeriveSharedSecret"; }

    AWS_KMS_API Aws::String SerializePayload() const override;

    AWS_KMS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Identifies an asymmetric NIST-recommended ECC or SM2 (China Regions only) KMS
     * key. KMS uses the private key in the specified key pair to derive the shared
     * secret. The key usage of the KMS key must be <code>KEY_AGREEMENT</code>. To find
     * the <code>KeyUsage</code> of a KMS key, use the <a>DescribeKey</a>
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
    inline const Aws::String& GetKeyId() const { return m_keyId; }
    inline bool KeyIdHasBeenSet() const { return m_keyIdHasBeenSet; }
    template<typename KeyIdT = Aws::String>
    void SetKeyId(KeyIdT&& value) { m_keyIdHasBeenSet = true; m_keyId = std::forward<KeyIdT>(value); }
    template<typename KeyIdT = Aws::String>
    DeriveSharedSecretRequest& WithKeyId(KeyIdT&& value) { SetKeyId(std::forward<KeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the key agreement algorithm used to derive the shared secret. The
     * only valid value is <code>ECDH</code>.</p>
     */
    inline KeyAgreementAlgorithmSpec GetKeyAgreementAlgorithm() const { return m_keyAgreementAlgorithm; }
    inline bool KeyAgreementAlgorithmHasBeenSet() const { return m_keyAgreementAlgorithmHasBeenSet; }
    inline void SetKeyAgreementAlgorithm(KeyAgreementAlgorithmSpec value) { m_keyAgreementAlgorithmHasBeenSet = true; m_keyAgreementAlgorithm = value; }
    inline DeriveSharedSecretRequest& WithKeyAgreementAlgorithm(KeyAgreementAlgorithmSpec value) { SetKeyAgreementAlgorithm(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the public key in your peer's NIST-recommended elliptic curve (ECC)
     * or SM2 (China Regions only) key pair.</p> <p>The public key must be a
     * DER-encoded X.509 public key, also known as <code>SubjectPublicKeyInfo</code>
     * (SPKI), as defined in <a href="https://tools.ietf.org/html/rfc5280">RFC
     * 5280</a>.</p> <p> <a>GetPublicKey</a> returns the public key of an asymmetric
     * KMS key pair in the required DER-encoded format.</p>  <p>If you use <a
     * href="https://docs.aws.amazon.com/cli/v1/userguide/cli-chap-welcome.html">Amazon
     * Web Services CLI version 1</a>, you must provide the DER-encoded X.509 public
     * key in a file. Otherwise, the Amazon Web Services CLI Base64-encodes the public
     * key a second time, resulting in a <code>ValidationException</code>.</p> 
     * <p>You can specify the public key as binary data in a file using fileb
     * (<code>fileb://&lt;path-to-file&gt;</code>) or in-line using a Base64 encoded
     * string.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetPublicKey() const { return m_publicKey; }
    inline bool PublicKeyHasBeenSet() const { return m_publicKeyHasBeenSet; }
    template<typename PublicKeyT = Aws::Utils::ByteBuffer>
    void SetPublicKey(PublicKeyT&& value) { m_publicKeyHasBeenSet = true; m_publicKey = std::forward<PublicKeyT>(value); }
    template<typename PublicKeyT = Aws::Utils::ByteBuffer>
    DeriveSharedSecretRequest& WithPublicKey(PublicKeyT&& value) { SetPublicKey(std::forward<PublicKeyT>(value)); return *this;}
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
    DeriveSharedSecretRequest& WithGrantTokens(GrantTokensT&& value) { SetGrantTokens(std::forward<GrantTokensT>(value)); return *this;}
    template<typename GrantTokensT = Aws::String>
    DeriveSharedSecretRequest& AddGrantTokens(GrantTokensT&& value) { m_grantTokensHasBeenSet = true; m_grantTokens.emplace_back(std::forward<GrantTokensT>(value)); return *this; }
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
    inline DeriveSharedSecretRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
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
     * instead of returning a plaintext copy of the shared secret, KMS encrypts the
     * plaintext shared secret under the public key in the attestation document, and
     * returns the resulting ciphertext in the <code>CiphertextForRecipient</code>
     * field in the response. This ciphertext can be decrypted only with the private
     * key in the enclave. The <code>CiphertextBlob</code> field in the response
     * contains the encrypted shared secret derived from the KMS key specified by the
     * <code>KeyId</code> parameter and public key specified by the
     * <code>PublicKey</code> parameter. The <code>SharedSecret</code> field in the
     * response is null or empty.</p> <p>For information about the interaction between
     * KMS and Amazon Web Services Nitro Enclaves, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/services-nitro-enclaves.html">How
     * Amazon Web Services Nitro Enclaves uses KMS</a> in the <i>Key Management Service
     * Developer Guide</i>.</p>
     */
    inline const RecipientInfo& GetRecipient() const { return m_recipient; }
    inline bool RecipientHasBeenSet() const { return m_recipientHasBeenSet; }
    template<typename RecipientT = RecipientInfo>
    void SetRecipient(RecipientT&& value) { m_recipientHasBeenSet = true; m_recipient = std::forward<RecipientT>(value); }
    template<typename RecipientT = RecipientInfo>
    DeriveSharedSecretRequest& WithRecipient(RecipientT&& value) { SetRecipient(std::forward<RecipientT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_keyId;
    bool m_keyIdHasBeenSet = false;

    KeyAgreementAlgorithmSpec m_keyAgreementAlgorithm{KeyAgreementAlgorithmSpec::NOT_SET};
    bool m_keyAgreementAlgorithmHasBeenSet = false;

    Aws::Utils::ByteBuffer m_publicKey{};
    bool m_publicKeyHasBeenSet = false;

    Aws::Vector<Aws::String> m_grantTokens;
    bool m_grantTokensHasBeenSet = false;

    bool m_dryRun{false};
    bool m_dryRunHasBeenSet = false;

    RecipientInfo m_recipient;
    bool m_recipientHasBeenSet = false;
  };

} // namespace Model
} // namespace KMS
} // namespace Aws
