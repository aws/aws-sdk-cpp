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
#include <aws/vitalservices/model/registerDoctorResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::VitalServices::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

registerDoctorResult::registerDoctorResult() : 
    m_payoutInfoIsSet(false),
    m_latitude(0.0),
    m_longitude(0.0)
{
}

registerDoctorResult::registerDoctorResult(const AmazonWebServiceResult<JsonValue>& result) : 
    m_payoutInfoIsSet(false),
    m_latitude(0.0),
    m_longitude(0.0)
{
  *this = result;
}

registerDoctorResult& registerDoctorResult::operator =(const AmazonWebServiceResult<JsonValue>& result)
{
  const JsonValue& jsonValue = result.GetPayload();
  if(jsonValue.ValueExists("profilePhotoUrl"))
  {
    m_profilePhotoUrl = jsonValue.GetString("profilePhotoUrl");

  }

  if(jsonValue.ValueExists("postalCode"))
  {
    m_postalCode = jsonValue.GetString("postalCode");

  }

  if(jsonValue.ValueExists("lastName"))
  {
    m_lastName = jsonValue.GetString("lastName");

  }

  if(jsonValue.ValueExists("firstName"))
  {
    m_firstName = jsonValue.GetString("firstName");

  }

  if(jsonValue.ValueExists("administrativeAreaL1"))
  {
    m_administrativeAreaL1 = jsonValue.GetString("administrativeAreaL1");

  }

  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

  }

  if(jsonValue.ValueExists("city"))
  {
    m_city = jsonValue.GetString("city");

  }

  if(jsonValue.ValueExists("serviceDetailsList"))
  {
    Array<JsonValue> serviceDetailsListJsonList = jsonValue.GetArray("serviceDetailsList");
    for(unsigned serviceDetailsListIndex = 0; serviceDetailsListIndex < serviceDetailsListJsonList.GetLength(); ++serviceDetailsListIndex)
    {
      m_serviceDetailsList.push_back(serviceDetailsListJsonList[serviceDetailsListIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("payoutInfoIsSet"))
  {
    m_payoutInfoIsSet = jsonValue.GetBool("payoutInfoIsSet");

  }

  if(jsonValue.ValueExists("latitude"))
  {
    m_latitude = jsonValue.GetDouble("latitude");

  }

  if(jsonValue.ValueExists("coverPhotoUrl"))
  {
    m_coverPhotoUrl = jsonValue.GetString("coverPhotoUrl");

  }

  if(jsonValue.ValueExists("streetNumberAndName"))
  {
    m_streetNumberAndName = jsonValue.GetString("streetNumberAndName");

  }

  if(jsonValue.ValueExists("specialtyId"))
  {
    m_specialtyId = jsonValue.GetString("specialtyId");

  }

  if(jsonValue.ValueExists("longitude"))
  {
    m_longitude = jsonValue.GetDouble("longitude");

  }

  if(jsonValue.ValueExists("officeNumber"))
  {
    m_officeNumber = jsonValue.GetString("officeNumber");

  }

  if(jsonValue.ValueExists("suite"))
  {
    m_suite = jsonValue.GetString("suite");

  }

  if(jsonValue.ValueExists("servicesOffered"))
  {
    Array<JsonValue> servicesOfferedJsonList = jsonValue.GetArray("servicesOffered");
    for(unsigned servicesOfferedIndex = 0; servicesOfferedIndex < servicesOfferedJsonList.GetLength(); ++servicesOfferedIndex)
    {
      m_servicesOffered.push_back(servicesOfferedJsonList[servicesOfferedIndex].AsString());
    }
  }



  return *this;
}
