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
  class AWS_VITALSERVICES_API getAppointmentPaymentMethodRequest : public VitalServicesRequest
  {
  public:
    getAppointmentPaymentMethodRequest();
    Aws::String SerializePayload() const override;

    
    inline const Aws::String& GetAppointmentId() const{ return m_appointmentId; }

    
    inline void SetAppointmentId(const Aws::String& value) { m_appointmentIdHasBeenSet = true; m_appointmentId = value; }

    
    inline void SetAppointmentId(Aws::String&& value) { m_appointmentIdHasBeenSet = true; m_appointmentId = value; }

    
    inline void SetAppointmentId(const char* value) { m_appointmentIdHasBeenSet = true; m_appointmentId.assign(value); }

    
    inline getAppointmentPaymentMethodRequest& WithAppointmentId(const Aws::String& value) { SetAppointmentId(value); return *this;}

    
    inline getAppointmentPaymentMethodRequest& WithAppointmentId(Aws::String&& value) { SetAppointmentId(value); return *this;}

    
    inline getAppointmentPaymentMethodRequest& WithAppointmentId(const char* value) { SetAppointmentId(value); return *this;}

  private:
    Aws::String m_appointmentId;
    bool m_appointmentIdHasBeenSet;
  };

} // namespace Model
} // namespace VitalServices
} // namespace Aws
