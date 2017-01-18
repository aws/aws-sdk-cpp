/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#include <aws/vitalservices/model/SearchForDoctorsResult_doctorsItem.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace VitalServices
{
namespace Model
{

SearchForDoctorsResult_doctorsItem::SearchForDoctorsResult_doctorsItem() : 
    m_longitude(0.0),
    m_longitudeHasBeenSet(false),
    m_officeNumberHasBeenSet(false),
    m_suiteHasBeenSet(false),
    m_cityHasBeenSet(false),
    m_firstNameHasBeenSet(false),
    m_postalCodeHasBeenSet(false),
    m_lastNameHasBeenSet(false),
    m_serviceDetailsListHasBeenSet(false),
    m_profilePhotoUrlHasBeenSet(false),
    m_coverPhotoUrlHasBeenSet(false),
    m_servicesOfferedHasBeenSet(false),
    m_latitude(0.0),
    m_latitudeHasBeenSet(false),
    m_idHasBeenSet(false),
    m_payoutInfoIsSet(false),
    m_payoutInfoIsSetHasBeenSet(false),
    m_administrativeAreaL1HasBeenSet(false),
    m_specialtyIdHasBeenSet(false),
    m_streetNumberAndNameHasBeenSet(false)
{
}

SearchForDoctorsResult_doctorsItem::SearchForDoctorsResult_doctorsItem(const JsonValue& jsonValue) : 
    m_longitude(0.0),
    m_longitudeHasBeenSet(false),
    m_officeNumberHasBeenSet(false),
    m_suiteHasBeenSet(false),
    m_cityHasBeenSet(false),
    m_firstNameHasBeenSet(false),
    m_postalCodeHasBeenSet(false),
    m_lastNameHasBeenSet(false),
    m_serviceDetailsListHasBeenSet(false),
    m_profilePhotoUrlHasBeenSet(false),
    m_coverPhotoUrlHasBeenSet(false),
    m_servicesOfferedHasBeenSet(false),
    m_latitude(0.0),
    m_latitudeHasBeenSet(false),
    m_idHasBeenSet(false),
    m_payoutInfoIsSet(false),
    m_payoutInfoIsSetHasBeenSet(false),
    m_administrativeAreaL1HasBeenSet(false),
    m_specialtyIdHasBeenSet(false),
    m_streetNumberAndNameHasBeenSet(false)
{
  *this = jsonValue;
}

SearchForDoctorsResult_doctorsItem& SearchForDoctorsResult_doctorsItem::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("longitude"))
  {
    m_longitude = jsonValue.GetDouble("longitude");

    m_longitudeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("officeNumber"))
  {
    m_officeNumber = jsonValue.GetString("officeNumber");

    m_officeNumberHasBeenSet = true;
  }

  if(jsonValue.ValueExists("suite"))
  {
    m_suite = jsonValue.GetString("suite");

    m_suiteHasBeenSet = true;
  }

  if(jsonValue.ValueExists("city"))
  {
    m_city = jsonValue.GetString("city");

    m_cityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("firstName"))
  {
    m_firstName = jsonValue.GetString("firstName");

    m_firstNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("postalCode"))
  {
    m_postalCode = jsonValue.GetString("postalCode");

    m_postalCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastName"))
  {
    m_lastName = jsonValue.GetString("lastName");

    m_lastNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("serviceDetailsList"))
  {
    Array<JsonValue> serviceDetailsListJsonList = jsonValue.GetArray("serviceDetailsList");
    for(unsigned serviceDetailsListIndex = 0; serviceDetailsListIndex < serviceDetailsListJsonList.GetLength(); ++serviceDetailsListIndex)
    {
      m_serviceDetailsList.push_back(serviceDetailsListJsonList[serviceDetailsListIndex].AsObject());
    }
    m_serviceDetailsListHasBeenSet = true;
  }

  if(jsonValue.ValueExists("profilePhotoUrl"))
  {
    m_profilePhotoUrl = jsonValue.GetString("profilePhotoUrl");

    m_profilePhotoUrlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("coverPhotoUrl"))
  {
    m_coverPhotoUrl = jsonValue.GetString("coverPhotoUrl");

    m_coverPhotoUrlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("servicesOffered"))
  {
    Array<JsonValue> servicesOfferedJsonList = jsonValue.GetArray("servicesOffered");
    for(unsigned servicesOfferedIndex = 0; servicesOfferedIndex < servicesOfferedJsonList.GetLength(); ++servicesOfferedIndex)
    {
      m_servicesOffered.push_back(servicesOfferedJsonList[servicesOfferedIndex].AsString());
    }
    m_servicesOfferedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("latitude"))
  {
    m_latitude = jsonValue.GetDouble("latitude");

    m_latitudeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("payoutInfoIsSet"))
  {
    m_payoutInfoIsSet = jsonValue.GetBool("payoutInfoIsSet");

    m_payoutInfoIsSetHasBeenSet = true;
  }

  if(jsonValue.ValueExists("administrativeAreaL1"))
  {
    m_administrativeAreaL1 = jsonValue.GetString("administrativeAreaL1");

    m_administrativeAreaL1HasBeenSet = true;
  }

  if(jsonValue.ValueExists("specialtyId"))
  {
    m_specialtyId = jsonValue.GetString("specialtyId");

    m_specialtyIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("streetNumberAndName"))
  {
    m_streetNumberAndName = jsonValue.GetString("streetNumberAndName");

    m_streetNumberAndNameHasBeenSet = true;
  }

  return *this;
}

JsonValue SearchForDoctorsResult_doctorsItem::Jsonize() const
{
  JsonValue payload;

  if(m_longitudeHasBeenSet)
  {
   payload.WithDouble("longitude", m_longitude);

  }

  if(m_officeNumberHasBeenSet)
  {
   payload.WithString("officeNumber", m_officeNumber);

  }

  if(m_suiteHasBeenSet)
  {
   payload.WithString("suite", m_suite);

  }

  if(m_cityHasBeenSet)
  {
   payload.WithString("city", m_city);

  }

  if(m_firstNameHasBeenSet)
  {
   payload.WithString("firstName", m_firstName);

  }

  if(m_postalCodeHasBeenSet)
  {
   payload.WithString("postalCode", m_postalCode);

  }

  if(m_lastNameHasBeenSet)
  {
   payload.WithString("lastName", m_lastName);

  }

  if(m_serviceDetailsListHasBeenSet)
  {
   Array<JsonValue> serviceDetailsListJsonList(m_serviceDetailsList.size());
   for(unsigned serviceDetailsListIndex = 0; serviceDetailsListIndex < serviceDetailsListJsonList.GetLength(); ++serviceDetailsListIndex)
   {
     serviceDetailsListJsonList[serviceDetailsListIndex].AsObject(m_serviceDetailsList[serviceDetailsListIndex].Jsonize());
   }
   payload.WithArray("serviceDetailsList", std::move(serviceDetailsListJsonList));

  }

  if(m_profilePhotoUrlHasBeenSet)
  {
   payload.WithString("profilePhotoUrl", m_profilePhotoUrl);

  }

  if(m_coverPhotoUrlHasBeenSet)
  {
   payload.WithString("coverPhotoUrl", m_coverPhotoUrl);

  }

  if(m_servicesOfferedHasBeenSet)
  {
   Array<JsonValue> servicesOfferedJsonList(m_servicesOffered.size());
   for(unsigned servicesOfferedIndex = 0; servicesOfferedIndex < servicesOfferedJsonList.GetLength(); ++servicesOfferedIndex)
   {
     servicesOfferedJsonList[servicesOfferedIndex].AsString(m_servicesOffered[servicesOfferedIndex]);
   }
   payload.WithArray("servicesOffered", std::move(servicesOfferedJsonList));

  }

  if(m_latitudeHasBeenSet)
  {
   payload.WithDouble("latitude", m_latitude);

  }

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_payoutInfoIsSetHasBeenSet)
  {
   payload.WithBool("payoutInfoIsSet", m_payoutInfoIsSet);

  }

  if(m_administrativeAreaL1HasBeenSet)
  {
   payload.WithString("administrativeAreaL1", m_administrativeAreaL1);

  }

  if(m_specialtyIdHasBeenSet)
  {
   payload.WithString("specialtyId", m_specialtyId);

  }

  if(m_streetNumberAndNameHasBeenSet)
  {
   payload.WithString("streetNumberAndName", m_streetNumberAndName);

  }

  return payload;
}

} // namespace Model
} // namespace VitalServices
} // namespace Aws