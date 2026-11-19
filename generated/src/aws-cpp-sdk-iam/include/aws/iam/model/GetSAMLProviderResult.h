/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iam/IAM_EXPORTS.h>
#include <aws/iam/model/AssertionEncryptionModeType.h>
#include <aws/iam/model/ContextProvider.h>
#include <aws/iam/model/ResponseMetadata.h>
#include <aws/iam/model/SAMLKeyHashEntry.h>
#include <aws/iam/model/SAMLPrivateKey.h>
#include <aws/iam/model/Tag.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Xml {
class XmlDocument;
}  // namespace Xml
}  // namespace Utils
namespace IAM {
namespace Model {
/**
 * <p>Contains the response to a successful <a
 * href="https://docs.aws.amazon.com/IAM/latest/APIReference/API_GetSAMLProvider.html">GetSAMLProvider</a>
 * request. </p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/GetSAMLProviderResponse">AWS
 * API Reference</a></p>
 */
class GetSAMLProviderResult {
 public:
  AWS_IAM_API GetSAMLProviderResult() = default;
  AWS_IAM_API GetSAMLProviderResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
  AWS_IAM_API GetSAMLProviderResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

  ///@{
  /**
   * <p>The unique identifier assigned to the SAML provider.</p>
   */
  inline const Aws::String& GetSAMLProviderUUID() const { return m_sAMLProviderUUID; }
  template <typename SAMLProviderUUIDT = Aws::String>
  void SetSAMLProviderUUID(SAMLProviderUUIDT&& value) {
    m_sAMLProviderUUIDHasBeenSet = true;
    m_sAMLProviderUUID = std::forward<SAMLProviderUUIDT>(value);
  }
  template <typename SAMLProviderUUIDT = Aws::String>
  GetSAMLProviderResult& WithSAMLProviderUUID(SAMLProviderUUIDT&& value) {
    SetSAMLProviderUUID(std::forward<SAMLProviderUUIDT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The XML metadata document that includes information about an identity
   * provider.</p>
   */
  inline const Aws::String& GetSAMLMetadataDocument() const { return m_sAMLMetadataDocument; }
  template <typename SAMLMetadataDocumentT = Aws::String>
  void SetSAMLMetadataDocument(SAMLMetadataDocumentT&& value) {
    m_sAMLMetadataDocumentHasBeenSet = true;
    m_sAMLMetadataDocument = std::forward<SAMLMetadataDocumentT>(value);
  }
  template <typename SAMLMetadataDocumentT = Aws::String>
  GetSAMLProviderResult& WithSAMLMetadataDocument(SAMLMetadataDocumentT&& value) {
    SetSAMLMetadataDocument(std::forward<SAMLMetadataDocumentT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The trusted identity propagation context provider configuration associated
   * with the SAML provider. For more information, see <a
   * href="https://docs.aws.amazon.com/IAM/latest/APIReference/API_ContextProvider.html">ContextProvider</a>.</p>
   * <p>This element is returned only when a trusted identity propagation context
   * provider is configured for the SAML provider.</p>
   */
  inline const ContextProvider& GetContextProvider() const { return m_contextProvider; }
  template <typename ContextProviderT = ContextProvider>
  void SetContextProvider(ContextProviderT&& value) {
    m_contextProviderHasBeenSet = true;
    m_contextProvider = std::forward<ContextProviderT>(value);
  }
  template <typename ContextProviderT = ContextProvider>
  GetSAMLProviderResult& WithContextProvider(ContextProviderT&& value) {
    SetContextProvider(std::forward<ContextProviderT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The key hashes associated with the SAML provider, grouped by identity
   * provider issuer. For more information, see <a
   * href="https://docs.aws.amazon.com/IAM/latest/APIReference/API_SAMLKeyHashEntry.html">SAMLKeyHashEntry</a>.</p>
   */
  inline const Aws::Vector<SAMLKeyHashEntry>& GetSAMLKeyHashes() const { return m_sAMLKeyHashes; }
  template <typename SAMLKeyHashesT = Aws::Vector<SAMLKeyHashEntry>>
  void SetSAMLKeyHashes(SAMLKeyHashesT&& value) {
    m_sAMLKeyHashesHasBeenSet = true;
    m_sAMLKeyHashes = std::forward<SAMLKeyHashesT>(value);
  }
  template <typename SAMLKeyHashesT = Aws::Vector<SAMLKeyHashEntry>>
  GetSAMLProviderResult& WithSAMLKeyHashes(SAMLKeyHashesT&& value) {
    SetSAMLKeyHashes(std::forward<SAMLKeyHashesT>(value));
    return *this;
  }
  template <typename SAMLKeyHashesT = SAMLKeyHashEntry>
  GetSAMLProviderResult& AddSAMLKeyHashes(SAMLKeyHashesT&& value) {
    m_sAMLKeyHashesHasBeenSet = true;
    m_sAMLKeyHashes.emplace_back(std::forward<SAMLKeyHashesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the SAML provider was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreateDate() const { return m_createDate; }
  template <typename CreateDateT = Aws::Utils::DateTime>
  void SetCreateDate(CreateDateT&& value) {
    m_createDateHasBeenSet = true;
    m_createDate = std::forward<CreateDateT>(value);
  }
  template <typename CreateDateT = Aws::Utils::DateTime>
  GetSAMLProviderResult& WithCreateDate(CreateDateT&& value) {
    SetCreateDate(std::forward<CreateDateT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The expiration date and time for the SAML provider.</p>
   */
  inline const Aws::Utils::DateTime& GetValidUntil() const { return m_validUntil; }
  template <typename ValidUntilT = Aws::Utils::DateTime>
  void SetValidUntil(ValidUntilT&& value) {
    m_validUntilHasBeenSet = true;
    m_validUntil = std::forward<ValidUntilT>(value);
  }
  template <typename ValidUntilT = Aws::Utils::DateTime>
  GetSAMLProviderResult& WithValidUntil(ValidUntilT&& value) {
    SetValidUntil(std::forward<ValidUntilT>(value));
    return *this;
  }
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
  template <typename TagsT = Aws::Vector<Tag>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Vector<Tag>>
  GetSAMLProviderResult& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsT = Tag>
  GetSAMLProviderResult& AddTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace_back(std::forward<TagsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies the encryption setting for the SAML provider.</p>
   */
  inline AssertionEncryptionModeType GetAssertionEncryptionMode() const { return m_assertionEncryptionMode; }
  inline void SetAssertionEncryptionMode(AssertionEncryptionModeType value) {
    m_assertionEncryptionModeHasBeenSet = true;
    m_assertionEncryptionMode = value;
  }
  inline GetSAMLProviderResult& WithAssertionEncryptionMode(AssertionEncryptionModeType value) {
    SetAssertionEncryptionMode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The private key metadata for the SAML provider.</p>
   */
  inline const Aws::Vector<SAMLPrivateKey>& GetPrivateKeyList() const { return m_privateKeyList; }
  template <typename PrivateKeyListT = Aws::Vector<SAMLPrivateKey>>
  void SetPrivateKeyList(PrivateKeyListT&& value) {
    m_privateKeyListHasBeenSet = true;
    m_privateKeyList = std::forward<PrivateKeyListT>(value);
  }
  template <typename PrivateKeyListT = Aws::Vector<SAMLPrivateKey>>
  GetSAMLProviderResult& WithPrivateKeyList(PrivateKeyListT&& value) {
    SetPrivateKeyList(std::forward<PrivateKeyListT>(value));
    return *this;
  }
  template <typename PrivateKeyListT = SAMLPrivateKey>
  GetSAMLProviderResult& AddPrivateKeyList(PrivateKeyListT&& value) {
    m_privateKeyListHasBeenSet = true;
    m_privateKeyList.emplace_back(std::forward<PrivateKeyListT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the IAM Identity Center instance associated
   * with the SAML provider.</p> <p>For the format, see <a
   * href="https://docs.aws.amazon.com/singlesignon/latest/APIReference/API_InstanceMetadata.html">InstanceMetadata</a>
   * in the <i>IAM Identity Center API Reference</i>.</p> <p>This element is returned
   * only when an IAM Identity Center instance is associated with the SAML
   * provider.</p>
   */
  inline const Aws::String& GetIdentityCenterInstanceArn() const { return m_identityCenterInstanceArn; }
  template <typename IdentityCenterInstanceArnT = Aws::String>
  void SetIdentityCenterInstanceArn(IdentityCenterInstanceArnT&& value) {
    m_identityCenterInstanceArnHasBeenSet = true;
    m_identityCenterInstanceArn = std::forward<IdentityCenterInstanceArnT>(value);
  }
  template <typename IdentityCenterInstanceArnT = Aws::String>
  GetSAMLProviderResult& WithIdentityCenterInstanceArn(IdentityCenterInstanceArnT&& value) {
    SetIdentityCenterInstanceArn(std::forward<IdentityCenterInstanceArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the identity store that is resolved from
   * the associated IAM Identity Center instance.</p> <p>For the format, see <a
   * href="https://docs.aws.amazon.com/singlesignon/latest/APIReference/API_InstanceMetadata.html">InstanceMetadata</a>
   * in the <i>IAM Identity Center API Reference</i>.</p> <p>This element is returned
   * only when an IAM Identity Center instance is associated with the SAML
   * provider.</p>
   */
  inline const Aws::String& GetIdentityStoreArn() const { return m_identityStoreArn; }
  template <typename IdentityStoreArnT = Aws::String>
  void SetIdentityStoreArn(IdentityStoreArnT&& value) {
    m_identityStoreArnHasBeenSet = true;
    m_identityStoreArn = std::forward<IdentityStoreArnT>(value);
  }
  template <typename IdentityStoreArnT = Aws::String>
  GetSAMLProviderResult& WithIdentityStoreArn(IdentityStoreArnT&& value) {
    SetIdentityStoreArn(std::forward<IdentityStoreArnT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
  template <typename ResponseMetadataT = ResponseMetadata>
  void SetResponseMetadata(ResponseMetadataT&& value) {
    m_responseMetadataHasBeenSet = true;
    m_responseMetadata = std::forward<ResponseMetadataT>(value);
  }
  template <typename ResponseMetadataT = ResponseMetadata>
  GetSAMLProviderResult& WithResponseMetadata(ResponseMetadataT&& value) {
    SetResponseMetadata(std::forward<ResponseMetadataT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_sAMLProviderUUID;

  Aws::String m_sAMLMetadataDocument;

  ContextProvider m_contextProvider;

  Aws::Vector<SAMLKeyHashEntry> m_sAMLKeyHashes;

  Aws::Utils::DateTime m_createDate{};

  Aws::Utils::DateTime m_validUntil{};

  Aws::Vector<Tag> m_tags;

  AssertionEncryptionModeType m_assertionEncryptionMode{AssertionEncryptionModeType::NOT_SET};

  Aws::Vector<SAMLPrivateKey> m_privateKeyList;

  Aws::String m_identityCenterInstanceArn;

  Aws::String m_identityStoreArn;

  ResponseMetadata m_responseMetadata;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_sAMLProviderUUIDHasBeenSet = false;
  bool m_sAMLMetadataDocumentHasBeenSet = false;
  bool m_contextProviderHasBeenSet = false;
  bool m_sAMLKeyHashesHasBeenSet = false;
  bool m_createDateHasBeenSet = false;
  bool m_validUntilHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
  bool m_assertionEncryptionModeHasBeenSet = false;
  bool m_privateKeyListHasBeenSet = false;
  bool m_identityCenterInstanceArnHasBeenSet = false;
  bool m_identityStoreArnHasBeenSet = false;
  bool m_responseMetadataHasBeenSet = false;
};

}  // namespace Model
}  // namespace IAM
}  // namespace Aws
