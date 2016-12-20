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
#include <aws/vitalservices/VitalServicesRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace VitalServices
{
namespace Model
{

  /**
   */
  class AWS_VITALSERVICES_API queryDoctorScheduleRequest : public VitalServicesRequest
  {
  public:
    queryDoctorScheduleRequest();
    Aws::String SerializePayload() const override;

    
    inline const Aws::String& GetDoctorId() const{ return m_doctorId; }

    
    inline void SetDoctorId(const Aws::String& value) { m_doctorIdHasBeenSet = true; m_doctorId = value; }

    
    inline void SetDoctorId(Aws::String&& value) { m_doctorIdHasBeenSet = true; m_doctorId = value; }

    
    inline void SetDoctorId(const char* value) { m_doctorIdHasBeenSet = true; m_doctorId.assign(value); }

    
    inline queryDoctorScheduleRequest& WithDoctorId(const Aws::String& value) { SetDoctorId(value); return *this;}

    
    inline queryDoctorScheduleRequest& WithDoctorId(Aws::String&& value) { SetDoctorId(value); return *this;}

    
    inline queryDoctorScheduleRequest& WithDoctorId(const char* value) { SetDoctorId(value); return *this;}

    
    inline const Aws::String& GetLastTime() const{ return m_lastTime; }

    
    inline void SetLastTime(const Aws::String& value) { m_lastTimeHasBeenSet = true; m_lastTime = value; }

    
    inline void SetLastTime(Aws::String&& value) { m_lastTimeHasBeenSet = true; m_lastTime = value; }

    
    inline void SetLastTime(const char* value) { m_lastTimeHasBeenSet = true; m_lastTime.assign(value); }

    
    inline queryDoctorScheduleRequest& WithLastTime(const Aws::String& value) { SetLastTime(value); return *this;}

    
    inline queryDoctorScheduleRequest& WithLastTime(Aws::String&& value) { SetLastTime(value); return *this;}

    
    inline queryDoctorScheduleRequest& WithLastTime(const char* value) { SetLastTime(value); return *this;}

    
    inline const Aws::String& GetFirstTime() const{ return m_firstTime; }

    
    inline void SetFirstTime(const Aws::String& value) { m_firstTimeHasBeenSet = true; m_firstTime = value; }

    
    inline void SetFirstTime(Aws::String&& value) { m_firstTimeHasBeenSet = true; m_firstTime = value; }

    
    inline void SetFirstTime(const char* value) { m_firstTimeHasBeenSet = true; m_firstTime.assign(value); }

    
    inline queryDoctorScheduleRequest& WithFirstTime(const Aws::String& value) { SetFirstTime(value); return *this;}

    
    inline queryDoctorScheduleRequest& WithFirstTime(Aws::String&& value) { SetFirstTime(value); return *this;}

    
    inline queryDoctorScheduleRequest& WithFirstTime(const char* value) { SetFirstTime(value); return *this;}

  private:
    Aws::String m_doctorId;
    bool m_doctorIdHasBeenSet;
    Aws::String m_lastTime;
    bool m_lastTimeHasBeenSet;
    Aws::String m_firstTime;
    bool m_firstTimeHasBeenSet;
  };

} // namespace Model
} // namespace VitalServices
} // namespace Aws
