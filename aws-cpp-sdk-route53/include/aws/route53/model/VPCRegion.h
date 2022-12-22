/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53/Route53_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Route53
{
namespace Model
{
  enum class VPCRegion
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
    eu_central_2,
    ap_east_1,
    me_south_1,
    us_gov_west_1,
    us_gov_east_1,
    us_iso_east_1,
    us_iso_west_1,
    us_isob_east_1,
    me_central_1,
    ap_southeast_1,
    ap_southeast_2,
    ap_southeast_3,
    ap_south_1,
    ap_south_2,
    ap_northeast_1,
    ap_northeast_2,
    ap_northeast_3,
    eu_north_1,
    sa_east_1,
    ca_central_1,
    cn_north_1,
    af_south_1,
    eu_south_1,
    eu_south_2
  };

namespace VPCRegionMapper
{
AWS_ROUTE53_API VPCRegion GetVPCRegionForName(const Aws::String& name);

AWS_ROUTE53_API Aws::String GetNameForVPCRegion(VPCRegion value);
} // namespace VPCRegionMapper
} // namespace Model
} // namespace Route53
} // namespace Aws
