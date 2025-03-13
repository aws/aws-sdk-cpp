/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-routes/model/RouteFerrySpan.h>
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

RouteFerrySpan::RouteFerrySpan(JsonView jsonValue)
{
  *this = jsonValue;
}

RouteFerrySpan& RouteFerrySpan::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Country"))
  {
    m_country = jsonValue.GetString("Country");
    m_countryHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Distance"))
  {
    m_distance = jsonValue.GetInt64("Distance");
    m_distanceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Duration"))
  {
    m_duration = jsonValue.GetInt64("Duration");
    m_durationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("GeometryOffset"))
  {
    m_geometryOffset = jsonValue.GetInteger("GeometryOffset");
    m_geometryOffsetHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Names"))
  {
    Aws::Utils::Array<JsonView> namesJsonList = jsonValue.GetArray("Names");
    for(unsigned namesIndex = 0; namesIndex < namesJsonList.GetLength(); ++namesIndex)
    {
      m_names.push_back(namesJsonList[namesIndex].AsObject());
    }
    m_namesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Region"))
  {
    m_region = jsonValue.GetString("Region");
    m_regionHasBeenSet = true;
  }
  return *this;
}

JsonValue RouteFerrySpan::Jsonize() const
{
  JsonValue payload;

  if(m_countryHasBeenSet)
  {
   payload.WithString("Country", m_country);

  }

  if(m_distanceHasBeenSet)
  {
   payload.WithInt64("Distance", m_distance);

  }

  if(m_durationHasBeenSet)
  {
   payload.WithInt64("Duration", m_duration);

  }

  if(m_geometryOffsetHasBeenSet)
  {
   payload.WithInteger("GeometryOffset", m_geometryOffset);

  }

  if(m_namesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> namesJsonList(m_names.size());
   for(unsigned namesIndex = 0; namesIndex < namesJsonList.GetLength(); ++namesIndex)
   {
     namesJsonList[namesIndex].AsObject(m_names[namesIndex].Jsonize());
   }
   payload.WithArray("Names", std::move(namesJsonList));

  }

  if(m_regionHasBeenSet)
  {
   payload.WithString("Region", m_region);

  }

  return payload;
}

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
