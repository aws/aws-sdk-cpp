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
  enum class CustomControlMethod
  {
    NOT_SET,
    RETURN_CONTROL
  };

namespace CustomControlMethodMapper
{
AWS_BEDROCKAGENTRUNTIME_API CustomControlMethod GetCustomControlMethodForName(const Aws::String& name);

AWS_BEDROCKAGENTRUNTIME_API Aws::String GetNameForCustomControlMethod(CustomControlMethod value);
} // namespace CustomControlMethodMapper
} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
