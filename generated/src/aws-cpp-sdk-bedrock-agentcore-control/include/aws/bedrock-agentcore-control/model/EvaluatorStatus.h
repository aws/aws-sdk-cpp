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
enum class EvaluatorStatus { NOT_SET, ACTIVE, CREATING, CREATE_FAILED, UPDATING, UPDATE_FAILED, DELETING };

namespace EvaluatorStatusMapper {
AWS_BEDROCKAGENTCORECONTROL_API EvaluatorStatus GetEvaluatorStatusForName(const Aws::String& name);

AWS_BEDROCKAGENTCORECONTROL_API Aws::String GetNameForEvaluatorStatus(EvaluatorStatus value);
}  // namespace EvaluatorStatusMapper
}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
