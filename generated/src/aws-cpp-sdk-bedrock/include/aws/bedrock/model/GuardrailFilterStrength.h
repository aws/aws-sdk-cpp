/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Bedrock
{
namespace Model
{
  enum class GuardrailFilterStrength
  {
    NOT_SET,
    NONE,
    LOW,
    MEDIUM,
    HIGH
  };

namespace GuardrailFilterStrengthMapper
{
AWS_BEDROCK_API GuardrailFilterStrength GetGuardrailFilterStrengthForName(const Aws::String& name);

AWS_BEDROCK_API Aws::String GetNameForGuardrailFilterStrength(GuardrailFilterStrength value);
} // namespace GuardrailFilterStrengthMapper
} // namespace Model
} // namespace Bedrock
} // namespace Aws
