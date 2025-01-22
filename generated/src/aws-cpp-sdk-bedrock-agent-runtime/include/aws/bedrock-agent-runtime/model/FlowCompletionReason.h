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
  enum class FlowCompletionReason
  {
    NOT_SET,
    SUCCESS,
    INPUT_REQUIRED
  };

namespace FlowCompletionReasonMapper
{
AWS_BEDROCKAGENTRUNTIME_API FlowCompletionReason GetFlowCompletionReasonForName(const Aws::String& name);

AWS_BEDROCKAGENTRUNTIME_API Aws::String GetNameForFlowCompletionReason(FlowCompletionReason value);
} // namespace FlowCompletionReasonMapper
} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
