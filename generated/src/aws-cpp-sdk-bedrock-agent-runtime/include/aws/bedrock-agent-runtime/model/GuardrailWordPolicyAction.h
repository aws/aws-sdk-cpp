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
  enum class GuardrailWordPolicyAction
  {
    NOT_SET,
    BLOCKED
  };

namespace GuardrailWordPolicyActionMapper
{
AWS_BEDROCKAGENTRUNTIME_API GuardrailWordPolicyAction GetGuardrailWordPolicyActionForName(const Aws::String& name);

AWS_BEDROCKAGENTRUNTIME_API Aws::String GetNameForGuardrailWordPolicyAction(GuardrailWordPolicyAction value);
} // namespace GuardrailWordPolicyActionMapper
} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
