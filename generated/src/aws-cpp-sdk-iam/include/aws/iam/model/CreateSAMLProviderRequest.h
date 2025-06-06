﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iam/IAM_EXPORTS.h>
#include <aws/iam/IAMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iam/model/AssertionEncryptionModeType.h>
#include <aws/iam/model/Tag.h>
#include <utility>

namespace Aws
{
namespace IAM
{
namespace Model
{

  /**
   */
  class CreateSAMLProviderRequest : public IAMRequest
  {
  public:
    AWS_IAM_API CreateSAMLProviderRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateSAMLProvider"; }

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
     * identity management software that is used as your organization's IdP.</p> <p>For
     * more information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_roles_providers_saml.html">About
     * SAML 2.0-based federation</a> in the <i>IAM User Guide</i> </p>
     */
    inline const Aws::String& GetSAMLMetadataDocument() const { return m_sAMLMetadataDocument; }
    inline bool SAMLMetadataDocumentHasBeenSet() const { return m_sAMLMetadataDocumentHasBeenSet; }
    template<typename SAMLMetadataDocumentT = Aws::String>
    void SetSAMLMetadataDocument(SAMLMetadataDocumentT&& value) { m_sAMLMetadataDocumentHasBeenSet = true; m_sAMLMetadataDocument = std::forward<SAMLMetadataDocumentT>(value); }
    template<typename SAMLMetadataDocumentT = Aws::String>
    CreateSAMLProviderRequest& WithSAMLMetadataDocument(SAMLMetadataDocumentT&& value) { SetSAMLMetadataDocument(std::forward<SAMLMetadataDocumentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the provider to create.</p> <p>This parameter allows (through its
     * <a href="http://wikipedia.org/wiki/regex">regex pattern</a>) a string of
     * characters consisting of upper and lowercase alphanumeric characters with no
     * spaces. You can also include any of the following characters: _+=,.@-</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateSAMLProviderRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of tags that you want to attach to the new IAM SAML provider. Each tag
     * consists of a key name and an associated value. For more information about
     * tagging, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_tags.html">Tagging IAM
     * resources</a> in the <i>IAM User Guide</i>.</p>  <p>If any one of the tags
     * is invalid or if you exceed the allowed maximum number of tags, then the entire
     * request fails and the resource is not created.</p> 
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateSAMLProviderRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateSAMLProviderRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies the encryption setting for the SAML provider.</p>
     */
    inline AssertionEncryptionModeType GetAssertionEncryptionMode() const { return m_assertionEncryptionMode; }
    inline bool AssertionEncryptionModeHasBeenSet() const { return m_assertionEncryptionModeHasBeenSet; }
    inline void SetAssertionEncryptionMode(AssertionEncryptionModeType value) { m_assertionEncryptionModeHasBeenSet = true; m_assertionEncryptionMode = value; }
    inline CreateSAMLProviderRequest& WithAssertionEncryptionMode(AssertionEncryptionModeType value) { SetAssertionEncryptionMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The private key generated from your external identity provider. The private
     * key must be a .pem file that uses AES-GCM or AES-CBC encryption algorithm to
     * decrypt SAML assertions.</p>
     */
    inline const Aws::String& GetAddPrivateKey() const { return m_addPrivateKey; }
    inline bool AddPrivateKeyHasBeenSet() const { return m_addPrivateKeyHasBeenSet; }
    template<typename AddPrivateKeyT = Aws::String>
    void SetAddPrivateKey(AddPrivateKeyT&& value) { m_addPrivateKeyHasBeenSet = true; m_addPrivateKey = std::forward<AddPrivateKeyT>(value); }
    template<typename AddPrivateKeyT = Aws::String>
    CreateSAMLProviderRequest& WithAddPrivateKey(AddPrivateKeyT&& value) { SetAddPrivateKey(std::forward<AddPrivateKeyT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_sAMLMetadataDocument;
    bool m_sAMLMetadataDocumentHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    AssertionEncryptionModeType m_assertionEncryptionMode{AssertionEncryptionModeType::NOT_SET};
    bool m_assertionEncryptionModeHasBeenSet = false;

    Aws::String m_addPrivateKey;
    bool m_addPrivateKeyHasBeenSet = false;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
