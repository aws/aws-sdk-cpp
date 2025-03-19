/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-routes/model/RouteRampStepDetails.h>
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

RouteRampStepDetails::RouteRampStepDetails(JsonView jsonValue)
{
  *this = jsonValue;
}

RouteRampStepDetails& RouteRampStepDetails::operator =(JsonView jsonValue)
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
  if(jsonValue.ValueExists("SteeringDirection"))
  {
    m_steeringDirection = RouteSteeringDirectionMapper::GetRouteSteeringDirectionForName(jsonValue.GetString("SteeringDirection"));
    m_steeringDirectionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TurnAngle"))
  {
    m_turnAngle = jsonValue.GetDouble("TurnAngle");
    m_turnAngleHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TurnIntensity"))
  {
    m_turnIntensity = RouteTurnIntensityMapper::GetRouteTurnIntensityForName(jsonValue.GetString("TurnIntensity"));
    m_turnIntensityHasBeenSet = true;
  }
  return *this;
}

JsonValue RouteRampStepDetails::Jsonize() const
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

  if(m_steeringDirectionHasBeenSet)
  {
   payload.WithString("SteeringDirection", RouteSteeringDirectionMapper::GetNameForRouteSteeringDirection(m_steeringDirection));
  }

  if(m_turnAngleHasBeenSet)
  {
   payload.WithDouble("TurnAngle", m_turnAngle);

  }

  if(m_turnIntensityHasBeenSet)
  {
   payload.WithString("TurnIntensity", RouteTurnIntensityMapper::GetNameForRouteTurnIntensity(m_turnIntensity));
  }

  return payload;
}

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
