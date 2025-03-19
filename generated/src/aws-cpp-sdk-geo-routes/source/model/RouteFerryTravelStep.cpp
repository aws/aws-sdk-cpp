/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-routes/model/RouteFerryTravelStep.h>
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

RouteFerryTravelStep::RouteFerryTravelStep(JsonView jsonValue)
{
  *this = jsonValue;
}

RouteFerryTravelStep& RouteFerryTravelStep::operator =(JsonView jsonValue)
{
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
  if(jsonValue.ValueExists("Type"))
  {
    m_type = RouteFerryTravelStepTypeMapper::GetRouteFerryTravelStepTypeForName(jsonValue.GetString("Type"));
    m_typeHasBeenSet = true;
  }
  return *this;
}

JsonValue RouteFerryTravelStep::Jsonize() const
{
  JsonValue payload;

  if(m_distanceHasBeenSet)
  {
   payload.WithInt64("Distance", m_distance);

  }

  if(m_durationHasBeenSet)
  {
   payload.WithInt64("Duration", m_duration);

  }

  if(m_geometryOffsetHasBeenSet)
  {
   payload.WithInteger("GeometryOffset", m_geometryOffset);

  }

  if(m_instructionHasBeenSet)
  {
   payload.WithString("Instruction", m_instruction);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", RouteFerryTravelStepTypeMapper::GetNameForRouteFerryTravelStepType(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
