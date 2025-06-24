/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-places/model/GetPlaceResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::GeoPlaces::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetPlaceResult::GetPlaceResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetPlaceResult& GetPlaceResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
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

  const auto& headers = result.GetHeaderValueCollection();
  const auto& pricingBucketIter = headers.find("x-amz-geo-pricing-bucket");
  if(pricingBucketIter != headers.end())
  {
    m_pricingBucket = pricingBucketIter->second;
    m_pricingBucketHasBeenSet = true;
  }

  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}
