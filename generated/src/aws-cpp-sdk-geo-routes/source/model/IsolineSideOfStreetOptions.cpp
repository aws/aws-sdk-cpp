/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-routes/model/IsolineSideOfStreetOptions.h>
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

IsolineSideOfStreetOptions::IsolineSideOfStreetOptions(JsonView jsonValue)
{
  *this = jsonValue;
}

IsolineSideOfStreetOptions& IsolineSideOfStreetOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Position"))
  {
    Aws::Utils::Array<JsonView> positionJsonList = jsonValue.GetArray("Position");
    for(unsigned positionIndex = 0; positionIndex < positionJsonList.GetLength(); ++positionIndex)
    {
      m_position.push_back(positionJsonList[positionIndex].AsDouble());
    }
    m_positionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("UseWith"))
  {
    m_useWith = SideOfStreetMatchingStrategyMapper::GetSideOfStreetMatchingStrategyForName(jsonValue.GetString("UseWith"));
    m_useWithHasBeenSet = true;
  }
  return *this;
}

JsonValue IsolineSideOfStreetOptions::Jsonize() const
{
  JsonValue payload;

  if(m_positionHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> positionJsonList(m_position.size());
   for(unsigned positionIndex = 0; positionIndex < positionJsonList.GetLength(); ++positionIndex)
   {
     positionJsonList[positionIndex].AsDouble(m_position[positionIndex]);
   }
   payload.WithArray("Position", std::move(positionJsonList));

  }

  if(m_useWithHasBeenSet)
  {
   payload.WithString("UseWith", SideOfStreetMatchingStrategyMapper::GetNameForSideOfStreetMatchingStrategy(m_useWith));
  }

  return payload;
}

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
