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
enum class PolicyValidationMode { NOT_SET, FAIL_ON_ANY_FINDINGS, IGNORE_ALL_FINDINGS };

namespace PolicyValidationModeMapper {
AWS_BEDROCKAGENTCORECONTROL_API PolicyValidationMode GetPolicyValidationModeForName(const Aws::String& name);

AWS_BEDROCKAGENTCORECONTROL_API Aws::String GetNameForPolicyValidationMode(PolicyValidationMode value);
}  // namespace PolicyValidationModeMapper
}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
