/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/agent-registry-control/model/AgentCoreGatewaySourceDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace AgentRegistryControl {
namespace Model {

AgentCoreGatewaySourceDetails::AgentCoreGatewaySourceDetails(JsonView jsonValue) { *this = jsonValue; }

AgentCoreGatewaySourceDetails& AgentCoreGatewaySourceDetails::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("protocolType")) {
    m_protocolType = AgentCoreGatewayProtocolTypeMapper::GetAgentCoreGatewayProtocolTypeForName(jsonValue.GetString("protocolType"));
    m_protocolTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("authorizerType")) {
    m_authorizerType = jsonValue.GetString("authorizerType");
    m_authorizerTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("authorizerConfiguration")) {
    m_authorizerConfiguration = jsonValue.GetObject("authorizerConfiguration");
    m_authorizerConfigurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("workloadIdentityDetails")) {
    m_workloadIdentityDetails = jsonValue.GetObject("workloadIdentityDetails");
    m_workloadIdentityDetailsHasBeenSet = true;
  }
  return *this;
}

JsonValue AgentCoreGatewaySourceDetails::Jsonize() const {
  JsonValue payload;

  if (m_protocolTypeHasBeenSet) {
    payload.WithString("protocolType", AgentCoreGatewayProtocolTypeMapper::GetNameForAgentCoreGatewayProtocolType(m_protocolType));
  }

  if (m_authorizerTypeHasBeenSet) {
    payload.WithString("authorizerType", m_authorizerType);
  }

  if (m_authorizerConfigurationHasBeenSet) {
    payload.WithObject("authorizerConfiguration", m_authorizerConfiguration.Jsonize());
  }

  if (m_workloadIdentityDetailsHasBeenSet) {
    payload.WithObject("workloadIdentityDetails", m_workloadIdentityDetails.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace AgentRegistryControl
}  // namespace Aws
