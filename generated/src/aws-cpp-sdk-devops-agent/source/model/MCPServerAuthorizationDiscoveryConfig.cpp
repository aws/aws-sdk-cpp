/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/devops-agent/model/MCPServerAuthorizationDiscoveryConfig.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DevOpsAgent {
namespace Model {

MCPServerAuthorizationDiscoveryConfig::MCPServerAuthorizationDiscoveryConfig(JsonView jsonValue) { *this = jsonValue; }

MCPServerAuthorizationDiscoveryConfig& MCPServerAuthorizationDiscoveryConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("returnToEndpoint")) {
    m_returnToEndpoint = jsonValue.GetString("returnToEndpoint");
    m_returnToEndpointHasBeenSet = true;
  }
  return *this;
}

JsonValue MCPServerAuthorizationDiscoveryConfig::Jsonize() const {
  JsonValue payload;

  if (m_returnToEndpointHasBeenSet) {
    payload.WithString("returnToEndpoint", m_returnToEndpoint);
  }

  return payload;
}

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
