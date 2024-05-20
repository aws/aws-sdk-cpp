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
  enum class GuardrailContentPolicyAction
  {
    NOT_SET,
    BLOCKED
  };

namespace GuardrailContentPolicyActionMapper
{
AWS_BEDROCKAGENTRUNTIME_API GuardrailContentPolicyAction GetGuardrailContentPolicyActionForName(const Aws::String& name);

AWS_BEDROCKAGENTRUNTIME_API Aws::String GetNameForGuardrailContentPolicyAction(GuardrailContentPolicyAction value);
} // namespace GuardrailContentPolicyActionMapper
} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
