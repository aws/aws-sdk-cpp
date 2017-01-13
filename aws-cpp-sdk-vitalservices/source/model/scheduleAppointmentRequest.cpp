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
#include <aws/vitalservices/model/scheduleAppointmentRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::VitalServices::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

scheduleAppointmentRequest::scheduleAppointmentRequest() : 
    m_doctorIdHasBeenSet(false),
    m_totalPriceHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_serviceIdHasBeenSet(false),
    m_billFingerprintHasBeenSet(false)
{
}

Aws::String scheduleAppointmentRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_doctorIdHasBeenSet)
  {
   payload.WithString("doctorId", m_doctorId);

  }

  if(m_totalPriceHasBeenSet)
  {
   payload.WithString("totalPrice", m_totalPrice);

  }

  if(m_startTimeHasBeenSet)
  {
   payload.WithString("startTime", m_startTime);

  }

  if(m_serviceIdHasBeenSet)
  {
   payload.WithString("serviceId", m_serviceId);

  }

  if(m_billFingerprintHasBeenSet)
  {
   payload.WithString("billFingerprint", m_billFingerprint);

  }

  return payload.WriteReadable();
}



