/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apiportal/APIPortal_EXPORTS.h>
#include <aws/apiportal/model/ApiSelectionConfiguration.h>
#include <aws/apiportal/model/ProductFailureReason.h>
#include <aws/apiportal/model/ProductStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace APIPortal {
namespace Model {

/**
 * <p>A summary of a product.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/apiportal-2026-04-30/ProductSummary">AWS
 * API Reference</a></p>
 */
class ProductSummary {
 public:
  AWS_APIPORTAL_API ProductSummary() = default;
  AWS_APIPORTAL_API ProductSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_APIPORTAL_API ProductSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_APIPORTAL_API Aws::Utils::Json::JsonValue Jsonize() const;

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
  ProductSummary& WithProductId(ProductIdT&& value) {
    SetProductId(std::forward<ProductIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the product.</p>
   */
  inline const Aws::String& GetProductArn() const { return m_productArn; }
  inline bool ProductArnHasBeenSet() const { return m_productArnHasBeenSet; }
  template <typename ProductArnT = Aws::String>
  void SetProductArn(ProductArnT&& value) {
    m_productArnHasBeenSet = true;
    m_productArn = std::forward<ProductArnT>(value);
  }
  template <typename ProductArnT = Aws::String>
  ProductSummary& WithProductArn(ProductArnT&& value) {
    SetProductArn(std::forward<ProductArnT>(value));
    return *this;
  }
  ///@}

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
  ProductSummary& WithDisplayName(DisplayNameT&& value) {
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
  ProductSummary& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>When the resource was last updated.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  ProductSummary& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>How Managed APIs are selected for the product.</p>
   */
  inline const ApiSelectionConfiguration& GetApiSelectionConfiguration() const { return m_apiSelectionConfiguration; }
  inline bool ApiSelectionConfigurationHasBeenSet() const { return m_apiSelectionConfigurationHasBeenSet; }
  template <typename ApiSelectionConfigurationT = ApiSelectionConfiguration>
  void SetApiSelectionConfiguration(ApiSelectionConfigurationT&& value) {
    m_apiSelectionConfigurationHasBeenSet = true;
    m_apiSelectionConfiguration = std::forward<ApiSelectionConfigurationT>(value);
  }
  template <typename ApiSelectionConfigurationT = ApiSelectionConfiguration>
  ProductSummary& WithApiSelectionConfiguration(ApiSelectionConfigurationT&& value) {
    SetApiSelectionConfiguration(std::forward<ApiSelectionConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline ProductStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(ProductStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline ProductSummary& WithStatus(ProductStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{

  inline ProductFailureReason GetFailureReason() const { return m_failureReason; }
  inline bool FailureReasonHasBeenSet() const { return m_failureReasonHasBeenSet; }
  inline void SetFailureReason(ProductFailureReason value) {
    m_failureReasonHasBeenSet = true;
    m_failureReason = value;
  }
  inline ProductSummary& WithFailureReason(ProductFailureReason value) {
    SetFailureReason(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_productId;

  Aws::String m_productArn;

  Aws::String m_displayName;

  Aws::String m_description;

  Aws::Utils::DateTime m_updatedAt{};

  ApiSelectionConfiguration m_apiSelectionConfiguration;

  ProductStatus m_status{ProductStatus::NOT_SET};

  ProductFailureReason m_failureReason{ProductFailureReason::NOT_SET};
  bool m_productIdHasBeenSet = false;
  bool m_productArnHasBeenSet = false;
  bool m_displayNameHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
  bool m_apiSelectionConfigurationHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_failureReasonHasBeenSet = false;
};

}  // namespace Model
}  // namespace APIPortal
}  // namespace Aws
