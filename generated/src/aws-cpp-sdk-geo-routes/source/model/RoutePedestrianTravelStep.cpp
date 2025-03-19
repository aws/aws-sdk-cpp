/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-routes/model/RoutePedestrianTravelStep.h>
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

RoutePedestrianTravelStep::RoutePedestrianTravelStep(JsonView jsonValue)
{
  *this = jsonValue;
}

RoutePedestrianTravelStep& RoutePedestrianTravelStep::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ContinueStepDetails"))
  {
    m_continueStepDetails = jsonValue.GetObject("ContinueStepDetails");
    m_continueStepDetailsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CurrentRoad"))
  {
    m_currentRoad = jsonValue.GetObject("CurrentRoad");
    m_currentRoadHasBeenSet = true;
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
  if(jsonValue.ValueExists("ExitNumber"))
  {
    Aws::Utils::Array<JsonView> exitNumberJsonList = jsonValue.GetArray("ExitNumber");
    for(unsigned exitNumberIndex = 0; exitNumberIndex < exitNumberJsonList.GetLength(); ++exitNumberIndex)
    {
      m_exitNumber.push_back(exitNumberJsonList[exitNumberIndex].AsObject());
    }
    m_exitNumberHasBeenSet = true;
  }
  if(jsonValue.ValueExists("GeometryOffset"))
  {
    m_geometryOffset = jsonValue.GetInteger("GeometryOffset");
    m_geometryOffsetHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Instruction"))
  {
    m_instruction = jsonValue.GetString("Instruction");
    m_instructionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("KeepStepDetails"))
  {
    m_keepStepDetails = jsonValue.GetObject("KeepStepDetails");
    m_keepStepDetailsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("NextRoad"))
  {
    m_nextRoad = jsonValue.GetObject("NextRoad");
    m_nextRoadHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RoundaboutEnterStepDetails"))
  {
    m_roundaboutEnterStepDetails = jsonValue.GetObject("RoundaboutEnterStepDetails");
    m_roundaboutEnterStepDetailsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RoundaboutExitStepDetails"))
  {
    m_roundaboutExitStepDetails = jsonValue.GetObject("RoundaboutExitStepDetails");
    m_roundaboutExitStepDetailsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RoundaboutPassStepDetails"))
  {
    m_roundaboutPassStepDetails = jsonValue.GetObject("RoundaboutPassStepDetails");
    m_roundaboutPassStepDetailsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Signpost"))
  {
    m_signpost = jsonValue.GetObject("Signpost");
    m_signpostHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TurnStepDetails"))
  {
    m_turnStepDetails = jsonValue.GetObject("TurnStepDetails");
    m_turnStepDetailsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Type"))
  {
    m_type = RoutePedestrianTravelStepTypeMapper::GetRoutePedestrianTravelStepTypeForName(jsonValue.GetString("Type"));
    m_typeHasBeenSet = true;
  }
  return *this;
}

JsonValue RoutePedestrianTravelStep::Jsonize() const
{
  JsonValue payload;

  if(m_continueStepDetailsHasBeenSet)
  {
   payload.WithObject("ContinueStepDetails", m_continueStepDetails.Jsonize());

  }

  if(m_currentRoadHasBeenSet)
  {
   payload.WithObject("CurrentRoad", m_currentRoad.Jsonize());

  }

  if(m_distanceHasBeenSet)
  {
   payload.WithInt64("Distance", m_distance);

  }

  if(m_durationHasBeenSet)
  {
   payload.WithInt64("Duration", m_duration);

  }

  if(m_exitNumberHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> exitNumberJsonList(m_exitNumber.size());
   for(unsigned exitNumberIndex = 0; exitNumberIndex < exitNumberJsonList.GetLength(); ++exitNumberIndex)
   {
     exitNumberJsonList[exitNumberIndex].AsObject(m_exitNumber[exitNumberIndex].Jsonize());
   }
   payload.WithArray("ExitNumber", std::move(exitNumberJsonList));

  }

  if(m_geometryOffsetHasBeenSet)
  {
   payload.WithInteger("GeometryOffset", m_geometryOffset);

  }

  if(m_instructionHasBeenSet)
  {
   payload.WithString("Instruction", m_instruction);

  }

  if(m_keepStepDetailsHasBeenSet)
  {
   payload.WithObject("KeepStepDetails", m_keepStepDetails.Jsonize());

  }

  if(m_nextRoadHasBeenSet)
  {
   payload.WithObject("NextRoad", m_nextRoad.Jsonize());

  }

  if(m_roundaboutEnterStepDetailsHasBeenSet)
  {
   payload.WithObject("RoundaboutEnterStepDetails", m_roundaboutEnterStepDetails.Jsonize());

  }

  if(m_roundaboutExitStepDetailsHasBeenSet)
  {
   payload.WithObject("RoundaboutExitStepDetails", m_roundaboutExitStepDetails.Jsonize());

  }

  if(m_roundaboutPassStepDetailsHasBeenSet)
  {
   payload.WithObject("RoundaboutPassStepDetails", m_roundaboutPassStepDetails.Jsonize());

  }

  if(m_signpostHasBeenSet)
  {
   payload.WithObject("Signpost", m_signpost.Jsonize());

  }

  if(m_turnStepDetailsHasBeenSet)
  {
   payload.WithObject("TurnStepDetails", m_turnStepDetails.Jsonize());

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", RoutePedestrianTravelStepTypeMapper::GetNameForRoutePedestrianTravelStepType(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
