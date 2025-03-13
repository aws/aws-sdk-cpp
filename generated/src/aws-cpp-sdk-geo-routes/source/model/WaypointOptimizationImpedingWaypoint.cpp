/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-routes/model/WaypointOptimizationImpedingWaypoint.h>
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

WaypointOptimizationImpedingWaypoint::WaypointOptimizationImpedingWaypoint(JsonView jsonValue)
{
  *this = jsonValue;
}

WaypointOptimizationImpedingWaypoint& WaypointOptimizationImpedingWaypoint::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FailedConstraints"))
  {
    Aws::Utils::Array<JsonView> failedConstraintsJsonList = jsonValue.GetArray("FailedConstraints");
    for(unsigned failedConstraintsIndex = 0; failedConstraintsIndex < failedConstraintsJsonList.GetLength(); ++failedConstraintsIndex)
    {
      m_failedConstraints.push_back(failedConstraintsJsonList[failedConstraintsIndex].AsObject());
    }
    m_failedConstraintsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");
    m_idHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Position"))
  {
    Aws::Utils::Array<JsonView> positionJsonList = jsonValue.GetArray("Position");
    for(unsigned positionIndex = 0; positionIndex < positionJsonList.GetLength(); ++positionIndex)
    {
      m_position.push_back(positionJsonList[positionIndex].AsDouble());
    }
    m_positionHasBeenSet = true;
  }
  return *this;
}

JsonValue WaypointOptimizationImpedingWaypoint::Jsonize() const
{
  JsonValue payload;

  if(m_failedConstraintsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> failedConstraintsJsonList(m_failedConstraints.size());
   for(unsigned failedConstraintsIndex = 0; failedConstraintsIndex < failedConstraintsJsonList.GetLength(); ++failedConstraintsIndex)
   {
     failedConstraintsJsonList[failedConstraintsIndex].AsObject(m_failedConstraints[failedConstraintsIndex].Jsonize());
   }
   payload.WithArray("FailedConstraints", std::move(failedConstraintsJsonList));

  }

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_positionHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> positionJsonList(m_position.size());
   for(unsigned positionIndex = 0; positionIndex < positionJsonList.GetLength(); ++positionIndex)
   {
     positionJsonList[positionIndex].AsDouble(m_position[positionIndex]);
   }
   payload.WithArray("Position", std::move(positionJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
