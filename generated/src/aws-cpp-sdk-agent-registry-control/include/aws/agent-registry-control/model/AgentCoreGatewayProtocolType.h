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
enum class AgentCoreGatewayProtocolType { NOT_SET, MCP };

namespace AgentCoreGatewayProtocolTypeMapper {
AWS_AGENTREGISTRYCONTROL_API AgentCoreGatewayProtocolType GetAgentCoreGatewayProtocolTypeForName(const Aws::String& name);

AWS_AGENTREGISTRYCONTROL_API Aws::String GetNameForAgentCoreGatewayProtocolType(AgentCoreGatewayProtocolType value);
}  // namespace AgentCoreGatewayProtocolTypeMapper
}  // namespace Model
}  // namespace AgentRegistryControl
}  // namespace Aws
