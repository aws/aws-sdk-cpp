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
  enum class Month
  {
    NOT_SET,
    JANUARY,
    FEBRUARY,
    MARCH,
    APRIL,
    MAY,
    JUNE,
    JULY,
    AUGUST,
    SEPTEMBER,
    OCTOBER,
    NOVEMBER,
    DECEMBER
  };

namespace MonthMapper
{
AWS_FORECASTSERVICE_API Month GetMonthForName(const Aws::String& name);

AWS_FORECASTSERVICE_API Aws::String GetNameForMonth(Month value);
} // namespace MonthMapper
} // namespace Model
} // namespace ForecastService
} // namespace Aws
