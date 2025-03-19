/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Describes a user in the user pool and the associated stack.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/UserStackAssociation">AWS
   * API Reference</a></p>
   */
  class UserStackAssociation
  {
  public:
    AWS_APPSTREAM_API UserStackAssociation() = default;
    AWS_APPSTREAM_API UserStackAssociation(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSTREAM_API UserStackAssociation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSTREAM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the stack that is associated with the user.</p>
     */
    inline const Aws::String& GetStackName() const { return m_stackName; }
    inline bool StackNameHasBeenSet() const { return m_stackNameHasBeenSet; }
    template<typename StackNameT = Aws::String>
    void SetStackName(StackNameT&& value) { m_stackNameHasBeenSet = true; m_stackName = std::forward<StackNameT>(value); }
    template<typename StackNameT = Aws::String>
    UserStackAssociation& WithStackName(StackNameT&& value) { SetStackName(std::forward<StackNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The email address of the user who is associated with the stack.</p> 
     * <p>Users' email addresses are case-sensitive.</p> 
     */
    inline const Aws::String& GetUserName() const { return m_userName; }
    inline bool UserNameHasBeenSet() const { return m_userNameHasBeenSet; }
    template<typename UserNameT = Aws::String>
    void SetUserName(UserNameT&& value) { m_userNameHasBeenSet = true; m_userName = std::forward<UserNameT>(value); }
    template<typename UserNameT = Aws::String>
    UserStackAssociation& WithUserName(UserNameT&& value) { SetUserName(std::forward<UserNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The authentication type for the user.</p>
     */
    inline AuthenticationType GetAuthenticationType() const { return m_authenticationType; }
    inline bool AuthenticationTypeHasBeenSet() const { return m_authenticationTypeHasBeenSet; }
    inline void SetAuthenticationType(AuthenticationType value) { m_authenticationTypeHasBeenSet = true; m_authenticationType = value; }
    inline UserStackAssociation& WithAuthenticationType(AuthenticationType value) { SetAuthenticationType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether a welcome email is sent to a user after the user is created
     * in the user pool.</p>
     */
    inline bool GetSendEmailNotification() const { return m_sendEmailNotification; }
    inline bool SendEmailNotificationHasBeenSet() const { return m_sendEmailNotificationHasBeenSet; }
    inline void SetSendEmailNotification(bool value) { m_sendEmailNotificationHasBeenSet = true; m_sendEmailNotification = value; }
    inline UserStackAssociation& WithSendEmailNotification(bool value) { SetSendEmailNotification(value); return *this;}
    ///@}
  private:

    Aws::String m_stackName;
    bool m_stackNameHasBeenSet = false;

    Aws::String m_userName;
    bool m_userNameHasBeenSet = false;

    AuthenticationType m_authenticationType{AuthenticationType::NOT_SET};
    bool m_authenticationTypeHasBeenSet = false;

    bool m_sendEmailNotification{false};
    bool m_sendEmailNotificationHasBeenSet = false;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
