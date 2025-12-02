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
enum class OnlineEvaluationConfigStatus { NOT_SET, ACTIVE, CREATING, CREATE_FAILED, UPDATING, UPDATE_FAILED, DELETING };

namespace OnlineEvaluationConfigStatusMapper {
AWS_BEDROCKAGENTCORECONTROL_API OnlineEvaluationConfigStatus GetOnlineEvaluationConfigStatusForName(const Aws::String& name);

AWS_BEDROCKAGENTCORECONTROL_API Aws::String GetNameForOnlineEvaluationConfigStatus(OnlineEvaluationConfigStatus value);
}  // namespace OnlineEvaluationConfigStatusMapper
}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
