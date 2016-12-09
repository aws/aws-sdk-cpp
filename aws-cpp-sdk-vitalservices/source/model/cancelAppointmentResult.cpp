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
#include <aws/vitalservices/model/cancelAppointmentResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::VitalServices::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

cancelAppointmentResult::cancelAppointmentResult()
{
}

cancelAppointmentResult::cancelAppointmentResult(const AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

cancelAppointmentResult& cancelAppointmentResult::operator =(const AmazonWebServiceResult<JsonValue>& result)
{
  const JsonValue& jsonValue = result.GetPayload();
  if(jsonValue.ValueExists("totalPrice"))
  {
    m_totalPrice = jsonValue.GetString("totalPrice");

  }

  if(jsonValue.ValueExists("basePrice"))
  {
    m_basePrice = jsonValue.GetString("basePrice");

  }

  if(jsonValue.ValueExists("patientId"))
  {
    m_patientId = jsonValue.GetString("patientId");

  }

  if(jsonValue.ValueExists("serviceId"))
  {
    m_serviceId = jsonValue.GetString("serviceId");

  }

  if(jsonValue.ValueExists("cancellationDate"))
  {
    m_cancellationDate = jsonValue.GetString("cancellationDate");

  }

  if(jsonValue.ValueExists("appointmentState"))
  {
    m_appointmentState = jsonValue.GetString("appointmentState");

  }

  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

  }

  if(jsonValue.ValueExists("dateBooked"))
  {
    m_dateBooked = jsonValue.GetString("dateBooked");

  }

  if(jsonValue.ValueExists("startTime"))
  {
    m_startTime = jsonValue.GetString("startTime");

  }

  if(jsonValue.ValueExists("amountRefunded"))
  {
    m_amountRefunded = jsonValue.GetString("amountRefunded");

  }

  if(jsonValue.ValueExists("patientServiceFee"))
  {
    m_patientServiceFee = jsonValue.GetString("patientServiceFee");

  }

  if(jsonValue.ValueExists("doctorEarnings"))
  {
    m_doctorEarnings = jsonValue.GetString("doctorEarnings");

  }

  if(jsonValue.ValueExists("doctorId"))
  {
    m_doctorId = jsonValue.GetString("doctorId");

  }

  if(jsonValue.ValueExists("doctorServiceFee"))
  {
    m_doctorServiceFee = jsonValue.GetString("doctorServiceFee");

  }

  if(jsonValue.ValueExists("durationSeconds"))
  {
    m_durationSeconds = jsonValue.GetString("durationSeconds");

  }

  if(jsonValue.ValueExists("chargeId"))
  {
    m_chargeId = jsonValue.GetString("chargeId");

  }

  if(jsonValue.ValueExists("reimbursementDate"))
  {
    m_reimbursementDate = jsonValue.GetString("reimbursementDate");

  }



  return *this;
}
