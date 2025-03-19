/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-routes/model/IsolineConnection.h>
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

IsolineConnection::IsolineConnection(JsonView jsonValue)
{
  *this = jsonValue;
}

IsolineConnection& IsolineConnection::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FromPolygonIndex"))
  {
    m_fromPolygonIndex = jsonValue.GetInteger("FromPolygonIndex");
    m_fromPolygonIndexHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Geometry"))
  {
    m_geometry = jsonValue.GetObject("Geometry");
    m_geometryHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ToPolygonIndex"))
  {
    m_toPolygonIndex = jsonValue.GetInteger("ToPolygonIndex");
    m_toPolygonIndexHasBeenSet = true;
  }
  return *this;
}

JsonValue IsolineConnection::Jsonize() const
{
  JsonValue payload;

  if(m_fromPolygonIndexHasBeenSet)
  {
   payload.WithInteger("FromPolygonIndex", m_fromPolygonIndex);

  }

  if(m_geometryHasBeenSet)
  {
   payload.WithObject("Geometry", m_geometry.Jsonize());

  }

  if(m_toPolygonIndexHasBeenSet)
  {
   payload.WithInteger("ToPolygonIndex", m_toPolygonIndex);

  }

  return payload;
}

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
