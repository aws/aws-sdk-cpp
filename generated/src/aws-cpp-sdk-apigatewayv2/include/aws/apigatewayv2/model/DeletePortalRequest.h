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
class DeletePortalRequest : public ApiGatewayV2Request {
 public:
  AWS_APIGATEWAYV2_API DeletePortalRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "DeletePortal"; }

  AWS_APIGATEWAYV2_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The portal identifier.</p>
   */
  inline const Aws::String& GetPortalId() const { return m_portalId; }
  inline bool PortalIdHasBeenSet() const { return m_portalIdHasBeenSet; }
  template <typename PortalIdT = Aws::String>
  void SetPortalId(PortalIdT&& value) {
    m_portalIdHasBeenSet = true;
    m_portalId = std::forward<PortalIdT>(value);
  }
  template <typename PortalIdT = Aws::String>
  DeletePortalRequest& WithPortalId(PortalIdT&& value) {
    SetPortalId(std::forward<PortalIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_portalId;
  bool m_portalIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace ApiGatewayV2
}  // namespace Aws
