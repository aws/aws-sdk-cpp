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
  class AWS_VITALSERVICES_API registerDoctorRequest : public VitalServicesRequest
  {
  public:
    registerDoctorRequest();
    Aws::String SerializePayload() const override;

    
    inline const Aws::String& GetSpecialtyId() const{ return m_specialtyId; }

    
    inline void SetSpecialtyId(const Aws::String& value) { m_specialtyIdHasBeenSet = true; m_specialtyId = value; }

    
    inline void SetSpecialtyId(Aws::String&& value) { m_specialtyIdHasBeenSet = true; m_specialtyId = value; }

    
    inline void SetSpecialtyId(const char* value) { m_specialtyIdHasBeenSet = true; m_specialtyId.assign(value); }

    
    inline registerDoctorRequest& WithSpecialtyId(const Aws::String& value) { SetSpecialtyId(value); return *this;}

    
    inline registerDoctorRequest& WithSpecialtyId(Aws::String&& value) { SetSpecialtyId(value); return *this;}

    
    inline registerDoctorRequest& WithSpecialtyId(const char* value) { SetSpecialtyId(value); return *this;}

    
    inline const Aws::String& GetOfficeNumber() const{ return m_officeNumber; }

    
    inline void SetOfficeNumber(const Aws::String& value) { m_officeNumberHasBeenSet = true; m_officeNumber = value; }

    
    inline void SetOfficeNumber(Aws::String&& value) { m_officeNumberHasBeenSet = true; m_officeNumber = value; }

    
    inline void SetOfficeNumber(const char* value) { m_officeNumberHasBeenSet = true; m_officeNumber.assign(value); }

    
    inline registerDoctorRequest& WithOfficeNumber(const Aws::String& value) { SetOfficeNumber(value); return *this;}

    
    inline registerDoctorRequest& WithOfficeNumber(Aws::String&& value) { SetOfficeNumber(value); return *this;}

    
    inline registerDoctorRequest& WithOfficeNumber(const char* value) { SetOfficeNumber(value); return *this;}

  private:
    Aws::String m_specialtyId;
    bool m_specialtyIdHasBeenSet;
    Aws::String m_officeNumber;
    bool m_officeNumberHasBeenSet;
  };

} // namespace Model
} // namespace VitalServices
} // namespace Aws
