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
  enum class GuardrailContentFilterStrength
  {
    NOT_SET,
    NONE,
    LOW,
    MEDIUM,
    HIGH
  };

namespace GuardrailContentFilterStrengthMapper
{
AWS_BEDROCKRUNTIME_API GuardrailContentFilterStrength GetGuardrailContentFilterStrengthForName(const Aws::String& name);

AWS_BEDROCKRUNTIME_API Aws::String GetNameForGuardrailContentFilterStrength(GuardrailContentFilterStrength value);
} // namespace GuardrailContentFilterStrengthMapper
} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
