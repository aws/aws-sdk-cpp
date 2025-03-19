/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-routes/model/RoutePedestrianTravelOnlySummary.h>
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

RoutePedestrianTravelOnlySummary::RoutePedestrianTravelOnlySummary(JsonView jsonValue)
{
  *this = jsonValue;
}

RoutePedestrianTravelOnlySummary& RoutePedestrianTravelOnlySummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Duration"))
  {
    m_duration = jsonValue.GetInt64("Duration");
    m_durationHasBeenSet = true;
  }
  return *this;
}

JsonValue RoutePedestrianTravelOnlySummary::Jsonize() const
{
  JsonValue payload;

  if(m_durationHasBeenSet)
  {
   payload.WithInt64("Duration", m_duration);

  }

  return payload;
}

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
