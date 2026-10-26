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
enum class MatchOperator { NOT_SET, StringEquals, StringLike };

namespace MatchOperatorMapper {
AWS_BEDROCKAGENTCORECONTROL_API MatchOperator GetMatchOperatorForName(const Aws::String& name);

AWS_BEDROCKAGENTCORECONTROL_API Aws::String GetNameForMatchOperator(MatchOperator value);
}  // namespace MatchOperatorMapper
}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
