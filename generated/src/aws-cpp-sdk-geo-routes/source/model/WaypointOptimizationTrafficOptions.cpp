/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-routes/model/WaypointOptimizationTrafficOptions.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GeoRoutes
{
namespace Model
{

WaypointOptimizationTrafficOptions::WaypointOptimizationTrafficOptions(JsonView jsonValue)
{
  *this = jsonValue;
}

WaypointOptimizationTrafficOptions& WaypointOptimizationTrafficOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Usage"))
  {
    m_usage = TrafficUsageMapper::GetTrafficUsageForName(jsonValue.GetString("Usage"));
    m_usageHasBeenSet = true;
  }
  return *this;
}

JsonValue WaypointOptimizationTrafficOptions::Jsonize() const
{
  JsonValue payload;

  if(m_usageHasBeenSet)
  {
   payload.WithString("Usage", TrafficUsageMapper::GetNameForTrafficUsage(m_usage));
  }

  return payload;
}

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
