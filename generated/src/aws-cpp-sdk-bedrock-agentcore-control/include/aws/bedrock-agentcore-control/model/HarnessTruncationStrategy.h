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
enum class HarnessTruncationStrategy { NOT_SET, sliding_window, summarization, none };

namespace HarnessTruncationStrategyMapper {
AWS_BEDROCKAGENTCORECONTROL_API HarnessTruncationStrategy GetHarnessTruncationStrategyForName(const Aws::String& name);

AWS_BEDROCKAGENTCORECONTROL_API Aws::String GetNameForHarnessTruncationStrategy(HarnessTruncationStrategy value);
}  // namespace HarnessTruncationStrategyMapper
}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
