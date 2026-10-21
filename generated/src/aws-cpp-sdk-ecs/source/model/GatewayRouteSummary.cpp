/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/ecs/model/GatewayRouteSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ECS {
namespace Model {

GatewayRouteSummary::GatewayRouteSummary(JsonView jsonValue) { *this = jsonValue; }

GatewayRouteSummary& GatewayRouteSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("gatewayRouteArn")) {
    m_gatewayRouteArn = jsonValue.GetString("gatewayRouteArn");
    m_gatewayRouteArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("gatewayArn")) {
    m_gatewayArn = jsonValue.GetString("gatewayArn");
    m_gatewayArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("clusterArn")) {
    m_clusterArn = jsonValue.GetString("clusterArn");
    m_clusterArnHasBeenSet = true;
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
  return *this;
}

JsonValue GatewayRouteSummary::Jsonize() const {
  JsonValue payload;

  if (m_gatewayRouteArnHasBeenSet) {
    payload.WithString("gatewayRouteArn", m_gatewayRouteArn);
  }

  if (m_gatewayArnHasBeenSet) {
    payload.WithString("gatewayArn", m_gatewayArn);
  }

  if (m_clusterArnHasBeenSet) {
    payload.WithString("clusterArn", m_clusterArn);
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

  return payload;
}

}  // namespace Model
}  // namespace ECS
}  // namespace Aws
