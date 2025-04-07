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
  enum class GuardrailWordPolicyAction
  {
    NOT_SET,
    BLOCKED,
    NONE
  };

namespace GuardrailWordPolicyActionMapper
{
AWS_BEDROCKRUNTIME_API GuardrailWordPolicyAction GetGuardrailWordPolicyActionForName(const Aws::String& name);

AWS_BEDROCKRUNTIME_API Aws::String GetNameForGuardrailWordPolicyAction(GuardrailWordPolicyAction value);
} // namespace GuardrailWordPolicyActionMapper
} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
