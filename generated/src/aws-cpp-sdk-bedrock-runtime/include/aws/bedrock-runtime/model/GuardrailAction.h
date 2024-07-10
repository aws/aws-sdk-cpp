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
  enum class GuardrailAction
  {
    NOT_SET,
    NONE,
    GUARDRAIL_INTERVENED
  };

namespace GuardrailActionMapper
{
AWS_BEDROCKRUNTIME_API GuardrailAction GetGuardrailActionForName(const Aws::String& name);

AWS_BEDROCKRUNTIME_API Aws::String GetNameForGuardrailAction(GuardrailAction value);
} // namespace GuardrailActionMapper
} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
