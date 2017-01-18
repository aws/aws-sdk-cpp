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

    
    inline const Aws::String& GetPatientServiceFee() const{ return m_patientServiceFee; }

    
    inline void SetPatientServiceFee(const Aws::String& value) { m_patientServiceFeeHasBeenSet = true; m_patientServiceFee = value; }

    
    inline void SetPatientServiceFee(Aws::String&& value) { m_patientServiceFeeHasBeenSet = true; m_patientServiceFee = value; }

    
    inline void SetPatientServiceFee(const char* value) { m_patientServiceFeeHasBeenSet = true; m_patientServiceFee.assign(value); }

    
    inline CancelAppointmentResult_appointment& WithPatientServiceFee(const Aws::String& value) { SetPatientServiceFee(value); return *this;}

    
    inline CancelAppointmentResult_appointment& WithPatientServiceFee(Aws::String&& value) { SetPatientServiceFee(value); return *this;}

    
    inline CancelAppointmentResult_appointment& WithPatientServiceFee(const char* value) { SetPatientServiceFee(value); return *this;}

    
    inline const Aws::String& GetAmountRefunded() const{ return m_amountRefunded; }

    
    inline void SetAmountRefunded(const Aws::String& value) { m_amountRefundedHasBeenSet = true; m_amountRefunded = value; }

    
    inline void SetAmountRefunded(Aws::String&& value) { m_amountRefundedHasBeenSet = true; m_amountRefunded = value; }

    
    inline void SetAmountRefunded(const char* value) { m_amountRefundedHasBeenSet = true; m_amountRefunded.assign(value); }

    
    inline CancelAppointmentResult_appointment& WithAmountRefunded(const Aws::String& value) { SetAmountRefunded(value); return *this;}

    
    inline CancelAppointmentResult_appointment& WithAmountRefunded(Aws::String&& value) { SetAmountRefunded(value); return *this;}

    
    inline CancelAppointmentResult_appointment& WithAmountRefunded(const char* value) { SetAmountRefunded(value); return *this;}

    
    inline const Aws::String& GetAppointmentState() const{ return m_appointmentState; }

    
    inline void SetAppointmentState(const Aws::String& value) { m_appointmentStateHasBeenSet = true; m_appointmentState = value; }

    
    inline void SetAppointmentState(Aws::String&& value) { m_appointmentStateHasBeenSet = true; m_appointmentState = value; }

    
    inline void SetAppointmentState(const char* value) { m_appointmentStateHasBeenSet = true; m_appointmentState.assign(value); }

    
    inline CancelAppointmentResult_appointment& WithAppointmentState(const Aws::String& value) { SetAppointmentState(value); return *this;}

    
    inline CancelAppointmentResult_appointment& WithAppointmentState(Aws::String&& value) { SetAppointmentState(value); return *this;}

    
    inline CancelAppointmentResult_appointment& WithAppointmentState(const char* value) { SetAppointmentState(value); return *this;}

    
    inline const Aws::String& GetServiceId() const{ return m_serviceId; }

    
    inline void SetServiceId(const Aws::String& value) { m_serviceIdHasBeenSet = true; m_serviceId = value; }

    
    inline void SetServiceId(Aws::String&& value) { m_serviceIdHasBeenSet = true; m_serviceId = value; }

    
    inline void SetServiceId(const char* value) { m_serviceIdHasBeenSet = true; m_serviceId.assign(value); }

    
    inline CancelAppointmentResult_appointment& WithServiceId(const Aws::String& value) { SetServiceId(value); return *this;}

    
    inline CancelAppointmentResult_appointment& WithServiceId(Aws::String&& value) { SetServiceId(value); return *this;}

    
    inline CancelAppointmentResult_appointment& WithServiceId(const char* value) { SetServiceId(value); return *this;}

    
    inline const Aws::String& GetId() const{ return m_id; }

    
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = value; }

    
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    
    inline CancelAppointmentResult_appointment& WithId(const Aws::String& value) { SetId(value); return *this;}

    
    inline CancelAppointmentResult_appointment& WithId(Aws::String&& value) { SetId(value); return *this;}

    
    inline CancelAppointmentResult_appointment& WithId(const char* value) { SetId(value); return *this;}

    
    inline const Aws::String& GetReimbursementDate() const{ return m_reimbursementDate; }

    
    inline void SetReimbursementDate(const Aws::String& value) { m_reimbursementDateHasBeenSet = true; m_reimbursementDate = value; }

    
    inline void SetReimbursementDate(Aws::String&& value) { m_reimbursementDateHasBeenSet = true; m_reimbursementDate = value; }

    
    inline void SetReimbursementDate(const char* value) { m_reimbursementDateHasBeenSet = true; m_reimbursementDate.assign(value); }

    
    inline CancelAppointmentResult_appointment& WithReimbursementDate(const Aws::String& value) { SetReimbursementDate(value); return *this;}

    
    inline CancelAppointmentResult_appointment& WithReimbursementDate(Aws::String&& value) { SetReimbursementDate(value); return *this;}

    
    inline CancelAppointmentResult_appointment& WithReimbursementDate(const char* value) { SetReimbursementDate(value); return *this;}

    
    inline const Aws::String& GetDoctorId() const{ return m_doctorId; }

    
    inline void SetDoctorId(const Aws::String& value) { m_doctorIdHasBeenSet = true; m_doctorId = value; }

    
    inline void SetDoctorId(Aws::String&& value) { m_doctorIdHasBeenSet = true; m_doctorId = value; }

    
    inline void SetDoctorId(const char* value) { m_doctorIdHasBeenSet = true; m_doctorId.assign(value); }

    
    inline CancelAppointmentResult_appointment& WithDoctorId(const Aws::String& value) { SetDoctorId(value); return *this;}

    
    inline CancelAppointmentResult_appointment& WithDoctorId(Aws::String&& value) { SetDoctorId(value); return *this;}

    
    inline CancelAppointmentResult_appointment& WithDoctorId(const char* value) { SetDoctorId(value); return *this;}

    
    inline const Aws::String& GetTotalPrice() const{ return m_totalPrice; }

    
    inline void SetTotalPrice(const Aws::String& value) { m_totalPriceHasBeenSet = true; m_totalPrice = value; }

    
    inline void SetTotalPrice(Aws::String&& value) { m_totalPriceHasBeenSet = true; m_totalPrice = value; }

    
    inline void SetTotalPrice(const char* value) { m_totalPriceHasBeenSet = true; m_totalPrice.assign(value); }

    
    inline CancelAppointmentResult_appointment& WithTotalPrice(const Aws::String& value) { SetTotalPrice(value); return *this;}

    
    inline CancelAppointmentResult_appointment& WithTotalPrice(Aws::String&& value) { SetTotalPrice(value); return *this;}

    
    inline CancelAppointmentResult_appointment& WithTotalPrice(const char* value) { SetTotalPrice(value); return *this;}

    
    inline const Aws::String& GetDoctorServiceFee() const{ return m_doctorServiceFee; }

    
    inline void SetDoctorServiceFee(const Aws::String& value) { m_doctorServiceFeeHasBeenSet = true; m_doctorServiceFee = value; }

    
    inline void SetDoctorServiceFee(Aws::String&& value) { m_doctorServiceFeeHasBeenSet = true; m_doctorServiceFee = value; }

    
    inline void SetDoctorServiceFee(const char* value) { m_doctorServiceFeeHasBeenSet = true; m_doctorServiceFee.assign(value); }

    
    inline CancelAppointmentResult_appointment& WithDoctorServiceFee(const Aws::String& value) { SetDoctorServiceFee(value); return *this;}

    
    inline CancelAppointmentResult_appointment& WithDoctorServiceFee(Aws::String&& value) { SetDoctorServiceFee(value); return *this;}

    
    inline CancelAppointmentResult_appointment& WithDoctorServiceFee(const char* value) { SetDoctorServiceFee(value); return *this;}

    
    inline const Aws::String& GetDurationSeconds() const{ return m_durationSeconds; }

    
    inline void SetDurationSeconds(const Aws::String& value) { m_durationSecondsHasBeenSet = true; m_durationSeconds = value; }

    
    inline void SetDurationSeconds(Aws::String&& value) { m_durationSecondsHasBeenSet = true; m_durationSeconds = value; }

    
    inline void SetDurationSeconds(const char* value) { m_durationSecondsHasBeenSet = true; m_durationSeconds.assign(value); }

    
    inline CancelAppointmentResult_appointment& WithDurationSeconds(const Aws::String& value) { SetDurationSeconds(value); return *this;}

    
    inline CancelAppointmentResult_appointment& WithDurationSeconds(Aws::String&& value) { SetDurationSeconds(value); return *this;}

    
    inline CancelAppointmentResult_appointment& WithDurationSeconds(const char* value) { SetDurationSeconds(value); return *this;}

    
    inline const Aws::String& GetDoctorEarnings() const{ return m_doctorEarnings; }

    
    inline void SetDoctorEarnings(const Aws::String& value) { m_doctorEarningsHasBeenSet = true; m_doctorEarnings = value; }

    
    inline void SetDoctorEarnings(Aws::String&& value) { m_doctorEarningsHasBeenSet = true; m_doctorEarnings = value; }

    
    inline void SetDoctorEarnings(const char* value) { m_doctorEarningsHasBeenSet = true; m_doctorEarnings.assign(value); }

    
    inline CancelAppointmentResult_appointment& WithDoctorEarnings(const Aws::String& value) { SetDoctorEarnings(value); return *this;}

    
    inline CancelAppointmentResult_appointment& WithDoctorEarnings(Aws::String&& value) { SetDoctorEarnings(value); return *this;}

    
    inline CancelAppointmentResult_appointment& WithDoctorEarnings(const char* value) { SetDoctorEarnings(value); return *this;}

    
    inline const Aws::String& GetChargeId() const{ return m_chargeId; }

    
    inline void SetChargeId(const Aws::String& value) { m_chargeIdHasBeenSet = true; m_chargeId = value; }

    
    inline void SetChargeId(Aws::String&& value) { m_chargeIdHasBeenSet = true; m_chargeId = value; }

    
    inline void SetChargeId(const char* value) { m_chargeIdHasBeenSet = true; m_chargeId.assign(value); }

    
    inline CancelAppointmentResult_appointment& WithChargeId(const Aws::String& value) { SetChargeId(value); return *this;}

    
    inline CancelAppointmentResult_appointment& WithChargeId(Aws::String&& value) { SetChargeId(value); return *this;}

    
    inline CancelAppointmentResult_appointment& WithChargeId(const char* value) { SetChargeId(value); return *this;}

    
    inline const Aws::String& GetPatientId() const{ return m_patientId; }

    
    inline void SetPatientId(const Aws::String& value) { m_patientIdHasBeenSet = true; m_patientId = value; }

    
    inline void SetPatientId(Aws::String&& value) { m_patientIdHasBeenSet = true; m_patientId = value; }

    
    inline void SetPatientId(const char* value) { m_patientIdHasBeenSet = true; m_patientId.assign(value); }

    
    inline CancelAppointmentResult_appointment& WithPatientId(const Aws::String& value) { SetPatientId(value); return *this;}

    
    inline CancelAppointmentResult_appointment& WithPatientId(Aws::String&& value) { SetPatientId(value); return *this;}

    
    inline CancelAppointmentResult_appointment& WithPatientId(const char* value) { SetPatientId(value); return *this;}

    
    inline const Aws::String& GetBasePrice() const{ return m_basePrice; }

    
    inline void SetBasePrice(const Aws::String& value) { m_basePriceHasBeenSet = true; m_basePrice = value; }

    
    inline void SetBasePrice(Aws::String&& value) { m_basePriceHasBeenSet = true; m_basePrice = value; }

    
    inline void SetBasePrice(const char* value) { m_basePriceHasBeenSet = true; m_basePrice.assign(value); }

    
    inline CancelAppointmentResult_appointment& WithBasePrice(const Aws::String& value) { SetBasePrice(value); return *this;}

    
    inline CancelAppointmentResult_appointment& WithBasePrice(Aws::String&& value) { SetBasePrice(value); return *this;}

    
    inline CancelAppointmentResult_appointment& WithBasePrice(const char* value) { SetBasePrice(value); return *this;}

    
    inline const Aws::String& GetDateBooked() const{ return m_dateBooked; }

    
    inline void SetDateBooked(const Aws::String& value) { m_dateBookedHasBeenSet = true; m_dateBooked = value; }

    
    inline void SetDateBooked(Aws::String&& value) { m_dateBookedHasBeenSet = true; m_dateBooked = value; }

    
    inline void SetDateBooked(const char* value) { m_dateBookedHasBeenSet = true; m_dateBooked.assign(value); }

    
    inline CancelAppointmentResult_appointment& WithDateBooked(const Aws::String& value) { SetDateBooked(value); return *this;}

    
    inline CancelAppointmentResult_appointment& WithDateBooked(Aws::String&& value) { SetDateBooked(value); return *this;}

    
    inline CancelAppointmentResult_appointment& WithDateBooked(const char* value) { SetDateBooked(value); return *this;}

    
    inline const Aws::String& GetStartTime() const{ return m_startTime; }

    
    inline void SetStartTime(const Aws::String& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    
    inline void SetStartTime(Aws::String&& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    
    inline void SetStartTime(const char* value) { m_startTimeHasBeenSet = true; m_startTime.assign(value); }

    
    inline CancelAppointmentResult_appointment& WithStartTime(const Aws::String& value) { SetStartTime(value); return *this;}

    
    inline CancelAppointmentResult_appointment& WithStartTime(Aws::String&& value) { SetStartTime(value); return *this;}

    
    inline CancelAppointmentResult_appointment& WithStartTime(const char* value) { SetStartTime(value); return *this;}

    
    inline const Aws::String& GetCancellationDate() const{ return m_cancellationDate; }

    
    inline void SetCancellationDate(const Aws::String& value) { m_cancellationDateHasBeenSet = true; m_cancellationDate = value; }

    
    inline void SetCancellationDate(Aws::String&& value) { m_cancellationDateHasBeenSet = true; m_cancellationDate = value; }

    
    inline void SetCancellationDate(const char* value) { m_cancellationDateHasBeenSet = true; m_cancellationDate.assign(value); }

    
    inline CancelAppointmentResult_appointment& WithCancellationDate(const Aws::String& value) { SetCancellationDate(value); return *this;}

    
    inline CancelAppointmentResult_appointment& WithCancellationDate(Aws::String&& value) { SetCancellationDate(value); return *this;}

    
    inline CancelAppointmentResult_appointment& WithCancellationDate(const char* value) { SetCancellationDate(value); return *this;}

  private:
    Aws::String m_patientServiceFee;
    bool m_patientServiceFeeHasBeenSet;
    Aws::String m_amountRefunded;
    bool m_amountRefundedHasBeenSet;
    Aws::String m_appointmentState;
    bool m_appointmentStateHasBeenSet;
    Aws::String m_serviceId;
    bool m_serviceIdHasBeenSet;
    Aws::String m_id;
    bool m_idHasBeenSet;
    Aws::String m_reimbursementDate;
    bool m_reimbursementDateHasBeenSet;
    Aws::String m_doctorId;
    bool m_doctorIdHasBeenSet;
    Aws::String m_totalPrice;
    bool m_totalPriceHasBeenSet;
    Aws::String m_doctorServiceFee;
    bool m_doctorServiceFeeHasBeenSet;
    Aws::String m_durationSeconds;
    bool m_durationSecondsHasBeenSet;
    Aws::String m_doctorEarnings;
    bool m_doctorEarningsHasBeenSet;
    Aws::String m_chargeId;
    bool m_chargeIdHasBeenSet;
    Aws::String m_patientId;
    bool m_patientIdHasBeenSet;
    Aws::String m_basePrice;
    bool m_basePriceHasBeenSet;
    Aws::String m_dateBooked;
    bool m_dateBookedHasBeenSet;
    Aws::String m_startTime;
    bool m_startTimeHasBeenSet;
    Aws::String m_cancellationDate;
    bool m_cancellationDateHasBeenSet;
  };

} // namespace Model
} // namespace VitalServices
} // namespace Aws
