/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/ecs/model/DescribeGatewayAlbConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ECS {
namespace Model {

DescribeGatewayAlbConfiguration::DescribeGatewayAlbConfiguration(JsonView jsonValue) { *this = jsonValue; }

DescribeGatewayAlbConfiguration& DescribeGatewayAlbConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("networkConfiguration")) {
    m_networkConfiguration = jsonValue.GetObject("networkConfiguration");
    m_networkConfigurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("scheme")) {
    m_scheme = GatewayElbSchemeMapper::GetGatewayElbSchemeForName(jsonValue.GetString("scheme"));
    m_schemeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("accessLogs")) {
    m_accessLogs = jsonValue.GetObject("accessLogs");
    m_accessLogsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("webACLArn")) {
    m_webACLArn = jsonValue.GetString("webACLArn");
    m_webACLArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("port")) {
    m_port = jsonValue.GetInteger("port");
    m_portHasBeenSet = true;
  }
  if (jsonValue.ValueExists("protocol")) {
    m_protocol = GatewayAlbProtocolMapper::GetGatewayAlbProtocolForName(jsonValue.GetString("protocol"));
    m_protocolHasBeenSet = true;
  }
  if (jsonValue.ValueExists("maxAlbCount")) {
    m_maxAlbCount = jsonValue.GetInteger("maxAlbCount");
    m_maxAlbCountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("currentAlbCount")) {
    m_currentAlbCount = jsonValue.GetInteger("currentAlbCount");
    m_currentAlbCountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("httpDesync")) {
    m_httpDesync = GatewayAlbDesyncMitigationModeMapper::GetGatewayAlbDesyncMitigationModeForName(jsonValue.GetString("httpDesync"));
    m_httpDesyncHasBeenSet = true;
  }
  if (jsonValue.ValueExists("testTrafficRules")) {
    m_testTrafficRules = jsonValue.GetObject("testTrafficRules");
    m_testTrafficRulesHasBeenSet = true;
  }
  return *this;
}

JsonValue DescribeGatewayAlbConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_networkConfigurationHasBeenSet) {
    payload.WithObject("networkConfiguration", m_networkConfiguration.Jsonize());
  }

  if (m_schemeHasBeenSet) {
    payload.WithString("scheme", GatewayElbSchemeMapper::GetNameForGatewayElbScheme(m_scheme));
  }

  if (m_accessLogsHasBeenSet) {
    payload.WithObject("accessLogs", m_accessLogs.Jsonize());
  }

  if (m_webACLArnHasBeenSet) {
    payload.WithString("webACLArn", m_webACLArn);
  }

  if (m_portHasBeenSet) {
    payload.WithInteger("port", m_port);
  }

  if (m_protocolHasBeenSet) {
    payload.WithString("protocol", GatewayAlbProtocolMapper::GetNameForGatewayAlbProtocol(m_protocol));
  }

  if (m_maxAlbCountHasBeenSet) {
    payload.WithInteger("maxAlbCount", m_maxAlbCount);
  }

  if (m_currentAlbCountHasBeenSet) {
    payload.WithInteger("currentAlbCount", m_currentAlbCount);
  }

  if (m_httpDesyncHasBeenSet) {
    payload.WithString("httpDesync", GatewayAlbDesyncMitigationModeMapper::GetNameForGatewayAlbDesyncMitigationMode(m_httpDesync));
  }

  if (m_testTrafficRulesHasBeenSet) {
    payload.WithObject("testTrafficRules", m_testTrafficRules.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace ECS
}  // namespace Aws
