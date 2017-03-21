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
  class AWS_VITALSERVICES_API updateDoctorRequest : public VitalServicesRequest
  {
  public:
    updateDoctorRequest();
    Aws::String SerializePayload() const override;

    
    inline const Aws::String& GetDoctorId() const{ return m_doctorId; }

    
    inline void SetDoctorId(const Aws::String& value) { m_doctorIdHasBeenSet = true; m_doctorId = value; }

    
    inline void SetDoctorId(Aws::String&& value) { m_doctorIdHasBeenSet = true; m_doctorId = value; }

    
    inline void SetDoctorId(const char* value) { m_doctorIdHasBeenSet = true; m_doctorId.assign(value); }

    
    inline updateDoctorRequest& WithDoctorId(const Aws::String& value) { SetDoctorId(value); return *this;}

    
    inline updateDoctorRequest& WithDoctorId(Aws::String&& value) { SetDoctorId(value); return *this;}

    
    inline updateDoctorRequest& WithDoctorId(const char* value) { SetDoctorId(value); return *this;}

    
    inline const Aws::String& GetOfficeNumber() const{ return m_officeNumber; }

    
    inline void SetOfficeNumber(const Aws::String& value) { m_officeNumberHasBeenSet = true; m_officeNumber = value; }

    
    inline void SetOfficeNumber(Aws::String&& value) { m_officeNumberHasBeenSet = true; m_officeNumber = value; }

    
    inline void SetOfficeNumber(const char* value) { m_officeNumberHasBeenSet = true; m_officeNumber.assign(value); }

    
    inline updateDoctorRequest& WithOfficeNumber(const Aws::String& value) { SetOfficeNumber(value); return *this;}

    
    inline updateDoctorRequest& WithOfficeNumber(Aws::String&& value) { SetOfficeNumber(value); return *this;}

    
    inline updateDoctorRequest& WithOfficeNumber(const char* value) { SetOfficeNumber(value); return *this;}

  private:
    Aws::String m_doctorId;
    bool m_doctorIdHasBeenSet;
    Aws::String m_officeNumber;
    bool m_officeNumberHasBeenSet;
  };

} // namespace Model
} // namespace VitalServices
} // namespace Aws
