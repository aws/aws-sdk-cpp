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
  enum class ConfirmationState
  {
    NOT_SET,
    CONFIRM,
    DENY
  };

namespace ConfirmationStateMapper
{
AWS_BEDROCKAGENTRUNTIME_API ConfirmationState GetConfirmationStateForName(const Aws::String& name);

AWS_BEDROCKAGENTRUNTIME_API Aws::String GetNameForConfirmationState(ConfirmationState value);
} // namespace ConfirmationStateMapper
} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
