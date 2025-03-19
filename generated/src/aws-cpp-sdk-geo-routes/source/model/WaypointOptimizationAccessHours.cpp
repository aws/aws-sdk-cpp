/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-routes/model/WaypointOptimizationAccessHours.h>
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

WaypointOptimizationAccessHours::WaypointOptimizationAccessHours(JsonView jsonValue)
{
  *this = jsonValue;
}

WaypointOptimizationAccessHours& WaypointOptimizationAccessHours::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("From"))
  {
    m_from = jsonValue.GetObject("From");
    m_fromHasBeenSet = true;
  }
  if(jsonValue.ValueExists("To"))
  {
    m_to = jsonValue.GetObject("To");
    m_toHasBeenSet = true;
  }
  return *this;
}

JsonValue WaypointOptimizationAccessHours::Jsonize() const
{
  JsonValue payload;

  if(m_fromHasBeenSet)
  {
   payload.WithObject("From", m_from.Jsonize());

  }

  if(m_toHasBeenSet)
  {
   payload.WithObject("To", m_to.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
