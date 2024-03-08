/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/IndexingFilter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoT
{
namespace Model
{

IndexingFilter::IndexingFilter() : 
    m_namedShadowNamesHasBeenSet(false),
    m_geoLocationsHasBeenSet(false)
{
}

IndexingFilter::IndexingFilter(JsonView jsonValue) : 
    m_namedShadowNamesHasBeenSet(false),
    m_geoLocationsHasBeenSet(false)
{
  *this = jsonValue;
}

IndexingFilter& IndexingFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("namedShadowNames"))
  {
    Aws::Utils::Array<JsonView> namedShadowNamesJsonList = jsonValue.GetArray("namedShadowNames");
    for(unsigned namedShadowNamesIndex = 0; namedShadowNamesIndex < namedShadowNamesJsonList.GetLength(); ++namedShadowNamesIndex)
    {
      m_namedShadowNames.push_back(namedShadowNamesJsonList[namedShadowNamesIndex].AsString());
    }
    m_namedShadowNamesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("geoLocations"))
  {
    Aws::Utils::Array<JsonView> geoLocationsJsonList = jsonValue.GetArray("geoLocations");
    for(unsigned geoLocationsIndex = 0; geoLocationsIndex < geoLocationsJsonList.GetLength(); ++geoLocationsIndex)
    {
      m_geoLocations.push_back(geoLocationsJsonList[geoLocationsIndex].AsObject());
    }
    m_geoLocationsHasBeenSet = true;
  }

  return *this;
}

JsonValue IndexingFilter::Jsonize() const
{
  JsonValue payload;

  if(m_namedShadowNamesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> namedShadowNamesJsonList(m_namedShadowNames.size());
   for(unsigned namedShadowNamesIndex = 0; namedShadowNamesIndex < namedShadowNamesJsonList.GetLength(); ++namedShadowNamesIndex)
   {
     namedShadowNamesJsonList[namedShadowNamesIndex].AsString(m_namedShadowNames[namedShadowNamesIndex]);
   }
   payload.WithArray("namedShadowNames", std::move(namedShadowNamesJsonList));

  }

  if(m_geoLocationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> geoLocationsJsonList(m_geoLocations.size());
   for(unsigned geoLocationsIndex = 0; geoLocationsIndex < geoLocationsJsonList.GetLength(); ++geoLocationsIndex)
   {
     geoLocationsJsonList[geoLocationsIndex].AsObject(m_geoLocations[geoLocationsIndex].Jsonize());
   }
   payload.WithArray("geoLocations", std::move(geoLocationsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws
