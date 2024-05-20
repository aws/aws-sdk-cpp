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
  enum class GuardrailManagedWordType
  {
    NOT_SET,
    PROFANITY
  };

namespace GuardrailManagedWordTypeMapper
{
AWS_BEDROCKAGENTRUNTIME_API GuardrailManagedWordType GetGuardrailManagedWordTypeForName(const Aws::String& name);

AWS_BEDROCKAGENTRUNTIME_API Aws::String GetNameForGuardrailManagedWordType(GuardrailManagedWordType value);
} // namespace GuardrailManagedWordTypeMapper
} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
