/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/agent-registry-control/AgentRegistryControl_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace AgentRegistryControl {
namespace Model {
enum class AgentCoreRuntimeServerProtocol { NOT_SET, HTTP, A2A, MCP, AGUI };

namespace AgentCoreRuntimeServerProtocolMapper {
AWS_AGENTREGISTRYCONTROL_API AgentCoreRuntimeServerProtocol GetAgentCoreRuntimeServerProtocolForName(const Aws::String& name);

AWS_AGENTREGISTRYCONTROL_API Aws::String GetNameForAgentCoreRuntimeServerProtocol(AgentCoreRuntimeServerProtocol value);
}  // namespace AgentCoreRuntimeServerProtocolMapper
}  // namespace Model
}  // namespace AgentRegistryControl
}  // namespace Aws
