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
enum class PolicyStatus { NOT_SET, CREATING, ACTIVE, UPDATING, DELETING, CREATE_FAILED, UPDATE_FAILED, DELETE_FAILED };

namespace PolicyStatusMapper {
AWS_BEDROCKAGENTCORECONTROL_API PolicyStatus GetPolicyStatusForName(const Aws::String& name);

AWS_BEDROCKAGENTCORECONTROL_API Aws::String GetNameForPolicyStatus(PolicyStatus value);
}  // namespace PolicyStatusMapper
}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
