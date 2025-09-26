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
  enum class FlowControlNodeType
  {
    NOT_SET,
    Iterator,
    Loop
  };

namespace FlowControlNodeTypeMapper
{
AWS_BEDROCKAGENTRUNTIME_API FlowControlNodeType GetFlowControlNodeTypeForName(const Aws::String& name);

AWS_BEDROCKAGENTRUNTIME_API Aws::String GetNameForFlowControlNodeType(FlowControlNodeType value);
} // namespace FlowControlNodeTypeMapper
} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
