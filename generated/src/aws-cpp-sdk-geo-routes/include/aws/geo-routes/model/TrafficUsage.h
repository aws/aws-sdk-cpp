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
  enum class TrafficUsage
  {
    NOT_SET,
    IgnoreTrafficData,
    UseTrafficData
  };

namespace TrafficUsageMapper
{
AWS_GEOROUTES_API TrafficUsage GetTrafficUsageForName(const Aws::String& name);

AWS_GEOROUTES_API Aws::String GetNameForTrafficUsage(TrafficUsage value);
} // namespace TrafficUsageMapper
} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
