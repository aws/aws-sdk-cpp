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
enum class TargetProtocolType { NOT_SET, MCP, HTTP };

namespace TargetProtocolTypeMapper {
AWS_BEDROCKAGENTCORECONTROL_API TargetProtocolType GetTargetProtocolTypeForName(const Aws::String& name);

AWS_BEDROCKAGENTCORECONTROL_API Aws::String GetNameForTargetProtocolType(TargetProtocolType value);
}  // namespace TargetProtocolTypeMapper
}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
