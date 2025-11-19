/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigatewayv2/ApiGatewayV2Request.h>
#include <aws/apigatewayv2/ApiGatewayV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Http {
class URI;
}  // namespace Http
namespace ApiGatewayV2 {
namespace Model {

/**
 */
class GetProductPageRequest : public ApiGatewayV2Request {
 public:
  AWS_APIGATEWAYV2_API GetProductPageRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetProductPage"; }

  AWS_APIGATEWAYV2_API Aws::String SerializePayload() const override;

  AWS_APIGATEWAYV2_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

  ///@{
  /**
   * <p>The portal product identifier.</p>
   */
  inline const Aws::String& GetPortalProductId() const { return m_portalProductId; }
  inline bool PortalProductIdHasBeenSet() const { return m_portalProductIdHasBeenSet; }
  template <typename PortalProductIdT = Aws::String>
  void SetPortalProductId(PortalProductIdT&& value) {
    m_portalProductIdHasBeenSet = true;
    m_portalProductId = std::forward<PortalProductIdT>(value);
  }
  template <typename PortalProductIdT = Aws::String>
  GetProductPageRequest& WithPortalProductId(PortalProductIdT&& value) {
    SetPortalProductId(std::forward<PortalProductIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The portal product identifier.</p>
   */
  inline const Aws::String& GetProductPageId() const { return m_productPageId; }
  inline bool ProductPageIdHasBeenSet() const { return m_productPageIdHasBeenSet; }
  template <typename ProductPageIdT = Aws::String>
  void SetProductPageId(ProductPageIdT&& value) {
    m_productPageIdHasBeenSet = true;
    m_productPageId = std::forward<ProductPageIdT>(value);
  }
  template <typename ProductPageIdT = Aws::String>
  GetProductPageRequest& WithProductPageId(ProductPageIdT&& value) {
    SetProductPageId(std::forward<ProductPageIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The account ID of the resource owner of the portal product.</p>
   */
  inline const Aws::String& GetResourceOwnerAccountId() const { return m_resourceOwnerAccountId; }
  inline bool ResourceOwnerAccountIdHasBeenSet() const { return m_resourceOwnerAccountIdHasBeenSet; }
  template <typename ResourceOwnerAccountIdT = Aws::String>
  void SetResourceOwnerAccountId(ResourceOwnerAccountIdT&& value) {
    m_resourceOwnerAccountIdHasBeenSet = true;
    m_resourceOwnerAccountId = std::forward<ResourceOwnerAccountIdT>(value);
  }
  template <typename ResourceOwnerAccountIdT = Aws::String>
  GetProductPageRequest& WithResourceOwnerAccountId(ResourceOwnerAccountIdT&& value) {
    SetResourceOwnerAccountId(std::forward<ResourceOwnerAccountIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_portalProductId;
  bool m_portalProductIdHasBeenSet = false;

  Aws::String m_productPageId;
  bool m_productPageIdHasBeenSet = false;

  Aws::String m_resourceOwnerAccountId;
  bool m_resourceOwnerAccountIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace ApiGatewayV2
}  // namespace Aws
