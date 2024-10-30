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
  enum class IsolineZoneCategory
  {
    NOT_SET,
    CongestionPricing,
    Environmental,
    Vignette
  };

namespace IsolineZoneCategoryMapper
{
AWS_GEOROUTES_API IsolineZoneCategory GetIsolineZoneCategoryForName(const Aws::String& name);

AWS_GEOROUTES_API Aws::String GetNameForIsolineZoneCategory(IsolineZoneCategory value);
} // namespace IsolineZoneCategoryMapper
} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
