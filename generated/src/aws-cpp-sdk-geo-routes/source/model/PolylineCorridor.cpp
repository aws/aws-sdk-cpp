/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-routes/model/PolylineCorridor.h>
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

PolylineCorridor::PolylineCorridor(JsonView jsonValue)
{
  *this = jsonValue;
}

PolylineCorridor& PolylineCorridor::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Polyline"))
  {
    m_polyline = jsonValue.GetString("Polyline");
    m_polylineHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Radius"))
  {
    m_radius = jsonValue.GetInteger("Radius");
    m_radiusHasBeenSet = true;
  }
  return *this;
}

JsonValue PolylineCorridor::Jsonize() const
{
  JsonValue payload;

  if(m_polylineHasBeenSet)
  {
   payload.WithString("Polyline", m_polyline);

  }

  if(m_radiusHasBeenSet)
  {
   payload.WithInteger("Radius", m_radius);

  }

  return payload;
}

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
