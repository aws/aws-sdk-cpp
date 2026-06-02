/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/geo-routes/model/RouteTransitTravelStep.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace GeoRoutes {
namespace Model {

RouteTransitTravelStep::RouteTransitTravelStep(JsonView jsonValue) { *this = jsonValue; }

RouteTransitTravelStep& RouteTransitTravelStep::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Distance")) {
    m_distance = jsonValue.GetInt64("Distance");
    m_distanceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Duration")) {
    m_duration = jsonValue.GetInt64("Duration");
    m_durationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("GeometryOffset")) {
    m_geometryOffset = jsonValue.GetInteger("GeometryOffset");
    m_geometryOffsetHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Instruction")) {
    m_instruction = jsonValue.GetString("Instruction");
    m_instructionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Type")) {
    m_type = RouteTransitTravelStepTypeMapper::GetRouteTransitTravelStepTypeForName(jsonValue.GetString("Type"));
    m_typeHasBeenSet = true;
  }
  return *this;
}

JsonValue RouteTransitTravelStep::Jsonize() const {
  JsonValue payload;

  if (m_distanceHasBeenSet) {
    payload.WithInt64("Distance", m_distance);
  }

  if (m_durationHasBeenSet) {
    payload.WithInt64("Duration", m_duration);
  }

  if (m_geometryOffsetHasBeenSet) {
    payload.WithInteger("GeometryOffset", m_geometryOffset);
  }

  if (m_instructionHasBeenSet) {
    payload.WithString("Instruction", m_instruction);
  }

  if (m_typeHasBeenSet) {
    payload.WithString("Type", RouteTransitTravelStepTypeMapper::GetNameForRouteTransitTravelStepType(m_type));
  }

  return payload;
}

}  // namespace Model
}  // namespace GeoRoutes
}  // namespace Aws
