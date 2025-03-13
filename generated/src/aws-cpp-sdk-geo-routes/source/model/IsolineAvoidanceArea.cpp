/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-routes/model/IsolineAvoidanceArea.h>
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

IsolineAvoidanceArea::IsolineAvoidanceArea(JsonView jsonValue)
{
  *this = jsonValue;
}

IsolineAvoidanceArea& IsolineAvoidanceArea::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Except"))
  {
    Aws::Utils::Array<JsonView> exceptJsonList = jsonValue.GetArray("Except");
    for(unsigned exceptIndex = 0; exceptIndex < exceptJsonList.GetLength(); ++exceptIndex)
    {
      m_except.push_back(exceptJsonList[exceptIndex].AsObject());
    }
    m_exceptHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Geometry"))
  {
    m_geometry = jsonValue.GetObject("Geometry");
    m_geometryHasBeenSet = true;
  }
  return *this;
}

JsonValue IsolineAvoidanceArea::Jsonize() const
{
  JsonValue payload;

  if(m_exceptHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> exceptJsonList(m_except.size());
   for(unsigned exceptIndex = 0; exceptIndex < exceptJsonList.GetLength(); ++exceptIndex)
   {
     exceptJsonList[exceptIndex].AsObject(m_except[exceptIndex].Jsonize());
   }
   payload.WithArray("Except", std::move(exceptJsonList));

  }

  if(m_geometryHasBeenSet)
  {
   payload.WithObject("Geometry", m_geometry.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
