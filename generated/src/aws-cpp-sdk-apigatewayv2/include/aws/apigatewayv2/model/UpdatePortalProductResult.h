/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigatewayv2/ApiGatewayV2_EXPORTS.h>
#include <aws/apigatewayv2/model/DisplayOrder.h>
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
namespace ApiGatewayV2 {
namespace Model {
class UpdatePortalProductResult {
 public:
  AWS_APIGATEWAYV2_API UpdatePortalProductResult() = default;
  AWS_APIGATEWAYV2_API UpdatePortalProductResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_APIGATEWAYV2_API UpdatePortalProductResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The description of the portal product.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  UpdatePortalProductResult& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The display name of a portal product.</p>
   */
  inline const Aws::String& GetDisplayName() const { return m_displayName; }
  template <typename DisplayNameT = Aws::String>
  void SetDisplayName(DisplayNameT&& value) {
    m_displayNameHasBeenSet = true;
    m_displayName = std::forward<DisplayNameT>(value);
  }
  template <typename DisplayNameT = Aws::String>
  UpdatePortalProductResult& WithDisplayName(DisplayNameT&& value) {
    SetDisplayName(std::forward<DisplayNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The display order that the portal products will appear in a portal.</p>
   */
  inline const DisplayOrder& GetDisplayOrder() const { return m_displayOrder; }
  template <typename DisplayOrderT = DisplayOrder>
  void SetDisplayOrder(DisplayOrderT&& value) {
    m_displayOrderHasBeenSet = true;
    m_displayOrder = std::forward<DisplayOrderT>(value);
  }
  template <typename DisplayOrderT = DisplayOrder>
  UpdatePortalProductResult& WithDisplayOrder(DisplayOrderT&& value) {
    SetDisplayOrder(std::forward<DisplayOrderT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the portal product was last modified.</p>
   */
  inline const Aws::Utils::DateTime& GetLastModified() const { return m_lastModified; }
  template <typename LastModifiedT = Aws::Utils::DateTime>
  void SetLastModified(LastModifiedT&& value) {
    m_lastModifiedHasBeenSet = true;
    m_lastModified = std::forward<LastModifiedT>(value);
  }
  template <typename LastModifiedT = Aws::Utils::DateTime>
  UpdatePortalProductResult& WithLastModified(LastModifiedT&& value) {
    SetLastModified(std::forward<LastModifiedT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the portal product.</p>
   */
  inline const Aws::String& GetPortalProductArn() const { return m_portalProductArn; }
  template <typename PortalProductArnT = Aws::String>
  void SetPortalProductArn(PortalProductArnT&& value) {
    m_portalProductArnHasBeenSet = true;
    m_portalProductArn = std::forward<PortalProductArnT>(value);
  }
  template <typename PortalProductArnT = Aws::String>
  UpdatePortalProductResult& WithPortalProductArn(PortalProductArnT&& value) {
    SetPortalProductArn(std::forward<PortalProductArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The portal product identifier.</p>
   */
  inline const Aws::String& GetPortalProductId() const { return m_portalProductId; }
  template <typename PortalProductIdT = Aws::String>
  void SetPortalProductId(PortalProductIdT&& value) {
    m_portalProductIdHasBeenSet = true;
    m_portalProductId = std::forward<PortalProductIdT>(value);
  }
  template <typename PortalProductIdT = Aws::String>
  UpdatePortalProductResult& WithPortalProductId(PortalProductIdT&& value) {
    SetPortalProductId(std::forward<PortalProductIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The collection of tags. Each tag element is associated with a given
   * resource.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  UpdatePortalProductResult& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  UpdatePortalProductResult& AddTags(TagsKeyT&& key, TagsValueT&& value) {
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
  UpdatePortalProductResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_description;
  bool m_descriptionHasBeenSet = false;

  Aws::String m_displayName;
  bool m_displayNameHasBeenSet = false;

  DisplayOrder m_displayOrder;
  bool m_displayOrderHasBeenSet = false;

  Aws::Utils::DateTime m_lastModified{};
  bool m_lastModifiedHasBeenSet = false;

  Aws::String m_portalProductArn;
  bool m_portalProductArnHasBeenSet = false;

  Aws::String m_portalProductId;
  bool m_portalProductIdHasBeenSet = false;

  Aws::Map<Aws::String, Aws::String> m_tags;
  bool m_tagsHasBeenSet = false;

  Aws::String m_requestId;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace ApiGatewayV2
}  // namespace Aws
