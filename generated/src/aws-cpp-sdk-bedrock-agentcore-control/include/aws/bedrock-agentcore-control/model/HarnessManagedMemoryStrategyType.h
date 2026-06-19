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
enum class HarnessManagedMemoryStrategyType { NOT_SET, SEMANTIC, SUMMARIZATION, USER_PREFERENCE, EPISODIC };

namespace HarnessManagedMemoryStrategyTypeMapper {
AWS_BEDROCKAGENTCORECONTROL_API HarnessManagedMemoryStrategyType GetHarnessManagedMemoryStrategyTypeForName(const Aws::String& name);

AWS_BEDROCKAGENTCORECONTROL_API Aws::String GetNameForHarnessManagedMemoryStrategyType(HarnessManagedMemoryStrategyType value);
}  // namespace HarnessManagedMemoryStrategyTypeMapper
}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
