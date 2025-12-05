/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigatewayv2/ApiGatewayV2Request.h>
#include <aws/apigatewayv2/ApiGatewayV2_EXPORTS.h>
#include <aws/apigatewayv2/model/EndpointDisplayContent.h>
#include <aws/apigatewayv2/model/TryItState.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace ApiGatewayV2 {
namespace Model {

/**
 * <p>The request body for the patch operation.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/UpdateProductRestEndpointPageRequest">AWS
 * API Reference</a></p>
 */
class UpdateProductRestEndpointPageRequest : public ApiGatewayV2Request {
 public:
  AWS_APIGATEWAYV2_API UpdateProductRestEndpointPageRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateProductRestEndpointPage"; }

  AWS_APIGATEWAYV2_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The display content.</p>
   */
  inline const EndpointDisplayContent& GetDisplayContent() const { return m_displayContent; }
  inline bool DisplayContentHasBeenSet() const { return m_displayContentHasBeenSet; }
  template <typename DisplayContentT = EndpointDisplayContent>
  void SetDisplayContent(DisplayContentT&& value) {
    m_displayContentHasBeenSet = true;
    m_displayContent = std::forward<DisplayContentT>(value);
  }
  template <typename DisplayContentT = EndpointDisplayContent>
  UpdateProductRestEndpointPageRequest& WithDisplayContent(DisplayContentT&& value) {
    SetDisplayContent(std::forward<DisplayContentT>(value));
    return *this;
  }
  ///@}

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
  UpdateProductRestEndpointPageRequest& WithPortalProductId(PortalProductIdT&& value) {
    SetPortalProductId(std::forward<PortalProductIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The product REST endpoint identifier.</p>
   */
  inline const Aws::String& GetProductRestEndpointPageId() const { return m_productRestEndpointPageId; }
  inline bool ProductRestEndpointPageIdHasBeenSet() const { return m_productRestEndpointPageIdHasBeenSet; }
  template <typename ProductRestEndpointPageIdT = Aws::String>
  void SetProductRestEndpointPageId(ProductRestEndpointPageIdT&& value) {
    m_productRestEndpointPageIdHasBeenSet = true;
    m_productRestEndpointPageId = std::forward<ProductRestEndpointPageIdT>(value);
  }
  template <typename ProductRestEndpointPageIdT = Aws::String>
  UpdateProductRestEndpointPageRequest& WithProductRestEndpointPageId(ProductRestEndpointPageIdT&& value) {
    SetProductRestEndpointPageId(std::forward<ProductRestEndpointPageIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The try it state of a product REST endpoint page.</p>
   */
  inline TryItState GetTryItState() const { return m_tryItState; }
  inline bool TryItStateHasBeenSet() const { return m_tryItStateHasBeenSet; }
  inline void SetTryItState(TryItState value) {
    m_tryItStateHasBeenSet = true;
    m_tryItState = value;
  }
  inline UpdateProductRestEndpointPageRequest& WithTryItState(TryItState value) {
    SetTryItState(value);
    return *this;
  }
  ///@}
 private:
  EndpointDisplayContent m_displayContent;

  Aws::String m_portalProductId;

  Aws::String m_productRestEndpointPageId;

  TryItState m_tryItState{TryItState::NOT_SET};
  bool m_displayContentHasBeenSet = false;
  bool m_portalProductIdHasBeenSet = false;
  bool m_productRestEndpointPageIdHasBeenSet = false;
  bool m_tryItStateHasBeenSet = false;
};

}  // namespace Model
}  // namespace ApiGatewayV2
}  // namespace Aws
