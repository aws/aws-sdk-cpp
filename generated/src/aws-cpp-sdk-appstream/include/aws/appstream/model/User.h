/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class User
  {
  public:
    AWS_APPSTREAM_API User();
    AWS_APPSTREAM_API User(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSTREAM_API User& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSTREAM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the user.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline User& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline User& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline User& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The email address of the user.</p>  <p>Users' email addresses are
     * case-sensitive.</p> 
     */
    inline const Aws::String& GetUserName() const{ return m_userName; }
    inline bool UserNameHasBeenSet() const { return m_userNameHasBeenSet; }
    inline void SetUserName(const Aws::String& value) { m_userNameHasBeenSet = true; m_userName = value; }
    inline void SetUserName(Aws::String&& value) { m_userNameHasBeenSet = true; m_userName = std::move(value); }
    inline void SetUserName(const char* value) { m_userNameHasBeenSet = true; m_userName.assign(value); }
    inline User& WithUserName(const Aws::String& value) { SetUserName(value); return *this;}
    inline User& WithUserName(Aws::String&& value) { SetUserName(std::move(value)); return *this;}
    inline User& WithUserName(const char* value) { SetUserName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the user in the user pool is enabled.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }
    inline User& WithEnabled(bool value) { SetEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the user in the user pool. The status can be one of the
     * following:</p> <ul> <li> <p>UNCONFIRMED – The user is created but not
     * confirmed.</p> </li> <li> <p>CONFIRMED – The user is confirmed.</p> </li> <li>
     * <p>ARCHIVED – The user is no longer active.</p> </li> <li> <p>COMPROMISED – The
     * user is disabled because of a potential security threat.</p> </li> <li>
     * <p>UNKNOWN – The user status is not known.</p> </li> </ul>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }
    inline User& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}
    inline User& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}
    inline User& WithStatus(const char* value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The first name, or given name, of the user.</p>
     */
    inline const Aws::String& GetFirstName() const{ return m_firstName; }
    inline bool FirstNameHasBeenSet() const { return m_firstNameHasBeenSet; }
    inline void SetFirstName(const Aws::String& value) { m_firstNameHasBeenSet = true; m_firstName = value; }
    inline void SetFirstName(Aws::String&& value) { m_firstNameHasBeenSet = true; m_firstName = std::move(value); }
    inline void SetFirstName(const char* value) { m_firstNameHasBeenSet = true; m_firstName.assign(value); }
    inline User& WithFirstName(const Aws::String& value) { SetFirstName(value); return *this;}
    inline User& WithFirstName(Aws::String&& value) { SetFirstName(std::move(value)); return *this;}
    inline User& WithFirstName(const char* value) { SetFirstName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last name, or surname, of the user.</p>
     */
    inline const Aws::String& GetLastName() const{ return m_lastName; }
    inline bool LastNameHasBeenSet() const { return m_lastNameHasBeenSet; }
    inline void SetLastName(const Aws::String& value) { m_lastNameHasBeenSet = true; m_lastName = value; }
    inline void SetLastName(Aws::String&& value) { m_lastNameHasBeenSet = true; m_lastName = std::move(value); }
    inline void SetLastName(const char* value) { m_lastNameHasBeenSet = true; m_lastName.assign(value); }
    inline User& WithLastName(const Aws::String& value) { SetLastName(value); return *this;}
    inline User& WithLastName(Aws::String&& value) { SetLastName(std::move(value)); return *this;}
    inline User& WithLastName(const char* value) { SetLastName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the user was created in the user pool.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const{ return m_createdTime; }
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }
    inline void SetCreatedTime(const Aws::Utils::DateTime& value) { m_createdTimeHasBeenSet = true; m_createdTime = value; }
    inline void SetCreatedTime(Aws::Utils::DateTime&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::move(value); }
    inline User& WithCreatedTime(const Aws::Utils::DateTime& value) { SetCreatedTime(value); return *this;}
    inline User& WithCreatedTime(Aws::Utils::DateTime&& value) { SetCreatedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The authentication type for the user.</p>
     */
    inline const AuthenticationType& GetAuthenticationType() const{ return m_authenticationType; }
    inline bool AuthenticationTypeHasBeenSet() const { return m_authenticationTypeHasBeenSet; }
    inline void SetAuthenticationType(const AuthenticationType& value) { m_authenticationTypeHasBeenSet = true; m_authenticationType = value; }
    inline void SetAuthenticationType(AuthenticationType&& value) { m_authenticationTypeHasBeenSet = true; m_authenticationType = std::move(value); }
    inline User& WithAuthenticationType(const AuthenticationType& value) { SetAuthenticationType(value); return *this;}
    inline User& WithAuthenticationType(AuthenticationType&& value) { SetAuthenticationType(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_userName;
    bool m_userNameHasBeenSet = false;

    bool m_enabled;
    bool m_enabledHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_firstName;
    bool m_firstNameHasBeenSet = false;

    Aws::String m_lastName;
    bool m_lastNameHasBeenSet = false;

    Aws::Utils::DateTime m_createdTime;
    bool m_createdTimeHasBeenSet = false;

    AuthenticationType m_authenticationType;
    bool m_authenticationTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
