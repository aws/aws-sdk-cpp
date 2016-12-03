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
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

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
  class AWS_VITALSERVICES_API getLoggedInUserResult
  {
  public:
    getLoggedInUserResult();
    getLoggedInUserResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    getLoggedInUserResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    
    inline const Aws::String& GetFirstName() const{ return m_firstName; }

    
    inline void SetFirstName(const Aws::String& value) { m_firstName = value; }

    
    inline void SetFirstName(Aws::String&& value) { m_firstName = value; }

    
    inline void SetFirstName(const char* value) { m_firstName.assign(value); }

    
    inline getLoggedInUserResult& WithFirstName(const Aws::String& value) { SetFirstName(value); return *this;}

    
    inline getLoggedInUserResult& WithFirstName(Aws::String&& value) { SetFirstName(value); return *this;}

    
    inline getLoggedInUserResult& WithFirstName(const char* value) { SetFirstName(value); return *this;}

    
    inline const Aws::String& GetDoctorId() const{ return m_doctorId; }

    
    inline void SetDoctorId(const Aws::String& value) { m_doctorId = value; }

    
    inline void SetDoctorId(Aws::String&& value) { m_doctorId = value; }

    
    inline void SetDoctorId(const char* value) { m_doctorId.assign(value); }

    
    inline getLoggedInUserResult& WithDoctorId(const Aws::String& value) { SetDoctorId(value); return *this;}

    
    inline getLoggedInUserResult& WithDoctorId(Aws::String&& value) { SetDoctorId(value); return *this;}

    
    inline getLoggedInUserResult& WithDoctorId(const char* value) { SetDoctorId(value); return *this;}

    
    inline const Aws::String& GetLastName() const{ return m_lastName; }

    
    inline void SetLastName(const Aws::String& value) { m_lastName = value; }

    
    inline void SetLastName(Aws::String&& value) { m_lastName = value; }

    
    inline void SetLastName(const char* value) { m_lastName.assign(value); }

    
    inline getLoggedInUserResult& WithLastName(const Aws::String& value) { SetLastName(value); return *this;}

    
    inline getLoggedInUserResult& WithLastName(Aws::String&& value) { SetLastName(value); return *this;}

    
    inline getLoggedInUserResult& WithLastName(const char* value) { SetLastName(value); return *this;}

    
    inline const Aws::String& GetProfilePhotoUrl() const{ return m_profilePhotoUrl; }

    
    inline void SetProfilePhotoUrl(const Aws::String& value) { m_profilePhotoUrl = value; }

    
    inline void SetProfilePhotoUrl(Aws::String&& value) { m_profilePhotoUrl = value; }

    
    inline void SetProfilePhotoUrl(const char* value) { m_profilePhotoUrl.assign(value); }

    
    inline getLoggedInUserResult& WithProfilePhotoUrl(const Aws::String& value) { SetProfilePhotoUrl(value); return *this;}

    
    inline getLoggedInUserResult& WithProfilePhotoUrl(Aws::String&& value) { SetProfilePhotoUrl(value); return *this;}

    
    inline getLoggedInUserResult& WithProfilePhotoUrl(const char* value) { SetProfilePhotoUrl(value); return *this;}

    
    inline const Aws::String& GetEmail() const{ return m_email; }

    
    inline void SetEmail(const Aws::String& value) { m_email = value; }

    
    inline void SetEmail(Aws::String&& value) { m_email = value; }

    
    inline void SetEmail(const char* value) { m_email.assign(value); }

    
    inline getLoggedInUserResult& WithEmail(const Aws::String& value) { SetEmail(value); return *this;}

    
    inline getLoggedInUserResult& WithEmail(Aws::String&& value) { SetEmail(value); return *this;}

    
    inline getLoggedInUserResult& WithEmail(const char* value) { SetEmail(value); return *this;}

    
    inline const Aws::String& GetId() const{ return m_id; }

    
    inline void SetId(const Aws::String& value) { m_id = value; }

    
    inline void SetId(Aws::String&& value) { m_id = value; }

    
    inline void SetId(const char* value) { m_id.assign(value); }

    
    inline getLoggedInUserResult& WithId(const Aws::String& value) { SetId(value); return *this;}

    
    inline getLoggedInUserResult& WithId(Aws::String&& value) { SetId(value); return *this;}

    
    inline getLoggedInUserResult& WithId(const char* value) { SetId(value); return *this;}

    
    inline const Aws::String& GetMobileNumber() const{ return m_mobileNumber; }

    
    inline void SetMobileNumber(const Aws::String& value) { m_mobileNumber = value; }

    
    inline void SetMobileNumber(Aws::String&& value) { m_mobileNumber = value; }

    
    inline void SetMobileNumber(const char* value) { m_mobileNumber.assign(value); }

    
    inline getLoggedInUserResult& WithMobileNumber(const Aws::String& value) { SetMobileNumber(value); return *this;}

    
    inline getLoggedInUserResult& WithMobileNumber(Aws::String&& value) { SetMobileNumber(value); return *this;}

    
    inline getLoggedInUserResult& WithMobileNumber(const char* value) { SetMobileNumber(value); return *this;}

  private:
    Aws::String m_firstName;
    Aws::String m_doctorId;
    Aws::String m_lastName;
    Aws::String m_profilePhotoUrl;
    Aws::String m_email;
    Aws::String m_id;
    Aws::String m_mobileNumber;
  };

} // namespace Model
} // namespace VitalServices
} // namespace Aws
