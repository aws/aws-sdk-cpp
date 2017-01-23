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
  class AWS_VITALSERVICES_API getAppointmentBillRequest : public VitalServicesRequest
  {
  public:
    getAppointmentBillRequest();
    Aws::String SerializePayload() const override;

    
    inline const Aws::String& GetTotalPriceCents() const{ return m_totalPriceCents; }

    
    inline void SetTotalPriceCents(const Aws::String& value) { m_totalPriceCentsHasBeenSet = true; m_totalPriceCents = value; }

    
    inline void SetTotalPriceCents(Aws::String&& value) { m_totalPriceCentsHasBeenSet = true; m_totalPriceCents = value; }

    
    inline void SetTotalPriceCents(const char* value) { m_totalPriceCentsHasBeenSet = true; m_totalPriceCents.assign(value); }

    
    inline getAppointmentBillRequest& WithTotalPriceCents(const Aws::String& value) { SetTotalPriceCents(value); return *this;}

    
    inline getAppointmentBillRequest& WithTotalPriceCents(Aws::String&& value) { SetTotalPriceCents(value); return *this;}

    
    inline getAppointmentBillRequest& WithTotalPriceCents(const char* value) { SetTotalPriceCents(value); return *this;}

    
    inline const Aws::String& GetBillFingerprint() const{ return m_billFingerprint; }

    
    inline void SetBillFingerprint(const Aws::String& value) { m_billFingerprintHasBeenSet = true; m_billFingerprint = value; }

    
    inline void SetBillFingerprint(Aws::String&& value) { m_billFingerprintHasBeenSet = true; m_billFingerprint = value; }

    
    inline void SetBillFingerprint(const char* value) { m_billFingerprintHasBeenSet = true; m_billFingerprint.assign(value); }

    
    inline getAppointmentBillRequest& WithBillFingerprint(const Aws::String& value) { SetBillFingerprint(value); return *this;}

    
    inline getAppointmentBillRequest& WithBillFingerprint(Aws::String&& value) { SetBillFingerprint(value); return *this;}

    
    inline getAppointmentBillRequest& WithBillFingerprint(const char* value) { SetBillFingerprint(value); return *this;}

    
    inline const Aws::String& GetServiceId() const{ return m_serviceId; }

    
    inline void SetServiceId(const Aws::String& value) { m_serviceIdHasBeenSet = true; m_serviceId = value; }

    
    inline void SetServiceId(Aws::String&& value) { m_serviceIdHasBeenSet = true; m_serviceId = value; }

    
    inline void SetServiceId(const char* value) { m_serviceIdHasBeenSet = true; m_serviceId.assign(value); }

    
    inline getAppointmentBillRequest& WithServiceId(const Aws::String& value) { SetServiceId(value); return *this;}

    
    inline getAppointmentBillRequest& WithServiceId(Aws::String&& value) { SetServiceId(value); return *this;}

    
    inline getAppointmentBillRequest& WithServiceId(const char* value) { SetServiceId(value); return *this;}

    
    inline const Aws::String& GetStartTime() const{ return m_startTime; }

    
    inline void SetStartTime(const Aws::String& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    
    inline void SetStartTime(Aws::String&& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    
    inline void SetStartTime(const char* value) { m_startTimeHasBeenSet = true; m_startTime.assign(value); }

    
    inline getAppointmentBillRequest& WithStartTime(const Aws::String& value) { SetStartTime(value); return *this;}

    
    inline getAppointmentBillRequest& WithStartTime(Aws::String&& value) { SetStartTime(value); return *this;}

    
    inline getAppointmentBillRequest& WithStartTime(const char* value) { SetStartTime(value); return *this;}

    
    inline const Aws::String& GetDoctorId() const{ return m_doctorId; }

    
    inline void SetDoctorId(const Aws::String& value) { m_doctorIdHasBeenSet = true; m_doctorId = value; }

    
    inline void SetDoctorId(Aws::String&& value) { m_doctorIdHasBeenSet = true; m_doctorId = value; }

    
    inline void SetDoctorId(const char* value) { m_doctorIdHasBeenSet = true; m_doctorId.assign(value); }

    
    inline getAppointmentBillRequest& WithDoctorId(const Aws::String& value) { SetDoctorId(value); return *this;}

    
    inline getAppointmentBillRequest& WithDoctorId(Aws::String&& value) { SetDoctorId(value); return *this;}

    
    inline getAppointmentBillRequest& WithDoctorId(const char* value) { SetDoctorId(value); return *this;}

  private:
    Aws::String m_totalPriceCents;
    bool m_totalPriceCentsHasBeenSet;
    Aws::String m_billFingerprint;
    bool m_billFingerprintHasBeenSet;
    Aws::String m_serviceId;
    bool m_serviceIdHasBeenSet;
    Aws::String m_startTime;
    bool m_startTimeHasBeenSet;
    Aws::String m_doctorId;
    bool m_doctorIdHasBeenSet;
  };

} // namespace Model
} // namespace VitalServices
} // namespace Aws
