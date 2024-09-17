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
  enum class ActionInvocationType
  {
    NOT_SET,
    RESULT,
    USER_CONFIRMATION,
    USER_CONFIRMATION_AND_RESULT
  };

namespace ActionInvocationTypeMapper
{
AWS_BEDROCKAGENTRUNTIME_API ActionInvocationType GetActionInvocationTypeForName(const Aws::String& name);

AWS_BEDROCKAGENTRUNTIME_API Aws::String GetNameForActionInvocationType(ActionInvocationType value);
} // namespace ActionInvocationTypeMapper
} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
