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
  class AWS_VITALSERVICES_API searchForDoctorsRequest : public VitalServicesRequest
  {
  public:
    searchForDoctorsRequest();
    Aws::String SerializePayload() const override;

    
    inline double GetLatitude() const{ return m_latitude; }

    
    inline void SetLatitude(double value) { m_latitudeHasBeenSet = true; m_latitude = value; }

    
    inline searchForDoctorsRequest& WithLatitude(double value) { SetLatitude(value); return *this;}

    
    inline const Aws::String& GetSpecialtyId() const{ return m_specialtyId; }

    
    inline void SetSpecialtyId(const Aws::String& value) { m_specialtyIdHasBeenSet = true; m_specialtyId = value; }

    
    inline void SetSpecialtyId(Aws::String&& value) { m_specialtyIdHasBeenSet = true; m_specialtyId = value; }

    
    inline void SetSpecialtyId(const char* value) { m_specialtyIdHasBeenSet = true; m_specialtyId.assign(value); }

    
    inline searchForDoctorsRequest& WithSpecialtyId(const Aws::String& value) { SetSpecialtyId(value); return *this;}

    
    inline searchForDoctorsRequest& WithSpecialtyId(Aws::String&& value) { SetSpecialtyId(value); return *this;}

    
    inline searchForDoctorsRequest& WithSpecialtyId(const char* value) { SetSpecialtyId(value); return *this;}

    
    inline const Aws::String& GetServiceId() const{ return m_serviceId; }

    
    inline void SetServiceId(const Aws::String& value) { m_serviceIdHasBeenSet = true; m_serviceId = value; }

    
    inline void SetServiceId(Aws::String&& value) { m_serviceIdHasBeenSet = true; m_serviceId = value; }

    
    inline void SetServiceId(const char* value) { m_serviceIdHasBeenSet = true; m_serviceId.assign(value); }

    
    inline searchForDoctorsRequest& WithServiceId(const Aws::String& value) { SetServiceId(value); return *this;}

    
    inline searchForDoctorsRequest& WithServiceId(Aws::String&& value) { SetServiceId(value); return *this;}

    
    inline searchForDoctorsRequest& WithServiceId(const char* value) { SetServiceId(value); return *this;}

    
    inline const Aws::String& GetFirstTime() const{ return m_firstTime; }

    
    inline void SetFirstTime(const Aws::String& value) { m_firstTimeHasBeenSet = true; m_firstTime = value; }

    
    inline void SetFirstTime(Aws::String&& value) { m_firstTimeHasBeenSet = true; m_firstTime = value; }

    
    inline void SetFirstTime(const char* value) { m_firstTimeHasBeenSet = true; m_firstTime.assign(value); }

    
    inline searchForDoctorsRequest& WithFirstTime(const Aws::String& value) { SetFirstTime(value); return *this;}

    
    inline searchForDoctorsRequest& WithFirstTime(Aws::String&& value) { SetFirstTime(value); return *this;}

    
    inline searchForDoctorsRequest& WithFirstTime(const char* value) { SetFirstTime(value); return *this;}

    
    inline double GetLongitude() const{ return m_longitude; }

    
    inline void SetLongitude(double value) { m_longitudeHasBeenSet = true; m_longitude = value; }

    
    inline searchForDoctorsRequest& WithLongitude(double value) { SetLongitude(value); return *this;}

    
    inline const Aws::String& GetLastTime() const{ return m_lastTime; }

    
    inline void SetLastTime(const Aws::String& value) { m_lastTimeHasBeenSet = true; m_lastTime = value; }

    
    inline void SetLastTime(Aws::String&& value) { m_lastTimeHasBeenSet = true; m_lastTime = value; }

    
    inline void SetLastTime(const char* value) { m_lastTimeHasBeenSet = true; m_lastTime.assign(value); }

    
    inline searchForDoctorsRequest& WithLastTime(const Aws::String& value) { SetLastTime(value); return *this;}

    
    inline searchForDoctorsRequest& WithLastTime(Aws::String&& value) { SetLastTime(value); return *this;}

    
    inline searchForDoctorsRequest& WithLastTime(const char* value) { SetLastTime(value); return *this;}

  private:
    double m_latitude;
    bool m_latitudeHasBeenSet;
    Aws::String m_specialtyId;
    bool m_specialtyIdHasBeenSet;
    Aws::String m_serviceId;
    bool m_serviceIdHasBeenSet;
    Aws::String m_firstTime;
    bool m_firstTimeHasBeenSet;
    double m_longitude;
    bool m_longitudeHasBeenSet;
    Aws::String m_lastTime;
    bool m_lastTimeHasBeenSet;
  };

} // namespace Model
} // namespace VitalServices
} // namespace Aws
