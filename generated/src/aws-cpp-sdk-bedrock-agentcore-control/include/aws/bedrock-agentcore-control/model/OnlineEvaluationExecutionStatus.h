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
enum class OnlineEvaluationExecutionStatus { NOT_SET, ENABLED, DISABLED };

namespace OnlineEvaluationExecutionStatusMapper {
AWS_BEDROCKAGENTCORECONTROL_API OnlineEvaluationExecutionStatus GetOnlineEvaluationExecutionStatusForName(const Aws::String& name);

AWS_BEDROCKAGENTCORECONTROL_API Aws::String GetNameForOnlineEvaluationExecutionStatus(OnlineEvaluationExecutionStatus value);
}  // namespace OnlineEvaluationExecutionStatusMapper
}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
