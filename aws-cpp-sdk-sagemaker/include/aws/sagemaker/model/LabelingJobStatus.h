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
  enum class LabelingJobStatus
  {
    NOT_SET,
    Initializing,
    InProgress,
    Completed,
    Failed,
    Stopping,
    Stopped
  };

namespace LabelingJobStatusMapper
{
AWS_SAGEMAKER_API LabelingJobStatus GetLabelingJobStatusForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForLabelingJobStatus(LabelingJobStatus value);
} // namespace LabelingJobStatusMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
