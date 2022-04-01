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
  enum class HyperParameterTuningJobWarmStartType
  {
    NOT_SET,
    IdenticalDataAndAlgorithm,
    TransferLearning
  };

namespace HyperParameterTuningJobWarmStartTypeMapper
{
AWS_SAGEMAKER_API HyperParameterTuningJobWarmStartType GetHyperParameterTuningJobWarmStartTypeForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForHyperParameterTuningJobWarmStartType(HyperParameterTuningJobWarmStartType value);
} // namespace HyperParameterTuningJobWarmStartTypeMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
