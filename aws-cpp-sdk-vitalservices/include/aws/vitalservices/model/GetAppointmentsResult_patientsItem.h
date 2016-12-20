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

  class AWS_VITALSERVICES_API GetAppointmentsResult_patientsItem
  {
  public:
    GetAppointmentsResult_patientsItem();
    GetAppointmentsResult_patientsItem(const Aws::Utils::Json::JsonValue& jsonValue);
    GetAppointmentsResult_patientsItem& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    
    inline const Aws::String& GetProfilePhotoUrl() const{ return m_profilePhotoUrl; }

    
    inline void SetProfilePhotoUrl(const Aws::String& value) { m_profilePhotoUrlHasBeenSet = true; m_profilePhotoUrl = value; }

    
    inline void SetProfilePhotoUrl(Aws::String&& value) { m_profilePhotoUrlHasBeenSet = true; m_profilePhotoUrl = value; }

    
    inline void SetProfilePhotoUrl(const char* value) { m_profilePhotoUrlHasBeenSet = true; m_profilePhotoUrl.assign(value); }

    
    inline GetAppointmentsResult_patientsItem& WithProfilePhotoUrl(const Aws::String& value) { SetProfilePhotoUrl(value); return *this;}

    
    inline GetAppointmentsResult_patientsItem& WithProfilePhotoUrl(Aws::String&& value) { SetProfilePhotoUrl(value); return *this;}

    
    inline GetAppointmentsResult_patientsItem& WithProfilePhotoUrl(const char* value) { SetProfilePhotoUrl(value); return *this;}

    
    inline const Aws::String& GetLastName() const{ return m_lastName; }

    
    inline void SetLastName(const Aws::String& value) { m_lastNameHasBeenSet = true; m_lastName = value; }

    
    inline void SetLastName(Aws::String&& value) { m_lastNameHasBeenSet = true; m_lastName = value; }

    
    inline void SetLastName(const char* value) { m_lastNameHasBeenSet = true; m_lastName.assign(value); }

    
    inline GetAppointmentsResult_patientsItem& WithLastName(const Aws::String& value) { SetLastName(value); return *this;}

    
    inline GetAppointmentsResult_patientsItem& WithLastName(Aws::String&& value) { SetLastName(value); return *this;}

    
    inline GetAppointmentsResult_patientsItem& WithLastName(const char* value) { SetLastName(value); return *this;}

    
    inline const Aws::String& GetMobileNumber() const{ return m_mobileNumber; }

    
    inline void SetMobileNumber(const Aws::String& value) { m_mobileNumberHasBeenSet = true; m_mobileNumber = value; }

    
    inline void SetMobileNumber(Aws::String&& value) { m_mobileNumberHasBeenSet = true; m_mobileNumber = value; }

    
    inline void SetMobileNumber(const char* value) { m_mobileNumberHasBeenSet = true; m_mobileNumber.assign(value); }

    
    inline GetAppointmentsResult_patientsItem& WithMobileNumber(const Aws::String& value) { SetMobileNumber(value); return *this;}

    
    inline GetAppointmentsResult_patientsItem& WithMobileNumber(Aws::String&& value) { SetMobileNumber(value); return *this;}

    
    inline GetAppointmentsResult_patientsItem& WithMobileNumber(const char* value) { SetMobileNumber(value); return *this;}

    
    inline const Aws::String& GetFirstName() const{ return m_firstName; }

    
    inline void SetFirstName(const Aws::String& value) { m_firstNameHasBeenSet = true; m_firstName = value; }

    
    inline void SetFirstName(Aws::String&& value) { m_firstNameHasBeenSet = true; m_firstName = value; }

    
    inline void SetFirstName(const char* value) { m_firstNameHasBeenSet = true; m_firstName.assign(value); }

    
    inline GetAppointmentsResult_patientsItem& WithFirstName(const Aws::String& value) { SetFirstName(value); return *this;}

    
    inline GetAppointmentsResult_patientsItem& WithFirstName(Aws::String&& value) { SetFirstName(value); return *this;}

    
    inline GetAppointmentsResult_patientsItem& WithFirstName(const char* value) { SetFirstName(value); return *this;}

    
    inline const Aws::String& GetId() const{ return m_id; }

    
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = value; }

    
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    
    inline GetAppointmentsResult_patientsItem& WithId(const Aws::String& value) { SetId(value); return *this;}

    
    inline GetAppointmentsResult_patientsItem& WithId(Aws::String&& value) { SetId(value); return *this;}

    
    inline GetAppointmentsResult_patientsItem& WithId(const char* value) { SetId(value); return *this;}

  private:
    Aws::String m_profilePhotoUrl;
    bool m_profilePhotoUrlHasBeenSet;
    Aws::String m_lastName;
    bool m_lastNameHasBeenSet;
    Aws::String m_mobileNumber;
    bool m_mobileNumberHasBeenSet;
    Aws::String m_firstName;
    bool m_firstNameHasBeenSet;
    Aws::String m_id;
    bool m_idHasBeenSet;
  };

} // namespace Model
} // namespace VitalServices
} // namespace Aws
