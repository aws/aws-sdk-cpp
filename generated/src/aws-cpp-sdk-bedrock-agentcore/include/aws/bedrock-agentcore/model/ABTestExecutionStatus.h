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
enum class ABTestExecutionStatus { NOT_SET, PAUSED, RUNNING, STOPPED, NOT_STARTED };

namespace ABTestExecutionStatusMapper {
AWS_BEDROCKAGENTCORE_API ABTestExecutionStatus GetABTestExecutionStatusForName(const Aws::String& name);

AWS_BEDROCKAGENTCORE_API Aws::String GetNameForABTestExecutionStatus(ABTestExecutionStatus value);
}  // namespace ABTestExecutionStatusMapper
}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
