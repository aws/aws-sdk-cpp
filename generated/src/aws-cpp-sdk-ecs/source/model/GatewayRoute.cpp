/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/ecs/model/GatewayRoute.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ECS {
namespace Model {

GatewayRoute::GatewayRoute(JsonView jsonValue) { *this = jsonValue; }

GatewayRoute& GatewayRoute::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("gatewayRouteArn")) {
    m_gatewayRouteArn = jsonValue.GetString("gatewayRouteArn");
    m_gatewayRouteArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("serviceArn")) {
    m_serviceArn = jsonValue.GetString("serviceArn");
    m_serviceArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("serviceContainerPortName")) {
    m_serviceContainerPortName = jsonValue.GetString("serviceContainerPortName");
    m_serviceContainerPortNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = GatewayRouteStatusMapper::GetGatewayRouteStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("serviceUrl")) {
    m_serviceUrl = jsonValue.GetString("serviceUrl");
    m_serviceUrlHasBeenSet = true;
  }
  if (jsonValue.ValueExists("resources")) {
    m_resources = jsonValue.GetObject("resources");
    m_resourcesHasBeenSet = true;
  }
  return *this;
}

JsonValue GatewayRoute::Jsonize() const {
  JsonValue payload;

  if (m_gatewayRouteArnHasBeenSet) {
    payload.WithString("gatewayRouteArn", m_gatewayRouteArn);
  }

  if (m_serviceArnHasBeenSet) {
    payload.WithString("serviceArn", m_serviceArn);
  }

  if (m_serviceContainerPortNameHasBeenSet) {
    payload.WithString("serviceContainerPortName", m_serviceContainerPortName);
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", GatewayRouteStatusMapper::GetNameForGatewayRouteStatus(m_status));
  }

  if (m_serviceUrlHasBeenSet) {
    payload.WithString("serviceUrl", m_serviceUrl);
  }

  if (m_resourcesHasBeenSet) {
    payload.WithObject("resources", m_resources.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace ECS
}  // namespace Aws
