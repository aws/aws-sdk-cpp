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
  enum class IsolineHazardousCargoType
  {
    NOT_SET,
    Combustible,
    Corrosive,
    Explosive,
    Flammable,
    Gas,
    HarmfulToWater,
    Organic,
    Other,
    Poison,
    PoisonousInhalation,
    Radioactive
  };

namespace IsolineHazardousCargoTypeMapper
{
AWS_GEOROUTES_API IsolineHazardousCargoType GetIsolineHazardousCargoTypeForName(const Aws::String& name);

AWS_GEOROUTES_API Aws::String GetNameForIsolineHazardousCargoType(IsolineHazardousCargoType value);
} // namespace IsolineHazardousCargoTypeMapper
} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
