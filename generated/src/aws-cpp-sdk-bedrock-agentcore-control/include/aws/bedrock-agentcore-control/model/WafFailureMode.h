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
enum class WafFailureMode { NOT_SET, FAIL_CLOSE, FAIL_OPEN };

namespace WafFailureModeMapper {
AWS_BEDROCKAGENTCORECONTROL_API WafFailureMode GetWafFailureModeForName(const Aws::String& name);

AWS_BEDROCKAGENTCORECONTROL_API Aws::String GetNameForWafFailureMode(WafFailureMode value);
}  // namespace WafFailureModeMapper
}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
