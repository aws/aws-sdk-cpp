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
enum class EnforcementMode { NOT_SET, ACTIVE, LOG_ONLY };

namespace EnforcementModeMapper {
AWS_BEDROCKAGENTCORECONTROL_API EnforcementMode GetEnforcementModeForName(const Aws::String& name);

AWS_BEDROCKAGENTCORECONTROL_API Aws::String GetNameForEnforcementMode(EnforcementMode value);
}  // namespace EnforcementModeMapper
}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
