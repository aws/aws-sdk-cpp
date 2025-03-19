/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-routes/model/IsolineTravelModeOptions.h>
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

IsolineTravelModeOptions::IsolineTravelModeOptions(JsonView jsonValue)
{
  *this = jsonValue;
}

IsolineTravelModeOptions& IsolineTravelModeOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Car"))
  {
    m_car = jsonValue.GetObject("Car");
    m_carHasBeenSet = true;
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

JsonValue IsolineTravelModeOptions::Jsonize() const
{
  JsonValue payload;

  if(m_carHasBeenSet)
  {
   payload.WithObject("Car", m_car.Jsonize());

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
