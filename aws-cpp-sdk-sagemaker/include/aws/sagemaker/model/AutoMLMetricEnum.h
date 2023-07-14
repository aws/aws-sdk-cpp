﻿/**
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
  enum class AutoMLMetricEnum
  {
    NOT_SET,
    Accuracy,
    MSE,
    F1,
    F1macro,
    AUC
  };

namespace AutoMLMetricEnumMapper
{
AWS_SAGEMAKER_API AutoMLMetricEnum GetAutoMLMetricEnumForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForAutoMLMetricEnum(AutoMLMetricEnum value);
} // namespace AutoMLMetricEnumMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
