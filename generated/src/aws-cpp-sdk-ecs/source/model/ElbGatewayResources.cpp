/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/ecs/model/ElbGatewayResources.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ECS {
namespace Model {

ElbGatewayResources::ElbGatewayResources(JsonView jsonValue) { *this = jsonValue; }

ElbGatewayResources& ElbGatewayResources::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("loadBalancerArn")) {
    m_loadBalancerArn = jsonValue.GetString("loadBalancerArn");
    m_loadBalancerArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("listenerArn")) {
    m_listenerArn = jsonValue.GetString("listenerArn");
    m_listenerArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("securityGroup")) {
    m_securityGroup = jsonValue.GetString("securityGroup");
    m_securityGroupHasBeenSet = true;
  }
  if (jsonValue.ValueExists("gatewayRouteArns")) {
    Aws::Utils::Array<JsonView> gatewayRouteArnsJsonList = jsonValue.GetArray("gatewayRouteArns");
    for (unsigned gatewayRouteArnsIndex = 0; gatewayRouteArnsIndex < gatewayRouteArnsJsonList.GetLength(); ++gatewayRouteArnsIndex) {
      m_gatewayRouteArns.push_back(gatewayRouteArnsJsonList[gatewayRouteArnsIndex].AsString());
    }
    m_gatewayRouteArnsHasBeenSet = true;
  }
  return *this;
}

JsonValue ElbGatewayResources::Jsonize() const {
  JsonValue payload;

  if (m_loadBalancerArnHasBeenSet) {
    payload.WithString("loadBalancerArn", m_loadBalancerArn);
  }

  if (m_listenerArnHasBeenSet) {
    payload.WithString("listenerArn", m_listenerArn);
  }

  if (m_securityGroupHasBeenSet) {
    payload.WithString("securityGroup", m_securityGroup);
  }

  if (m_gatewayRouteArnsHasBeenSet) {
    Aws::Utils::Array<JsonValue> gatewayRouteArnsJsonList(m_gatewayRouteArns.size());
    for (unsigned gatewayRouteArnsIndex = 0; gatewayRouteArnsIndex < gatewayRouteArnsJsonList.GetLength(); ++gatewayRouteArnsIndex) {
      gatewayRouteArnsJsonList[gatewayRouteArnsIndex].AsString(m_gatewayRouteArns[gatewayRouteArnsIndex]);
    }
    payload.WithArray("gatewayRouteArns", std::move(gatewayRouteArnsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace ECS
}  // namespace Aws
