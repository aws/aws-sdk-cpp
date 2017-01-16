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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/vitalservices/model/GetAppointmentsResult_patientsItem.h>
#include <aws/vitalservices/model/GetAppointmentsResult_doctorsItem.h>
#include <aws/vitalservices/model/GetAppointmentsResult_appointmentsItem.h>

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
  class AWS_VITALSERVICES_API getAppointmentsWithUserResult
  {
  public:
    getAppointmentsWithUserResult();
    getAppointmentsWithUserResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    getAppointmentsWithUserResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    
    inline const Aws::Vector<GetAppointmentsResult_patientsItem>& GetPatients() const{ return m_patients; }

    
    inline void SetPatients(const Aws::Vector<GetAppointmentsResult_patientsItem>& value) { m_patients = value; }

    
    inline void SetPatients(Aws::Vector<GetAppointmentsResult_patientsItem>&& value) { m_patients = value; }

    
    inline getAppointmentsWithUserResult& WithPatients(const Aws::Vector<GetAppointmentsResult_patientsItem>& value) { SetPatients(value); return *this;}

    
    inline getAppointmentsWithUserResult& WithPatients(Aws::Vector<GetAppointmentsResult_patientsItem>&& value) { SetPatients(value); return *this;}

    
    inline getAppointmentsWithUserResult& AddPatients(const GetAppointmentsResult_patientsItem& value) { m_patients.push_back(value); return *this; }

    
    inline getAppointmentsWithUserResult& AddPatients(GetAppointmentsResult_patientsItem&& value) { m_patients.push_back(value); return *this; }

    
    inline const Aws::Vector<GetAppointmentsResult_doctorsItem>& GetDoctors() const{ return m_doctors; }

    
    inline void SetDoctors(const Aws::Vector<GetAppointmentsResult_doctorsItem>& value) { m_doctors = value; }

    
    inline void SetDoctors(Aws::Vector<GetAppointmentsResult_doctorsItem>&& value) { m_doctors = value; }

    
    inline getAppointmentsWithUserResult& WithDoctors(const Aws::Vector<GetAppointmentsResult_doctorsItem>& value) { SetDoctors(value); return *this;}

    
    inline getAppointmentsWithUserResult& WithDoctors(Aws::Vector<GetAppointmentsResult_doctorsItem>&& value) { SetDoctors(value); return *this;}

    
    inline getAppointmentsWithUserResult& AddDoctors(const GetAppointmentsResult_doctorsItem& value) { m_doctors.push_back(value); return *this; }

    
    inline getAppointmentsWithUserResult& AddDoctors(GetAppointmentsResult_doctorsItem&& value) { m_doctors.push_back(value); return *this; }

    
    inline const Aws::Vector<GetAppointmentsResult_appointmentsItem>& GetAppointments() const{ return m_appointments; }

    
    inline void SetAppointments(const Aws::Vector<GetAppointmentsResult_appointmentsItem>& value) { m_appointments = value; }

    
    inline void SetAppointments(Aws::Vector<GetAppointmentsResult_appointmentsItem>&& value) { m_appointments = value; }

    
    inline getAppointmentsWithUserResult& WithAppointments(const Aws::Vector<GetAppointmentsResult_appointmentsItem>& value) { SetAppointments(value); return *this;}

    
    inline getAppointmentsWithUserResult& WithAppointments(Aws::Vector<GetAppointmentsResult_appointmentsItem>&& value) { SetAppointments(value); return *this;}

    
    inline getAppointmentsWithUserResult& AddAppointments(const GetAppointmentsResult_appointmentsItem& value) { m_appointments.push_back(value); return *this; }

    
    inline getAppointmentsWithUserResult& AddAppointments(GetAppointmentsResult_appointmentsItem&& value) { m_appointments.push_back(value); return *this; }

  private:
    Aws::Vector<GetAppointmentsResult_patientsItem> m_patients;
    Aws::Vector<GetAppointmentsResult_doctorsItem> m_doctors;
    Aws::Vector<GetAppointmentsResult_appointmentsItem> m_appointments;
  };

} // namespace Model
} // namespace VitalServices
} // namespace Aws
