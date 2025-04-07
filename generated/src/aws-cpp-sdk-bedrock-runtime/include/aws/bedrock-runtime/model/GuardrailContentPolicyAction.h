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
  enum class GuardrailContentPolicyAction
  {
    NOT_SET,
    BLOCKED,
    NONE
  };

namespace GuardrailContentPolicyActionMapper
{
AWS_BEDROCKRUNTIME_API GuardrailContentPolicyAction GetGuardrailContentPolicyActionForName(const Aws::String& name);

AWS_BEDROCKRUNTIME_API Aws::String GetNameForGuardrailContentPolicyAction(GuardrailContentPolicyAction value);
} // namespace GuardrailContentPolicyActionMapper
} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
