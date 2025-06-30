/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iam/IAM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iam/model/AssertionEncryptionModeType.h>
#include <aws/iam/model/ResponseMetadata.h>
#include <aws/iam/model/Tag.h>
#include <aws/iam/model/SAMLPrivateKey.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace IAM
{
namespace Model
{
  /**
   * <p>Contains the response to a successful <a
   * href="https://docs.aws.amazon.com/IAM/latest/APIReference/API_GetSAMLProvider.html">GetSAMLProvider</a>
   * request. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/GetSAMLProviderResponse">AWS
   * API Reference</a></p>
   */
  class GetSAMLProviderResult
  {
  public:
    AWS_IAM_API GetSAMLProviderResult() = default;
    AWS_IAM_API GetSAMLProviderResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_IAM_API GetSAMLProviderResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The unique identifier assigned to the SAML provider.</p>
     */
    inline const Aws::String& GetSAMLProviderUUID() const { return m_sAMLProviderUUID; }
    template<typename SAMLProviderUUIDT = Aws::String>
    void SetSAMLProviderUUID(SAMLProviderUUIDT&& value) { m_sAMLProviderUUIDHasBeenSet = true; m_sAMLProviderUUID = std::forward<SAMLProviderUUIDT>(value); }
    template<typename SAMLProviderUUIDT = Aws::String>
    GetSAMLProviderResult& WithSAMLProviderUUID(SAMLProviderUUIDT&& value) { SetSAMLProviderUUID(std::forward<SAMLProviderUUIDT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The XML metadata document that includes information about an identity
     * provider.</p>
     */
    inline const Aws::String& GetSAMLMetadataDocument() const { return m_sAMLMetadataDocument; }
    template<typename SAMLMetadataDocumentT = Aws::String>
    void SetSAMLMetadataDocument(SAMLMetadataDocumentT&& value) { m_sAMLMetadataDocumentHasBeenSet = true; m_sAMLMetadataDocument = std::forward<SAMLMetadataDocumentT>(value); }
    template<typename SAMLMetadataDocumentT = Aws::String>
    GetSAMLProviderResult& WithSAMLMetadataDocument(SAMLMetadataDocumentT&& value) { SetSAMLMetadataDocument(std::forward<SAMLMetadataDocumentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the SAML provider was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateDate() const { return m_createDate; }
    template<typename CreateDateT = Aws::Utils::DateTime>
    void SetCreateDate(CreateDateT&& value) { m_createDateHasBeenSet = true; m_createDate = std::forward<CreateDateT>(value); }
    template<typename CreateDateT = Aws::Utils::DateTime>
    GetSAMLProviderResult& WithCreateDate(CreateDateT&& value) { SetCreateDate(std::forward<CreateDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The expiration date and time for the SAML provider.</p>
     */
    inline const Aws::Utils::DateTime& GetValidUntil() const { return m_validUntil; }
    template<typename ValidUntilT = Aws::Utils::DateTime>
    void SetValidUntil(ValidUntilT&& value) { m_validUntilHasBeenSet = true; m_validUntil = std::forward<ValidUntilT>(value); }
    template<typename ValidUntilT = Aws::Utils::DateTime>
    GetSAMLProviderResult& WithValidUntil(ValidUntilT&& value) { SetValidUntil(std::forward<ValidUntilT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of tags that are attached to the specified IAM SAML provider. The
     * returned list of tags is sorted by tag key. For more information about tagging,
     * see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_tags.html">Tagging IAM
     * resources</a> in the <i>IAM User Guide</i>.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    GetSAMLProviderResult& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    GetSAMLProviderResult& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies the encryption setting for the SAML provider.</p>
     */
    inline AssertionEncryptionModeType GetAssertionEncryptionMode() const { return m_assertionEncryptionMode; }
    inline void SetAssertionEncryptionMode(AssertionEncryptionModeType value) { m_assertionEncryptionModeHasBeenSet = true; m_assertionEncryptionMode = value; }
    inline GetSAMLProviderResult& WithAssertionEncryptionMode(AssertionEncryptionModeType value) { SetAssertionEncryptionMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The private key metadata for the SAML provider.</p>
     */
    inline const Aws::Vector<SAMLPrivateKey>& GetPrivateKeyList() const { return m_privateKeyList; }
    template<typename PrivateKeyListT = Aws::Vector<SAMLPrivateKey>>
    void SetPrivateKeyList(PrivateKeyListT&& value) { m_privateKeyListHasBeenSet = true; m_privateKeyList = std::forward<PrivateKeyListT>(value); }
    template<typename PrivateKeyListT = Aws::Vector<SAMLPrivateKey>>
    GetSAMLProviderResult& WithPrivateKeyList(PrivateKeyListT&& value) { SetPrivateKeyList(std::forward<PrivateKeyListT>(value)); return *this;}
    template<typename PrivateKeyListT = SAMLPrivateKey>
    GetSAMLProviderResult& AddPrivateKeyList(PrivateKeyListT&& value) { m_privateKeyListHasBeenSet = true; m_privateKeyList.emplace_back(std::forward<PrivateKeyListT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    GetSAMLProviderResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_sAMLProviderUUID;
    bool m_sAMLProviderUUIDHasBeenSet = false;

    Aws::String m_sAMLMetadataDocument;
    bool m_sAMLMetadataDocumentHasBeenSet = false;

    Aws::Utils::DateTime m_createDate{};
    bool m_createDateHasBeenSet = false;

    Aws::Utils::DateTime m_validUntil{};
    bool m_validUntilHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    AssertionEncryptionModeType m_assertionEncryptionMode{AssertionEncryptionModeType::NOT_SET};
    bool m_assertionEncryptionModeHasBeenSet = false;

    Aws::Vector<SAMLPrivateKey> m_privateKeyList;
    bool m_privateKeyListHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
