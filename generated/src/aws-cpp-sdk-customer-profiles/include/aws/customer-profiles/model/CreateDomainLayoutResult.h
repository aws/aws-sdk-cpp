﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/customer-profiles/model/LayoutType.h>

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
class CreateDomainLayoutResult {
 public:
  AWS_CUSTOMERPROFILES_API CreateDomainLayoutResult() = default;
  AWS_CUSTOMERPROFILES_API CreateDomainLayoutResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_CUSTOMERPROFILES_API CreateDomainLayoutResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The unique name of the layout.</p>
   */
  inline const Aws::String& GetLayoutDefinitionName() const { return m_layoutDefinitionName; }
  template <typename LayoutDefinitionNameT = Aws::String>
  void SetLayoutDefinitionName(LayoutDefinitionNameT&& value) {
    m_layoutDefinitionNameHasBeenSet = true;
    m_layoutDefinitionName = std::forward<LayoutDefinitionNameT>(value);
  }
  template <typename LayoutDefinitionNameT = Aws::String>
  CreateDomainLayoutResult& WithLayoutDefinitionName(LayoutDefinitionNameT&& value) {
    SetLayoutDefinitionName(std::forward<LayoutDefinitionNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The description of the layout</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  CreateDomainLayoutResult& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The display name of the layout</p>
   */
  inline const Aws::String& GetDisplayName() const { return m_displayName; }
  template <typename DisplayNameT = Aws::String>
  void SetDisplayName(DisplayNameT&& value) {
    m_displayNameHasBeenSet = true;
    m_displayName = std::forward<DisplayNameT>(value);
  }
  template <typename DisplayNameT = Aws::String>
  CreateDomainLayoutResult& WithDisplayName(DisplayNameT&& value) {
    SetDisplayName(std::forward<DisplayNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>If set to true for a layout, this layout will be used by default to view
   * data. If set to false, then the layout will not be used by default, but it can
   * be used to view data by explicitly selecting it in the console.</p>
   */
  inline bool GetIsDefault() const { return m_isDefault; }
  inline void SetIsDefault(bool value) {
    m_isDefaultHasBeenSet = true;
    m_isDefault = value;
  }
  inline CreateDomainLayoutResult& WithIsDefault(bool value) {
    SetIsDefault(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of layout that can be used to view data under customer profiles
   * domain.</p>
   */
  inline LayoutType GetLayoutType() const { return m_layoutType; }
  inline void SetLayoutType(LayoutType value) {
    m_layoutTypeHasBeenSet = true;
    m_layoutType = value;
  }
  inline CreateDomainLayoutResult& WithLayoutType(LayoutType value) {
    SetLayoutType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A customizable layout that can be used to view data under Customer Profiles
   * domain.</p>
   */
  inline const Aws::String& GetLayout() const { return m_layout; }
  template <typename LayoutT = Aws::String>
  void SetLayout(LayoutT&& value) {
    m_layoutHasBeenSet = true;
    m_layout = std::forward<LayoutT>(value);
  }
  template <typename LayoutT = Aws::String>
  CreateDomainLayoutResult& WithLayout(LayoutT&& value) {
    SetLayout(std::forward<LayoutT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The version used to create layout.</p>
   */
  inline const Aws::String& GetVersion() const { return m_version; }
  template <typename VersionT = Aws::String>
  void SetVersion(VersionT&& value) {
    m_versionHasBeenSet = true;
    m_version = std::forward<VersionT>(value);
  }
  template <typename VersionT = Aws::String>
  CreateDomainLayoutResult& WithVersion(VersionT&& value) {
    SetVersion(std::forward<VersionT>(value));
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
  CreateDomainLayoutResult& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  CreateDomainLayoutResult& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp of when the layout was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  CreateDomainLayoutResult& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp of when the layout was most recently updated.</p>
   */
  inline const Aws::Utils::DateTime& GetLastUpdatedAt() const { return m_lastUpdatedAt; }
  template <typename LastUpdatedAtT = Aws::Utils::DateTime>
  void SetLastUpdatedAt(LastUpdatedAtT&& value) {
    m_lastUpdatedAtHasBeenSet = true;
    m_lastUpdatedAt = std::forward<LastUpdatedAtT>(value);
  }
  template <typename LastUpdatedAtT = Aws::Utils::DateTime>
  CreateDomainLayoutResult& WithLastUpdatedAt(LastUpdatedAtT&& value) {
    SetLastUpdatedAt(std::forward<LastUpdatedAtT>(value));
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
  CreateDomainLayoutResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_layoutDefinitionName;
  bool m_layoutDefinitionNameHasBeenSet = false;

  Aws::String m_description;
  bool m_descriptionHasBeenSet = false;

  Aws::String m_displayName;
  bool m_displayNameHasBeenSet = false;

  bool m_isDefault{false};
  bool m_isDefaultHasBeenSet = false;

  LayoutType m_layoutType{LayoutType::NOT_SET};
  bool m_layoutTypeHasBeenSet = false;

  Aws::String m_layout;
  bool m_layoutHasBeenSet = false;

  Aws::String m_version;
  bool m_versionHasBeenSet = false;

  Aws::Map<Aws::String, Aws::String> m_tags;
  bool m_tagsHasBeenSet = false;

  Aws::Utils::DateTime m_createdAt{};
  bool m_createdAtHasBeenSet = false;

  Aws::Utils::DateTime m_lastUpdatedAt{};
  bool m_lastUpdatedAtHasBeenSet = false;

  Aws::String m_requestId;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace CustomerProfiles
}  // namespace Aws
