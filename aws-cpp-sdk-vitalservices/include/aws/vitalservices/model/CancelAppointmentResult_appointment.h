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
#pragma once
#include <aws/vitalservices/VitalServices_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace VitalServices
{
namespace Model
{

  class AWS_VITALSERVICES_API CancelAppointmentResult_appointment
  {
  public:
    CancelAppointmentResult_appointment();
    CancelAppointmentResult_appointment(const Aws::Utils::Json::JsonValue& jsonValue);
    CancelAppointmentResult_appointment& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    
    inline const Aws::String& GetChargeId() const{ return m_chargeId; }

    
    inline void SetChargeId(const Aws::String& value) { m_chargeIdHasBeenSet = true; m_chargeId = value; }

    
    inline void SetChargeId(Aws::String&& value) { m_chargeIdHasBeenSet = true; m_chargeId = value; }

    
    inline void SetChargeId(const char* value) { m_chargeIdHasBeenSet = true; m_chargeId.assign(value); }

    
    inline CancelAppointmentResult_appointment& WithChargeId(const Aws::String& value) { SetChargeId(value); return *this;}

    
    inline CancelAppointmentResult_appointment& WithChargeId(Aws::String&& value) { SetChargeId(value); return *this;}

    
    inline CancelAppointmentResult_appointment& WithChargeId(const char* value) { SetChargeId(value); return *this;}

    
    inline const Aws::String& GetServiceId() const{ return m_serviceId; }

    
    inline void SetServiceId(const Aws::String& value) { m_serviceIdHasBeenSet = true; m_serviceId = value; }

    
    inline void SetServiceId(Aws::String&& value) { m_serviceIdHasBeenSet = true; m_serviceId = value; }

    
    inline void SetServiceId(const char* value) { m_serviceIdHasBeenSet = true; m_serviceId.assign(value); }

    
    inline CancelAppointmentResult_appointment& WithServiceId(const Aws::String& value) { SetServiceId(value); return *this;}

    
    inline CancelAppointmentResult_appointment& WithServiceId(Aws::String&& value) { SetServiceId(value); return *this;}

    
    inline CancelAppointmentResult_appointment& WithServiceId(const char* value) { SetServiceId(value); return *this;}

    
    inline const Aws::String& GetBasePriceCents() const{ return m_basePriceCents; }

    
    inline void SetBasePriceCents(const Aws::String& value) { m_basePriceCentsHasBeenSet = true; m_basePriceCents = value; }

    
    inline void SetBasePriceCents(Aws::String&& value) { m_basePriceCentsHasBeenSet = true; m_basePriceCents = value; }

    
    inline void SetBasePriceCents(const char* value) { m_basePriceCentsHasBeenSet = true; m_basePriceCents.assign(value); }

    
    inline CancelAppointmentResult_appointment& WithBasePriceCents(const Aws::String& value) { SetBasePriceCents(value); return *this;}

    
    inline CancelAppointmentResult_appointment& WithBasePriceCents(Aws::String&& value) { SetBasePriceCents(value); return *this;}

    
    inline CancelAppointmentResult_appointment& WithBasePriceCents(const char* value) { SetBasePriceCents(value); return *this;}

    
    inline const Aws::String& GetStartTime() const{ return m_startTime; }

    
    inline void SetStartTime(const Aws::String& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    
    inline void SetStartTime(Aws::String&& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    
    inline void SetStartTime(const char* value) { m_startTimeHasBeenSet = true; m_startTime.assign(value); }

    
    inline CancelAppointmentResult_appointment& WithStartTime(const Aws::String& value) { SetStartTime(value); return *this;}

    
    inline CancelAppointmentResult_appointment& WithStartTime(Aws::String&& value) { SetStartTime(value); return *this;}

    
    inline CancelAppointmentResult_appointment& WithStartTime(const char* value) { SetStartTime(value); return *this;}

    
    inline const Aws::String& GetDoctorEarningsCents() const{ return m_doctorEarningsCents; }

    
    inline void SetDoctorEarningsCents(const Aws::String& value) { m_doctorEarningsCentsHasBeenSet = true; m_doctorEarningsCents = value; }

    
    inline void SetDoctorEarningsCents(Aws::String&& value) { m_doctorEarningsCentsHasBeenSet = true; m_doctorEarningsCents = value; }

    
    inline void SetDoctorEarningsCents(const char* value) { m_doctorEarningsCentsHasBeenSet = true; m_doctorEarningsCents.assign(value); }

    
    inline CancelAppointmentResult_appointment& WithDoctorEarningsCents(const Aws::String& value) { SetDoctorEarningsCents(value); return *this;}

    
    inline CancelAppointmentResult_appointment& WithDoctorEarningsCents(Aws::String&& value) { SetDoctorEarningsCents(value); return *this;}

    
    inline CancelAppointmentResult_appointment& WithDoctorEarningsCents(const char* value) { SetDoctorEarningsCents(value); return *this;}

    
    inline const Aws::String& GetReimbursementDate() const{ return m_reimbursementDate; }

    
    inline void SetReimbursementDate(const Aws::String& value) { m_reimbursementDateHasBeenSet = true; m_reimbursementDate = value; }

    
    inline void SetReimbursementDate(Aws::String&& value) { m_reimbursementDateHasBeenSet = true; m_reimbursementDate = value; }

    
    inline void SetReimbursementDate(const char* value) { m_reimbursementDateHasBeenSet = true; m_reimbursementDate.assign(value); }

    
    inline CancelAppointmentResult_appointment& WithReimbursementDate(const Aws::String& value) { SetReimbursementDate(value); return *this;}

    
    inline CancelAppointmentResult_appointment& WithReimbursementDate(Aws::String&& value) { SetReimbursementDate(value); return *this;}

    
    inline CancelAppointmentResult_appointment& WithReimbursementDate(const char* value) { SetReimbursementDate(value); return *this;}

    
    inline const Aws::String& GetAmountRefundedCents() const{ return m_amountRefundedCents; }

    
    inline void SetAmountRefundedCents(const Aws::String& value) { m_amountRefundedCentsHasBeenSet = true; m_amountRefundedCents = value; }

    
    inline void SetAmountRefundedCents(Aws::String&& value) { m_amountRefundedCentsHasBeenSet = true; m_amountRefundedCents = value; }

    
    inline void SetAmountRefundedCents(const char* value) { m_amountRefundedCentsHasBeenSet = true; m_amountRefundedCents.assign(value); }

    
    inline CancelAppointmentResult_appointment& WithAmountRefundedCents(const Aws::String& value) { SetAmountRefundedCents(value); return *this;}

    
    inline CancelAppointmentResult_appointment& WithAmountRefundedCents(Aws::String&& value) { SetAmountRefundedCents(value); return *this;}

    
    inline CancelAppointmentResult_appointment& WithAmountRefundedCents(const char* value) { SetAmountRefundedCents(value); return *this;}

    
    inline const Aws::String& GetDurationSeconds() const{ return m_durationSeconds; }

    
    inline void SetDurationSeconds(const Aws::String& value) { m_durationSecondsHasBeenSet = true; m_durationSeconds = value; }

    
    inline void SetDurationSeconds(Aws::String&& value) { m_durationSecondsHasBeenSet = true; m_durationSeconds = value; }

    
    inline void SetDurationSeconds(const char* value) { m_durationSecondsHasBeenSet = true; m_durationSeconds.assign(value); }

    
    inline CancelAppointmentResult_appointment& WithDurationSeconds(const Aws::String& value) { SetDurationSeconds(value); return *this;}

    
    inline CancelAppointmentResult_appointment& WithDurationSeconds(Aws::String&& value) { SetDurationSeconds(value); return *this;}

    
    inline CancelAppointmentResult_appointment& WithDurationSeconds(const char* value) { SetDurationSeconds(value); return *this;}

    
    inline const Aws::String& GetTotalPriceCents() const{ return m_totalPriceCents; }

    
    inline void SetTotalPriceCents(const Aws::String& value) { m_totalPriceCentsHasBeenSet = true; m_totalPriceCents = value; }

    
    inline void SetTotalPriceCents(Aws::String&& value) { m_totalPriceCentsHasBeenSet = true; m_totalPriceCents = value; }

    
    inline void SetTotalPriceCents(const char* value) { m_totalPriceCentsHasBeenSet = true; m_totalPriceCents.assign(value); }

    
    inline CancelAppointmentResult_appointment& WithTotalPriceCents(const Aws::String& value) { SetTotalPriceCents(value); return *this;}

    
    inline CancelAppointmentResult_appointment& WithTotalPriceCents(Aws::String&& value) { SetTotalPriceCents(value); return *this;}

    
    inline CancelAppointmentResult_appointment& WithTotalPriceCents(const char* value) { SetTotalPriceCents(value); return *this;}

    
    inline const Aws::String& GetDoctorServiceFeeCents() const{ return m_doctorServiceFeeCents; }

    
    inline void SetDoctorServiceFeeCents(const Aws::String& value) { m_doctorServiceFeeCentsHasBeenSet = true; m_doctorServiceFeeCents = value; }

    
    inline void SetDoctorServiceFeeCents(Aws::String&& value) { m_doctorServiceFeeCentsHasBeenSet = true; m_doctorServiceFeeCents = value; }

    
    inline void SetDoctorServiceFeeCents(const char* value) { m_doctorServiceFeeCentsHasBeenSet = true; m_doctorServiceFeeCents.assign(value); }

    
    inline CancelAppointmentResult_appointment& WithDoctorServiceFeeCents(const Aws::String& value) { SetDoctorServiceFeeCents(value); return *this;}

    
    inline CancelAppointmentResult_appointment& WithDoctorServiceFeeCents(Aws::String&& value) { SetDoctorServiceFeeCents(value); return *this;}

    
    inline CancelAppointmentResult_appointment& WithDoctorServiceFeeCents(const char* value) { SetDoctorServiceFeeCents(value); return *this;}

    
    inline const Aws::String& GetCancellationDate() const{ return m_cancellationDate; }

    
    inline void SetCancellationDate(const Aws::String& value) { m_cancellationDateHasBeenSet = true; m_cancellationDate = value; }

    
    inline void SetCancellationDate(Aws::String&& value) { m_cancellationDateHasBeenSet = true; m_cancellationDate = value; }

    
    inline void SetCancellationDate(const char* value) { m_cancellationDateHasBeenSet = true; m_cancellationDate.assign(value); }

    
    inline CancelAppointmentResult_appointment& WithCancellationDate(const Aws::String& value) { SetCancellationDate(value); return *this;}

    
    inline CancelAppointmentResult_appointment& WithCancellationDate(Aws::String&& value) { SetCancellationDate(value); return *this;}

    
    inline CancelAppointmentResult_appointment& WithCancellationDate(const char* value) { SetCancellationDate(value); return *this;}

    
    inline const Aws::String& GetDoctorId() const{ return m_doctorId; }

    
    inline void SetDoctorId(const Aws::String& value) { m_doctorIdHasBeenSet = true; m_doctorId = value; }

    
    inline void SetDoctorId(Aws::String&& value) { m_doctorIdHasBeenSet = true; m_doctorId = value; }

    
    inline void SetDoctorId(const char* value) { m_doctorIdHasBeenSet = true; m_doctorId.assign(value); }

    
    inline CancelAppointmentResult_appointment& WithDoctorId(const Aws::String& value) { SetDoctorId(value); return *this;}

    
    inline CancelAppointmentResult_appointment& WithDoctorId(Aws::String&& value) { SetDoctorId(value); return *this;}

    
    inline CancelAppointmentResult_appointment& WithDoctorId(const char* value) { SetDoctorId(value); return *this;}

    
    inline const Aws::String& GetPatientServiceFeeCents() const{ return m_patientServiceFeeCents; }

    
    inline void SetPatientServiceFeeCents(const Aws::String& value) { m_patientServiceFeeCentsHasBeenSet = true; m_patientServiceFeeCents = value; }

    
    inline void SetPatientServiceFeeCents(Aws::String&& value) { m_patientServiceFeeCentsHasBeenSet = true; m_patientServiceFeeCents = value; }

    
    inline void SetPatientServiceFeeCents(const char* value) { m_patientServiceFeeCentsHasBeenSet = true; m_patientServiceFeeCents.assign(value); }

    
    inline CancelAppointmentResult_appointment& WithPatientServiceFeeCents(const Aws::String& value) { SetPatientServiceFeeCents(value); return *this;}

    
    inline CancelAppointmentResult_appointment& WithPatientServiceFeeCents(Aws::String&& value) { SetPatientServiceFeeCents(value); return *this;}

    
    inline CancelAppointmentResult_appointment& WithPatientServiceFeeCents(const char* value) { SetPatientServiceFeeCents(value); return *this;}

    
    inline const Aws::String& GetPatientId() const{ return m_patientId; }

    
    inline void SetPatientId(const Aws::String& value) { m_patientIdHasBeenSet = true; m_patientId = value; }

    
    inline void SetPatientId(Aws::String&& value) { m_patientIdHasBeenSet = true; m_patientId = value; }

    
    inline void SetPatientId(const char* value) { m_patientIdHasBeenSet = true; m_patientId.assign(value); }

    
    inline CancelAppointmentResult_appointment& WithPatientId(const Aws::String& value) { SetPatientId(value); return *this;}

    
    inline CancelAppointmentResult_appointment& WithPatientId(Aws::String&& value) { SetPatientId(value); return *this;}

    
    inline CancelAppointmentResult_appointment& WithPatientId(const char* value) { SetPatientId(value); return *this;}

    
    inline const Aws::String& GetAppointmentState() const{ return m_appointmentState; }

    
    inline void SetAppointmentState(const Aws::String& value) { m_appointmentStateHasBeenSet = true; m_appointmentState = value; }

    
    inline void SetAppointmentState(Aws::String&& value) { m_appointmentStateHasBeenSet = true; m_appointmentState = value; }

    
    inline void SetAppointmentState(const char* value) { m_appointmentStateHasBeenSet = true; m_appointmentState.assign(value); }

    
    inline CancelAppointmentResult_appointment& WithAppointmentState(const Aws::String& value) { SetAppointmentState(value); return *this;}

    
    inline CancelAppointmentResult_appointment& WithAppointmentState(Aws::String&& value) { SetAppointmentState(value); return *this;}

    
    inline CancelAppointmentResult_appointment& WithAppointmentState(const char* value) { SetAppointmentState(value); return *this;}

    
    inline const Aws::String& GetDateBooked() const{ return m_dateBooked; }

    
    inline void SetDateBooked(const Aws::String& value) { m_dateBookedHasBeenSet = true; m_dateBooked = value; }

    
    inline void SetDateBooked(Aws::String&& value) { m_dateBookedHasBeenSet = true; m_dateBooked = value; }

    
    inline void SetDateBooked(const char* value) { m_dateBookedHasBeenSet = true; m_dateBooked.assign(value); }

    
    inline CancelAppointmentResult_appointment& WithDateBooked(const Aws::String& value) { SetDateBooked(value); return *this;}

    
    inline CancelAppointmentResult_appointment& WithDateBooked(Aws::String&& value) { SetDateBooked(value); return *this;}

    
    inline CancelAppointmentResult_appointment& WithDateBooked(const char* value) { SetDateBooked(value); return *this;}

    
    inline const Aws::String& GetId() const{ return m_id; }

    
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = value; }

    
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    
    inline CancelAppointmentResult_appointment& WithId(const Aws::String& value) { SetId(value); return *this;}

    
    inline CancelAppointmentResult_appointment& WithId(Aws::String&& value) { SetId(value); return *this;}

    
    inline CancelAppointmentResult_appointment& WithId(const char* value) { SetId(value); return *this;}

  private:
    Aws::String m_chargeId;
    bool m_chargeIdHasBeenSet;
    Aws::String m_serviceId;
    bool m_serviceIdHasBeenSet;
    Aws::String m_basePriceCents;
    bool m_basePriceCentsHasBeenSet;
    Aws::String m_startTime;
    bool m_startTimeHasBeenSet;
    Aws::String m_doctorEarningsCents;
    bool m_doctorEarningsCentsHasBeenSet;
    Aws::String m_reimbursementDate;
    bool m_reimbursementDateHasBeenSet;
    Aws::String m_amountRefundedCents;
    bool m_amountRefundedCentsHasBeenSet;
    Aws::String m_durationSeconds;
    bool m_durationSecondsHasBeenSet;
    Aws::String m_totalPriceCents;
    bool m_totalPriceCentsHasBeenSet;
    Aws::String m_doctorServiceFeeCents;
    bool m_doctorServiceFeeCentsHasBeenSet;
    Aws::String m_cancellationDate;
    bool m_cancellationDateHasBeenSet;
    Aws::String m_doctorId;
    bool m_doctorIdHasBeenSet;
    Aws::String m_patientServiceFeeCents;
    bool m_patientServiceFeeCentsHasBeenSet;
    Aws::String m_patientId;
    bool m_patientIdHasBeenSet;
    Aws::String m_appointmentState;
    bool m_appointmentStateHasBeenSet;
    Aws::String m_dateBooked;
    bool m_dateBookedHasBeenSet;
    Aws::String m_id;
    bool m_idHasBeenSet;
  };

} // namespace Model
} // namespace VitalServices
} // namespace Aws
