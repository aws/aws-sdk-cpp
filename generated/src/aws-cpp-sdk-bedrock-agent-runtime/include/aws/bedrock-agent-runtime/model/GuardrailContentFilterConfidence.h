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
  enum class GuardrailContentFilterConfidence
  {
    NOT_SET,
    NONE,
    LOW,
    MEDIUM,
    HIGH
  };

namespace GuardrailContentFilterConfidenceMapper
{
AWS_BEDROCKAGENTRUNTIME_API GuardrailContentFilterConfidence GetGuardrailContentFilterConfidenceForName(const Aws::String& name);

AWS_BEDROCKAGENTRUNTIME_API Aws::String GetNameForGuardrailContentFilterConfidence(GuardrailContentFilterConfidence value);
} // namespace GuardrailContentFilterConfidenceMapper
} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
