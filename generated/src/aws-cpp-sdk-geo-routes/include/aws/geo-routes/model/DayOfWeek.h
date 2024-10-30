/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-routes/GeoRoutes_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace GeoRoutes
{
namespace Model
{
  enum class DayOfWeek
  {
    NOT_SET,
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday,
    Sunday
  };

namespace DayOfWeekMapper
{
AWS_GEOROUTES_API DayOfWeek GetDayOfWeekForName(const Aws::String& name);

AWS_GEOROUTES_API Aws::String GetNameForDayOfWeek(DayOfWeek value);
} // namespace DayOfWeekMapper
} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
