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
    AWS_APPSTREAM_API User() = default;
    AWS_APPSTREAM_API User(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSTREAM_API User& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSTREAM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the user.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    User& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The email address of the user.</p>  <p>Users' email addresses are
     * case-sensitive.</p> 
     */
    inline const Aws::String& GetUserName() const { return m_userName; }
    inline bool UserNameHasBeenSet() const { return m_userNameHasBeenSet; }
    template<typename UserNameT = Aws::String>
    void SetUserName(UserNameT&& value) { m_userNameHasBeenSet = true; m_userName = std::forward<UserNameT>(value); }
    template<typename UserNameT = Aws::String>
    User& WithUserName(UserNameT&& value) { SetUserName(std::forward<UserNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the user in the user pool is enabled.</p>
     */
    inline bool GetEnabled() const { return m_enabled; }
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
    inline const Aws::String& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = Aws::String>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::String>
    User& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The first name, or given name, of the user.</p>
     */
    inline const Aws::String& GetFirstName() const { return m_firstName; }
    inline bool FirstNameHasBeenSet() const { return m_firstNameHasBeenSet; }
    template<typename FirstNameT = Aws::String>
    void SetFirstName(FirstNameT&& value) { m_firstNameHasBeenSet = true; m_firstName = std::forward<FirstNameT>(value); }
    template<typename FirstNameT = Aws::String>
    User& WithFirstName(FirstNameT&& value) { SetFirstName(std::forward<FirstNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last name, or surname, of the user.</p>
     */
    inline const Aws::String& GetLastName() const { return m_lastName; }
    inline bool LastNameHasBeenSet() const { return m_lastNameHasBeenSet; }
    template<typename LastNameT = Aws::String>
    void SetLastName(LastNameT&& value) { m_lastNameHasBeenSet = true; m_lastName = std::forward<LastNameT>(value); }
    template<typename LastNameT = Aws::String>
    User& WithLastName(LastNameT&& value) { SetLastName(std::forward<LastNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the user was created in the user pool.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const { return m_createdTime; }
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }
    template<typename CreatedTimeT = Aws::Utils::DateTime>
    void SetCreatedTime(CreatedTimeT&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::forward<CreatedTimeT>(value); }
    template<typename CreatedTimeT = Aws::Utils::DateTime>
    User& WithCreatedTime(CreatedTimeT&& value) { SetCreatedTime(std::forward<CreatedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The authentication type for the user.</p>
     */
    inline AuthenticationType GetAuthenticationType() const { return m_authenticationType; }
    inline bool AuthenticationTypeHasBeenSet() const { return m_authenticationTypeHasBeenSet; }
    inline void SetAuthenticationType(AuthenticationType value) { m_authenticationTypeHasBeenSet = true; m_authenticationType = value; }
    inline User& WithAuthenticationType(AuthenticationType value) { SetAuthenticationType(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_userName;
    bool m_userNameHasBeenSet = false;

    bool m_enabled{false};
    bool m_enabledHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_firstName;
    bool m_firstNameHasBeenSet = false;

    Aws::String m_lastName;
    bool m_lastNameHasBeenSet = false;

    Aws::Utils::DateTime m_createdTime{};
    bool m_createdTimeHasBeenSet = false;

    AuthenticationType m_authenticationType{AuthenticationType::NOT_SET};
    bool m_authenticationTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
