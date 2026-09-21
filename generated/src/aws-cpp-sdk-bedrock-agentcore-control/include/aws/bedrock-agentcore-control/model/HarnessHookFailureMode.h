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
enum class HarnessHookFailureMode { NOT_SET, allow, deny };

namespace HarnessHookFailureModeMapper {
AWS_BEDROCKAGENTCORECONTROL_API HarnessHookFailureMode GetHarnessHookFailureModeForName(const Aws::String& name);

AWS_BEDROCKAGENTCORECONTROL_API Aws::String GetNameForHarnessHookFailureMode(HarnessHookFailureMode value);
}  // namespace HarnessHookFailureModeMapper
}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
