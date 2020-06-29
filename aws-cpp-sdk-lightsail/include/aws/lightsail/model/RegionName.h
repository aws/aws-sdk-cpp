/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Lightsail
{
namespace Model
{
  enum class RegionName
  {
    NOT_SET,
    us_east_1,
    us_east_2,
    us_west_1,
    us_west_2,
    eu_west_1,
    eu_west_2,
    eu_west_3,
    eu_central_1,
    ca_central_1,
    ap_south_1,
    ap_southeast_1,
    ap_southeast_2,
    ap_northeast_1,
    ap_northeast_2
  };

namespace RegionNameMapper
{
AWS_LIGHTSAIL_API RegionName GetRegionNameForName(const Aws::String& name);

AWS_LIGHTSAIL_API Aws::String GetNameForRegionName(RegionName value);
} // namespace RegionNameMapper
} // namespace Model
} // namespace Lightsail
} // namespace Aws
