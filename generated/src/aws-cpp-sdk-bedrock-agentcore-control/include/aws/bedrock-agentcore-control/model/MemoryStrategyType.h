/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace BedrockAgentCoreControl
{
namespace Model
{
  enum class MemoryStrategyType
  {
    NOT_SET,
    SEMANTIC,
    SUMMARIZATION,
    USER_PREFERENCE,
    CUSTOM
  };

namespace MemoryStrategyTypeMapper
{
AWS_BEDROCKAGENTCORECONTROL_API MemoryStrategyType GetMemoryStrategyTypeForName(const Aws::String& name);

AWS_BEDROCKAGENTCORECONTROL_API Aws::String GetNameForMemoryStrategyType(MemoryStrategyType value);
} // namespace MemoryStrategyTypeMapper
} // namespace Model
} // namespace BedrockAgentCoreControl
} // namespace Aws
