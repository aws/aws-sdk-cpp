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

    
    inline const Aws::String& GetDoctorServiceFeeCents() const{ return m_doctorServiceFeeCents; }

    
    inline void SetDoctorServiceFeeCents(const Aws::String& value) { m_doctorServiceFeeCents = value; }

    
    inline void SetDoctorServiceFeeCents(Aws::String&& value) { m_doctorServiceFeeCents = value; }

    
    inline void SetDoctorServiceFeeCents(const char* value) { m_doctorServiceFeeCents.assign(value); }

    
    inline getAppointmentBillResult& WithDoctorServiceFeeCents(const Aws::String& value) { SetDoctorServiceFeeCents(value); return *this;}

    
    inline getAppointmentBillResult& WithDoctorServiceFeeCents(Aws::String&& value) { SetDoctorServiceFeeCents(value); return *this;}

    
    inline getAppointmentBillResult& WithDoctorServiceFeeCents(const char* value) { SetDoctorServiceFeeCents(value); return *this;}

    
    inline const Aws::String& GetPatientServiceFeeCents() const{ return m_patientServiceFeeCents; }

    
    inline void SetPatientServiceFeeCents(const Aws::String& value) { m_patientServiceFeeCents = value; }

    
    inline void SetPatientServiceFeeCents(Aws::String&& value) { m_patientServiceFeeCents = value; }

    
    inline void SetPatientServiceFeeCents(const char* value) { m_patientServiceFeeCents.assign(value); }

    
    inline getAppointmentBillResult& WithPatientServiceFeeCents(const Aws::String& value) { SetPatientServiceFeeCents(value); return *this;}

    
    inline getAppointmentBillResult& WithPatientServiceFeeCents(Aws::String&& value) { SetPatientServiceFeeCents(value); return *this;}

    
    inline getAppointmentBillResult& WithPatientServiceFeeCents(const char* value) { SetPatientServiceFeeCents(value); return *this;}

    
    inline const Aws::String& GetTotalPriceCents() const{ return m_totalPriceCents; }

    
    inline void SetTotalPriceCents(const Aws::String& value) { m_totalPriceCents = value; }

    
    inline void SetTotalPriceCents(Aws::String&& value) { m_totalPriceCents = value; }

    
    inline void SetTotalPriceCents(const char* value) { m_totalPriceCents.assign(value); }

    
    inline getAppointmentBillResult& WithTotalPriceCents(const Aws::String& value) { SetTotalPriceCents(value); return *this;}

    
    inline getAppointmentBillResult& WithTotalPriceCents(Aws::String&& value) { SetTotalPriceCents(value); return *this;}

    
    inline getAppointmentBillResult& WithTotalPriceCents(const char* value) { SetTotalPriceCents(value); return *this;}

    
    inline const Aws::String& GetBasePriceCents() const{ return m_basePriceCents; }

    
    inline void SetBasePriceCents(const Aws::String& value) { m_basePriceCents = value; }

    
    inline void SetBasePriceCents(Aws::String&& value) { m_basePriceCents = value; }

    
    inline void SetBasePriceCents(const char* value) { m_basePriceCents.assign(value); }

    
    inline getAppointmentBillResult& WithBasePriceCents(const Aws::String& value) { SetBasePriceCents(value); return *this;}

    
    inline getAppointmentBillResult& WithBasePriceCents(Aws::String&& value) { SetBasePriceCents(value); return *this;}

    
    inline getAppointmentBillResult& WithBasePriceCents(const char* value) { SetBasePriceCents(value); return *this;}

    
    inline const Aws::String& GetFingerprint() const{ return m_fingerprint; }

    
    inline void SetFingerprint(const Aws::String& value) { m_fingerprint = value; }

    
    inline void SetFingerprint(Aws::String&& value) { m_fingerprint = value; }

    
    inline void SetFingerprint(const char* value) { m_fingerprint.assign(value); }

    
    inline getAppointmentBillResult& WithFingerprint(const Aws::String& value) { SetFingerprint(value); return *this;}

    
    inline getAppointmentBillResult& WithFingerprint(Aws::String&& value) { SetFingerprint(value); return *this;}

    
    inline getAppointmentBillResult& WithFingerprint(const char* value) { SetFingerprint(value); return *this;}

  private:
    Aws::String m_doctorServiceFeeCents;
    Aws::String m_patientServiceFeeCents;
    Aws::String m_totalPriceCents;
    Aws::String m_basePriceCents;
    Aws::String m_fingerprint;
  };

} // namespace Model
} // namespace VitalServices
} // namespace Aws
