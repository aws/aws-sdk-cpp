/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-routes/model/RouteVehicleOverviewSummary.h>
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

RouteVehicleOverviewSummary::RouteVehicleOverviewSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

RouteVehicleOverviewSummary& RouteVehicleOverviewSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("BestCaseDuration"))
  {
    m_bestCaseDuration = jsonValue.GetInt64("BestCaseDuration");
    m_bestCaseDurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Distance"))
  {
    m_distance = jsonValue.GetInt64("Distance");
    m_distanceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Duration"))
  {
    m_duration = jsonValue.GetInt64("Duration");
    m_durationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TypicalDuration"))
  {
    m_typicalDuration = jsonValue.GetInt64("TypicalDuration");
    m_typicalDurationHasBeenSet = true;
  }
  return *this;
}

JsonValue RouteVehicleOverviewSummary::Jsonize() const
{
  JsonValue payload;

  if(m_bestCaseDurationHasBeenSet)
  {
   payload.WithInt64("BestCaseDuration", m_bestCaseDuration);

  }

  if(m_distanceHasBeenSet)
  {
   payload.WithInt64("Distance", m_distance);

  }

  if(m_durationHasBeenSet)
  {
   payload.WithInt64("Duration", m_duration);

  }

  if(m_typicalDurationHasBeenSet)
  {
   payload.WithInt64("TypicalDuration", m_typicalDuration);

  }

  return payload;
}

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
