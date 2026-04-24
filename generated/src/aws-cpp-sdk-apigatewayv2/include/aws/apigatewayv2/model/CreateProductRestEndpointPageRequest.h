/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigatewayv2/ApiGatewayV2Request.h>
#include <aws/apigatewayv2/ApiGatewayV2_EXPORTS.h>
#include <aws/apigatewayv2/model/EndpointDisplayContent.h>
#include <aws/apigatewayv2/model/RestEndpointIdentifier.h>
#include <aws/apigatewayv2/model/TryItState.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace ApiGatewayV2 {
namespace Model {

/**
 * <p>The request body for the post operation.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/CreateProductRestEndpointPageRequest">AWS
 * API Reference</a></p>
 */
class CreateProductRestEndpointPageRequest : public ApiGatewayV2Request {
 public:
  AWS_APIGATEWAYV2_API CreateProductRestEndpointPageRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateProductRestEndpointPage"; }

  AWS_APIGATEWAYV2_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The content of the product REST endpoint page.</p>
   */
  inline const EndpointDisplayContent& GetDisplayContent() const { return m_displayContent; }
  inline bool DisplayContentHasBeenSet() const { return m_displayContentHasBeenSet; }
  template <typename DisplayContentT = EndpointDisplayContent>
  void SetDisplayContent(DisplayContentT&& value) {
    m_displayContentHasBeenSet = true;
    m_displayContent = std::forward<DisplayContentT>(value);
  }
  template <typename DisplayContentT = EndpointDisplayContent>
  CreateProductRestEndpointPageRequest& WithDisplayContent(DisplayContentT&& value) {
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
  CreateProductRestEndpointPageRequest& WithPortalProductId(PortalProductIdT&& value) {
    SetPortalProductId(std::forward<PortalProductIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The REST endpoint identifier.</p>
   */
  inline const RestEndpointIdentifier& GetRestEndpointIdentifier() const { return m_restEndpointIdentifier; }
  inline bool RestEndpointIdentifierHasBeenSet() const { return m_restEndpointIdentifierHasBeenSet; }
  template <typename RestEndpointIdentifierT = RestEndpointIdentifier>
  void SetRestEndpointIdentifier(RestEndpointIdentifierT&& value) {
    m_restEndpointIdentifierHasBeenSet = true;
    m_restEndpointIdentifier = std::forward<RestEndpointIdentifierT>(value);
  }
  template <typename RestEndpointIdentifierT = RestEndpointIdentifier>
  CreateProductRestEndpointPageRequest& WithRestEndpointIdentifier(RestEndpointIdentifierT&& value) {
    SetRestEndpointIdentifier(std::forward<RestEndpointIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The try it state of the product REST endpoint page.</p>
   */
  inline TryItState GetTryItState() const { return m_tryItState; }
  inline bool TryItStateHasBeenSet() const { return m_tryItStateHasBeenSet; }
  inline void SetTryItState(TryItState value) {
    m_tryItStateHasBeenSet = true;
    m_tryItState = value;
  }
  inline CreateProductRestEndpointPageRequest& WithTryItState(TryItState value) {
    SetTryItState(value);
    return *this;
  }
  ///@}
 private:
  EndpointDisplayContent m_displayContent;

  Aws::String m_portalProductId;

  RestEndpointIdentifier m_restEndpointIdentifier;

  TryItState m_tryItState{TryItState::NOT_SET};
  bool m_displayContentHasBeenSet = false;
  bool m_portalProductIdHasBeenSet = false;
  bool m_restEndpointIdentifierHasBeenSet = false;
  bool m_tryItStateHasBeenSet = false;
};

}  // namespace Model
}  // namespace ApiGatewayV2
}  // namespace Aws
