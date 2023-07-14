/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SageMaker
{
namespace Model
{
  enum class ExecutionStatus
  {
    NOT_SET,
    Pending,
    Completed,
    CompletedWithViolations,
    InProgress,
    Failed,
    Stopping,
    Stopped
  };

namespace ExecutionStatusMapper
{
AWS_SAGEMAKER_API ExecutionStatus GetExecutionStatusForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForExecutionStatus(ExecutionStatus value);
} // namespace ExecutionStatusMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
