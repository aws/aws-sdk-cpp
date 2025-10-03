/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CleanRooms
{
namespace Model
{
  enum class SupportedS3Region
  {
    NOT_SET,
    us_west_1,
    us_west_2,
    us_east_1,
    us_east_2,
    af_south_1,
    ap_east_1,
    ap_east_2,
    ap_south_2,
    ap_southeast_1,
    ap_southeast_2,
    ap_southeast_3,
    ap_southeast_5,
    ap_southeast_4,
    ap_southeast_7,
    ap_south_1,
    ap_northeast_3,
    ap_northeast_1,
    ap_northeast_2,
    ca_central_1,
    ca_west_1,
    eu_south_1,
    eu_west_3,
    eu_south_2,
    eu_central_2,
    eu_central_1,
    eu_north_1,
    eu_west_1,
    eu_west_2,
    me_south_1,
    me_central_1,
    il_central_1,
    sa_east_1,
    mx_central_1
  };

namespace SupportedS3RegionMapper
{
AWS_CLEANROOMS_API SupportedS3Region GetSupportedS3RegionForName(const Aws::String& name);

AWS_CLEANROOMS_API Aws::String GetNameForSupportedS3Region(SupportedS3Region value);
} // namespace SupportedS3RegionMapper
} // namespace Model
} // namespace CleanRooms
} // namespace Aws
