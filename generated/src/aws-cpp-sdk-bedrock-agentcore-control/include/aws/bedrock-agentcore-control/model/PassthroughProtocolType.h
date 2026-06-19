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
enum class PassthroughProtocolType { NOT_SET, MCP, A2A, INFERENCE, CUSTOM };

namespace PassthroughProtocolTypeMapper {
AWS_BEDROCKAGENTCORECONTROL_API PassthroughProtocolType GetPassthroughProtocolTypeForName(const Aws::String& name);

AWS_BEDROCKAGENTCORECONTROL_API Aws::String GetNameForPassthroughProtocolType(PassthroughProtocolType value);
}  // namespace PassthroughProtocolTypeMapper
}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
