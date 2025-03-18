/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-routes/model/RouteMatrixAvoidanceArea.h>
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

RouteMatrixAvoidanceArea::RouteMatrixAvoidanceArea(JsonView jsonValue)
{
  *this = jsonValue;
}

RouteMatrixAvoidanceArea& RouteMatrixAvoidanceArea::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Geometry"))
  {
    m_geometry = jsonValue.GetObject("Geometry");
    m_geometryHasBeenSet = true;
  }
  return *this;
}

JsonValue RouteMatrixAvoidanceArea::Jsonize() const
{
  JsonValue payload;

  if(m_geometryHasBeenSet)
  {
   payload.WithObject("Geometry", m_geometry.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
