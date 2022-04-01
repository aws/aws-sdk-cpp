/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/forecast/ForecastService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ForecastService
{
namespace Model
{
  enum class ScalingType
  {
    NOT_SET,
    Auto,
    Linear,
    Logarithmic,
    ReverseLogarithmic
  };

namespace ScalingTypeMapper
{
AWS_FORECASTSERVICE_API ScalingType GetScalingTypeForName(const Aws::String& name);

AWS_FORECASTSERVICE_API Aws::String GetNameForScalingType(ScalingType value);
} // namespace ScalingTypeMapper
} // namespace Model
} // namespace ForecastService
} // namespace Aws
