/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/ecs/model/GatewayConnection.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ECS {
namespace Model {

GatewayConnection::GatewayConnection(JsonView jsonValue) { *this = jsonValue; }

GatewayConnection& GatewayConnection::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("gatewayArn")) {
    m_gatewayArn = jsonValue.GetString("gatewayArn");
    m_gatewayArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("gatewayRouteArn")) {
    m_gatewayRouteArn = jsonValue.GetString("gatewayRouteArn");
    m_gatewayRouteArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("portName")) {
    m_portName = jsonValue.GetString("portName");
    m_portNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("serviceUrl")) {
    m_serviceUrl = jsonValue.GetString("serviceUrl");
    m_serviceUrlHasBeenSet = true;
  }
  if (jsonValue.ValueExists("accessType")) {
    m_accessType = AccessTypeMapper::GetAccessTypeForName(jsonValue.GetString("accessType"));
    m_accessTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = GatewayRouteStatusMapper::GetGatewayRouteStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("resources")) {
    m_resources = jsonValue.GetObject("resources");
    m_resourcesHasBeenSet = true;
  }
  return *this;
}

JsonValue GatewayConnection::Jsonize() const {
  JsonValue payload;

  if (m_gatewayArnHasBeenSet) {
    payload.WithString("gatewayArn", m_gatewayArn);
  }

  if (m_gatewayRouteArnHasBeenSet) {
    payload.WithString("gatewayRouteArn", m_gatewayRouteArn);
  }

  if (m_portNameHasBeenSet) {
    payload.WithString("portName", m_portName);
  }

  if (m_serviceUrlHasBeenSet) {
    payload.WithString("serviceUrl", m_serviceUrl);
  }

  if (m_accessTypeHasBeenSet) {
    payload.WithString("accessType", AccessTypeMapper::GetNameForAccessType(m_accessType));
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", GatewayRouteStatusMapper::GetNameForGatewayRouteStatus(m_status));
  }

  if (m_resourcesHasBeenSet) {
    payload.WithObject("resources", m_resources.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace ECS
}  // namespace Aws
