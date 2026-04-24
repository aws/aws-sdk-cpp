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
namespace ApiGatewayV2 {
namespace Model {

/**
 */
class DeleteProductPageRequest : public ApiGatewayV2Request {
 public:
  AWS_APIGATEWAYV2_API DeleteProductPageRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "DeleteProductPage"; }

  AWS_APIGATEWAYV2_API Aws::String SerializePayload() const override;

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
  DeleteProductPageRequest& WithPortalProductId(PortalProductIdT&& value) {
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
  DeleteProductPageRequest& WithProductPageId(ProductPageIdT&& value) {
    SetProductPageId(std::forward<ProductPageIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_portalProductId;

  Aws::String m_productPageId;
  bool m_portalProductIdHasBeenSet = false;
  bool m_productPageIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace ApiGatewayV2
}  // namespace Aws
