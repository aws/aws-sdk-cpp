/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-routes/model/RoadSnapTravelModeOptions.h>
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

RoadSnapTravelModeOptions::RoadSnapTravelModeOptions(JsonView jsonValue)
{
  *this = jsonValue;
}

RoadSnapTravelModeOptions& RoadSnapTravelModeOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Truck"))
  {
    m_truck = jsonValue.GetObject("Truck");
    m_truckHasBeenSet = true;
  }
  return *this;
}

JsonValue RoadSnapTravelModeOptions::Jsonize() const
{
  JsonValue payload;

  if(m_truckHasBeenSet)
  {
   payload.WithObject("Truck", m_truck.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
