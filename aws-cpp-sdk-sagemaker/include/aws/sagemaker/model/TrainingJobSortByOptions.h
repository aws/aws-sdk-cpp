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
  enum class TrainingJobSortByOptions
  {
    NOT_SET,
    Name,
    CreationTime,
    Status,
    FinalObjectiveMetricValue
  };

namespace TrainingJobSortByOptionsMapper
{
AWS_SAGEMAKER_API TrainingJobSortByOptions GetTrainingJobSortByOptionsForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForTrainingJobSortByOptions(TrainingJobSortByOptions value);
} // namespace TrainingJobSortByOptionsMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
