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
  enum class TimeSeriesGranularity
  {
    NOT_SET,
    ALL,
    SPECIFIC
  };

namespace TimeSeriesGranularityMapper
{
AWS_FORECASTSERVICE_API TimeSeriesGranularity GetTimeSeriesGranularityForName(const Aws::String& name);

AWS_FORECASTSERVICE_API Aws::String GetNameForTimeSeriesGranularity(TimeSeriesGranularity value);
} // namespace TimeSeriesGranularityMapper
} // namespace Model
} // namespace ForecastService
} // namespace Aws
