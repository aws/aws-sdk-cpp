/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/ecs/model/GatewayConnectorHealthCheck.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ECS {
namespace Model {

GatewayConnectorHealthCheck::GatewayConnectorHealthCheck(JsonView jsonValue) { *this = jsonValue; }

GatewayConnectorHealthCheck& GatewayConnectorHealthCheck::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("healthCheckProtocol")) {
    m_healthCheckProtocol = GatewayConnectorHealthCheckProtocolMapper::GetGatewayConnectorHealthCheckProtocolForName(
        jsonValue.GetString("healthCheckProtocol"));
    m_healthCheckProtocolHasBeenSet = true;
  }
  if (jsonValue.ValueExists("healthCheckPort")) {
    m_healthCheckPort = jsonValue.GetInteger("healthCheckPort");
    m_healthCheckPortHasBeenSet = true;
  }
  if (jsonValue.ValueExists("healthCheckPath")) {
    m_healthCheckPath = jsonValue.GetString("healthCheckPath");
    m_healthCheckPathHasBeenSet = true;
  }
  if (jsonValue.ValueExists("healthCheckTimeoutSeconds")) {
    m_healthCheckTimeoutSeconds = jsonValue.GetInteger("healthCheckTimeoutSeconds");
    m_healthCheckTimeoutSecondsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("healthCheckIntervalSeconds")) {
    m_healthCheckIntervalSeconds = jsonValue.GetInteger("healthCheckIntervalSeconds");
    m_healthCheckIntervalSecondsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("healthyThresholdCount")) {
    m_healthyThresholdCount = jsonValue.GetInteger("healthyThresholdCount");
    m_healthyThresholdCountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("unhealthyThresholdCount")) {
    m_unhealthyThresholdCount = jsonValue.GetInteger("unhealthyThresholdCount");
    m_unhealthyThresholdCountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("matcher")) {
    m_matcher = jsonValue.GetObject("matcher");
    m_matcherHasBeenSet = true;
  }
  return *this;
}

JsonValue GatewayConnectorHealthCheck::Jsonize() const {
  JsonValue payload;

  if (m_healthCheckProtocolHasBeenSet) {
    payload.WithString("healthCheckProtocol",
                       GatewayConnectorHealthCheckProtocolMapper::GetNameForGatewayConnectorHealthCheckProtocol(m_healthCheckProtocol));
  }

  if (m_healthCheckPortHasBeenSet) {
    payload.WithInteger("healthCheckPort", m_healthCheckPort);
  }

  if (m_healthCheckPathHasBeenSet) {
    payload.WithString("healthCheckPath", m_healthCheckPath);
  }

  if (m_healthCheckTimeoutSecondsHasBeenSet) {
    payload.WithInteger("healthCheckTimeoutSeconds", m_healthCheckTimeoutSeconds);
  }

  if (m_healthCheckIntervalSecondsHasBeenSet) {
    payload.WithInteger("healthCheckIntervalSeconds", m_healthCheckIntervalSeconds);
  }

  if (m_healthyThresholdCountHasBeenSet) {
    payload.WithInteger("healthyThresholdCount", m_healthyThresholdCount);
  }

  if (m_unhealthyThresholdCountHasBeenSet) {
    payload.WithInteger("unhealthyThresholdCount", m_unhealthyThresholdCount);
  }

  if (m_matcherHasBeenSet) {
    payload.WithObject("matcher", m_matcher.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace ECS
}  // namespace Aws
