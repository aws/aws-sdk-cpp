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
  enum class GuardrailSensitiveInformationPolicyAction
  {
    NOT_SET,
    ANONYMIZED,
    BLOCKED,
    NONE
  };

namespace GuardrailSensitiveInformationPolicyActionMapper
{
AWS_BEDROCKRUNTIME_API GuardrailSensitiveInformationPolicyAction GetGuardrailSensitiveInformationPolicyActionForName(const Aws::String& name);

AWS_BEDROCKRUNTIME_API Aws::String GetNameForGuardrailSensitiveInformationPolicyAction(GuardrailSensitiveInformationPolicyAction value);
} // namespace GuardrailSensitiveInformationPolicyActionMapper
} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
