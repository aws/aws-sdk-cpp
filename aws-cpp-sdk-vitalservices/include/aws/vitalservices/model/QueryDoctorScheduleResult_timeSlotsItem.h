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

  class AWS_VITALSERVICES_API QueryDoctorScheduleResult_timeSlotsItem
  {
  public:
    QueryDoctorScheduleResult_timeSlotsItem();
    QueryDoctorScheduleResult_timeSlotsItem(const Aws::Utils::Json::JsonValue& jsonValue);
    QueryDoctorScheduleResult_timeSlotsItem& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    
    inline const Aws::String& GetTimeSlot() const{ return m_timeSlot; }

    
    inline void SetTimeSlot(const Aws::String& value) { m_timeSlotHasBeenSet = true; m_timeSlot = value; }

    
    inline void SetTimeSlot(Aws::String&& value) { m_timeSlotHasBeenSet = true; m_timeSlot = value; }

    
    inline void SetTimeSlot(const char* value) { m_timeSlotHasBeenSet = true; m_timeSlot.assign(value); }

    
    inline QueryDoctorScheduleResult_timeSlotsItem& WithTimeSlot(const Aws::String& value) { SetTimeSlot(value); return *this;}

    
    inline QueryDoctorScheduleResult_timeSlotsItem& WithTimeSlot(Aws::String&& value) { SetTimeSlot(value); return *this;}

    
    inline QueryDoctorScheduleResult_timeSlotsItem& WithTimeSlot(const char* value) { SetTimeSlot(value); return *this;}

    
    inline const Aws::String& GetAppointmentId() const{ return m_appointmentId; }

    
    inline void SetAppointmentId(const Aws::String& value) { m_appointmentIdHasBeenSet = true; m_appointmentId = value; }

    
    inline void SetAppointmentId(Aws::String&& value) { m_appointmentIdHasBeenSet = true; m_appointmentId = value; }

    
    inline void SetAppointmentId(const char* value) { m_appointmentIdHasBeenSet = true; m_appointmentId.assign(value); }

    
    inline QueryDoctorScheduleResult_timeSlotsItem& WithAppointmentId(const Aws::String& value) { SetAppointmentId(value); return *this;}

    
    inline QueryDoctorScheduleResult_timeSlotsItem& WithAppointmentId(Aws::String&& value) { SetAppointmentId(value); return *this;}

    
    inline QueryDoctorScheduleResult_timeSlotsItem& WithAppointmentId(const char* value) { SetAppointmentId(value); return *this;}

  private:
    Aws::String m_timeSlot;
    bool m_timeSlotHasBeenSet;
    Aws::String m_appointmentId;
    bool m_appointmentIdHasBeenSet;
  };

} // namespace Model
} // namespace VitalServices
} // namespace Aws
