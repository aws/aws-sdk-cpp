/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-routes/model/WaypointOptimizationDriverOptions.h>
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

WaypointOptimizationDriverOptions::WaypointOptimizationDriverOptions() : 
    m_restCyclesHasBeenSet(false),
    m_restProfileHasBeenSet(false),
    m_treatServiceTimeAs(WaypointOptimizationServiceTimeTreatment::NOT_SET),
    m_treatServiceTimeAsHasBeenSet(false)
{
}

WaypointOptimizationDriverOptions::WaypointOptimizationDriverOptions(JsonView jsonValue)
  : WaypointOptimizationDriverOptions()
{
  *this = jsonValue;
}

WaypointOptimizationDriverOptions& WaypointOptimizationDriverOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RestCycles"))
  {
    m_restCycles = jsonValue.GetObject("RestCycles");

    m_restCyclesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RestProfile"))
  {
    m_restProfile = jsonValue.GetObject("RestProfile");

    m_restProfileHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TreatServiceTimeAs"))
  {
    m_treatServiceTimeAs = WaypointOptimizationServiceTimeTreatmentMapper::GetWaypointOptimizationServiceTimeTreatmentForName(jsonValue.GetString("TreatServiceTimeAs"));

    m_treatServiceTimeAsHasBeenSet = true;
  }

  return *this;
}

JsonValue WaypointOptimizationDriverOptions::Jsonize() const
{
  JsonValue payload;

  if(m_restCyclesHasBeenSet)
  {
   payload.WithObject("RestCycles", m_restCycles.Jsonize());

  }

  if(m_restProfileHasBeenSet)
  {
   payload.WithObject("RestProfile", m_restProfile.Jsonize());

  }

  if(m_treatServiceTimeAsHasBeenSet)
  {
   payload.WithString("TreatServiceTimeAs", WaypointOptimizationServiceTimeTreatmentMapper::GetNameForWaypointOptimizationServiceTimeTreatment(m_treatServiceTimeAs));
  }

  return payload;
}

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
