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
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

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
  class AWS_VITALSERVICES_API cancelAppointmentResult
  {
  public:
    cancelAppointmentResult();
    cancelAppointmentResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    cancelAppointmentResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    
    inline const Aws::String& GetTotalPrice() const{ return m_totalPrice; }

    
    inline void SetTotalPrice(const Aws::String& value) { m_totalPrice = value; }

    
    inline void SetTotalPrice(Aws::String&& value) { m_totalPrice = value; }

    
    inline void SetTotalPrice(const char* value) { m_totalPrice.assign(value); }

    
    inline cancelAppointmentResult& WithTotalPrice(const Aws::String& value) { SetTotalPrice(value); return *this;}

    
    inline cancelAppointmentResult& WithTotalPrice(Aws::String&& value) { SetTotalPrice(value); return *this;}

    
    inline cancelAppointmentResult& WithTotalPrice(const char* value) { SetTotalPrice(value); return *this;}

    
    inline const Aws::String& GetBasePrice() const{ return m_basePrice; }

    
    inline void SetBasePrice(const Aws::String& value) { m_basePrice = value; }

    
    inline void SetBasePrice(Aws::String&& value) { m_basePrice = value; }

    
    inline void SetBasePrice(const char* value) { m_basePrice.assign(value); }

    
    inline cancelAppointmentResult& WithBasePrice(const Aws::String& value) { SetBasePrice(value); return *this;}

    
    inline cancelAppointmentResult& WithBasePrice(Aws::String&& value) { SetBasePrice(value); return *this;}

    
    inline cancelAppointmentResult& WithBasePrice(const char* value) { SetBasePrice(value); return *this;}

    
    inline const Aws::String& GetPatientId() const{ return m_patientId; }

    
    inline void SetPatientId(const Aws::String& value) { m_patientId = value; }

    
    inline void SetPatientId(Aws::String&& value) { m_patientId = value; }

    
    inline void SetPatientId(const char* value) { m_patientId.assign(value); }

    
    inline cancelAppointmentResult& WithPatientId(const Aws::String& value) { SetPatientId(value); return *this;}

    
    inline cancelAppointmentResult& WithPatientId(Aws::String&& value) { SetPatientId(value); return *this;}

    
    inline cancelAppointmentResult& WithPatientId(const char* value) { SetPatientId(value); return *this;}

    
    inline const Aws::String& GetServiceId() const{ return m_serviceId; }

    
    inline void SetServiceId(const Aws::String& value) { m_serviceId = value; }

    
    inline void SetServiceId(Aws::String&& value) { m_serviceId = value; }

    
    inline void SetServiceId(const char* value) { m_serviceId.assign(value); }

    
    inline cancelAppointmentResult& WithServiceId(const Aws::String& value) { SetServiceId(value); return *this;}

    
    inline cancelAppointmentResult& WithServiceId(Aws::String&& value) { SetServiceId(value); return *this;}

    
    inline cancelAppointmentResult& WithServiceId(const char* value) { SetServiceId(value); return *this;}

    
    inline const Aws::String& GetCancellationDate() const{ return m_cancellationDate; }

    
    inline void SetCancellationDate(const Aws::String& value) { m_cancellationDate = value; }

    
    inline void SetCancellationDate(Aws::String&& value) { m_cancellationDate = value; }

    
    inline void SetCancellationDate(const char* value) { m_cancellationDate.assign(value); }

    
    inline cancelAppointmentResult& WithCancellationDate(const Aws::String& value) { SetCancellationDate(value); return *this;}

    
    inline cancelAppointmentResult& WithCancellationDate(Aws::String&& value) { SetCancellationDate(value); return *this;}

    
    inline cancelAppointmentResult& WithCancellationDate(const char* value) { SetCancellationDate(value); return *this;}

    
    inline const Aws::String& GetAppointmentState() const{ return m_appointmentState; }

    
    inline void SetAppointmentState(const Aws::String& value) { m_appointmentState = value; }

    
    inline void SetAppointmentState(Aws::String&& value) { m_appointmentState = value; }

    
    inline void SetAppointmentState(const char* value) { m_appointmentState.assign(value); }

    
    inline cancelAppointmentResult& WithAppointmentState(const Aws::String& value) { SetAppointmentState(value); return *this;}

    
    inline cancelAppointmentResult& WithAppointmentState(Aws::String&& value) { SetAppointmentState(value); return *this;}

    
    inline cancelAppointmentResult& WithAppointmentState(const char* value) { SetAppointmentState(value); return *this;}

    
    inline const Aws::String& GetId() const{ return m_id; }

    
    inline void SetId(const Aws::String& value) { m_id = value; }

    
    inline void SetId(Aws::String&& value) { m_id = value; }

    
    inline void SetId(const char* value) { m_id.assign(value); }

    
    inline cancelAppointmentResult& WithId(const Aws::String& value) { SetId(value); return *this;}

    
    inline cancelAppointmentResult& WithId(Aws::String&& value) { SetId(value); return *this;}

    
    inline cancelAppointmentResult& WithId(const char* value) { SetId(value); return *this;}

    
    inline const Aws::String& GetDateBooked() const{ return m_dateBooked; }

    
    inline void SetDateBooked(const Aws::String& value) { m_dateBooked = value; }

    
    inline void SetDateBooked(Aws::String&& value) { m_dateBooked = value; }

    
    inline void SetDateBooked(const char* value) { m_dateBooked.assign(value); }

    
    inline cancelAppointmentResult& WithDateBooked(const Aws::String& value) { SetDateBooked(value); return *this;}

    
    inline cancelAppointmentResult& WithDateBooked(Aws::String&& value) { SetDateBooked(value); return *this;}

    
    inline cancelAppointmentResult& WithDateBooked(const char* value) { SetDateBooked(value); return *this;}

    
    inline const Aws::String& GetStartTime() const{ return m_startTime; }

    
    inline void SetStartTime(const Aws::String& value) { m_startTime = value; }

    
    inline void SetStartTime(Aws::String&& value) { m_startTime = value; }

    
    inline void SetStartTime(const char* value) { m_startTime.assign(value); }

    
    inline cancelAppointmentResult& WithStartTime(const Aws::String& value) { SetStartTime(value); return *this;}

    
    inline cancelAppointmentResult& WithStartTime(Aws::String&& value) { SetStartTime(value); return *this;}

    
    inline cancelAppointmentResult& WithStartTime(const char* value) { SetStartTime(value); return *this;}

    
    inline const Aws::String& GetAmountRefunded() const{ return m_amountRefunded; }

    
    inline void SetAmountRefunded(const Aws::String& value) { m_amountRefunded = value; }

    
    inline void SetAmountRefunded(Aws::String&& value) { m_amountRefunded = value; }

    
    inline void SetAmountRefunded(const char* value) { m_amountRefunded.assign(value); }

    
    inline cancelAppointmentResult& WithAmountRefunded(const Aws::String& value) { SetAmountRefunded(value); return *this;}

    
    inline cancelAppointmentResult& WithAmountRefunded(Aws::String&& value) { SetAmountRefunded(value); return *this;}

    
    inline cancelAppointmentResult& WithAmountRefunded(const char* value) { SetAmountRefunded(value); return *this;}

    
    inline const Aws::String& GetPatientServiceFee() const{ return m_patientServiceFee; }

    
    inline void SetPatientServiceFee(const Aws::String& value) { m_patientServiceFee = value; }

    
    inline void SetPatientServiceFee(Aws::String&& value) { m_patientServiceFee = value; }

    
    inline void SetPatientServiceFee(const char* value) { m_patientServiceFee.assign(value); }

    
    inline cancelAppointmentResult& WithPatientServiceFee(const Aws::String& value) { SetPatientServiceFee(value); return *this;}

    
    inline cancelAppointmentResult& WithPatientServiceFee(Aws::String&& value) { SetPatientServiceFee(value); return *this;}

    
    inline cancelAppointmentResult& WithPatientServiceFee(const char* value) { SetPatientServiceFee(value); return *this;}

    
    inline const Aws::String& GetDoctorEarnings() const{ return m_doctorEarnings; }

    
    inline void SetDoctorEarnings(const Aws::String& value) { m_doctorEarnings = value; }

    
    inline void SetDoctorEarnings(Aws::String&& value) { m_doctorEarnings = value; }

    
    inline void SetDoctorEarnings(const char* value) { m_doctorEarnings.assign(value); }

    
    inline cancelAppointmentResult& WithDoctorEarnings(const Aws::String& value) { SetDoctorEarnings(value); return *this;}

    
    inline cancelAppointmentResult& WithDoctorEarnings(Aws::String&& value) { SetDoctorEarnings(value); return *this;}

    
    inline cancelAppointmentResult& WithDoctorEarnings(const char* value) { SetDoctorEarnings(value); return *this;}

    
    inline const Aws::String& GetDoctorId() const{ return m_doctorId; }

    
    inline void SetDoctorId(const Aws::String& value) { m_doctorId = value; }

    
    inline void SetDoctorId(Aws::String&& value) { m_doctorId = value; }

    
    inline void SetDoctorId(const char* value) { m_doctorId.assign(value); }

    
    inline cancelAppointmentResult& WithDoctorId(const Aws::String& value) { SetDoctorId(value); return *this;}

    
    inline cancelAppointmentResult& WithDoctorId(Aws::String&& value) { SetDoctorId(value); return *this;}

    
    inline cancelAppointmentResult& WithDoctorId(const char* value) { SetDoctorId(value); return *this;}

    
    inline const Aws::String& GetDoctorServiceFee() const{ return m_doctorServiceFee; }

    
    inline void SetDoctorServiceFee(const Aws::String& value) { m_doctorServiceFee = value; }

    
    inline void SetDoctorServiceFee(Aws::String&& value) { m_doctorServiceFee = value; }

    
    inline void SetDoctorServiceFee(const char* value) { m_doctorServiceFee.assign(value); }

    
    inline cancelAppointmentResult& WithDoctorServiceFee(const Aws::String& value) { SetDoctorServiceFee(value); return *this;}

    
    inline cancelAppointmentResult& WithDoctorServiceFee(Aws::String&& value) { SetDoctorServiceFee(value); return *this;}

    
    inline cancelAppointmentResult& WithDoctorServiceFee(const char* value) { SetDoctorServiceFee(value); return *this;}

    
    inline const Aws::String& GetDurationSeconds() const{ return m_durationSeconds; }

    
    inline void SetDurationSeconds(const Aws::String& value) { m_durationSeconds = value; }

    
    inline void SetDurationSeconds(Aws::String&& value) { m_durationSeconds = value; }

    
    inline void SetDurationSeconds(const char* value) { m_durationSeconds.assign(value); }

    
    inline cancelAppointmentResult& WithDurationSeconds(const Aws::String& value) { SetDurationSeconds(value); return *this;}

    
    inline cancelAppointmentResult& WithDurationSeconds(Aws::String&& value) { SetDurationSeconds(value); return *this;}

    
    inline cancelAppointmentResult& WithDurationSeconds(const char* value) { SetDurationSeconds(value); return *this;}

    
    inline const Aws::String& GetChargeId() const{ return m_chargeId; }

    
    inline void SetChargeId(const Aws::String& value) { m_chargeId = value; }

    
    inline void SetChargeId(Aws::String&& value) { m_chargeId = value; }

    
    inline void SetChargeId(const char* value) { m_chargeId.assign(value); }

    
    inline cancelAppointmentResult& WithChargeId(const Aws::String& value) { SetChargeId(value); return *this;}

    
    inline cancelAppointmentResult& WithChargeId(Aws::String&& value) { SetChargeId(value); return *this;}

    
    inline cancelAppointmentResult& WithChargeId(const char* value) { SetChargeId(value); return *this;}

    
    inline const Aws::String& GetReimbursementDate() const{ return m_reimbursementDate; }

    
    inline void SetReimbursementDate(const Aws::String& value) { m_reimbursementDate = value; }

    
    inline void SetReimbursementDate(Aws::String&& value) { m_reimbursementDate = value; }

    
    inline void SetReimbursementDate(const char* value) { m_reimbursementDate.assign(value); }

    
    inline cancelAppointmentResult& WithReimbursementDate(const Aws::String& value) { SetReimbursementDate(value); return *this;}

    
    inline cancelAppointmentResult& WithReimbursementDate(Aws::String&& value) { SetReimbursementDate(value); return *this;}

    
    inline cancelAppointmentResult& WithReimbursementDate(const char* value) { SetReimbursementDate(value); return *this;}

  private:
    Aws::String m_totalPrice;
    Aws::String m_basePrice;
    Aws::String m_patientId;
    Aws::String m_serviceId;
    Aws::String m_cancellationDate;
    Aws::String m_appointmentState;
    Aws::String m_id;
    Aws::String m_dateBooked;
    Aws::String m_startTime;
    Aws::String m_amountRefunded;
    Aws::String m_patientServiceFee;
    Aws::String m_doctorEarnings;
    Aws::String m_doctorId;
    Aws::String m_doctorServiceFee;
    Aws::String m_durationSeconds;
    Aws::String m_chargeId;
    Aws::String m_reimbursementDate;
  };

} // namespace Model
} // namespace VitalServices
} // namespace Aws
