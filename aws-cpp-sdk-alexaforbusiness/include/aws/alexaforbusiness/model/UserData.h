/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/alexaforbusiness/AlexaForBusiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/alexaforbusiness/model/EnrollmentStatus.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace AlexaForBusiness
{
namespace Model
{

  /**
   * <p>Information related to a user.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/UserData">AWS
   * API Reference</a></p>
   */
  class AWS_ALEXAFORBUSINESS_API UserData
  {
  public:
    UserData();
    UserData(Aws::Utils::Json::JsonView jsonValue);
    UserData& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ARN of a user.</p>
     */
    inline const Aws::String& GetUserArn() const{ return m_userArn; }

    /**
     * <p>The ARN of a user.</p>
     */
    inline bool UserArnHasBeenSet() const { return m_userArnHasBeenSet; }

    /**
     * <p>The ARN of a user.</p>
     */
    inline void SetUserArn(const Aws::String& value) { m_userArnHasBeenSet = true; m_userArn = value; }

    /**
     * <p>The ARN of a user.</p>
     */
    inline void SetUserArn(Aws::String&& value) { m_userArnHasBeenSet = true; m_userArn = std::move(value); }

    /**
     * <p>The ARN of a user.</p>
     */
    inline void SetUserArn(const char* value) { m_userArnHasBeenSet = true; m_userArn.assign(value); }

    /**
     * <p>The ARN of a user.</p>
     */
    inline UserData& WithUserArn(const Aws::String& value) { SetUserArn(value); return *this;}

    /**
     * <p>The ARN of a user.</p>
     */
    inline UserData& WithUserArn(Aws::String&& value) { SetUserArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of a user.</p>
     */
    inline UserData& WithUserArn(const char* value) { SetUserArn(value); return *this;}


    /**
     * <p>The first name of a user.</p>
     */
    inline const Aws::String& GetFirstName() const{ return m_firstName; }

    /**
     * <p>The first name of a user.</p>
     */
    inline bool FirstNameHasBeenSet() const { return m_firstNameHasBeenSet; }

    /**
     * <p>The first name of a user.</p>
     */
    inline void SetFirstName(const Aws::String& value) { m_firstNameHasBeenSet = true; m_firstName = value; }

    /**
     * <p>The first name of a user.</p>
     */
    inline void SetFirstName(Aws::String&& value) { m_firstNameHasBeenSet = true; m_firstName = std::move(value); }

    /**
     * <p>The first name of a user.</p>
     */
    inline void SetFirstName(const char* value) { m_firstNameHasBeenSet = true; m_firstName.assign(value); }

    /**
     * <p>The first name of a user.</p>
     */
    inline UserData& WithFirstName(const Aws::String& value) { SetFirstName(value); return *this;}

    /**
     * <p>The first name of a user.</p>
     */
    inline UserData& WithFirstName(Aws::String&& value) { SetFirstName(std::move(value)); return *this;}

    /**
     * <p>The first name of a user.</p>
     */
    inline UserData& WithFirstName(const char* value) { SetFirstName(value); return *this;}


    /**
     * <p>The last name of a user.</p>
     */
    inline const Aws::String& GetLastName() const{ return m_lastName; }

    /**
     * <p>The last name of a user.</p>
     */
    inline bool LastNameHasBeenSet() const { return m_lastNameHasBeenSet; }

    /**
     * <p>The last name of a user.</p>
     */
    inline void SetLastName(const Aws::String& value) { m_lastNameHasBeenSet = true; m_lastName = value; }

    /**
     * <p>The last name of a user.</p>
     */
    inline void SetLastName(Aws::String&& value) { m_lastNameHasBeenSet = true; m_lastName = std::move(value); }

    /**
     * <p>The last name of a user.</p>
     */
    inline void SetLastName(const char* value) { m_lastNameHasBeenSet = true; m_lastName.assign(value); }

    /**
     * <p>The last name of a user.</p>
     */
    inline UserData& WithLastName(const Aws::String& value) { SetLastName(value); return *this;}

    /**
     * <p>The last name of a user.</p>
     */
    inline UserData& WithLastName(Aws::String&& value) { SetLastName(std::move(value)); return *this;}

    /**
     * <p>The last name of a user.</p>
     */
    inline UserData& WithLastName(const char* value) { SetLastName(value); return *this;}


    /**
     * <p>The email of a user.</p>
     */
    inline const Aws::String& GetEmail() const{ return m_email; }

    /**
     * <p>The email of a user.</p>
     */
    inline bool EmailHasBeenSet() const { return m_emailHasBeenSet; }

    /**
     * <p>The email of a user.</p>
     */
    inline void SetEmail(const Aws::String& value) { m_emailHasBeenSet = true; m_email = value; }

    /**
     * <p>The email of a user.</p>
     */
    inline void SetEmail(Aws::String&& value) { m_emailHasBeenSet = true; m_email = std::move(value); }

    /**
     * <p>The email of a user.</p>
     */
    inline void SetEmail(const char* value) { m_emailHasBeenSet = true; m_email.assign(value); }

    /**
     * <p>The email of a user.</p>
     */
    inline UserData& WithEmail(const Aws::String& value) { SetEmail(value); return *this;}

    /**
     * <p>The email of a user.</p>
     */
    inline UserData& WithEmail(Aws::String&& value) { SetEmail(std::move(value)); return *this;}

    /**
     * <p>The email of a user.</p>
     */
    inline UserData& WithEmail(const char* value) { SetEmail(value); return *this;}


    /**
     * <p>The enrollment status of a user.</p>
     */
    inline const EnrollmentStatus& GetEnrollmentStatus() const{ return m_enrollmentStatus; }

    /**
     * <p>The enrollment status of a user.</p>
     */
    inline bool EnrollmentStatusHasBeenSet() const { return m_enrollmentStatusHasBeenSet; }

    /**
     * <p>The enrollment status of a user.</p>
     */
    inline void SetEnrollmentStatus(const EnrollmentStatus& value) { m_enrollmentStatusHasBeenSet = true; m_enrollmentStatus = value; }

    /**
     * <p>The enrollment status of a user.</p>
     */
    inline void SetEnrollmentStatus(EnrollmentStatus&& value) { m_enrollmentStatusHasBeenSet = true; m_enrollmentStatus = std::move(value); }

    /**
     * <p>The enrollment status of a user.</p>
     */
    inline UserData& WithEnrollmentStatus(const EnrollmentStatus& value) { SetEnrollmentStatus(value); return *this;}

    /**
     * <p>The enrollment status of a user.</p>
     */
    inline UserData& WithEnrollmentStatus(EnrollmentStatus&& value) { SetEnrollmentStatus(std::move(value)); return *this;}


    /**
     * <p>The enrollment ARN of a user.</p>
     */
    inline const Aws::String& GetEnrollmentId() const{ return m_enrollmentId; }

    /**
     * <p>The enrollment ARN of a user.</p>
     */
    inline bool EnrollmentIdHasBeenSet() const { return m_enrollmentIdHasBeenSet; }

    /**
     * <p>The enrollment ARN of a user.</p>
     */
    inline void SetEnrollmentId(const Aws::String& value) { m_enrollmentIdHasBeenSet = true; m_enrollmentId = value; }

    /**
     * <p>The enrollment ARN of a user.</p>
     */
    inline void SetEnrollmentId(Aws::String&& value) { m_enrollmentIdHasBeenSet = true; m_enrollmentId = std::move(value); }

    /**
     * <p>The enrollment ARN of a user.</p>
     */
    inline void SetEnrollmentId(const char* value) { m_enrollmentIdHasBeenSet = true; m_enrollmentId.assign(value); }

    /**
     * <p>The enrollment ARN of a user.</p>
     */
    inline UserData& WithEnrollmentId(const Aws::String& value) { SetEnrollmentId(value); return *this;}

    /**
     * <p>The enrollment ARN of a user.</p>
     */
    inline UserData& WithEnrollmentId(Aws::String&& value) { SetEnrollmentId(std::move(value)); return *this;}

    /**
     * <p>The enrollment ARN of a user.</p>
     */
    inline UserData& WithEnrollmentId(const char* value) { SetEnrollmentId(value); return *this;}

  private:

    Aws::String m_userArn;
    bool m_userArnHasBeenSet;

    Aws::String m_firstName;
    bool m_firstNameHasBeenSet;

    Aws::String m_lastName;
    bool m_lastNameHasBeenSet;

    Aws::String m_email;
    bool m_emailHasBeenSet;

    EnrollmentStatus m_enrollmentStatus;
    bool m_enrollmentStatusHasBeenSet;

    Aws::String m_enrollmentId;
    bool m_enrollmentIdHasBeenSet;
  };

} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws
