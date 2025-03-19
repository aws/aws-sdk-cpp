/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-routes/model/WaypointOptimizationAvoidanceAreaGeometry.h>
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

WaypointOptimizationAvoidanceAreaGeometry::WaypointOptimizationAvoidanceAreaGeometry(JsonView jsonValue)
{
  *this = jsonValue;
}

WaypointOptimizationAvoidanceAreaGeometry& WaypointOptimizationAvoidanceAreaGeometry::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("BoundingBox"))
  {
    Aws::Utils::Array<JsonView> boundingBoxJsonList = jsonValue.GetArray("BoundingBox");
    for(unsigned boundingBoxIndex = 0; boundingBoxIndex < boundingBoxJsonList.GetLength(); ++boundingBoxIndex)
    {
      m_boundingBox.push_back(boundingBoxJsonList[boundingBoxIndex].AsDouble());
    }
    m_boundingBoxHasBeenSet = true;
  }
  return *this;
}

JsonValue WaypointOptimizationAvoidanceAreaGeometry::Jsonize() const
{
  JsonValue payload;

  if(m_boundingBoxHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> boundingBoxJsonList(m_boundingBox.size());
   for(unsigned boundingBoxIndex = 0; boundingBoxIndex < boundingBoxJsonList.GetLength(); ++boundingBoxIndex)
   {
     boundingBoxJsonList[boundingBoxIndex].AsDouble(m_boundingBox[boundingBoxIndex]);
   }
   payload.WithArray("BoundingBox", std::move(boundingBoxJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
