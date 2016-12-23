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
  class AWS_VITALSERVICES_API registerUserRequest : public VitalServicesRequest
  {
  public:
    registerUserRequest();
    Aws::String SerializePayload() const override;

    
    inline const Aws::String& GetMobileNumber() const{ return m_mobileNumber; }

    
    inline void SetMobileNumber(const Aws::String& value) { m_mobileNumberHasBeenSet = true; m_mobileNumber = value; }

    
    inline void SetMobileNumber(Aws::String&& value) { m_mobileNumberHasBeenSet = true; m_mobileNumber = value; }

    
    inline void SetMobileNumber(const char* value) { m_mobileNumberHasBeenSet = true; m_mobileNumber.assign(value); }

    
    inline registerUserRequest& WithMobileNumber(const Aws::String& value) { SetMobileNumber(value); return *this;}

    
    inline registerUserRequest& WithMobileNumber(Aws::String&& value) { SetMobileNumber(value); return *this;}

    
    inline registerUserRequest& WithMobileNumber(const char* value) { SetMobileNumber(value); return *this;}

    
    inline const Aws::String& GetEmail() const{ return m_email; }

    
    inline void SetEmail(const Aws::String& value) { m_emailHasBeenSet = true; m_email = value; }

    
    inline void SetEmail(Aws::String&& value) { m_emailHasBeenSet = true; m_email = value; }

    
    inline void SetEmail(const char* value) { m_emailHasBeenSet = true; m_email.assign(value); }

    
    inline registerUserRequest& WithEmail(const Aws::String& value) { SetEmail(value); return *this;}

    
    inline registerUserRequest& WithEmail(Aws::String&& value) { SetEmail(value); return *this;}

    
    inline registerUserRequest& WithEmail(const char* value) { SetEmail(value); return *this;}

    
    inline const Aws::String& GetFirstName() const{ return m_firstName; }

    
    inline void SetFirstName(const Aws::String& value) { m_firstNameHasBeenSet = true; m_firstName = value; }

    
    inline void SetFirstName(Aws::String&& value) { m_firstNameHasBeenSet = true; m_firstName = value; }

    
    inline void SetFirstName(const char* value) { m_firstNameHasBeenSet = true; m_firstName.assign(value); }

    
    inline registerUserRequest& WithFirstName(const Aws::String& value) { SetFirstName(value); return *this;}

    
    inline registerUserRequest& WithFirstName(Aws::String&& value) { SetFirstName(value); return *this;}

    
    inline registerUserRequest& WithFirstName(const char* value) { SetFirstName(value); return *this;}

    
    inline const Aws::String& GetLastName() const{ return m_lastName; }

    
    inline void SetLastName(const Aws::String& value) { m_lastNameHasBeenSet = true; m_lastName = value; }

    
    inline void SetLastName(Aws::String&& value) { m_lastNameHasBeenSet = true; m_lastName = value; }

    
    inline void SetLastName(const char* value) { m_lastNameHasBeenSet = true; m_lastName.assign(value); }

    
    inline registerUserRequest& WithLastName(const Aws::String& value) { SetLastName(value); return *this;}

    
    inline registerUserRequest& WithLastName(Aws::String&& value) { SetLastName(value); return *this;}

    
    inline registerUserRequest& WithLastName(const char* value) { SetLastName(value); return *this;}

  private:
    Aws::String m_mobileNumber;
    bool m_mobileNumberHasBeenSet;
    Aws::String m_email;
    bool m_emailHasBeenSet;
    Aws::String m_firstName;
    bool m_firstNameHasBeenSet;
    Aws::String m_lastName;
    bool m_lastNameHasBeenSet;
  };

} // namespace Model
} // namespace VitalServices
} // namespace Aws
