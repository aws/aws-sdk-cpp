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
  enum class InferenceExperimentStopDesiredState
  {
    NOT_SET,
    Completed,
    Cancelled
  };

namespace InferenceExperimentStopDesiredStateMapper
{
AWS_SAGEMAKER_API InferenceExperimentStopDesiredState GetInferenceExperimentStopDesiredStateForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForInferenceExperimentStopDesiredState(InferenceExperimentStopDesiredState value);
} // namespace InferenceExperimentStopDesiredStateMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
