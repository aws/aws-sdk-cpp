/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apiportal/APIPortal_EXPORTS.h>
#include <aws/apiportal/model/ApiSelectionConfiguration.h>
#include <aws/apiportal/model/DisplayOrder.h>
#include <aws/apiportal/model/ProductFailureReason.h>
#include <aws/apiportal/model/ProductStatus.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace APIPortal {
namespace Model {
class CreateProductResult {
 public:
  AWS_APIPORTAL_API CreateProductResult() = default;
  AWS_APIPORTAL_API CreateProductResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_APIPORTAL_API CreateProductResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The identifier of the product.</p>
   */
  inline const Aws::String& GetProductId() const { return m_productId; }
  template <typename ProductIdT = Aws::String>
  void SetProductId(ProductIdT&& value) {
    m_productIdHasBeenSet = true;
    m_productId = std::forward<ProductIdT>(value);
  }
  template <typename ProductIdT = Aws::String>
  CreateProductResult& WithProductId(ProductIdT&& value) {
    SetProductId(std::forward<ProductIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the product.</p>
   */
  inline const Aws::String& GetProductArn() const { return m_productArn; }
  template <typename ProductArnT = Aws::String>
  void SetProductArn(ProductArnT&& value) {
    m_productArnHasBeenSet = true;
    m_productArn = std::forward<ProductArnT>(value);
  }
  template <typename ProductArnT = Aws::String>
  CreateProductResult& WithProductArn(ProductArnT&& value) {
    SetProductArn(std::forward<ProductArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the product, from 1 to 255 characters.</p>
   */
  inline const Aws::String& GetDisplayName() const { return m_displayName; }
  template <typename DisplayNameT = Aws::String>
  void SetDisplayName(DisplayNameT&& value) {
    m_displayNameHasBeenSet = true;
    m_displayName = std::forward<DisplayNameT>(value);
  }
  template <typename DisplayNameT = Aws::String>
  CreateProductResult& WithDisplayName(DisplayNameT&& value) {
    SetDisplayName(std::forward<DisplayNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The order of the product's pages and API page sections in the portal
   * navigation.</p>
   */
  inline const DisplayOrder& GetDisplayOrder() const { return m_displayOrder; }
  template <typename DisplayOrderT = DisplayOrder>
  void SetDisplayOrder(DisplayOrderT&& value) {
    m_displayOrderHasBeenSet = true;
    m_displayOrder = std::forward<DisplayOrderT>(value);
  }
  template <typename DisplayOrderT = DisplayOrder>
  CreateProductResult& WithDisplayOrder(DisplayOrderT&& value) {
    SetDisplayOrder(std::forward<DisplayOrderT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A description of the product, up to 1024 characters.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  CreateProductResult& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>When the resource was last updated.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  CreateProductResult& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  CreateProductResult& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  CreateProductResult& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>How Managed APIs are selected for the product.</p>
   */
  inline const ApiSelectionConfiguration& GetApiSelectionConfiguration() const { return m_apiSelectionConfiguration; }
  template <typename ApiSelectionConfigurationT = ApiSelectionConfiguration>
  void SetApiSelectionConfiguration(ApiSelectionConfigurationT&& value) {
    m_apiSelectionConfigurationHasBeenSet = true;
    m_apiSelectionConfiguration = std::forward<ApiSelectionConfigurationT>(value);
  }
  template <typename ApiSelectionConfigurationT = ApiSelectionConfiguration>
  CreateProductResult& WithApiSelectionConfiguration(ApiSelectionConfigurationT&& value) {
    SetApiSelectionConfiguration(std::forward<ApiSelectionConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline ProductStatus GetStatus() const { return m_status; }
  inline void SetStatus(ProductStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline CreateProductResult& WithStatus(ProductStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{

  inline ProductFailureReason GetFailureReason() const { return m_failureReason; }
  inline void SetFailureReason(ProductFailureReason value) {
    m_failureReasonHasBeenSet = true;
    m_failureReason = value;
  }
  inline CreateProductResult& WithFailureReason(ProductFailureReason value) {
    SetFailureReason(value);
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
  CreateProductResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_productId;

  Aws::String m_productArn;

  Aws::String m_displayName;

  DisplayOrder m_displayOrder;

  Aws::String m_description;

  Aws::Utils::DateTime m_updatedAt{};

  Aws::Map<Aws::String, Aws::String> m_tags;

  ApiSelectionConfiguration m_apiSelectionConfiguration;

  ProductStatus m_status{ProductStatus::NOT_SET};

  ProductFailureReason m_failureReason{ProductFailureReason::NOT_SET};

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_productIdHasBeenSet = false;
  bool m_productArnHasBeenSet = false;
  bool m_displayNameHasBeenSet = false;
  bool m_displayOrderHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
  bool m_apiSelectionConfigurationHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_failureReasonHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace APIPortal
}  // namespace Aws
