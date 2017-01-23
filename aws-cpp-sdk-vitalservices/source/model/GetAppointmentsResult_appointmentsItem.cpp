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
#include <aws/vitalservices/model/GetAppointmentsResult_appointmentsItem.h>
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

GetAppointmentsResult_appointmentsItem::GetAppointmentsResult_appointmentsItem() : 
    m_chargeIdHasBeenSet(false),
    m_serviceIdHasBeenSet(false),
    m_basePriceCentsHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_doctorEarningsCentsHasBeenSet(false),
    m_reimbursementDateHasBeenSet(false),
    m_amountRefundedCentsHasBeenSet(false),
    m_durationSecondsHasBeenSet(false),
    m_totalPriceCentsHasBeenSet(false),
    m_doctorServiceFeeCentsHasBeenSet(false),
    m_cancellationDateHasBeenSet(false),
    m_doctorIdHasBeenSet(false),
    m_patientServiceFeeCentsHasBeenSet(false),
    m_patientIdHasBeenSet(false),
    m_appointmentStateHasBeenSet(false),
    m_dateBookedHasBeenSet(false),
    m_idHasBeenSet(false)
{
}

GetAppointmentsResult_appointmentsItem::GetAppointmentsResult_appointmentsItem(const JsonValue& jsonValue) : 
    m_chargeIdHasBeenSet(false),
    m_serviceIdHasBeenSet(false),
    m_basePriceCentsHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_doctorEarningsCentsHasBeenSet(false),
    m_reimbursementDateHasBeenSet(false),
    m_amountRefundedCentsHasBeenSet(false),
    m_durationSecondsHasBeenSet(false),
    m_totalPriceCentsHasBeenSet(false),
    m_doctorServiceFeeCentsHasBeenSet(false),
    m_cancellationDateHasBeenSet(false),
    m_doctorIdHasBeenSet(false),
    m_patientServiceFeeCentsHasBeenSet(false),
    m_patientIdHasBeenSet(false),
    m_appointmentStateHasBeenSet(false),
    m_dateBookedHasBeenSet(false),
    m_idHasBeenSet(false)
{
  *this = jsonValue;
}

GetAppointmentsResult_appointmentsItem& GetAppointmentsResult_appointmentsItem::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("chargeId"))
  {
    m_chargeId = jsonValue.GetString("chargeId");

    m_chargeIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("serviceId"))
  {
    m_serviceId = jsonValue.GetString("serviceId");

    m_serviceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("basePriceCents"))
  {
    m_basePriceCents = jsonValue.GetString("basePriceCents");

    m_basePriceCentsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("startTime"))
  {
    m_startTime = jsonValue.GetString("startTime");

    m_startTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("doctorEarningsCents"))
  {
    m_doctorEarningsCents = jsonValue.GetString("doctorEarningsCents");

    m_doctorEarningsCentsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("reimbursementDate"))
  {
    m_reimbursementDate = jsonValue.GetString("reimbursementDate");

    m_reimbursementDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("amountRefundedCents"))
  {
    m_amountRefundedCents = jsonValue.GetString("amountRefundedCents");

    m_amountRefundedCentsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("durationSeconds"))
  {
    m_durationSeconds = jsonValue.GetString("durationSeconds");

    m_durationSecondsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("totalPriceCents"))
  {
    m_totalPriceCents = jsonValue.GetString("totalPriceCents");

    m_totalPriceCentsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("doctorServiceFeeCents"))
  {
    m_doctorServiceFeeCents = jsonValue.GetString("doctorServiceFeeCents");

    m_doctorServiceFeeCentsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("cancellationDate"))
  {
    m_cancellationDate = jsonValue.GetString("cancellationDate");

    m_cancellationDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("doctorId"))
  {
    m_doctorId = jsonValue.GetString("doctorId");

    m_doctorIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("patientServiceFeeCents"))
  {
    m_patientServiceFeeCents = jsonValue.GetString("patientServiceFeeCents");

    m_patientServiceFeeCentsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("patientId"))
  {
    m_patientId = jsonValue.GetString("patientId");

    m_patientIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("appointmentState"))
  {
    m_appointmentState = jsonValue.GetString("appointmentState");

    m_appointmentStateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("dateBooked"))
  {
    m_dateBooked = jsonValue.GetString("dateBooked");

    m_dateBookedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

    m_idHasBeenSet = true;
  }

  return *this;
}

JsonValue GetAppointmentsResult_appointmentsItem::Jsonize() const
{
  JsonValue payload;

  if(m_chargeIdHasBeenSet)
  {
   payload.WithString("chargeId", m_chargeId);

  }

  if(m_serviceIdHasBeenSet)
  {
   payload.WithString("serviceId", m_serviceId);

  }

  if(m_basePriceCentsHasBeenSet)
  {
   payload.WithString("basePriceCents", m_basePriceCents);

  }

  if(m_startTimeHasBeenSet)
  {
   payload.WithString("startTime", m_startTime);

  }

  if(m_doctorEarningsCentsHasBeenSet)
  {
   payload.WithString("doctorEarningsCents", m_doctorEarningsCents);

  }

  if(m_reimbursementDateHasBeenSet)
  {
   payload.WithString("reimbursementDate", m_reimbursementDate);

  }

  if(m_amountRefundedCentsHasBeenSet)
  {
   payload.WithString("amountRefundedCents", m_amountRefundedCents);

  }

  if(m_durationSecondsHasBeenSet)
  {
   payload.WithString("durationSeconds", m_durationSeconds);

  }

  if(m_totalPriceCentsHasBeenSet)
  {
   payload.WithString("totalPriceCents", m_totalPriceCents);

  }

  if(m_doctorServiceFeeCentsHasBeenSet)
  {
   payload.WithString("doctorServiceFeeCents", m_doctorServiceFeeCents);

  }

  if(m_cancellationDateHasBeenSet)
  {
   payload.WithString("cancellationDate", m_cancellationDate);

  }

  if(m_doctorIdHasBeenSet)
  {
   payload.WithString("doctorId", m_doctorId);

  }

  if(m_patientServiceFeeCentsHasBeenSet)
  {
   payload.WithString("patientServiceFeeCents", m_patientServiceFeeCents);

  }

  if(m_patientIdHasBeenSet)
  {
   payload.WithString("patientId", m_patientId);

  }

  if(m_appointmentStateHasBeenSet)
  {
   payload.WithString("appointmentState", m_appointmentState);

  }

  if(m_dateBookedHasBeenSet)
  {
   payload.WithString("dateBooked", m_dateBooked);

  }

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  return payload;
}

} // namespace Model
} // namespace VitalServices
} // namespace Aws