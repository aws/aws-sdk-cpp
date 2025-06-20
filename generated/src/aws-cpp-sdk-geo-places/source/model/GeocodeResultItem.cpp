/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-places/model/GeocodeResultItem.h>
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

GeocodeResultItem::GeocodeResultItem(JsonView jsonValue)
{
  *this = jsonValue;
}

GeocodeResultItem& GeocodeResultItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PlaceId"))
  {
    m_placeId = jsonValue.GetString("PlaceId");
    m_placeIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PlaceType"))
  {
    m_placeType = PlaceTypeMapper::GetPlaceTypeForName(jsonValue.GetString("PlaceType"));
    m_placeTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Title"))
  {
    m_title = jsonValue.GetString("Title");
    m_titleHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Address"))
  {
    m_address = jsonValue.GetObject("Address");
    m_addressHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AddressNumberCorrected"))
  {
    m_addressNumberCorrected = jsonValue.GetBool("AddressNumberCorrected");
    m_addressNumberCorrectedHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PostalCodeDetails"))
  {
    Aws::Utils::Array<JsonView> postalCodeDetailsJsonList = jsonValue.GetArray("PostalCodeDetails");
    for(unsigned postalCodeDetailsIndex = 0; postalCodeDetailsIndex < postalCodeDetailsJsonList.GetLength(); ++postalCodeDetailsIndex)
    {
      m_postalCodeDetails.push_back(postalCodeDetailsJsonList[postalCodeDetailsIndex].AsObject());
    }
    m_postalCodeDetailsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Position"))
  {
    Aws::Utils::Array<JsonView> positionJsonList = jsonValue.GetArray("Position");
    for(unsigned positionIndex = 0; positionIndex < positionJsonList.GetLength(); ++positionIndex)
    {
      m_position.push_back(positionJsonList[positionIndex].AsDouble());
    }
    m_positionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Distance"))
  {
    m_distance = jsonValue.GetInt64("Distance");
    m_distanceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MapView"))
  {
    Aws::Utils::Array<JsonView> mapViewJsonList = jsonValue.GetArray("MapView");
    for(unsigned mapViewIndex = 0; mapViewIndex < mapViewJsonList.GetLength(); ++mapViewIndex)
    {
      m_mapView.push_back(mapViewJsonList[mapViewIndex].AsDouble());
    }
    m_mapViewHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Categories"))
  {
    Aws::Utils::Array<JsonView> categoriesJsonList = jsonValue.GetArray("Categories");
    for(unsigned categoriesIndex = 0; categoriesIndex < categoriesJsonList.GetLength(); ++categoriesIndex)
    {
      m_categories.push_back(categoriesJsonList[categoriesIndex].AsObject());
    }
    m_categoriesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FoodTypes"))
  {
    Aws::Utils::Array<JsonView> foodTypesJsonList = jsonValue.GetArray("FoodTypes");
    for(unsigned foodTypesIndex = 0; foodTypesIndex < foodTypesJsonList.GetLength(); ++foodTypesIndex)
    {
      m_foodTypes.push_back(foodTypesJsonList[foodTypesIndex].AsObject());
    }
    m_foodTypesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AccessPoints"))
  {
    Aws::Utils::Array<JsonView> accessPointsJsonList = jsonValue.GetArray("AccessPoints");
    for(unsigned accessPointsIndex = 0; accessPointsIndex < accessPointsJsonList.GetLength(); ++accessPointsIndex)
    {
      m_accessPoints.push_back(accessPointsJsonList[accessPointsIndex].AsObject());
    }
    m_accessPointsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TimeZone"))
  {
    m_timeZone = jsonValue.GetObject("TimeZone");
    m_timeZoneHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PoliticalView"))
  {
    m_politicalView = jsonValue.GetString("PoliticalView");
    m_politicalViewHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MatchScores"))
  {
    m_matchScores = jsonValue.GetObject("MatchScores");
    m_matchScoresHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ParsedQuery"))
  {
    m_parsedQuery = jsonValue.GetObject("ParsedQuery");
    m_parsedQueryHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Intersections"))
  {
    Aws::Utils::Array<JsonView> intersectionsJsonList = jsonValue.GetArray("Intersections");
    for(unsigned intersectionsIndex = 0; intersectionsIndex < intersectionsJsonList.GetLength(); ++intersectionsIndex)
    {
      m_intersections.push_back(intersectionsJsonList[intersectionsIndex].AsObject());
    }
    m_intersectionsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MainAddress"))
  {
    m_mainAddress = jsonValue.GetObject("MainAddress");
    m_mainAddressHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SecondaryAddresses"))
  {
    Aws::Utils::Array<JsonView> secondaryAddressesJsonList = jsonValue.GetArray("SecondaryAddresses");
    for(unsigned secondaryAddressesIndex = 0; secondaryAddressesIndex < secondaryAddressesJsonList.GetLength(); ++secondaryAddressesIndex)
    {
      m_secondaryAddresses.push_back(secondaryAddressesJsonList[secondaryAddressesIndex].AsObject());
    }
    m_secondaryAddressesHasBeenSet = true;
  }
  return *this;
}

JsonValue GeocodeResultItem::Jsonize() const
{
  JsonValue payload;

  if(m_placeIdHasBeenSet)
  {
   payload.WithString("PlaceId", m_placeId);

  }

  if(m_placeTypeHasBeenSet)
  {
   payload.WithString("PlaceType", PlaceTypeMapper::GetNameForPlaceType(m_placeType));
  }

  if(m_titleHasBeenSet)
  {
   payload.WithString("Title", m_title);

  }

  if(m_addressHasBeenSet)
  {
   payload.WithObject("Address", m_address.Jsonize());

  }

  if(m_addressNumberCorrectedHasBeenSet)
  {
   payload.WithBool("AddressNumberCorrected", m_addressNumberCorrected);

  }

  if(m_postalCodeDetailsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> postalCodeDetailsJsonList(m_postalCodeDetails.size());
   for(unsigned postalCodeDetailsIndex = 0; postalCodeDetailsIndex < postalCodeDetailsJsonList.GetLength(); ++postalCodeDetailsIndex)
   {
     postalCodeDetailsJsonList[postalCodeDetailsIndex].AsObject(m_postalCodeDetails[postalCodeDetailsIndex].Jsonize());
   }
   payload.WithArray("PostalCodeDetails", std::move(postalCodeDetailsJsonList));

  }

  if(m_positionHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> positionJsonList(m_position.size());
   for(unsigned positionIndex = 0; positionIndex < positionJsonList.GetLength(); ++positionIndex)
   {
     positionJsonList[positionIndex].AsDouble(m_position[positionIndex]);
   }
   payload.WithArray("Position", std::move(positionJsonList));

  }

  if(m_distanceHasBeenSet)
  {
   payload.WithInt64("Distance", m_distance);

  }

  if(m_mapViewHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> mapViewJsonList(m_mapView.size());
   for(unsigned mapViewIndex = 0; mapViewIndex < mapViewJsonList.GetLength(); ++mapViewIndex)
   {
     mapViewJsonList[mapViewIndex].AsDouble(m_mapView[mapViewIndex]);
   }
   payload.WithArray("MapView", std::move(mapViewJsonList));

  }

  if(m_categoriesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> categoriesJsonList(m_categories.size());
   for(unsigned categoriesIndex = 0; categoriesIndex < categoriesJsonList.GetLength(); ++categoriesIndex)
   {
     categoriesJsonList[categoriesIndex].AsObject(m_categories[categoriesIndex].Jsonize());
   }
   payload.WithArray("Categories", std::move(categoriesJsonList));

  }

  if(m_foodTypesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> foodTypesJsonList(m_foodTypes.size());
   for(unsigned foodTypesIndex = 0; foodTypesIndex < foodTypesJsonList.GetLength(); ++foodTypesIndex)
   {
     foodTypesJsonList[foodTypesIndex].AsObject(m_foodTypes[foodTypesIndex].Jsonize());
   }
   payload.WithArray("FoodTypes", std::move(foodTypesJsonList));

  }

  if(m_accessPointsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> accessPointsJsonList(m_accessPoints.size());
   for(unsigned accessPointsIndex = 0; accessPointsIndex < accessPointsJsonList.GetLength(); ++accessPointsIndex)
   {
     accessPointsJsonList[accessPointsIndex].AsObject(m_accessPoints[accessPointsIndex].Jsonize());
   }
   payload.WithArray("AccessPoints", std::move(accessPointsJsonList));

  }

  if(m_timeZoneHasBeenSet)
  {
   payload.WithObject("TimeZone", m_timeZone.Jsonize());

  }

  if(m_politicalViewHasBeenSet)
  {
   payload.WithString("PoliticalView", m_politicalView);

  }

  if(m_matchScoresHasBeenSet)
  {
   payload.WithObject("MatchScores", m_matchScores.Jsonize());

  }

  if(m_parsedQueryHasBeenSet)
  {
   payload.WithObject("ParsedQuery", m_parsedQuery.Jsonize());

  }

  if(m_intersectionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> intersectionsJsonList(m_intersections.size());
   for(unsigned intersectionsIndex = 0; intersectionsIndex < intersectionsJsonList.GetLength(); ++intersectionsIndex)
   {
     intersectionsJsonList[intersectionsIndex].AsObject(m_intersections[intersectionsIndex].Jsonize());
   }
   payload.WithArray("Intersections", std::move(intersectionsJsonList));

  }

  if(m_mainAddressHasBeenSet)
  {
   payload.WithObject("MainAddress", m_mainAddress.Jsonize());

  }

  if(m_secondaryAddressesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> secondaryAddressesJsonList(m_secondaryAddresses.size());
   for(unsigned secondaryAddressesIndex = 0; secondaryAddressesIndex < secondaryAddressesJsonList.GetLength(); ++secondaryAddressesIndex)
   {
     secondaryAddressesJsonList[secondaryAddressesIndex].AsObject(m_secondaryAddresses[secondaryAddressesIndex].Jsonize());
   }
   payload.WithArray("SecondaryAddresses", std::move(secondaryAddressesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace GeoPlaces
} // namespace Aws
