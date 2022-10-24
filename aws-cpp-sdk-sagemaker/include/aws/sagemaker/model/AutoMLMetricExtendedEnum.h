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
  enum class AutoMLMetricExtendedEnum
  {
    NOT_SET,
    Accuracy,
    MSE,
    F1,
    F1macro,
    AUC,
    RMSE,
    MAE,
    R2,
    BalancedAccuracy,
    Precision,
    PrecisionMacro,
    Recall,
    RecallMacro,
    LogLoss,
    InferenceLatency
  };

namespace AutoMLMetricExtendedEnumMapper
{
AWS_SAGEMAKER_API AutoMLMetricExtendedEnum GetAutoMLMetricExtendedEnumForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForAutoMLMetricExtendedEnum(AutoMLMetricExtendedEnum value);
} // namespace AutoMLMetricExtendedEnumMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
