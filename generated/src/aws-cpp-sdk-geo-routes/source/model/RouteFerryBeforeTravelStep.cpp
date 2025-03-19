/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-routes/model/RouteFerryBeforeTravelStep.h>
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

RouteFerryBeforeTravelStep::RouteFerryBeforeTravelStep(JsonView jsonValue)
{
  *this = jsonValue;
}

RouteFerryBeforeTravelStep& RouteFerryBeforeTravelStep::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Duration"))
  {
    m_duration = jsonValue.GetInt64("Duration");
    m_durationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Instruction"))
  {
    m_instruction = jsonValue.GetString("Instruction");
    m_instructionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Type"))
  {
    m_type = RouteFerryBeforeTravelStepTypeMapper::GetRouteFerryBeforeTravelStepTypeForName(jsonValue.GetString("Type"));
    m_typeHasBeenSet = true;
  }
  return *this;
}

JsonValue RouteFerryBeforeTravelStep::Jsonize() const
{
  JsonValue payload;

  if(m_durationHasBeenSet)
  {
   payload.WithInt64("Duration", m_duration);

  }

  if(m_instructionHasBeenSet)
  {
   payload.WithString("Instruction", m_instruction);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", RouteFerryBeforeTravelStepTypeMapper::GetNameForRouteFerryBeforeTravelStepType(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
