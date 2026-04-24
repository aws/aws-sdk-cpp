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
enum class EvaluatorLevel { NOT_SET, TOOL_CALL, TRACE, SESSION };

namespace EvaluatorLevelMapper {
AWS_BEDROCKAGENTCORECONTROL_API EvaluatorLevel GetEvaluatorLevelForName(const Aws::String& name);

AWS_BEDROCKAGENTCORECONTROL_API Aws::String GetNameForEvaluatorLevel(EvaluatorLevel value);
}  // namespace EvaluatorLevelMapper
}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
