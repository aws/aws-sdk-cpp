/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace BedrockAgentCore {
namespace Model {
enum class CommandExecutionStatus { NOT_SET, COMPLETED, TIMED_OUT };

namespace CommandExecutionStatusMapper {
AWS_BEDROCKAGENTCORE_API CommandExecutionStatus GetCommandExecutionStatusForName(const Aws::String& name);

AWS_BEDROCKAGENTCORE_API Aws::String GetNameForCommandExecutionStatus(CommandExecutionStatus value);
}  // namespace CommandExecutionStatusMapper
}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
