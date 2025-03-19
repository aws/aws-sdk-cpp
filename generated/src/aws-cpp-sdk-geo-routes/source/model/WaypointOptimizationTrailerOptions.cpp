/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-routes/model/WaypointOptimizationTrailerOptions.h>
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

WaypointOptimizationTrailerOptions::WaypointOptimizationTrailerOptions(JsonView jsonValue)
{
  *this = jsonValue;
}

WaypointOptimizationTrailerOptions& WaypointOptimizationTrailerOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TrailerCount"))
  {
    m_trailerCount = jsonValue.GetInteger("TrailerCount");
    m_trailerCountHasBeenSet = true;
  }
  return *this;
}

JsonValue WaypointOptimizationTrailerOptions::Jsonize() const
{
  JsonValue payload;

  if(m_trailerCountHasBeenSet)
  {
   payload.WithInteger("TrailerCount", m_trailerCount);

  }

  return payload;
}

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
