/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-routes/model/RouteRoundaboutExitStepDetails.h>
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

RouteRoundaboutExitStepDetails::RouteRoundaboutExitStepDetails(JsonView jsonValue)
{
  *this = jsonValue;
}

RouteRoundaboutExitStepDetails& RouteRoundaboutExitStepDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Intersection"))
  {
    Aws::Utils::Array<JsonView> intersectionJsonList = jsonValue.GetArray("Intersection");
    for(unsigned intersectionIndex = 0; intersectionIndex < intersectionJsonList.GetLength(); ++intersectionIndex)
    {
      m_intersection.push_back(intersectionJsonList[intersectionIndex].AsObject());
    }
    m_intersectionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RelativeExit"))
  {
    m_relativeExit = jsonValue.GetInteger("RelativeExit");
    m_relativeExitHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RoundaboutAngle"))
  {
    m_roundaboutAngle = jsonValue.GetDouble("RoundaboutAngle");
    m_roundaboutAngleHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SteeringDirection"))
  {
    m_steeringDirection = RouteSteeringDirectionMapper::GetRouteSteeringDirectionForName(jsonValue.GetString("SteeringDirection"));
    m_steeringDirectionHasBeenSet = true;
  }
  return *this;
}

JsonValue RouteRoundaboutExitStepDetails::Jsonize() const
{
  JsonValue payload;

  if(m_intersectionHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> intersectionJsonList(m_intersection.size());
   for(unsigned intersectionIndex = 0; intersectionIndex < intersectionJsonList.GetLength(); ++intersectionIndex)
   {
     intersectionJsonList[intersectionIndex].AsObject(m_intersection[intersectionIndex].Jsonize());
   }
   payload.WithArray("Intersection", std::move(intersectionJsonList));

  }

  if(m_relativeExitHasBeenSet)
  {
   payload.WithInteger("RelativeExit", m_relativeExit);

  }

  if(m_roundaboutAngleHasBeenSet)
  {
   payload.WithDouble("RoundaboutAngle", m_roundaboutAngle);

  }

  if(m_steeringDirectionHasBeenSet)
  {
   payload.WithString("SteeringDirection", RouteSteeringDirectionMapper::GetNameForRouteSteeringDirection(m_steeringDirection));
  }

  return payload;
}

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
