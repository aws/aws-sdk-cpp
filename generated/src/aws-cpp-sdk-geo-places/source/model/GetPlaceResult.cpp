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

GetPlaceResult::GetPlaceResult() : 
    m_placeType(PlaceType::NOT_SET),
    m_addressNumberCorrected(false)
{
}

GetPlaceResult::GetPlaceResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
  : GetPlaceResult()
{
  *this = result;
}

GetPlaceResult& GetPlaceResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("PlaceId"))
  {
    m_placeId = jsonValue.GetString("PlaceId");

  }

  if(jsonValue.ValueExists("PlaceType"))
  {
    m_placeType = PlaceTypeMapper::GetPlaceTypeForName(jsonValue.GetString("PlaceType"));

  }

  if(jsonValue.ValueExists("Title"))
  {
    m_title = jsonValue.GetString("Title");

  }

  if(jsonValue.ValueExists("Address"))
  {
    m_address = jsonValue.GetObject("Address");

  }

  if(jsonValue.ValueExists("AddressNumberCorrected"))
  {
    m_addressNumberCorrected = jsonValue.GetBool("AddressNumberCorrected");

  }

  if(jsonValue.ValueExists("PostalCodeDetails"))
  {
    Aws::Utils::Array<JsonView> postalCodeDetailsJsonList = jsonValue.GetArray("PostalCodeDetails");
    for(unsigned postalCodeDetailsIndex = 0; postalCodeDetailsIndex < postalCodeDetailsJsonList.GetLength(); ++postalCodeDetailsIndex)
    {
      m_postalCodeDetails.push_back(postalCodeDetailsJsonList[postalCodeDetailsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("Position"))
  {
    Aws::Utils::Array<JsonView> positionJsonList = jsonValue.GetArray("Position");
    for(unsigned positionIndex = 0; positionIndex < positionJsonList.GetLength(); ++positionIndex)
    {
      m_position.push_back(positionJsonList[positionIndex].AsDouble());
    }
  }

  if(jsonValue.ValueExists("MapView"))
  {
    Aws::Utils::Array<JsonView> mapViewJsonList = jsonValue.GetArray("MapView");
    for(unsigned mapViewIndex = 0; mapViewIndex < mapViewJsonList.GetLength(); ++mapViewIndex)
    {
      m_mapView.push_back(mapViewJsonList[mapViewIndex].AsDouble());
    }
  }

  if(jsonValue.ValueExists("Categories"))
  {
    Aws::Utils::Array<JsonView> categoriesJsonList = jsonValue.GetArray("Categories");
    for(unsigned categoriesIndex = 0; categoriesIndex < categoriesJsonList.GetLength(); ++categoriesIndex)
    {
      m_categories.push_back(categoriesJsonList[categoriesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("FoodTypes"))
  {
    Aws::Utils::Array<JsonView> foodTypesJsonList = jsonValue.GetArray("FoodTypes");
    for(unsigned foodTypesIndex = 0; foodTypesIndex < foodTypesJsonList.GetLength(); ++foodTypesIndex)
    {
      m_foodTypes.push_back(foodTypesJsonList[foodTypesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("BusinessChains"))
  {
    Aws::Utils::Array<JsonView> businessChainsJsonList = jsonValue.GetArray("BusinessChains");
    for(unsigned businessChainsIndex = 0; businessChainsIndex < businessChainsJsonList.GetLength(); ++businessChainsIndex)
    {
      m_businessChains.push_back(businessChainsJsonList[businessChainsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("Contacts"))
  {
    m_contacts = jsonValue.GetObject("Contacts");

  }

  if(jsonValue.ValueExists("OpeningHours"))
  {
    Aws::Utils::Array<JsonView> openingHoursJsonList = jsonValue.GetArray("OpeningHours");
    for(unsigned openingHoursIndex = 0; openingHoursIndex < openingHoursJsonList.GetLength(); ++openingHoursIndex)
    {
      m_openingHours.push_back(openingHoursJsonList[openingHoursIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("AccessPoints"))
  {
    Aws::Utils::Array<JsonView> accessPointsJsonList = jsonValue.GetArray("AccessPoints");
    for(unsigned accessPointsIndex = 0; accessPointsIndex < accessPointsJsonList.GetLength(); ++accessPointsIndex)
    {
      m_accessPoints.push_back(accessPointsJsonList[accessPointsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("AccessRestrictions"))
  {
    Aws::Utils::Array<JsonView> accessRestrictionsJsonList = jsonValue.GetArray("AccessRestrictions");
    for(unsigned accessRestrictionsIndex = 0; accessRestrictionsIndex < accessRestrictionsJsonList.GetLength(); ++accessRestrictionsIndex)
    {
      m_accessRestrictions.push_back(accessRestrictionsJsonList[accessRestrictionsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("TimeZone"))
  {
    m_timeZone = jsonValue.GetObject("TimeZone");

  }

  if(jsonValue.ValueExists("PoliticalView"))
  {
    m_politicalView = jsonValue.GetString("PoliticalView");

  }

  if(jsonValue.ValueExists("Phonemes"))
  {
    m_phonemes = jsonValue.GetObject("Phonemes");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& pricingBucketIter = headers.find("x-amz-geo-pricing-bucket");
  if(pricingBucketIter != headers.end())
  {
    m_pricingBucket = pricingBucketIter->second;
  }

  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
