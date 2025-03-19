/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-routes/model/RouteMatrixBoundary.h>
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

RouteMatrixBoundary::RouteMatrixBoundary(JsonView jsonValue)
{
  *this = jsonValue;
}

RouteMatrixBoundary& RouteMatrixBoundary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Geometry"))
  {
    m_geometry = jsonValue.GetObject("Geometry");
    m_geometryHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Unbounded"))
  {
    m_unbounded = jsonValue.GetBool("Unbounded");
    m_unboundedHasBeenSet = true;
  }
  return *this;
}

JsonValue RouteMatrixBoundary::Jsonize() const
{
  JsonValue payload;

  if(m_geometryHasBeenSet)
  {
   payload.WithObject("Geometry", m_geometry.Jsonize());

  }

  if(m_unboundedHasBeenSet)
  {
   payload.WithBool("Unbounded", m_unbounded);

  }

  return payload;
}

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
