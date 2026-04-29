/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/RouteToTargetAction.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

RouteToTargetAction::RouteToTargetAction(JsonView jsonValue) { *this = jsonValue; }

RouteToTargetAction& RouteToTargetAction::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("staticRoute")) {
    m_staticRoute = jsonValue.GetObject("staticRoute");
    m_staticRouteHasBeenSet = true;
  }
  if (jsonValue.ValueExists("weightedRoute")) {
    m_weightedRoute = jsonValue.GetObject("weightedRoute");
    m_weightedRouteHasBeenSet = true;
  }
  return *this;
}

JsonValue RouteToTargetAction::Jsonize() const {
  JsonValue payload;

  if (m_staticRouteHasBeenSet) {
    payload.WithObject("staticRoute", m_staticRoute.Jsonize());
  }

  if (m_weightedRouteHasBeenSet) {
    payload.WithObject("weightedRoute", m_weightedRoute.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
