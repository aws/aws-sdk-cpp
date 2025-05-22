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
  enum class FlowExecutionEventType
  {
    NOT_SET,
    Node,
    Flow
  };

namespace FlowExecutionEventTypeMapper
{
AWS_BEDROCKAGENTRUNTIME_API FlowExecutionEventType GetFlowExecutionEventTypeForName(const Aws::String& name);

AWS_BEDROCKAGENTRUNTIME_API Aws::String GetNameForFlowExecutionEventType(FlowExecutionEventType value);
} // namespace FlowExecutionEventTypeMapper
} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
