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
#include <aws/vitalservices/model/searchForDoctorsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::VitalServices::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

searchForDoctorsRequest::searchForDoctorsRequest() : 
    m_serviceIdHasBeenSet(false),
    m_lastTimeHasBeenSet(false),
    m_longitude(0.0),
    m_longitudeHasBeenSet(false),
    m_specialtyIdHasBeenSet(false),
    m_firstTimeHasBeenSet(false),
    m_latitude(0.0),
    m_latitudeHasBeenSet(false)
{
}

Aws::String searchForDoctorsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_serviceIdHasBeenSet)
  {
   payload.WithString("serviceId", m_serviceId);

  }

  if(m_lastTimeHasBeenSet)
  {
   payload.WithString("lastTime", m_lastTime);

  }

  if(m_longitudeHasBeenSet)
  {
   payload.WithDouble("longitude", m_longitude);

  }

  if(m_specialtyIdHasBeenSet)
  {
   payload.WithString("specialtyId", m_specialtyId);

  }

  if(m_firstTimeHasBeenSet)
  {
   payload.WithString("firstTime", m_firstTime);

  }

  if(m_latitudeHasBeenSet)
  {
   payload.WithDouble("latitude", m_latitude);

  }

  return payload.WriteReadable();
}



