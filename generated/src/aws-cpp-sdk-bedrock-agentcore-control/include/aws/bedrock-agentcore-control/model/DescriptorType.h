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
enum class DescriptorType { NOT_SET, MCP, A2A, CUSTOM, AGENT_SKILLS };

namespace DescriptorTypeMapper {
AWS_BEDROCKAGENTCORECONTROL_API DescriptorType GetDescriptorTypeForName(const Aws::String& name);

AWS_BEDROCKAGENTCORECONTROL_API Aws::String GetNameForDescriptorType(DescriptorType value);
}  // namespace DescriptorTypeMapper
}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
