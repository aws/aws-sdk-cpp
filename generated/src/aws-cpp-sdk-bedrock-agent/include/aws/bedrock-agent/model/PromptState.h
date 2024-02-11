/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace BedrockAgent
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
AWS_BEDROCKAGENT_API PromptState GetPromptStateForName(const Aws::String& name);

AWS_BEDROCKAGENT_API Aws::String GetNameForPromptState(PromptState value);
} // namespace PromptStateMapper
} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
