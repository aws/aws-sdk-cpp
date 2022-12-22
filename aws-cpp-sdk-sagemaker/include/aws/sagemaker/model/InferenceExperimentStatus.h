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
  enum class InferenceExperimentStatus
  {
    NOT_SET,
    Creating,
    Created,
    Updating,
    Running,
    Starting,
    Stopping,
    Completed,
    Cancelled
  };

namespace InferenceExperimentStatusMapper
{
AWS_SAGEMAKER_API InferenceExperimentStatus GetInferenceExperimentStatusForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForInferenceExperimentStatus(InferenceExperimentStatus value);
} // namespace InferenceExperimentStatusMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
