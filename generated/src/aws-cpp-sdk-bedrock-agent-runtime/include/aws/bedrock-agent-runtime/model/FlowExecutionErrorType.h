﻿/**
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
  enum class FlowExecutionErrorType
  {
    NOT_SET,
    ExecutionTimedOut
  };

namespace FlowExecutionErrorTypeMapper
{
AWS_BEDROCKAGENTRUNTIME_API FlowExecutionErrorType GetFlowExecutionErrorTypeForName(const Aws::String& name);

AWS_BEDROCKAGENTRUNTIME_API Aws::String GetNameForFlowExecutionErrorType(FlowExecutionErrorType value);
} // namespace FlowExecutionErrorTypeMapper
} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
