/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-routes/model/RouteVehicleArrival.h>
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

RouteVehicleArrival::RouteVehicleArrival(JsonView jsonValue)
{
  *this = jsonValue;
}

RouteVehicleArrival& RouteVehicleArrival::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Place"))
  {
    m_place = jsonValue.GetObject("Place");
    m_placeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Time"))
  {
    m_time = jsonValue.GetString("Time");
    m_timeHasBeenSet = true;
  }
  return *this;
}

JsonValue RouteVehicleArrival::Jsonize() const
{
  JsonValue payload;

  if(m_placeHasBeenSet)
  {
   payload.WithObject("Place", m_place.Jsonize());

  }

  if(m_timeHasBeenSet)
  {
   payload.WithString("Time", m_time);

  }

  return payload;
}

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
