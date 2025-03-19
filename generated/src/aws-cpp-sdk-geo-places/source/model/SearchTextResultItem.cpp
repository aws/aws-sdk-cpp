/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-places/model/SearchTextResultItem.h>
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

SearchTextResultItem::SearchTextResultItem(JsonView jsonValue)
{
  *this = jsonValue;
}

SearchTextResultItem& SearchTextResultItem::operator =(JsonView jsonValue)
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
  if(jsonValue.ValueExists("BusinessChains"))
  {
    Aws::Utils::Array<JsonView> businessChainsJsonList = jsonValue.GetArray("BusinessChains");
    for(unsigned businessChainsIndex = 0; businessChainsIndex < businessChainsJsonList.GetLength(); ++businessChainsIndex)
    {
      m_businessChains.push_back(businessChainsJsonList[businessChainsIndex].AsObject());
    }
    m_businessChainsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Contacts"))
  {
    m_contacts = jsonValue.GetObject("Contacts");
    m_contactsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("OpeningHours"))
  {
    Aws::Utils::Array<JsonView> openingHoursJsonList = jsonValue.GetArray("OpeningHours");
    for(unsigned openingHoursIndex = 0; openingHoursIndex < openingHoursJsonList.GetLength(); ++openingHoursIndex)
    {
      m_openingHours.push_back(openingHoursJsonList[openingHoursIndex].AsObject());
    }
    m_openingHoursHasBeenSet = true;
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
  if(jsonValue.ValueExists("AccessRestrictions"))
  {
    Aws::Utils::Array<JsonView> accessRestrictionsJsonList = jsonValue.GetArray("AccessRestrictions");
    for(unsigned accessRestrictionsIndex = 0; accessRestrictionsIndex < accessRestrictionsJsonList.GetLength(); ++accessRestrictionsIndex)
    {
      m_accessRestrictions.push_back(accessRestrictionsJsonList[accessRestrictionsIndex].AsObject());
    }
    m_accessRestrictionsHasBeenSet = true;
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
  if(jsonValue.ValueExists("Phonemes"))
  {
    m_phonemes = jsonValue.GetObject("Phonemes");
    m_phonemesHasBeenSet = true;
  }
  return *this;
}

JsonValue SearchTextResultItem::Jsonize() const
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

  if(m_businessChainsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> businessChainsJsonList(m_businessChains.size());
   for(unsigned businessChainsIndex = 0; businessChainsIndex < businessChainsJsonList.GetLength(); ++businessChainsIndex)
   {
     businessChainsJsonList[businessChainsIndex].AsObject(m_businessChains[businessChainsIndex].Jsonize());
   }
   payload.WithArray("BusinessChains", std::move(businessChainsJsonList));

  }

  if(m_contactsHasBeenSet)
  {
   payload.WithObject("Contacts", m_contacts.Jsonize());

  }

  if(m_openingHoursHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> openingHoursJsonList(m_openingHours.size());
   for(unsigned openingHoursIndex = 0; openingHoursIndex < openingHoursJsonList.GetLength(); ++openingHoursIndex)
   {
     openingHoursJsonList[openingHoursIndex].AsObject(m_openingHours[openingHoursIndex].Jsonize());
   }
   payload.WithArray("OpeningHours", std::move(openingHoursJsonList));

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

  if(m_accessRestrictionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> accessRestrictionsJsonList(m_accessRestrictions.size());
   for(unsigned accessRestrictionsIndex = 0; accessRestrictionsIndex < accessRestrictionsJsonList.GetLength(); ++accessRestrictionsIndex)
   {
     accessRestrictionsJsonList[accessRestrictionsIndex].AsObject(m_accessRestrictions[accessRestrictionsIndex].Jsonize());
   }
   payload.WithArray("AccessRestrictions", std::move(accessRestrictionsJsonList));

  }

  if(m_timeZoneHasBeenSet)
  {
   payload.WithObject("TimeZone", m_timeZone.Jsonize());

  }

  if(m_politicalViewHasBeenSet)
  {
   payload.WithString("PoliticalView", m_politicalView);

  }

  if(m_phonemesHasBeenSet)
  {
   payload.WithObject("Phonemes", m_phonemes.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace GeoPlaces
} // namespace Aws
