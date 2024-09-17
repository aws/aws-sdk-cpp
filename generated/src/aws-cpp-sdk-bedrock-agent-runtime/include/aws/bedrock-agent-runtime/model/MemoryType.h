/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace BedrockAgentRuntime
{
namespace Model
{
  enum class MemoryType
  {
    NOT_SET,
    SESSION_SUMMARY
  };

namespace MemoryTypeMapper
{
AWS_BEDROCKAGENTRUNTIME_API MemoryType GetMemoryTypeForName(const Aws::String& name);

AWS_BEDROCKAGENTRUNTIME_API Aws::String GetNameForMemoryType(MemoryType value);
} // namespace MemoryTypeMapper
} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
