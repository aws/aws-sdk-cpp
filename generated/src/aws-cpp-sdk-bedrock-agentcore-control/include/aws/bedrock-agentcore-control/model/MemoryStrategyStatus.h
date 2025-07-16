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
  enum class MemoryStrategyStatus
  {
    NOT_SET,
    CREATING,
    ACTIVE,
    DELETING,
    FAILED
  };

namespace MemoryStrategyStatusMapper
{
AWS_BEDROCKAGENTCORECONTROL_API MemoryStrategyStatus GetMemoryStrategyStatusForName(const Aws::String& name);

AWS_BEDROCKAGENTCORECONTROL_API Aws::String GetNameForMemoryStrategyStatus(MemoryStrategyStatus value);
} // namespace MemoryStrategyStatusMapper
} // namespace Model
} // namespace BedrockAgentCoreControl
} // namespace Aws
