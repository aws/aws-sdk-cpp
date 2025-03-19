/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-routes/model/WaypointOptimizationFailedConstraint.h>
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

WaypointOptimizationFailedConstraint::WaypointOptimizationFailedConstraint(JsonView jsonValue)
{
  *this = jsonValue;
}

WaypointOptimizationFailedConstraint& WaypointOptimizationFailedConstraint::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Constraint"))
  {
    m_constraint = WaypointOptimizationConstraintMapper::GetWaypointOptimizationConstraintForName(jsonValue.GetString("Constraint"));
    m_constraintHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Reason"))
  {
    m_reason = jsonValue.GetString("Reason");
    m_reasonHasBeenSet = true;
  }
  return *this;
}

JsonValue WaypointOptimizationFailedConstraint::Jsonize() const
{
  JsonValue payload;

  if(m_constraintHasBeenSet)
  {
   payload.WithString("Constraint", WaypointOptimizationConstraintMapper::GetNameForWaypointOptimizationConstraint(m_constraint));
  }

  if(m_reasonHasBeenSet)
  {
   payload.WithString("Reason", m_reason);

  }

  return payload;
}

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
