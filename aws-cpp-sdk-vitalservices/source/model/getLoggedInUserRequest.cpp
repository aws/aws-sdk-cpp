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
#include <aws/vitalservices/model/getLoggedInUserRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::VitalServices::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

getLoggedInUserRequest::getLoggedInUserRequest() : 
    m_postalCodeHasBeenSet(false),
    m_suiteHasBeenSet(false),
    m_cityHasBeenSet(false),
    m_patientIdsHasBeenSet(false),
    m_serviceIdsHasBeenSet(false),
    m_emailHasBeenSet(false),
    m_availableTimeSlotsHasBeenSet(false),
    m_patientIdHasBeenSet(false),
    m_appointmentIdHasBeenSet(false),
    m_fileHasBeenSet(false),
    m_string2HasBeenSet(false),
    m_httpMethodHasBeenSet(false),
    m_streetNumberAndNameHasBeenSet(false),
    m_cardTokenHasBeenSet(false),
    m_birthdateYearHasBeenSet(false),
    m_priceDollarsHasBeenSet(false),
    m_doctorIdsHasBeenSet(false),
    m_durationMinutesHasBeenSet(false),
    m_getDoctors(false),
    m_getDoctorsHasBeenSet(false),
    m_billVersionHasBeenSet(false),
    m_bankAccountTokenHasBeenSet(false),
    m_mobileNumberHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_sourceIdHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_businessNameHasBeenSet(false),
    m_doctorIdHasBeenSet(false),
    m_longitude(0.0),
    m_longitudeHasBeenSet(false),
    m_birthdateMonthHasBeenSet(false),
    m_serviceIdHasBeenSet(false),
    m_firstTimeHasBeenSet(false),
    m_appointmentIdsHasBeenSet(false),
    m_string1HasBeenSet(false),
    m_birthdateDayHasBeenSet(false),
    m_officeNumberHasBeenSet(false),
    m_getPatients(false),
    m_getPatientsHasBeenSet(false),
    m_employerIdentificationNumberHasBeenSet(false),
    m_lastTimeHasBeenSet(false),
    m_ssnLast4HasBeenSet(false),
    m_specialtyIdHasBeenSet(false),
    m_lastNameHasBeenSet(false),
    m_pictureUrlHasBeenSet(false),
    m_string3HasBeenSet(false),
    m_string4HasBeenSet(false),
    m_operationHasBeenSet(false),
    m_lateCancellation(false),
    m_lateCancellationHasBeenSet(false),
    m_firstNameHasBeenSet(false),
    m_unavailableTimeSlotsHasBeenSet(false),
    m_latitude(0.0),
    m_latitudeHasBeenSet(false)
{
}

Aws::String getLoggedInUserRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_postalCodeHasBeenSet)
  {
   payload.WithString("postalCode", m_postalCode);

  }

  if(m_suiteHasBeenSet)
  {
   payload.WithString("suite", m_suite);

  }

  if(m_cityHasBeenSet)
  {
   payload.WithString("city", m_city);

  }

  if(m_patientIdsHasBeenSet)
  {
   Array<JsonValue> patientIdsJsonList(m_patientIds.size());
   for(unsigned patientIdsIndex = 0; patientIdsIndex < patientIdsJsonList.GetLength(); ++patientIdsIndex)
   {
     patientIdsJsonList[patientIdsIndex].AsString(m_patientIds[patientIdsIndex]);
   }
   payload.WithArray("patientIds", std::move(patientIdsJsonList));

  }

  if(m_serviceIdsHasBeenSet)
  {
   Array<JsonValue> serviceIdsJsonList(m_serviceIds.size());
   for(unsigned serviceIdsIndex = 0; serviceIdsIndex < serviceIdsJsonList.GetLength(); ++serviceIdsIndex)
   {
     serviceIdsJsonList[serviceIdsIndex].AsString(m_serviceIds[serviceIdsIndex]);
   }
   payload.WithArray("serviceIds", std::move(serviceIdsJsonList));

  }

  if(m_emailHasBeenSet)
  {
   payload.WithString("email", m_email);

  }

  if(m_availableTimeSlotsHasBeenSet)
  {
   Array<JsonValue> availableTimeSlotsJsonList(m_availableTimeSlots.size());
   for(unsigned availableTimeSlotsIndex = 0; availableTimeSlotsIndex < availableTimeSlotsJsonList.GetLength(); ++availableTimeSlotsIndex)
   {
     availableTimeSlotsJsonList[availableTimeSlotsIndex].AsString(m_availableTimeSlots[availableTimeSlotsIndex]);
   }
   payload.WithArray("availableTimeSlots", std::move(availableTimeSlotsJsonList));

  }

  if(m_patientIdHasBeenSet)
  {
   payload.WithString("patientId", m_patientId);

  }

  if(m_appointmentIdHasBeenSet)
  {
   payload.WithString("appointmentId", m_appointmentId);

  }

  if(m_fileHasBeenSet)
  {
   payload.WithString("file", m_file);

  }

  if(m_string2HasBeenSet)
  {
   payload.WithString("string2", m_string2);

  }

  if(m_httpMethodHasBeenSet)
  {
   payload.WithString("httpMethod", m_httpMethod);

  }

  if(m_streetNumberAndNameHasBeenSet)
  {
   payload.WithString("streetNumberAndName", m_streetNumberAndName);

  }

  if(m_cardTokenHasBeenSet)
  {
   payload.WithString("cardToken", m_cardToken);

  }

  if(m_birthdateYearHasBeenSet)
  {
   payload.WithString("birthdateYear", m_birthdateYear);

  }

  if(m_priceDollarsHasBeenSet)
  {
   payload.WithString("priceDollars", m_priceDollars);

  }

  if(m_doctorIdsHasBeenSet)
  {
   Array<JsonValue> doctorIdsJsonList(m_doctorIds.size());
   for(unsigned doctorIdsIndex = 0; doctorIdsIndex < doctorIdsJsonList.GetLength(); ++doctorIdsIndex)
   {
     doctorIdsJsonList[doctorIdsIndex].AsString(m_doctorIds[doctorIdsIndex]);
   }
   payload.WithArray("doctorIds", std::move(doctorIdsJsonList));

  }

  if(m_durationMinutesHasBeenSet)
  {
   payload.WithString("durationMinutes", m_durationMinutes);

  }

  if(m_getDoctorsHasBeenSet)
  {
   payload.WithBool("getDoctors", m_getDoctors);

  }

  if(m_billVersionHasBeenSet)
  {
   payload.WithString("billVersion", m_billVersion);

  }

  if(m_bankAccountTokenHasBeenSet)
  {
   payload.WithString("bankAccountToken", m_bankAccountToken);

  }

  if(m_mobileNumberHasBeenSet)
  {
   payload.WithString("mobileNumber", m_mobileNumber);

  }

  if(m_startTimeHasBeenSet)
  {
   payload.WithString("startTime", m_startTime);

  }

  if(m_sourceIdHasBeenSet)
  {
   payload.WithString("sourceId", m_sourceId);

  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("state", m_state);

  }

  if(m_businessNameHasBeenSet)
  {
   payload.WithString("businessName", m_businessName);

  }

  if(m_doctorIdHasBeenSet)
  {
   payload.WithString("doctorId", m_doctorId);

  }

  if(m_longitudeHasBeenSet)
  {
   payload.WithDouble("longitude", m_longitude);

  }

  if(m_birthdateMonthHasBeenSet)
  {
   payload.WithString("birthdateMonth", m_birthdateMonth);

  }

  if(m_serviceIdHasBeenSet)
  {
   payload.WithString("serviceId", m_serviceId);

  }

  if(m_firstTimeHasBeenSet)
  {
   payload.WithString("firstTime", m_firstTime);

  }

  if(m_appointmentIdsHasBeenSet)
  {
   Array<JsonValue> appointmentIdsJsonList(m_appointmentIds.size());
   for(unsigned appointmentIdsIndex = 0; appointmentIdsIndex < appointmentIdsJsonList.GetLength(); ++appointmentIdsIndex)
   {
     appointmentIdsJsonList[appointmentIdsIndex].AsString(m_appointmentIds[appointmentIdsIndex]);
   }
   payload.WithArray("appointmentIds", std::move(appointmentIdsJsonList));

  }

  if(m_string1HasBeenSet)
  {
   payload.WithString("string1", m_string1);

  }

  if(m_birthdateDayHasBeenSet)
  {
   payload.WithString("birthdateDay", m_birthdateDay);

  }

  if(m_officeNumberHasBeenSet)
  {
   payload.WithString("officeNumber", m_officeNumber);

  }

  if(m_getPatientsHasBeenSet)
  {
   payload.WithBool("getPatients", m_getPatients);

  }

  if(m_employerIdentificationNumberHasBeenSet)
  {
   payload.WithString("employerIdentificationNumber", m_employerIdentificationNumber);

  }

  if(m_lastTimeHasBeenSet)
  {
   payload.WithString("lastTime", m_lastTime);

  }

  if(m_ssnLast4HasBeenSet)
  {
   payload.WithString("ssnLast4", m_ssnLast4);

  }

  if(m_specialtyIdHasBeenSet)
  {
   payload.WithString("specialtyId", m_specialtyId);

  }

  if(m_lastNameHasBeenSet)
  {
   payload.WithString("lastName", m_lastName);

  }

  if(m_pictureUrlHasBeenSet)
  {
   payload.WithString("pictureUrl", m_pictureUrl);

  }

  if(m_string3HasBeenSet)
  {
   payload.WithString("string3", m_string3);

  }

  if(m_string4HasBeenSet)
  {
   payload.WithString("string4", m_string4);

  }

  if(m_operationHasBeenSet)
  {
   payload.WithString("operation", m_operation);

  }

  if(m_lateCancellationHasBeenSet)
  {
   payload.WithBool("lateCancellation", m_lateCancellation);

  }

  if(m_firstNameHasBeenSet)
  {
   payload.WithString("firstName", m_firstName);

  }

  if(m_unavailableTimeSlotsHasBeenSet)
  {
   Array<JsonValue> unavailableTimeSlotsJsonList(m_unavailableTimeSlots.size());
   for(unsigned unavailableTimeSlotsIndex = 0; unavailableTimeSlotsIndex < unavailableTimeSlotsJsonList.GetLength(); ++unavailableTimeSlotsIndex)
   {
     unavailableTimeSlotsJsonList[unavailableTimeSlotsIndex].AsString(m_unavailableTimeSlots[unavailableTimeSlotsIndex]);
   }
   payload.WithArray("unavailableTimeSlots", std::move(unavailableTimeSlotsJsonList));

  }

  if(m_latitudeHasBeenSet)
  {
   payload.WithDouble("latitude", m_latitude);

  }

  return payload.WriteReadable();
}



