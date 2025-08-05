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
  enum class GuardrailAutomatedReasoningLogicWarningType
  {
    NOT_SET,
    ALWAYS_FALSE,
    ALWAYS_TRUE
  };

namespace GuardrailAutomatedReasoningLogicWarningTypeMapper
{
AWS_BEDROCKRUNTIME_API GuardrailAutomatedReasoningLogicWarningType GetGuardrailAutomatedReasoningLogicWarningTypeForName(const Aws::String& name);

AWS_BEDROCKRUNTIME_API Aws::String GetNameForGuardrailAutomatedReasoningLogicWarningType(GuardrailAutomatedReasoningLogicWarningType value);
} // namespace GuardrailAutomatedReasoningLogicWarningTypeMapper
} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
