/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace BedrockAgentCore {
namespace Model {
enum class HarnessHookDecision { NOT_SET, allow, deny };

namespace HarnessHookDecisionMapper {
AWS_BEDROCKAGENTCORE_API HarnessHookDecision GetHarnessHookDecisionForName(const Aws::String& name);

AWS_BEDROCKAGENTCORE_API Aws::String GetNameForHarnessHookDecision(HarnessHookDecision value);
}  // namespace HarnessHookDecisionMapper
}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
