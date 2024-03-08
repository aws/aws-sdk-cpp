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
  enum class PromptType
  {
    NOT_SET,
    PRE_PROCESSING,
    ORCHESTRATION,
    POST_PROCESSING,
    KNOWLEDGE_BASE_RESPONSE_GENERATION
  };

namespace PromptTypeMapper
{
AWS_BEDROCKAGENT_API PromptType GetPromptTypeForName(const Aws::String& name);

AWS_BEDROCKAGENT_API Aws::String GetNameForPromptType(PromptType value);
} // namespace PromptTypeMapper
} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
