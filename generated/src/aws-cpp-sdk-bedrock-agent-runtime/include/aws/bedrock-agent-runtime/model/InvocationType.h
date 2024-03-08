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
  enum class InvocationType
  {
    NOT_SET,
    ACTION_GROUP,
    KNOWLEDGE_BASE,
    FINISH
  };

namespace InvocationTypeMapper
{
AWS_BEDROCKAGENTRUNTIME_API InvocationType GetInvocationTypeForName(const Aws::String& name);

AWS_BEDROCKAGENTRUNTIME_API Aws::String GetNameForInvocationType(InvocationType value);
} // namespace InvocationTypeMapper
} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
