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
  enum class RouteTollPassValidityPeriodType
  {
    NOT_SET,
    Annual,
    Days,
    ExtendedAnnual,
    Minutes,
    Months
  };

namespace RouteTollPassValidityPeriodTypeMapper
{
AWS_GEOROUTES_API RouteTollPassValidityPeriodType GetRouteTollPassValidityPeriodTypeForName(const Aws::String& name);

AWS_GEOROUTES_API Aws::String GetNameForRouteTollPassValidityPeriodType(RouteTollPassValidityPeriodType value);
} // namespace RouteTollPassValidityPeriodTypeMapper
} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
