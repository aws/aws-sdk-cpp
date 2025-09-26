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
  enum class FlowNodeIODataType
  {
    NOT_SET,
    String,
    Number,
    Boolean,
    Object,
    Array
  };

namespace FlowNodeIODataTypeMapper
{
AWS_BEDROCKAGENTRUNTIME_API FlowNodeIODataType GetFlowNodeIODataTypeForName(const Aws::String& name);

AWS_BEDROCKAGENTRUNTIME_API Aws::String GetNameForFlowNodeIODataType(FlowNodeIODataType value);
} // namespace FlowNodeIODataTypeMapper
} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
