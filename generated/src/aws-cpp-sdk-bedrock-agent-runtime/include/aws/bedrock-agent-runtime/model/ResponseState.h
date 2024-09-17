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
  enum class ResponseState
  {
    NOT_SET,
    FAILURE,
    REPROMPT
  };

namespace ResponseStateMapper
{
AWS_BEDROCKAGENTRUNTIME_API ResponseState GetResponseStateForName(const Aws::String& name);

AWS_BEDROCKAGENTRUNTIME_API Aws::String GetNameForResponseState(ResponseState value);
} // namespace ResponseStateMapper
} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
