/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apiportal/APIPortalRequest.h>
#include <aws/apiportal/APIPortal_EXPORTS.h>
#include <aws/apiportal/model/ApiSelectionConfiguration.h>
#include <aws/apiportal/model/DisplayOrder.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace APIPortal {
namespace Model {

/**
 */
class UpdateProductRequest : public APIPortalRequest {
 public:
  AWS_APIPORTAL_API UpdateProductRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateProduct"; }

  AWS_APIPORTAL_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The identifier of the product.</p>
   */
  inline const Aws::String& GetProductId() const { return m_productId; }
  inline bool ProductIdHasBeenSet() const { return m_productIdHasBeenSet; }
  template <typename ProductIdT = Aws::String>
  void SetProductId(ProductIdT&& value) {
    m_productIdHasBeenSet = true;
    m_productId = std::forward<ProductIdT>(value);
  }
  template <typename ProductIdT = Aws::String>
  UpdateProductRequest& WithProductId(ProductIdT&& value) {
    SetProductId(std::forward<ProductIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The new name of the product. Omit it to keep the current name.</p>
   */
  inline const Aws::String& GetDisplayName() const { return m_displayName; }
  inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
  template <typename DisplayNameT = Aws::String>
  void SetDisplayName(DisplayNameT&& value) {
    m_displayNameHasBeenSet = true;
    m_displayName = std::forward<DisplayNameT>(value);
  }
  template <typename DisplayNameT = Aws::String>
  UpdateProductRequest& WithDisplayName(DisplayNameT&& value) {
    SetDisplayName(std::forward<DisplayNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The new description of the product. Omit it to keep the current
   * description.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  UpdateProductRequest& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The new page order. Omit it to keep the current order.</p>
   */
  inline const DisplayOrder& GetDisplayOrder() const { return m_displayOrder; }
  inline bool DisplayOrderHasBeenSet() const { return m_displayOrderHasBeenSet; }
  template <typename DisplayOrderT = DisplayOrder>
  void SetDisplayOrder(DisplayOrderT&& value) {
    m_displayOrderHasBeenSet = true;
    m_displayOrder = std::forward<DisplayOrderT>(value);
  }
  template <typename DisplayOrderT = DisplayOrder>
  UpdateProductRequest& WithDisplayOrder(DisplayOrderT&& value) {
    SetDisplayOrder(std::forward<DisplayOrderT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The new API selection settings. The selection mode must match the mode the
   * product was created with. Omit it to keep the current settings.</p>
   */
  inline const ApiSelectionConfiguration& GetApiSelectionConfiguration() const { return m_apiSelectionConfiguration; }
  inline bool ApiSelectionConfigurationHasBeenSet() const { return m_apiSelectionConfigurationHasBeenSet; }
  template <typename ApiSelectionConfigurationT = ApiSelectionConfiguration>
  void SetApiSelectionConfiguration(ApiSelectionConfigurationT&& value) {
    m_apiSelectionConfigurationHasBeenSet = true;
    m_apiSelectionConfiguration = std::forward<ApiSelectionConfigurationT>(value);
  }
  template <typename ApiSelectionConfigurationT = ApiSelectionConfiguration>
  UpdateProductRequest& WithApiSelectionConfiguration(ApiSelectionConfigurationT&& value) {
    SetApiSelectionConfiguration(std::forward<ApiSelectionConfigurationT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_productId;

  Aws::String m_displayName;

  Aws::String m_description;

  DisplayOrder m_displayOrder;

  ApiSelectionConfiguration m_apiSelectionConfiguration;
  bool m_productIdHasBeenSet = false;
  bool m_displayNameHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_displayOrderHasBeenSet = false;
  bool m_apiSelectionConfigurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace APIPortal
}  // namespace Aws
