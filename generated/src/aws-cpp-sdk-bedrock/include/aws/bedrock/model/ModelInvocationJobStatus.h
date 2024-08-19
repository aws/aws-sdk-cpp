/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Bedrock
{
namespace Model
{
  enum class ModelInvocationJobStatus
  {
    NOT_SET,
    Submitted,
    InProgress,
    Completed,
    Failed,
    Stopping,
    Stopped,
    PartiallyCompleted,
    Expired,
    Validating,
    Scheduled
  };

namespace ModelInvocationJobStatusMapper
{
AWS_BEDROCK_API ModelInvocationJobStatus GetModelInvocationJobStatusForName(const Aws::String& name);

AWS_BEDROCK_API Aws::String GetNameForModelInvocationJobStatus(ModelInvocationJobStatus value);
} // namespace ModelInvocationJobStatusMapper
} // namespace Model
} // namespace Bedrock
} // namespace Aws
