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
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/appstream/model/AuthenticationType.h>
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
namespace AppStream
{
namespace Model
{

  /**
   * <p>Describes a user in the user pool.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/User">AWS API
   * Reference</a></p>
   */
  class AWS_APPSTREAM_API User
  {
  public:
    User();
    User(Aws::Utils::Json::JsonView jsonValue);
    User& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ARN of the user.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The ARN of the user.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The ARN of the user.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The ARN of the user.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The ARN of the user.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The ARN of the user.</p>
     */
    inline User& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The ARN of the user.</p>
     */
    inline User& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the user.</p>
     */
    inline User& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The email address of the user.</p> <note> <p>Users' email addresses are
     * case-sensitive.</p> </note>
     */
    inline const Aws::String& GetUserName() const{ return m_userName; }

    /**
     * <p>The email address of the user.</p> <note> <p>Users' email addresses are
     * case-sensitive.</p> </note>
     */
    inline bool UserNameHasBeenSet() const { return m_userNameHasBeenSet; }

    /**
     * <p>The email address of the user.</p> <note> <p>Users' email addresses are
     * case-sensitive.</p> </note>
     */
    inline void SetUserName(const Aws::String& value) { m_userNameHasBeenSet = true; m_userName = value; }

    /**
     * <p>The email address of the user.</p> <note> <p>Users' email addresses are
     * case-sensitive.</p> </note>
     */
    inline void SetUserName(Aws::String&& value) { m_userNameHasBeenSet = true; m_userName = std::move(value); }

    /**
     * <p>The email address of the user.</p> <note> <p>Users' email addresses are
     * case-sensitive.</p> </note>
     */
    inline void SetUserName(const char* value) { m_userNameHasBeenSet = true; m_userName.assign(value); }

    /**
     * <p>The email address of the user.</p> <note> <p>Users' email addresses are
     * case-sensitive.</p> </note>
     */
    inline User& WithUserName(const Aws::String& value) { SetUserName(value); return *this;}

    /**
     * <p>The email address of the user.</p> <note> <p>Users' email addresses are
     * case-sensitive.</p> </note>
     */
    inline User& WithUserName(Aws::String&& value) { SetUserName(std::move(value)); return *this;}

    /**
     * <p>The email address of the user.</p> <note> <p>Users' email addresses are
     * case-sensitive.</p> </note>
     */
    inline User& WithUserName(const char* value) { SetUserName(value); return *this;}


    /**
     * <p>Specifies whether the user in the user pool is enabled.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }

    /**
     * <p>Specifies whether the user in the user pool is enabled.</p>
     */
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }

    /**
     * <p>Specifies whether the user in the user pool is enabled.</p>
     */
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }

    /**
     * <p>Specifies whether the user in the user pool is enabled.</p>
     */
    inline User& WithEnabled(bool value) { SetEnabled(value); return *this;}


    /**
     * <p>The status of the user in the user pool. The status can be one of the
     * following:</p> <ul> <li> <p>UNCONFIRMED – The user is created but not
     * confirmed.</p> </li> <li> <p>CONFIRMED – The user is confirmed.</p> </li> <li>
     * <p>ARCHIVED – The user is no longer active.</p> </li> <li> <p>COMPROMISED – The
     * user is disabled because of a potential security threat.</p> </li> <li>
     * <p>UNKNOWN – The user status is not known.</p> </li> </ul>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the user in the user pool. The status can be one of the
     * following:</p> <ul> <li> <p>UNCONFIRMED – The user is created but not
     * confirmed.</p> </li> <li> <p>CONFIRMED – The user is confirmed.</p> </li> <li>
     * <p>ARCHIVED – The user is no longer active.</p> </li> <li> <p>COMPROMISED – The
     * user is disabled because of a potential security threat.</p> </li> <li>
     * <p>UNKNOWN – The user status is not known.</p> </li> </ul>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the user in the user pool. The status can be one of the
     * following:</p> <ul> <li> <p>UNCONFIRMED – The user is created but not
     * confirmed.</p> </li> <li> <p>CONFIRMED – The user is confirmed.</p> </li> <li>
     * <p>ARCHIVED – The user is no longer active.</p> </li> <li> <p>COMPROMISED – The
     * user is disabled because of a potential security threat.</p> </li> <li>
     * <p>UNKNOWN – The user status is not known.</p> </li> </ul>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the user in the user pool. The status can be one of the
     * following:</p> <ul> <li> <p>UNCONFIRMED – The user is created but not
     * confirmed.</p> </li> <li> <p>CONFIRMED – The user is confirmed.</p> </li> <li>
     * <p>ARCHIVED – The user is no longer active.</p> </li> <li> <p>COMPROMISED – The
     * user is disabled because of a potential security threat.</p> </li> <li>
     * <p>UNKNOWN – The user status is not known.</p> </li> </ul>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the user in the user pool. The status can be one of the
     * following:</p> <ul> <li> <p>UNCONFIRMED – The user is created but not
     * confirmed.</p> </li> <li> <p>CONFIRMED – The user is confirmed.</p> </li> <li>
     * <p>ARCHIVED – The user is no longer active.</p> </li> <li> <p>COMPROMISED – The
     * user is disabled because of a potential security threat.</p> </li> <li>
     * <p>UNKNOWN – The user status is not known.</p> </li> </ul>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p>The status of the user in the user pool. The status can be one of the
     * following:</p> <ul> <li> <p>UNCONFIRMED – The user is created but not
     * confirmed.</p> </li> <li> <p>CONFIRMED – The user is confirmed.</p> </li> <li>
     * <p>ARCHIVED – The user is no longer active.</p> </li> <li> <p>COMPROMISED – The
     * user is disabled because of a potential security threat.</p> </li> <li>
     * <p>UNKNOWN – The user status is not known.</p> </li> </ul>
     */
    inline User& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the user in the user pool. The status can be one of the
     * following:</p> <ul> <li> <p>UNCONFIRMED – The user is created but not
     * confirmed.</p> </li> <li> <p>CONFIRMED – The user is confirmed.</p> </li> <li>
     * <p>ARCHIVED – The user is no longer active.</p> </li> <li> <p>COMPROMISED – The
     * user is disabled because of a potential security threat.</p> </li> <li>
     * <p>UNKNOWN – The user status is not known.</p> </li> </ul>
     */
    inline User& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>The status of the user in the user pool. The status can be one of the
     * following:</p> <ul> <li> <p>UNCONFIRMED – The user is created but not
     * confirmed.</p> </li> <li> <p>CONFIRMED – The user is confirmed.</p> </li> <li>
     * <p>ARCHIVED – The user is no longer active.</p> </li> <li> <p>COMPROMISED – The
     * user is disabled because of a potential security threat.</p> </li> <li>
     * <p>UNKNOWN – The user status is not known.</p> </li> </ul>
     */
    inline User& WithStatus(const char* value) { SetStatus(value); return *this;}


    /**
     * <p>The first name, or given name, of the user.</p>
     */
    inline const Aws::String& GetFirstName() const{ return m_firstName; }

    /**
     * <p>The first name, or given name, of the user.</p>
     */
    inline bool FirstNameHasBeenSet() const { return m_firstNameHasBeenSet; }

    /**
     * <p>The first name, or given name, of the user.</p>
     */
    inline void SetFirstName(const Aws::String& value) { m_firstNameHasBeenSet = true; m_firstName = value; }

    /**
     * <p>The first name, or given name, of the user.</p>
     */
    inline void SetFirstName(Aws::String&& value) { m_firstNameHasBeenSet = true; m_firstName = std::move(value); }

    /**
     * <p>The first name, or given name, of the user.</p>
     */
    inline void SetFirstName(const char* value) { m_firstNameHasBeenSet = true; m_firstName.assign(value); }

    /**
     * <p>The first name, or given name, of the user.</p>
     */
    inline User& WithFirstName(const Aws::String& value) { SetFirstName(value); return *this;}

    /**
     * <p>The first name, or given name, of the user.</p>
     */
    inline User& WithFirstName(Aws::String&& value) { SetFirstName(std::move(value)); return *this;}

    /**
     * <p>The first name, or given name, of the user.</p>
     */
    inline User& WithFirstName(const char* value) { SetFirstName(value); return *this;}


    /**
     * <p>The last name, or surname, of the user.</p>
     */
    inline const Aws::String& GetLastName() const{ return m_lastName; }

    /**
     * <p>The last name, or surname, of the user.</p>
     */
    inline bool LastNameHasBeenSet() const { return m_lastNameHasBeenSet; }

    /**
     * <p>The last name, or surname, of the user.</p>
     */
    inline void SetLastName(const Aws::String& value) { m_lastNameHasBeenSet = true; m_lastName = value; }

    /**
     * <p>The last name, or surname, of the user.</p>
     */
    inline void SetLastName(Aws::String&& value) { m_lastNameHasBeenSet = true; m_lastName = std::move(value); }

    /**
     * <p>The last name, or surname, of the user.</p>
     */
    inline void SetLastName(const char* value) { m_lastNameHasBeenSet = true; m_lastName.assign(value); }

    /**
     * <p>The last name, or surname, of the user.</p>
     */
    inline User& WithLastName(const Aws::String& value) { SetLastName(value); return *this;}

    /**
     * <p>The last name, or surname, of the user.</p>
     */
    inline User& WithLastName(Aws::String&& value) { SetLastName(std::move(value)); return *this;}

    /**
     * <p>The last name, or surname, of the user.</p>
     */
    inline User& WithLastName(const char* value) { SetLastName(value); return *this;}


    /**
     * <p>The date and time the user was created in the user pool.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const{ return m_createdTime; }

    /**
     * <p>The date and time the user was created in the user pool.</p>
     */
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }

    /**
     * <p>The date and time the user was created in the user pool.</p>
     */
    inline void SetCreatedTime(const Aws::Utils::DateTime& value) { m_createdTimeHasBeenSet = true; m_createdTime = value; }

    /**
     * <p>The date and time the user was created in the user pool.</p>
     */
    inline void SetCreatedTime(Aws::Utils::DateTime&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::move(value); }

    /**
     * <p>The date and time the user was created in the user pool.</p>
     */
    inline User& WithCreatedTime(const Aws::Utils::DateTime& value) { SetCreatedTime(value); return *this;}

    /**
     * <p>The date and time the user was created in the user pool.</p>
     */
    inline User& WithCreatedTime(Aws::Utils::DateTime&& value) { SetCreatedTime(std::move(value)); return *this;}


    /**
     * <p>The authentication type for the user.</p>
     */
    inline const AuthenticationType& GetAuthenticationType() const{ return m_authenticationType; }

    /**
     * <p>The authentication type for the user.</p>
     */
    inline bool AuthenticationTypeHasBeenSet() const { return m_authenticationTypeHasBeenSet; }

    /**
     * <p>The authentication type for the user.</p>
     */
    inline void SetAuthenticationType(const AuthenticationType& value) { m_authenticationTypeHasBeenSet = true; m_authenticationType = value; }

    /**
     * <p>The authentication type for the user.</p>
     */
    inline void SetAuthenticationType(AuthenticationType&& value) { m_authenticationTypeHasBeenSet = true; m_authenticationType = std::move(value); }

    /**
     * <p>The authentication type for the user.</p>
     */
    inline User& WithAuthenticationType(const AuthenticationType& value) { SetAuthenticationType(value); return *this;}

    /**
     * <p>The authentication type for the user.</p>
     */
    inline User& WithAuthenticationType(AuthenticationType&& value) { SetAuthenticationType(std::move(value)); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet;

    Aws::String m_userName;
    bool m_userNameHasBeenSet;

    bool m_enabled;
    bool m_enabledHasBeenSet;

    Aws::String m_status;
    bool m_statusHasBeenSet;

    Aws::String m_firstName;
    bool m_firstNameHasBeenSet;

    Aws::String m_lastName;
    bool m_lastNameHasBeenSet;

    Aws::Utils::DateTime m_createdTime;
    bool m_createdTimeHasBeenSet;

    AuthenticationType m_authenticationType;
    bool m_authenticationTypeHasBeenSet;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
