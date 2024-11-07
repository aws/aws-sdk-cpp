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
  enum class PromptTemplateType
  {
    NOT_SET,
    TEXT,
    CHAT
  };

namespace PromptTemplateTypeMapper
{
AWS_BEDROCKAGENT_API PromptTemplateType GetPromptTemplateTypeForName(const Aws::String& name);

AWS_BEDROCKAGENT_API Aws::String GetNameForPromptTemplateType(PromptTemplateType value);
} // namespace PromptTemplateTypeMapper
} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
