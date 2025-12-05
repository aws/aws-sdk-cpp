/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/customer-profiles/model/DomainObjectTypeField.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace CustomerProfiles {
namespace Model {
class PutDomainObjectTypeResult {
 public:
  AWS_CUSTOMERPROFILES_API PutDomainObjectTypeResult() = default;
  AWS_CUSTOMERPROFILES_API PutDomainObjectTypeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_CUSTOMERPROFILES_API PutDomainObjectTypeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The unique name of the domain object type.</p>
   */
  inline const Aws::String& GetObjectTypeName() const { return m_objectTypeName; }
  template <typename ObjectTypeNameT = Aws::String>
  void SetObjectTypeName(ObjectTypeNameT&& value) {
    m_objectTypeNameHasBeenSet = true;
    m_objectTypeName = std::forward<ObjectTypeNameT>(value);
  }
  template <typename ObjectTypeNameT = Aws::String>
  PutDomainObjectTypeResult& WithObjectTypeName(ObjectTypeNameT&& value) {
    SetObjectTypeName(std::forward<ObjectTypeNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The description of the domain object type.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  PutDomainObjectTypeResult& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The customer provided KMS key used to encrypt this type of domain object.</p>
   */
  inline const Aws::String& GetEncryptionKey() const { return m_encryptionKey; }
  template <typename EncryptionKeyT = Aws::String>
  void SetEncryptionKey(EncryptionKeyT&& value) {
    m_encryptionKeyHasBeenSet = true;
    m_encryptionKey = std::forward<EncryptionKeyT>(value);
  }
  template <typename EncryptionKeyT = Aws::String>
  PutDomainObjectTypeResult& WithEncryptionKey(EncryptionKeyT&& value) {
    SetEncryptionKey(std::forward<EncryptionKeyT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A map of field names to their corresponding domain object type field
   * definitions.</p>
   */
  inline const Aws::Map<Aws::String, DomainObjectTypeField>& GetFields() const { return m_fields; }
  template <typename FieldsT = Aws::Map<Aws::String, DomainObjectTypeField>>
  void SetFields(FieldsT&& value) {
    m_fieldsHasBeenSet = true;
    m_fields = std::forward<FieldsT>(value);
  }
  template <typename FieldsT = Aws::Map<Aws::String, DomainObjectTypeField>>
  PutDomainObjectTypeResult& WithFields(FieldsT&& value) {
    SetFields(std::forward<FieldsT>(value));
    return *this;
  }
  template <typename FieldsKeyT = Aws::String, typename FieldsValueT = DomainObjectTypeField>
  PutDomainObjectTypeResult& AddFields(FieldsKeyT&& key, FieldsValueT&& value) {
    m_fieldsHasBeenSet = true;
    m_fields.emplace(std::forward<FieldsKeyT>(key), std::forward<FieldsValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp of when the domain object type was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  PutDomainObjectTypeResult& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp of when the domain object type was most recently edited.</p>
   */
  inline const Aws::Utils::DateTime& GetLastUpdatedAt() const { return m_lastUpdatedAt; }
  template <typename LastUpdatedAtT = Aws::Utils::DateTime>
  void SetLastUpdatedAt(LastUpdatedAtT&& value) {
    m_lastUpdatedAtHasBeenSet = true;
    m_lastUpdatedAt = std::forward<LastUpdatedAtT>(value);
  }
  template <typename LastUpdatedAtT = Aws::Utils::DateTime>
  PutDomainObjectTypeResult& WithLastUpdatedAt(LastUpdatedAtT&& value) {
    SetLastUpdatedAt(std::forward<LastUpdatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tags used to organize, track, or control access for this resource.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  PutDomainObjectTypeResult& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  PutDomainObjectTypeResult& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  PutDomainObjectTypeResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_objectTypeName;

  Aws::String m_description;

  Aws::String m_encryptionKey;

  Aws::Map<Aws::String, DomainObjectTypeField> m_fields;

  Aws::Utils::DateTime m_createdAt{};

  Aws::Utils::DateTime m_lastUpdatedAt{};

  Aws::Map<Aws::String, Aws::String> m_tags;

  Aws::String m_requestId;
  bool m_objectTypeNameHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_encryptionKeyHasBeenSet = false;
  bool m_fieldsHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_lastUpdatedAtHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace CustomerProfiles
}  // namespace Aws
