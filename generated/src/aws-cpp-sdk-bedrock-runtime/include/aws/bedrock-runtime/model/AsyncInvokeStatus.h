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
  enum class AsyncInvokeStatus
  {
    NOT_SET,
    InProgress,
    Completed,
    Failed
  };

namespace AsyncInvokeStatusMapper
{
AWS_BEDROCKRUNTIME_API AsyncInvokeStatus GetAsyncInvokeStatusForName(const Aws::String& name);

AWS_BEDROCKRUNTIME_API Aws::String GetNameForAsyncInvokeStatus(AsyncInvokeStatus value);
} // namespace AsyncInvokeStatusMapper
} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
