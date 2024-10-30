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
  enum class SideOfStreetMatchingStrategy
  {
    NOT_SET,
    AnyStreet,
    DividedStreetOnly
  };

namespace SideOfStreetMatchingStrategyMapper
{
AWS_GEOROUTES_API SideOfStreetMatchingStrategy GetSideOfStreetMatchingStrategyForName(const Aws::String& name);

AWS_GEOROUTES_API Aws::String GetNameForSideOfStreetMatchingStrategy(SideOfStreetMatchingStrategy value);
} // namespace SideOfStreetMatchingStrategyMapper
} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
