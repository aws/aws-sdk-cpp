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
  enum class FlowExecutionStatus
  {
    NOT_SET,
    Running,
    Succeeded,
    Failed,
    TimedOut,
    Aborted
  };

namespace FlowExecutionStatusMapper
{
AWS_BEDROCKAGENTRUNTIME_API FlowExecutionStatus GetFlowExecutionStatusForName(const Aws::String& name);

AWS_BEDROCKAGENTRUNTIME_API Aws::String GetNameForFlowExecutionStatus(FlowExecutionStatus value);
} // namespace FlowExecutionStatusMapper
} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
