/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/StaticRoute.h>
#include <aws/bedrock-agentcore-control/model/WeightedRoute.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace BedrockAgentCoreControl {
namespace Model {

/**
 * <p>An action that routes requests to a gateway target, either statically or with
 * weighted traffic splitting.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/RouteToTargetAction">AWS
 * API Reference</a></p>
 */
class RouteToTargetAction {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API RouteToTargetAction() = default;
  AWS_BEDROCKAGENTCORECONTROL_API RouteToTargetAction(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API RouteToTargetAction& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A static route that sends all matching requests to a single target.</p>
   */
  inline const StaticRoute& GetStaticRoute() const { return m_staticRoute; }
  inline bool StaticRouteHasBeenSet() const { return m_staticRouteHasBeenSet; }
  template <typename StaticRouteT = StaticRoute>
  void SetStaticRoute(StaticRouteT&& value) {
    m_staticRouteHasBeenSet = true;
    m_staticRoute = std::forward<StaticRouteT>(value);
  }
  template <typename StaticRouteT = StaticRoute>
  RouteToTargetAction& WithStaticRoute(StaticRouteT&& value) {
    SetStaticRoute(std::forward<StaticRouteT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A weighted route that splits traffic between multiple targets.</p>
   */
  inline const WeightedRoute& GetWeightedRoute() const { return m_weightedRoute; }
  inline bool WeightedRouteHasBeenSet() const { return m_weightedRouteHasBeenSet; }
  template <typename WeightedRouteT = WeightedRoute>
  void SetWeightedRoute(WeightedRouteT&& value) {
    m_weightedRouteHasBeenSet = true;
    m_weightedRoute = std::forward<WeightedRouteT>(value);
  }
  template <typename WeightedRouteT = WeightedRoute>
  RouteToTargetAction& WithWeightedRoute(WeightedRouteT&& value) {
    SetWeightedRoute(std::forward<WeightedRouteT>(value));
    return *this;
  }
  ///@}
 private:
  StaticRoute m_staticRoute;

  WeightedRoute m_weightedRoute;
  bool m_staticRouteHasBeenSet = false;
  bool m_weightedRouteHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
