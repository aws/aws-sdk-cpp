/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apiportal/APIPortalRequest.h>
#include <aws/apiportal/APIPortal_EXPORTS.h>
#include <aws/apiportal/model/ApiSelectionConfiguration.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace APIPortal {
namespace Model {

/**
 */
class CreateProductRequest : public APIPortalRequest {
 public:
  AWS_APIPORTAL_API CreateProductRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateProduct"; }

  AWS_APIPORTAL_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The name of the product, from 1 to 255 characters.</p>
   */
  inline const Aws::String& GetDisplayName() const { return m_displayName; }
  inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
  template <typename DisplayNameT = Aws::String>
  void SetDisplayName(DisplayNameT&& value) {
    m_displayNameHasBeenSet = true;
    m_displayName = std::forward<DisplayNameT>(value);
  }
  template <typename DisplayNameT = Aws::String>
  CreateProductRequest& WithDisplayName(DisplayNameT&& value) {
    SetDisplayName(std::forward<DisplayNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A description of the product, up to 1024 characters.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  CreateProductRequest& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  CreateProductRequest& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  CreateProductRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>How Managed APIs are selected for the product. The selection mode can't be
   * changed after the product is created.</p>
   */
  inline const ApiSelectionConfiguration& GetApiSelectionConfiguration() const { return m_apiSelectionConfiguration; }
  inline bool ApiSelectionConfigurationHasBeenSet() const { return m_apiSelectionConfigurationHasBeenSet; }
  template <typename ApiSelectionConfigurationT = ApiSelectionConfiguration>
  void SetApiSelectionConfiguration(ApiSelectionConfigurationT&& value) {
    m_apiSelectionConfigurationHasBeenSet = true;
    m_apiSelectionConfiguration = std::forward<ApiSelectionConfigurationT>(value);
  }
  template <typename ApiSelectionConfigurationT = ApiSelectionConfiguration>
  CreateProductRequest& WithApiSelectionConfiguration(ApiSelectionConfigurationT&& value) {
    SetApiSelectionConfiguration(std::forward<ApiSelectionConfigurationT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_displayName;

  Aws::String m_description;

  Aws::Map<Aws::String, Aws::String> m_tags;

  ApiSelectionConfiguration m_apiSelectionConfiguration;
  bool m_displayNameHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
  bool m_apiSelectionConfigurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace APIPortal
}  // namespace Aws
