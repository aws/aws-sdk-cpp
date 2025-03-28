﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iam/IAM_EXPORTS.h>
#include <aws/iam/IAMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iam/model/AssertionEncryptionModeType.h>
#include <utility>

namespace Aws
{
namespace IAM
{
namespace Model
{

  /**
   */
  class UpdateSAMLProviderRequest : public IAMRequest
  {
  public:
    AWS_IAM_API UpdateSAMLProviderRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateSAMLProvider"; }

    AWS_IAM_API Aws::String SerializePayload() const override;

  protected:
    AWS_IAM_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>An XML document generated by an identity provider (IdP) that supports SAML
     * 2.0. The document includes the issuer's name, expiration information, and keys
     * that can be used to validate the SAML authentication response (assertions) that
     * are received from the IdP. You must generate the metadata document using the
     * identity management software that is used as your IdP.</p>
     */
    inline const Aws::String& GetSAMLMetadataDocument() const { return m_sAMLMetadataDocument; }
    inline bool SAMLMetadataDocumentHasBeenSet() const { return m_sAMLMetadataDocumentHasBeenSet; }
    template<typename SAMLMetadataDocumentT = Aws::String>
    void SetSAMLMetadataDocument(SAMLMetadataDocumentT&& value) { m_sAMLMetadataDocumentHasBeenSet = true; m_sAMLMetadataDocument = std::forward<SAMLMetadataDocumentT>(value); }
    template<typename SAMLMetadataDocumentT = Aws::String>
    UpdateSAMLProviderRequest& WithSAMLMetadataDocument(SAMLMetadataDocumentT&& value) { SetSAMLMetadataDocument(std::forward<SAMLMetadataDocumentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the SAML provider to update.</p> <p>For
     * more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i>.</p>
     */
    inline const Aws::String& GetSAMLProviderArn() const { return m_sAMLProviderArn; }
    inline bool SAMLProviderArnHasBeenSet() const { return m_sAMLProviderArnHasBeenSet; }
    template<typename SAMLProviderArnT = Aws::String>
    void SetSAMLProviderArn(SAMLProviderArnT&& value) { m_sAMLProviderArnHasBeenSet = true; m_sAMLProviderArn = std::forward<SAMLProviderArnT>(value); }
    template<typename SAMLProviderArnT = Aws::String>
    UpdateSAMLProviderRequest& WithSAMLProviderArn(SAMLProviderArnT&& value) { SetSAMLProviderArn(std::forward<SAMLProviderArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the encryption setting for the SAML provider.</p>
     */
    inline AssertionEncryptionModeType GetAssertionEncryptionMode() const { return m_assertionEncryptionMode; }
    inline bool AssertionEncryptionModeHasBeenSet() const { return m_assertionEncryptionModeHasBeenSet; }
    inline void SetAssertionEncryptionMode(AssertionEncryptionModeType value) { m_assertionEncryptionModeHasBeenSet = true; m_assertionEncryptionMode = value; }
    inline UpdateSAMLProviderRequest& WithAssertionEncryptionMode(AssertionEncryptionModeType value) { SetAssertionEncryptionMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the new private key from your external identity provider. The
     * private key must be a .pem file that uses AES-GCM or AES-CBC encryption
     * algorithm to decrypt SAML assertions.</p>
     */
    inline const Aws::String& GetAddPrivateKey() const { return m_addPrivateKey; }
    inline bool AddPrivateKeyHasBeenSet() const { return m_addPrivateKeyHasBeenSet; }
    template<typename AddPrivateKeyT = Aws::String>
    void SetAddPrivateKey(AddPrivateKeyT&& value) { m_addPrivateKeyHasBeenSet = true; m_addPrivateKey = std::forward<AddPrivateKeyT>(value); }
    template<typename AddPrivateKeyT = Aws::String>
    UpdateSAMLProviderRequest& WithAddPrivateKey(AddPrivateKeyT&& value) { SetAddPrivateKey(std::forward<AddPrivateKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Key ID of the private key to remove.</p>
     */
    inline const Aws::String& GetRemovePrivateKey() const { return m_removePrivateKey; }
    inline bool RemovePrivateKeyHasBeenSet() const { return m_removePrivateKeyHasBeenSet; }
    template<typename RemovePrivateKeyT = Aws::String>
    void SetRemovePrivateKey(RemovePrivateKeyT&& value) { m_removePrivateKeyHasBeenSet = true; m_removePrivateKey = std::forward<RemovePrivateKeyT>(value); }
    template<typename RemovePrivateKeyT = Aws::String>
    UpdateSAMLProviderRequest& WithRemovePrivateKey(RemovePrivateKeyT&& value) { SetRemovePrivateKey(std::forward<RemovePrivateKeyT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_sAMLMetadataDocument;
    bool m_sAMLMetadataDocumentHasBeenSet = false;

    Aws::String m_sAMLProviderArn;
    bool m_sAMLProviderArnHasBeenSet = false;

    AssertionEncryptionModeType m_assertionEncryptionMode{AssertionEncryptionModeType::NOT_SET};
    bool m_assertionEncryptionModeHasBeenSet = false;

    Aws::String m_addPrivateKey;
    bool m_addPrivateKeyHasBeenSet = false;

    Aws::String m_removePrivateKey;
    bool m_removePrivateKeyHasBeenSet = false;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
