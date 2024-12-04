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
  enum class InputQueryType
  {
    NOT_SET,
    TEXT
  };

namespace InputQueryTypeMapper
{
AWS_BEDROCKAGENTRUNTIME_API InputQueryType GetInputQueryTypeForName(const Aws::String& name);

AWS_BEDROCKAGENTRUNTIME_API Aws::String GetNameForInputQueryType(InputQueryType value);
} // namespace InputQueryTypeMapper
} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
