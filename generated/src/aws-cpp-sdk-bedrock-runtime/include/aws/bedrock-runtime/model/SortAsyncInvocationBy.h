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
  enum class SortAsyncInvocationBy
  {
    NOT_SET,
    SubmissionTime
  };

namespace SortAsyncInvocationByMapper
{
AWS_BEDROCKRUNTIME_API SortAsyncInvocationBy GetSortAsyncInvocationByForName(const Aws::String& name);

AWS_BEDROCKRUNTIME_API Aws::String GetNameForSortAsyncInvocationBy(SortAsyncInvocationBy value);
} // namespace SortAsyncInvocationByMapper
} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
