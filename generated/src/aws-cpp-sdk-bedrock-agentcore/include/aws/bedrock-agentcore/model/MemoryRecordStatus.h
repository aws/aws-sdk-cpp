/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace BedrockAgentCore
{
namespace Model
{
  enum class MemoryRecordStatus
  {
    NOT_SET,
    SUCCEEDED,
    FAILED
  };

namespace MemoryRecordStatusMapper
{
AWS_BEDROCKAGENTCORE_API MemoryRecordStatus GetMemoryRecordStatusForName(const Aws::String& name);

AWS_BEDROCKAGENTCORE_API Aws::String GetNameForMemoryRecordStatus(MemoryRecordStatus value);
} // namespace MemoryRecordStatusMapper
} // namespace Model
} // namespace BedrockAgentCore
} // namespace Aws
