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
  enum class MeasurementSystem
  {
    NOT_SET,
    Metric,
    Imperial
  };

namespace MeasurementSystemMapper
{
AWS_GEOROUTES_API MeasurementSystem GetMeasurementSystemForName(const Aws::String& name);

AWS_GEOROUTES_API Aws::String GetNameForMeasurementSystem(MeasurementSystem value);
} // namespace MeasurementSystemMapper
} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
