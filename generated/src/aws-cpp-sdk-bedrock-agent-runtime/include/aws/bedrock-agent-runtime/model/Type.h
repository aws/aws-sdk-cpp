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
  enum class Type
  {
    NOT_SET,
    ACTION_GROUP,
    KNOWLEDGE_BASE,
    FINISH,
    ASK_USER,
    REPROMPT
  };

namespace TypeMapper
{
AWS_BEDROCKAGENTRUNTIME_API Type GetTypeForName(const Aws::String& name);

AWS_BEDROCKAGENTRUNTIME_API Aws::String GetNameForType(Type value);
} // namespace TypeMapper
} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
