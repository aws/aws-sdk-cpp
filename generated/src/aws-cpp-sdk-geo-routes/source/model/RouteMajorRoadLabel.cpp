/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-routes/model/RouteMajorRoadLabel.h>
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

RouteMajorRoadLabel::RouteMajorRoadLabel(JsonView jsonValue)
{
  *this = jsonValue;
}

RouteMajorRoadLabel& RouteMajorRoadLabel::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RoadName"))
  {
    m_roadName = jsonValue.GetObject("RoadName");
    m_roadNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RouteNumber"))
  {
    m_routeNumber = jsonValue.GetObject("RouteNumber");
    m_routeNumberHasBeenSet = true;
  }
  return *this;
}

JsonValue RouteMajorRoadLabel::Jsonize() const
{
  JsonValue payload;

  if(m_roadNameHasBeenSet)
  {
   payload.WithObject("RoadName", m_roadName.Jsonize());

  }

  if(m_routeNumberHasBeenSet)
  {
   payload.WithObject("RouteNumber", m_routeNumber.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
