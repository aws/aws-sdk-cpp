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
  enum class TrainingJobEarlyStoppingType
  {
    NOT_SET,
    Off,
    Auto
  };

namespace TrainingJobEarlyStoppingTypeMapper
{
AWS_SAGEMAKER_API TrainingJobEarlyStoppingType GetTrainingJobEarlyStoppingTypeForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForTrainingJobEarlyStoppingType(TrainingJobEarlyStoppingType value);
} // namespace TrainingJobEarlyStoppingTypeMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
