/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-places/model/FilterCircle.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GeoPlaces
{
namespace Model
{

FilterCircle::FilterCircle(JsonView jsonValue)
{
  *this = jsonValue;
}

FilterCircle& FilterCircle::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Center"))
  {
    Aws::Utils::Array<JsonView> centerJsonList = jsonValue.GetArray("Center");
    for(unsigned centerIndex = 0; centerIndex < centerJsonList.GetLength(); ++centerIndex)
    {
      m_center.push_back(centerJsonList[centerIndex].AsDouble());
    }
    m_centerHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Radius"))
  {
    m_radius = jsonValue.GetInt64("Radius");
    m_radiusHasBeenSet = true;
  }
  return *this;
}

JsonValue FilterCircle::Jsonize() const
{
  JsonValue payload;

  if(m_centerHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> centerJsonList(m_center.size());
   for(unsigned centerIndex = 0; centerIndex < centerJsonList.GetLength(); ++centerIndex)
   {
     centerJsonList[centerIndex].AsDouble(m_center[centerIndex]);
   }
   payload.WithArray("Center", std::move(centerJsonList));

  }

  if(m_radiusHasBeenSet)
  {
   payload.WithInt64("Radius", m_radius);

  }

  return payload;
}

} // namespace Model
} // namespace GeoPlaces
} // namespace Aws
