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
  enum class MemoryStatus
  {
    NOT_SET,
    CREATING,
    ACTIVE,
    FAILED,
    DELETING
  };

namespace MemoryStatusMapper
{
AWS_BEDROCKAGENTCORECONTROL_API MemoryStatus GetMemoryStatusForName(const Aws::String& name);

AWS_BEDROCKAGENTCORECONTROL_API Aws::String GetNameForMemoryStatus(MemoryStatus value);
} // namespace MemoryStatusMapper
} // namespace Model
} // namespace BedrockAgentCoreControl
} // namespace Aws
