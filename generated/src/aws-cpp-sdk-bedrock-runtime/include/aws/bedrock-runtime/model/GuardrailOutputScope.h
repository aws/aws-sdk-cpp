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
  enum class GuardrailOutputScope
  {
    NOT_SET,
    INTERVENTIONS,
    FULL
  };

namespace GuardrailOutputScopeMapper
{
AWS_BEDROCKRUNTIME_API GuardrailOutputScope GetGuardrailOutputScopeForName(const Aws::String& name);

AWS_BEDROCKRUNTIME_API Aws::String GetNameForGuardrailOutputScope(GuardrailOutputScope value);
} // namespace GuardrailOutputScopeMapper
} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
