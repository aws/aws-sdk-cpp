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
  enum class PromptState
  {
    NOT_SET,
    ENABLED,
    DISABLED
  };

namespace PromptStateMapper
{
AWS_BEDROCKAGENTRUNTIME_API PromptState GetPromptStateForName(const Aws::String& name);

AWS_BEDROCKAGENTRUNTIME_API Aws::String GetNameForPromptState(PromptState value);
} // namespace PromptStateMapper
} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
