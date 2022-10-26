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
  enum class HyperParameterTuningJobStrategyType
  {
    NOT_SET,
    Bayesian,
    Random,
    Hyperband,
    Grid
  };

namespace HyperParameterTuningJobStrategyTypeMapper
{
AWS_SAGEMAKER_API HyperParameterTuningJobStrategyType GetHyperParameterTuningJobStrategyTypeForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForHyperParameterTuningJobStrategyType(HyperParameterTuningJobStrategyType value);
} // namespace HyperParameterTuningJobStrategyTypeMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
