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

    
    inline const Aws::String& GetLastTimeExclusive() const{ return m_lastTimeExclusive; }

    
    inline void SetLastTimeExclusive(const Aws::String& value) { m_lastTimeExclusiveHasBeenSet = true; m_lastTimeExclusive = value; }

    
    inline void SetLastTimeExclusive(Aws::String&& value) { m_lastTimeExclusiveHasBeenSet = true; m_lastTimeExclusive = value; }

    
    inline void SetLastTimeExclusive(const char* value) { m_lastTimeExclusiveHasBeenSet = true; m_lastTimeExclusive.assign(value); }

    
    inline queryDoctorScheduleRequest& WithLastTimeExclusive(const Aws::String& value) { SetLastTimeExclusive(value); return *this;}

    
    inline queryDoctorScheduleRequest& WithLastTimeExclusive(Aws::String&& value) { SetLastTimeExclusive(value); return *this;}

    
    inline queryDoctorScheduleRequest& WithLastTimeExclusive(const char* value) { SetLastTimeExclusive(value); return *this;}

    
    inline const Aws::String& GetFirstTimeInclusive() const{ return m_firstTimeInclusive; }

    
    inline void SetFirstTimeInclusive(const Aws::String& value) { m_firstTimeInclusiveHasBeenSet = true; m_firstTimeInclusive = value; }

    
    inline void SetFirstTimeInclusive(Aws::String&& value) { m_firstTimeInclusiveHasBeenSet = true; m_firstTimeInclusive = value; }

    
    inline void SetFirstTimeInclusive(const char* value) { m_firstTimeInclusiveHasBeenSet = true; m_firstTimeInclusive.assign(value); }

    
    inline queryDoctorScheduleRequest& WithFirstTimeInclusive(const Aws::String& value) { SetFirstTimeInclusive(value); return *this;}

    
    inline queryDoctorScheduleRequest& WithFirstTimeInclusive(Aws::String&& value) { SetFirstTimeInclusive(value); return *this;}

    
    inline queryDoctorScheduleRequest& WithFirstTimeInclusive(const char* value) { SetFirstTimeInclusive(value); return *this;}

  private:
    Aws::String m_doctorId;
    bool m_doctorIdHasBeenSet;
    Aws::String m_lastTimeExclusive;
    bool m_lastTimeExclusiveHasBeenSet;
    Aws::String m_firstTimeInclusive;
    bool m_firstTimeInclusiveHasBeenSet;
  };

} // namespace Model
} // namespace VitalServices
} // namespace Aws
