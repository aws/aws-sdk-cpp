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
  enum class PromptType
  {
    NOT_SET,
    PRE_PROCESSING,
    ORCHESTRATION,
    KNOWLEDGE_BASE_RESPONSE_GENERATION,
    POST_PROCESSING
  };

namespace PromptTypeMapper
{
AWS_BEDROCKAGENTRUNTIME_API PromptType GetPromptTypeForName(const Aws::String& name);

AWS_BEDROCKAGENTRUNTIME_API Aws::String GetNameForPromptType(PromptType value);
} // namespace PromptTypeMapper
} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
