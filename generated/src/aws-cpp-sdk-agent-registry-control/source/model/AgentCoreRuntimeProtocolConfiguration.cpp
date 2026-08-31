/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/agent-registry-control/model/AgentCoreRuntimeProtocolConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace AgentRegistryControl {
namespace Model {

AgentCoreRuntimeProtocolConfiguration::AgentCoreRuntimeProtocolConfiguration(JsonView jsonValue) { *this = jsonValue; }

AgentCoreRuntimeProtocolConfiguration& AgentCoreRuntimeProtocolConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("serverProtocol")) {
    m_serverProtocol =
        AgentCoreRuntimeServerProtocolMapper::GetAgentCoreRuntimeServerProtocolForName(jsonValue.GetString("serverProtocol"));
    m_serverProtocolHasBeenSet = true;
  }
  return *this;
}

JsonValue AgentCoreRuntimeProtocolConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_serverProtocolHasBeenSet) {
    payload.WithString("serverProtocol", AgentCoreRuntimeServerProtocolMapper::GetNameForAgentCoreRuntimeServerProtocol(m_serverProtocol));
  }

  return payload;
}

}  // namespace Model
}  // namespace AgentRegistryControl
}  // namespace Aws
