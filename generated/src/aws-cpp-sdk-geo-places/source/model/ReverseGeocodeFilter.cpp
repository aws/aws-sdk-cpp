/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-places/model/ReverseGeocodeFilter.h>
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

ReverseGeocodeFilter::ReverseGeocodeFilter(JsonView jsonValue)
{
  *this = jsonValue;
}

ReverseGeocodeFilter& ReverseGeocodeFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("IncludePlaceTypes"))
  {
    Aws::Utils::Array<JsonView> includePlaceTypesJsonList = jsonValue.GetArray("IncludePlaceTypes");
    for(unsigned includePlaceTypesIndex = 0; includePlaceTypesIndex < includePlaceTypesJsonList.GetLength(); ++includePlaceTypesIndex)
    {
      m_includePlaceTypes.push_back(ReverseGeocodeFilterPlaceTypeMapper::GetReverseGeocodeFilterPlaceTypeForName(includePlaceTypesJsonList[includePlaceTypesIndex].AsString()));
    }
    m_includePlaceTypesHasBeenSet = true;
  }
  return *this;
}

JsonValue ReverseGeocodeFilter::Jsonize() const
{
  JsonValue payload;

  if(m_includePlaceTypesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> includePlaceTypesJsonList(m_includePlaceTypes.size());
   for(unsigned includePlaceTypesIndex = 0; includePlaceTypesIndex < includePlaceTypesJsonList.GetLength(); ++includePlaceTypesIndex)
   {
     includePlaceTypesJsonList[includePlaceTypesIndex].AsString(ReverseGeocodeFilterPlaceTypeMapper::GetNameForReverseGeocodeFilterPlaceType(m_includePlaceTypes[includePlaceTypesIndex]));
   }
   payload.WithArray("IncludePlaceTypes", std::move(includePlaceTypesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace GeoPlaces
} // namespace Aws
