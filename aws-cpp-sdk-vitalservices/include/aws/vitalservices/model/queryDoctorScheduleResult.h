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
#include <aws/vitalservices/model/ClientDoctorScheduleTimeSlot.h>

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
  class AWS_VITALSERVICES_API queryDoctorScheduleResult
  {
  public:
    queryDoctorScheduleResult();
    queryDoctorScheduleResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    queryDoctorScheduleResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    
    inline const Aws::Vector<ClientDoctorScheduleTimeSlot>& GetTimeSlots() const{ return m_timeSlots; }

    
    inline void SetTimeSlots(const Aws::Vector<ClientDoctorScheduleTimeSlot>& value) { m_timeSlots = value; }

    
    inline void SetTimeSlots(Aws::Vector<ClientDoctorScheduleTimeSlot>&& value) { m_timeSlots = value; }

    
    inline queryDoctorScheduleResult& WithTimeSlots(const Aws::Vector<ClientDoctorScheduleTimeSlot>& value) { SetTimeSlots(value); return *this;}

    
    inline queryDoctorScheduleResult& WithTimeSlots(Aws::Vector<ClientDoctorScheduleTimeSlot>&& value) { SetTimeSlots(value); return *this;}

    
    inline queryDoctorScheduleResult& AddTimeSlots(const ClientDoctorScheduleTimeSlot& value) { m_timeSlots.push_back(value); return *this; }

    
    inline queryDoctorScheduleResult& AddTimeSlots(ClientDoctorScheduleTimeSlot&& value) { m_timeSlots.push_back(value); return *this; }

  private:
    Aws::Vector<ClientDoctorScheduleTimeSlot> m_timeSlots;
  };

} // namespace Model
} // namespace VitalServices
} // namespace Aws
