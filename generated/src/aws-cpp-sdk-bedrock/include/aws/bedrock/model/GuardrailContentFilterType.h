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
  enum class GuardrailContentFilterType
  {
    NOT_SET,
    SEXUAL,
    VIOLENCE,
    HATE,
    INSULTS,
    MISCONDUCT,
    PROMPT_ATTACK
  };

namespace GuardrailContentFilterTypeMapper
{
AWS_BEDROCK_API GuardrailContentFilterType GetGuardrailContentFilterTypeForName(const Aws::String& name);

AWS_BEDROCK_API Aws::String GetNameForGuardrailContentFilterType(GuardrailContentFilterType value);
} // namespace GuardrailContentFilterTypeMapper
} // namespace Model
} // namespace Bedrock
} // namespace Aws
