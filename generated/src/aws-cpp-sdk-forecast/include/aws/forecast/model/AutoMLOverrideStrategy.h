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
  enum class AutoMLOverrideStrategy
  {
    NOT_SET,
    LatencyOptimized,
    AccuracyOptimized
  };

namespace AutoMLOverrideStrategyMapper
{
AWS_FORECASTSERVICE_API AutoMLOverrideStrategy GetAutoMLOverrideStrategyForName(const Aws::String& name);

AWS_FORECASTSERVICE_API Aws::String GetNameForAutoMLOverrideStrategy(AutoMLOverrideStrategy value);
} // namespace AutoMLOverrideStrategyMapper
} // namespace Model
} // namespace ForecastService
} // namespace Aws
