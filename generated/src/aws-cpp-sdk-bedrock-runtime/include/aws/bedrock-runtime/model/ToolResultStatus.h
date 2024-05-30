/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-runtime/BedrockRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace BedrockRuntime
{
namespace Model
{
  enum class ToolResultStatus
  {
    NOT_SET,
    success,
    error
  };

namespace ToolResultStatusMapper
{
AWS_BEDROCKRUNTIME_API ToolResultStatus GetToolResultStatusForName(const Aws::String& name);

AWS_BEDROCKRUNTIME_API Aws::String GetNameForToolResultStatus(ToolResultStatus value);
} // namespace ToolResultStatusMapper
} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
