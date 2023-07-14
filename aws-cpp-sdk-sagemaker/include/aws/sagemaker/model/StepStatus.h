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
  enum class StepStatus
  {
    NOT_SET,
    Starting,
    Executing,
    Stopping,
    Stopped,
    Failed,
    Succeeded
  };

namespace StepStatusMapper
{
AWS_SAGEMAKER_API StepStatus GetStepStatusForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForStepStatus(StepStatus value);
} // namespace StepStatusMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
