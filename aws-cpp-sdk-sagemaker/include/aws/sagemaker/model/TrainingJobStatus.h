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
  enum class TrainingJobStatus
  {
    NOT_SET,
    InProgress,
    Completed,
    Failed,
    Stopping,
    Stopped
  };

namespace TrainingJobStatusMapper
{
AWS_SAGEMAKER_API TrainingJobStatus GetTrainingJobStatusForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForTrainingJobStatus(TrainingJobStatus value);
} // namespace TrainingJobStatusMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
