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
enum class PolicyGenerationStatus { NOT_SET, GENERATING, GENERATED, GENERATE_FAILED, DELETE_FAILED };

namespace PolicyGenerationStatusMapper {
AWS_BEDROCKAGENTCORECONTROL_API PolicyGenerationStatus GetPolicyGenerationStatusForName(const Aws::String& name);

AWS_BEDROCKAGENTCORECONTROL_API Aws::String GetNameForPolicyGenerationStatus(PolicyGenerationStatus value);
}  // namespace PolicyGenerationStatusMapper
}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
