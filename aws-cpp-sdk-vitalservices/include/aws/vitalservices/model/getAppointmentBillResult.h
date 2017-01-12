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
  class AWS_VITALSERVICES_API getAppointmentBillResult
  {
  public:
    getAppointmentBillResult();
    getAppointmentBillResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    getAppointmentBillResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    
    inline const Aws::String& GetVersion() const{ return m_version; }

    
    inline void SetVersion(const Aws::String& value) { m_version = value; }

    
    inline void SetVersion(Aws::String&& value) { m_version = value; }

    
    inline void SetVersion(const char* value) { m_version.assign(value); }

    
    inline getAppointmentBillResult& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}

    
    inline getAppointmentBillResult& WithVersion(Aws::String&& value) { SetVersion(value); return *this;}

    
    inline getAppointmentBillResult& WithVersion(const char* value) { SetVersion(value); return *this;}

    
    inline const Aws::String& GetBasePrice() const{ return m_basePrice; }

    
    inline void SetBasePrice(const Aws::String& value) { m_basePrice = value; }

    
    inline void SetBasePrice(Aws::String&& value) { m_basePrice = value; }

    
    inline void SetBasePrice(const char* value) { m_basePrice.assign(value); }

    
    inline getAppointmentBillResult& WithBasePrice(const Aws::String& value) { SetBasePrice(value); return *this;}

    
    inline getAppointmentBillResult& WithBasePrice(Aws::String&& value) { SetBasePrice(value); return *this;}

    
    inline getAppointmentBillResult& WithBasePrice(const char* value) { SetBasePrice(value); return *this;}

    
    inline const Aws::String& GetDoctorServiceFee() const{ return m_doctorServiceFee; }

    
    inline void SetDoctorServiceFee(const Aws::String& value) { m_doctorServiceFee = value; }

    
    inline void SetDoctorServiceFee(Aws::String&& value) { m_doctorServiceFee = value; }

    
    inline void SetDoctorServiceFee(const char* value) { m_doctorServiceFee.assign(value); }

    
    inline getAppointmentBillResult& WithDoctorServiceFee(const Aws::String& value) { SetDoctorServiceFee(value); return *this;}

    
    inline getAppointmentBillResult& WithDoctorServiceFee(Aws::String&& value) { SetDoctorServiceFee(value); return *this;}

    
    inline getAppointmentBillResult& WithDoctorServiceFee(const char* value) { SetDoctorServiceFee(value); return *this;}

    
    inline const Aws::String& GetTotalPrice() const{ return m_totalPrice; }

    
    inline void SetTotalPrice(const Aws::String& value) { m_totalPrice = value; }

    
    inline void SetTotalPrice(Aws::String&& value) { m_totalPrice = value; }

    
    inline void SetTotalPrice(const char* value) { m_totalPrice.assign(value); }

    
    inline getAppointmentBillResult& WithTotalPrice(const Aws::String& value) { SetTotalPrice(value); return *this;}

    
    inline getAppointmentBillResult& WithTotalPrice(Aws::String&& value) { SetTotalPrice(value); return *this;}

    
    inline getAppointmentBillResult& WithTotalPrice(const char* value) { SetTotalPrice(value); return *this;}

    
    inline const Aws::String& GetPatientServiceFee() const{ return m_patientServiceFee; }

    
    inline void SetPatientServiceFee(const Aws::String& value) { m_patientServiceFee = value; }

    
    inline void SetPatientServiceFee(Aws::String&& value) { m_patientServiceFee = value; }

    
    inline void SetPatientServiceFee(const char* value) { m_patientServiceFee.assign(value); }

    
    inline getAppointmentBillResult& WithPatientServiceFee(const Aws::String& value) { SetPatientServiceFee(value); return *this;}

    
    inline getAppointmentBillResult& WithPatientServiceFee(Aws::String&& value) { SetPatientServiceFee(value); return *this;}

    
    inline getAppointmentBillResult& WithPatientServiceFee(const char* value) { SetPatientServiceFee(value); return *this;}

  private:
    Aws::String m_version;
    Aws::String m_basePrice;
    Aws::String m_doctorServiceFee;
    Aws::String m_totalPrice;
    Aws::String m_patientServiceFee;
  };

} // namespace Model
} // namespace VitalServices
} // namespace Aws
