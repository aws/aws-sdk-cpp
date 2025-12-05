/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/customer-profiles/CustomerProfilesRequest.h>
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/customer-profiles/model/DomainObjectTypeField.h>

#include <utility>

namespace Aws {
namespace CustomerProfiles {
namespace Model {

/**
 */
class PutDomainObjectTypeRequest : public CustomerProfilesRequest {
 public:
  AWS_CUSTOMERPROFILES_API PutDomainObjectTypeRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "PutDomainObjectType"; }

  AWS_CUSTOMERPROFILES_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The unique name of the domain.</p>
   */
  inline const Aws::String& GetDomainName() const { return m_domainName; }
  inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
  template <typename DomainNameT = Aws::String>
  void SetDomainName(DomainNameT&& value) {
    m_domainNameHasBeenSet = true;
    m_domainName = std::forward<DomainNameT>(value);
  }
  template <typename DomainNameT = Aws::String>
  PutDomainObjectTypeRequest& WithDomainName(DomainNameT&& value) {
    SetDomainName(std::forward<DomainNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique name of the domain object type.</p>
   */
  inline const Aws::String& GetObjectTypeName() const { return m_objectTypeName; }
  inline bool ObjectTypeNameHasBeenSet() const { return m_objectTypeNameHasBeenSet; }
  template <typename ObjectTypeNameT = Aws::String>
  void SetObjectTypeName(ObjectTypeNameT&& value) {
    m_objectTypeNameHasBeenSet = true;
    m_objectTypeName = std::forward<ObjectTypeNameT>(value);
  }
  template <typename ObjectTypeNameT = Aws::String>
  PutDomainObjectTypeRequest& WithObjectTypeName(ObjectTypeNameT&& value) {
    SetObjectTypeName(std::forward<ObjectTypeNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The description of the domain object type.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  PutDomainObjectTypeRequest& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The customer provided KMS key used to encrypt this type of domain object.</p>
   */
  inline const Aws::String& GetEncryptionKey() const { return m_encryptionKey; }
  inline bool EncryptionKeyHasBeenSet() const { return m_encryptionKeyHasBeenSet; }
  template <typename EncryptionKeyT = Aws::String>
  void SetEncryptionKey(EncryptionKeyT&& value) {
    m_encryptionKeyHasBeenSet = true;
    m_encryptionKey = std::forward<EncryptionKeyT>(value);
  }
  template <typename EncryptionKeyT = Aws::String>
  PutDomainObjectTypeRequest& WithEncryptionKey(EncryptionKeyT&& value) {
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
  inline bool FieldsHasBeenSet() const { return m_fieldsHasBeenSet; }
  template <typename FieldsT = Aws::Map<Aws::String, DomainObjectTypeField>>
  void SetFields(FieldsT&& value) {
    m_fieldsHasBeenSet = true;
    m_fields = std::forward<FieldsT>(value);
  }
  template <typename FieldsT = Aws::Map<Aws::String, DomainObjectTypeField>>
  PutDomainObjectTypeRequest& WithFields(FieldsT&& value) {
    SetFields(std::forward<FieldsT>(value));
    return *this;
  }
  template <typename FieldsKeyT = Aws::String, typename FieldsValueT = DomainObjectTypeField>
  PutDomainObjectTypeRequest& AddFields(FieldsKeyT&& key, FieldsValueT&& value) {
    m_fieldsHasBeenSet = true;
    m_fields.emplace(std::forward<FieldsKeyT>(key), std::forward<FieldsValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tags used to organize, track, or control access for this resource.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  PutDomainObjectTypeRequest& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  PutDomainObjectTypeRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_domainName;

  Aws::String m_objectTypeName;

  Aws::String m_description;

  Aws::String m_encryptionKey;

  Aws::Map<Aws::String, DomainObjectTypeField> m_fields;

  Aws::Map<Aws::String, Aws::String> m_tags;
  bool m_domainNameHasBeenSet = false;
  bool m_objectTypeNameHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_encryptionKeyHasBeenSet = false;
  bool m_fieldsHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace CustomerProfiles
}  // namespace Aws
