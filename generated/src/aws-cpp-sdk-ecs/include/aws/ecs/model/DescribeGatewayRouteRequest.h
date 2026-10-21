/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ecs/ECSRequest.h>
#include <aws/ecs/ECS_EXPORTS.h>

#include <utility>

namespace Aws {
namespace ECS {
namespace Model {

/**
 */
class DescribeGatewayRouteRequest : public ECSRequest {
 public:
  AWS_ECS_API DescribeGatewayRouteRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "DescribeGatewayRoute"; }

  AWS_ECS_API Aws::String SerializePayload() const override;

  AWS_ECS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the gateway route to describe.</p>
   */
  inline const Aws::String& GetGatewayRouteArn() const { return m_gatewayRouteArn; }
  inline bool GatewayRouteArnHasBeenSet() const { return m_gatewayRouteArnHasBeenSet; }
  template <typename GatewayRouteArnT = Aws::String>
  void SetGatewayRouteArn(GatewayRouteArnT&& value) {
    m_gatewayRouteArnHasBeenSet = true;
    m_gatewayRouteArn = std::forward<GatewayRouteArnT>(value);
  }
  template <typename GatewayRouteArnT = Aws::String>
  DescribeGatewayRouteRequest& WithGatewayRouteArn(GatewayRouteArnT&& value) {
    SetGatewayRouteArn(std::forward<GatewayRouteArnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_gatewayRouteArn;
  bool m_gatewayRouteArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace ECS
}  // namespace Aws
