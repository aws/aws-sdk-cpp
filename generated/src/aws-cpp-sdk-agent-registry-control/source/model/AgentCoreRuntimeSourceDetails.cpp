/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/agent-registry-control/model/AgentCoreRuntimeSourceDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace AgentRegistryControl {
namespace Model {

AgentCoreRuntimeSourceDetails::AgentCoreRuntimeSourceDetails(JsonView jsonValue) { *this = jsonValue; }

AgentCoreRuntimeSourceDetails& AgentCoreRuntimeSourceDetails::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("protocolConfiguration")) {
    m_protocolConfiguration = jsonValue.GetObject("protocolConfiguration");
    m_protocolConfigurationHasBeenSet = true;
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

JsonValue AgentCoreRuntimeSourceDetails::Jsonize() const {
  JsonValue payload;

  if (m_protocolConfigurationHasBeenSet) {
    payload.WithObject("protocolConfiguration", m_protocolConfiguration.Jsonize());
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
