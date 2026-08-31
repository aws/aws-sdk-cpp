/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/agent-registry-control/model/SourceDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace AgentRegistryControl {
namespace Model {

SourceDetails::SourceDetails(JsonView jsonValue) { *this = jsonValue; }

SourceDetails& SourceDetails::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("agentcoreRuntime")) {
    m_agentcoreRuntime = jsonValue.GetObject("agentcoreRuntime");
    m_agentcoreRuntimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("agentcoreGateway")) {
    m_agentcoreGateway = jsonValue.GetObject("agentcoreGateway");
    m_agentcoreGatewayHasBeenSet = true;
  }
  return *this;
}

JsonValue SourceDetails::Jsonize() const {
  JsonValue payload;

  if (m_agentcoreRuntimeHasBeenSet) {
    payload.WithObject("agentcoreRuntime", m_agentcoreRuntime.Jsonize());
  }

  if (m_agentcoreGatewayHasBeenSet) {
    payload.WithObject("agentcoreGateway", m_agentcoreGateway.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace AgentRegistryControl
}  // namespace Aws
