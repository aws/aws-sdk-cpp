/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-places/model/GeocodeFilter.h>
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

GeocodeFilter::GeocodeFilter(JsonView jsonValue)
{
  *this = jsonValue;
}

GeocodeFilter& GeocodeFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("IncludeCountries"))
  {
    Aws::Utils::Array<JsonView> includeCountriesJsonList = jsonValue.GetArray("IncludeCountries");
    for(unsigned includeCountriesIndex = 0; includeCountriesIndex < includeCountriesJsonList.GetLength(); ++includeCountriesIndex)
    {
      m_includeCountries.push_back(includeCountriesJsonList[includeCountriesIndex].AsString());
    }
    m_includeCountriesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("IncludePlaceTypes"))
  {
    Aws::Utils::Array<JsonView> includePlaceTypesJsonList = jsonValue.GetArray("IncludePlaceTypes");
    for(unsigned includePlaceTypesIndex = 0; includePlaceTypesIndex < includePlaceTypesJsonList.GetLength(); ++includePlaceTypesIndex)
    {
      m_includePlaceTypes.push_back(GeocodeFilterPlaceTypeMapper::GetGeocodeFilterPlaceTypeForName(includePlaceTypesJsonList[includePlaceTypesIndex].AsString()));
    }
    m_includePlaceTypesHasBeenSet = true;
  }
  return *this;
}

JsonValue GeocodeFilter::Jsonize() const
{
  JsonValue payload;

  if(m_includeCountriesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> includeCountriesJsonList(m_includeCountries.size());
   for(unsigned includeCountriesIndex = 0; includeCountriesIndex < includeCountriesJsonList.GetLength(); ++includeCountriesIndex)
   {
     includeCountriesJsonList[includeCountriesIndex].AsString(m_includeCountries[includeCountriesIndex]);
   }
   payload.WithArray("IncludeCountries", std::move(includeCountriesJsonList));

  }

  if(m_includePlaceTypesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> includePlaceTypesJsonList(m_includePlaceTypes.size());
   for(unsigned includePlaceTypesIndex = 0; includePlaceTypesIndex < includePlaceTypesJsonList.GetLength(); ++includePlaceTypesIndex)
   {
     includePlaceTypesJsonList[includePlaceTypesIndex].AsString(GeocodeFilterPlaceTypeMapper::GetNameForGeocodeFilterPlaceType(m_includePlaceTypes[includePlaceTypesIndex]));
   }
   payload.WithArray("IncludePlaceTypes", std::move(includePlaceTypesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace GeoPlaces
} // namespace Aws
