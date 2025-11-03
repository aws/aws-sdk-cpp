/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {
enum class AgentManagedRuntimeType { NOT_SET, PYTHON_3_10, PYTHON_3_11, PYTHON_3_12, PYTHON_3_13 };

namespace AgentManagedRuntimeTypeMapper {
AWS_BEDROCKAGENTCORECONTROL_API AgentManagedRuntimeType GetAgentManagedRuntimeTypeForName(const Aws::String& name);

AWS_BEDROCKAGENTCORECONTROL_API Aws::String GetNameForAgentManagedRuntimeType(AgentManagedRuntimeType value);
}  // namespace AgentManagedRuntimeTypeMapper
}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
