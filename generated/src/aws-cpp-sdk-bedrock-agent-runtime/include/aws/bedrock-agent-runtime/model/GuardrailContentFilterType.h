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
  enum class GuardrailContentFilterType
  {
    NOT_SET,
    INSULTS,
    HATE,
    SEXUAL,
    VIOLENCE,
    MISCONDUCT,
    PROMPT_ATTACK
  };

namespace GuardrailContentFilterTypeMapper
{
AWS_BEDROCKAGENTRUNTIME_API GuardrailContentFilterType GetGuardrailContentFilterTypeForName(const Aws::String& name);

AWS_BEDROCKAGENTRUNTIME_API Aws::String GetNameForGuardrailContentFilterType(GuardrailContentFilterType value);
} // namespace GuardrailContentFilterTypeMapper
} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
