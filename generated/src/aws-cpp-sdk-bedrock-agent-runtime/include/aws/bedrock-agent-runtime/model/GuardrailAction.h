/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace BedrockAgentRuntime
{
namespace Model
{
  enum class GuardrailAction
  {
    NOT_SET,
    INTERVENED,
    NONE
  };

namespace GuardrailActionMapper
{
AWS_BEDROCKAGENTRUNTIME_API GuardrailAction GetGuardrailActionForName(const Aws::String& name);

AWS_BEDROCKAGENTRUNTIME_API Aws::String GetNameForGuardrailAction(GuardrailAction value);
} // namespace GuardrailActionMapper
} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
