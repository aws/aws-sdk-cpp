/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-routes/model/RouteTravelModeOptions.h>
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

RouteTravelModeOptions::RouteTravelModeOptions(JsonView jsonValue)
{
  *this = jsonValue;
}

RouteTravelModeOptions& RouteTravelModeOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Car"))
  {
    m_car = jsonValue.GetObject("Car");
    m_carHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Pedestrian"))
  {
    m_pedestrian = jsonValue.GetObject("Pedestrian");
    m_pedestrianHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Scooter"))
  {
    m_scooter = jsonValue.GetObject("Scooter");
    m_scooterHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Truck"))
  {
    m_truck = jsonValue.GetObject("Truck");
    m_truckHasBeenSet = true;
  }
  return *this;
}

JsonValue RouteTravelModeOptions::Jsonize() const
{
  JsonValue payload;

  if(m_carHasBeenSet)
  {
   payload.WithObject("Car", m_car.Jsonize());

  }

  if(m_pedestrianHasBeenSet)
  {
   payload.WithObject("Pedestrian", m_pedestrian.Jsonize());

  }

  if(m_scooterHasBeenSet)
  {
   payload.WithObject("Scooter", m_scooter.Jsonize());

  }

  if(m_truckHasBeenSet)
  {
   payload.WithObject("Truck", m_truck.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
