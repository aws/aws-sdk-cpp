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
  enum class HealthCheckRegion
  {
    NOT_SET,
    us_east_1,
    us_west_1,
    us_west_2,
    eu_west_1,
    ap_southeast_1,
    ap_southeast_2,
    ap_northeast_1,
    sa_east_1
  };

namespace HealthCheckRegionMapper
{
AWS_ROUTE53_API HealthCheckRegion GetHealthCheckRegionForName(const Aws::String& name);

AWS_ROUTE53_API Aws::String GetNameForHealthCheckRegion(HealthCheckRegion value);
} // namespace HealthCheckRegionMapper
} // namespace Model
} // namespace Route53
} // namespace Aws
