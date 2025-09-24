/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kms/KMS_EXPORTS.h>
#include <aws/kms/KMSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class GenerateRandomRequest : public KMSRequest
  {
  public:
    AWS_KMS_API GenerateRandomRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GenerateRandom"; }

    AWS_KMS_API Aws::String SerializePayload() const override;

    AWS_KMS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The length of the random byte string. This parameter is required.</p>
     */
    inline int GetNumberOfBytes() const { return m_numberOfBytes; }
    inline bool NumberOfBytesHasBeenSet() const { return m_numberOfBytesHasBeenSet; }
    inline void SetNumberOfBytes(int value) { m_numberOfBytesHasBeenSet = true; m_numberOfBytes = value; }
    inline GenerateRandomRequest& WithNumberOfBytes(int value) { SetNumberOfBytes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Generates the random byte string in the CloudHSM cluster that is associated
     * with the specified CloudHSM key store. To find the ID of a custom key store, use
     * the <a>DescribeCustomKeyStores</a> operation.</p> <p>External key store IDs are
     * not valid for this parameter. If you specify the ID of an external key store,
     * <code>GenerateRandom</code> throws an
     * <code>UnsupportedOperationException</code>.</p>
     */
    inline const Aws::String& GetCustomKeyStoreId() const { return m_customKeyStoreId; }
    inline bool CustomKeyStoreIdHasBeenSet() const { return m_customKeyStoreIdHasBeenSet; }
    template<typename CustomKeyStoreIdT = Aws::String>
    void SetCustomKeyStoreId(CustomKeyStoreIdT&& value) { m_customKeyStoreIdHasBeenSet = true; m_customKeyStoreId = std::forward<CustomKeyStoreIdT>(value); }
    template<typename CustomKeyStoreIdT = Aws::String>
    GenerateRandomRequest& WithCustomKeyStoreId(CustomKeyStoreIdT&& value) { SetCustomKeyStoreId(std::forward<CustomKeyStoreIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A signed <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/nitro-enclave-how.html#term-attestdoc">attestation
     * document</a> from an Amazon Web Services Nitro enclave or NitroTPM, and the
     * encryption algorithm to use with the public key in the attestation document. The
     * only valid encryption algorithm is <code>RSAES_OAEP_SHA_256</code>. </p> <p>This
     * parameter supports the <a
     * href="https://docs.aws.amazon.com/enclaves/latest/user/developing-applications.html#sdk">Amazon
     * Web Services Nitro Enclaves SDK</a> or any Amazon Web Services SDK for Amazon
     * Web Services Nitro Enclaves. It supports any Amazon Web Services SDK for Amazon
     * Web Services NitroTPM. </p> <p>When you use this parameter, instead of returning
     * plaintext bytes, KMS encrypts the plaintext bytes under the public key in the
     * attestation document, and returns the resulting ciphertext in the
     * <code>CiphertextForRecipient</code> field in the response. This ciphertext can
     * be decrypted only with the private key in the attested environment. The
     * <code>Plaintext</code> field in the response is null or empty.</p> <p>For
     * information about the interaction between KMS and Amazon Web Services Nitro
     * Enclaves or Amazon Web Services NitroTPM, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/cryptographic-attestation.html">Cryptographic
     * attestation support in KMS</a> in the <i>Key Management Service Developer
     * Guide</i>.</p>
     */
    inline const RecipientInfo& GetRecipient() const { return m_recipient; }
    inline bool RecipientHasBeenSet() const { return m_recipientHasBeenSet; }
    template<typename RecipientT = RecipientInfo>
    void SetRecipient(RecipientT&& value) { m_recipientHasBeenSet = true; m_recipient = std::forward<RecipientT>(value); }
    template<typename RecipientT = RecipientInfo>
    GenerateRandomRequest& WithRecipient(RecipientT&& value) { SetRecipient(std::forward<RecipientT>(value)); return *this;}
    ///@}
  private:

    int m_numberOfBytes{0};
    bool m_numberOfBytesHasBeenSet = false;

    Aws::String m_customKeyStoreId;
    bool m_customKeyStoreIdHasBeenSet = false;

    RecipientInfo m_recipient;
    bool m_recipientHasBeenSet = false;
  };

} // namespace Model
} // namespace KMS
} // namespace Aws
