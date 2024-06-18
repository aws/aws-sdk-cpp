/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-runtime/BedrockRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace BedrockRuntime
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
AWS_BEDROCKRUNTIME_API GuardrailContentFilterType GetGuardrailContentFilterTypeForName(const Aws::String& name);

AWS_BEDROCKRUNTIME_API Aws::String GetNameForGuardrailContentFilterType(GuardrailContentFilterType value);
} // namespace GuardrailContentFilterTypeMapper
} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
