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
#include <aws/vitalservices/model/CancelAppointmentResult_appointment.h>
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

CancelAppointmentResult_appointment::CancelAppointmentResult_appointment() : 
    m_patientServiceFeeHasBeenSet(false),
    m_doctorServiceFeeHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_reimbursementDateHasBeenSet(false),
    m_idHasBeenSet(false),
    m_durationSecondsHasBeenSet(false),
    m_basePriceHasBeenSet(false),
    m_appointmentStateHasBeenSet(false),
    m_serviceIdHasBeenSet(false),
    m_amountRefundedHasBeenSet(false),
    m_doctorIdHasBeenSet(false),
    m_doctorEarningsHasBeenSet(false),
    m_chargeIdHasBeenSet(false),
    m_patientIdHasBeenSet(false),
    m_cancellationDateHasBeenSet(false),
    m_totalPriceHasBeenSet(false),
    m_dateBookedHasBeenSet(false)
{
}

CancelAppointmentResult_appointment::CancelAppointmentResult_appointment(const JsonValue& jsonValue) : 
    m_patientServiceFeeHasBeenSet(false),
    m_doctorServiceFeeHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_reimbursementDateHasBeenSet(false),
    m_idHasBeenSet(false),
    m_durationSecondsHasBeenSet(false),
    m_basePriceHasBeenSet(false),
    m_appointmentStateHasBeenSet(false),
    m_serviceIdHasBeenSet(false),
    m_amountRefundedHasBeenSet(false),
    m_doctorIdHasBeenSet(false),
    m_doctorEarningsHasBeenSet(false),
    m_chargeIdHasBeenSet(false),
    m_patientIdHasBeenSet(false),
    m_cancellationDateHasBeenSet(false),
    m_totalPriceHasBeenSet(false),
    m_dateBookedHasBeenSet(false)
{
  *this = jsonValue;
}

CancelAppointmentResult_appointment& CancelAppointmentResult_appointment::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("patientServiceFee"))
  {
    m_patientServiceFee = jsonValue.GetString("patientServiceFee");

    m_patientServiceFeeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("doctorServiceFee"))
  {
    m_doctorServiceFee = jsonValue.GetString("doctorServiceFee");

    m_doctorServiceFeeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("startTime"))
  {
    m_startTime = jsonValue.GetString("startTime");

    m_startTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("reimbursementDate"))
  {
    m_reimbursementDate = jsonValue.GetString("reimbursementDate");

    m_reimbursementDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("durationSeconds"))
  {
    m_durationSeconds = jsonValue.GetString("durationSeconds");

    m_durationSecondsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("basePrice"))
  {
    m_basePrice = jsonValue.GetString("basePrice");

    m_basePriceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("appointmentState"))
  {
    m_appointmentState = jsonValue.GetString("appointmentState");

    m_appointmentStateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("serviceId"))
  {
    m_serviceId = jsonValue.GetString("serviceId");

    m_serviceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("amountRefunded"))
  {
    m_amountRefunded = jsonValue.GetString("amountRefunded");

    m_amountRefundedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("doctorId"))
  {
    m_doctorId = jsonValue.GetString("doctorId");

    m_doctorIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("doctorEarnings"))
  {
    m_doctorEarnings = jsonValue.GetString("doctorEarnings");

    m_doctorEarningsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("chargeId"))
  {
    m_chargeId = jsonValue.GetString("chargeId");

    m_chargeIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("patientId"))
  {
    m_patientId = jsonValue.GetString("patientId");

    m_patientIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("cancellationDate"))
  {
    m_cancellationDate = jsonValue.GetString("cancellationDate");

    m_cancellationDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("totalPrice"))
  {
    m_totalPrice = jsonValue.GetString("totalPrice");

    m_totalPriceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("dateBooked"))
  {
    m_dateBooked = jsonValue.GetString("dateBooked");

    m_dateBookedHasBeenSet = true;
  }

  return *this;
}

JsonValue CancelAppointmentResult_appointment::Jsonize() const
{
  JsonValue payload;

  if(m_patientServiceFeeHasBeenSet)
  {
   payload.WithString("patientServiceFee", m_patientServiceFee);

  }

  if(m_doctorServiceFeeHasBeenSet)
  {
   payload.WithString("doctorServiceFee", m_doctorServiceFee);

  }

  if(m_startTimeHasBeenSet)
  {
   payload.WithString("startTime", m_startTime);

  }

  if(m_reimbursementDateHasBeenSet)
  {
   payload.WithString("reimbursementDate", m_reimbursementDate);

  }

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_durationSecondsHasBeenSet)
  {
   payload.WithString("durationSeconds", m_durationSeconds);

  }

  if(m_basePriceHasBeenSet)
  {
   payload.WithString("basePrice", m_basePrice);

  }

  if(m_appointmentStateHasBeenSet)
  {
   payload.WithString("appointmentState", m_appointmentState);

  }

  if(m_serviceIdHasBeenSet)
  {
   payload.WithString("serviceId", m_serviceId);

  }

  if(m_amountRefundedHasBeenSet)
  {
   payload.WithString("amountRefunded", m_amountRefunded);

  }

  if(m_doctorIdHasBeenSet)
  {
   payload.WithString("doctorId", m_doctorId);

  }

  if(m_doctorEarningsHasBeenSet)
  {
   payload.WithString("doctorEarnings", m_doctorEarnings);

  }

  if(m_chargeIdHasBeenSet)
  {
   payload.WithString("chargeId", m_chargeId);

  }

  if(m_patientIdHasBeenSet)
  {
   payload.WithString("patientId", m_patientId);

  }

  if(m_cancellationDateHasBeenSet)
  {
   payload.WithString("cancellationDate", m_cancellationDate);

  }

  if(m_totalPriceHasBeenSet)
  {
   payload.WithString("totalPrice", m_totalPrice);

  }

  if(m_dateBookedHasBeenSet)
  {
   payload.WithString("dateBooked", m_dateBooked);

  }

  return payload;
}

} // namespace Model
} // namespace VitalServices
} // namespace Aws