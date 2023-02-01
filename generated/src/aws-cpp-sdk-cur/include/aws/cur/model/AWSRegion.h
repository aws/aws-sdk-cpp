/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cur/CostandUsageReportService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CostandUsageReportService
{
namespace Model
{
  enum class AWSRegion
  {
    NOT_SET,
    af_south_1,
    ap_east_1,
    ap_south_1,
    ap_southeast_1,
    ap_southeast_2,
    ap_southeast_3,
    ap_northeast_1,
    ap_northeast_2,
    ap_northeast_3,
    ca_central_1,
    eu_central_1,
    eu_west_1,
    eu_west_2,
    eu_west_3,
    eu_north_1,
    eu_south_1,
    eu_south_2,
    me_central_1,
    me_south_1,
    sa_east_1,
    us_east_1,
    us_east_2,
    us_west_1,
    us_west_2,
    cn_north_1,
    cn_northwest_1
  };

namespace AWSRegionMapper
{
AWS_COSTANDUSAGEREPORTSERVICE_API AWSRegion GetAWSRegionForName(const Aws::String& name);

AWS_COSTANDUSAGEREPORTSERVICE_API Aws::String GetNameForAWSRegion(AWSRegion value);
} // namespace AWSRegionMapper
} // namespace Model
} // namespace CostandUsageReportService
} // namespace Aws
