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
  enum class ExecutionType
  {
    NOT_SET,
    LAMBDA,
    RETURN_CONTROL
  };

namespace ExecutionTypeMapper
{
AWS_BEDROCKAGENTRUNTIME_API ExecutionType GetExecutionTypeForName(const Aws::String& name);

AWS_BEDROCKAGENTRUNTIME_API Aws::String GetNameForExecutionType(ExecutionType value);
} // namespace ExecutionTypeMapper
} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
