﻿/**
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
    AWS_APPSTREAM_API UserStackAssociation();
    AWS_APPSTREAM_API UserStackAssociation(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSTREAM_API UserStackAssociation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSTREAM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the stack that is associated with the user.</p>
     */
    inline const Aws::String& GetStackName() const{ return m_stackName; }
    inline bool StackNameHasBeenSet() const { return m_stackNameHasBeenSet; }
    inline void SetStackName(const Aws::String& value) { m_stackNameHasBeenSet = true; m_stackName = value; }
    inline void SetStackName(Aws::String&& value) { m_stackNameHasBeenSet = true; m_stackName = std::move(value); }
    inline void SetStackName(const char* value) { m_stackNameHasBeenSet = true; m_stackName.assign(value); }
    inline UserStackAssociation& WithStackName(const Aws::String& value) { SetStackName(value); return *this;}
    inline UserStackAssociation& WithStackName(Aws::String&& value) { SetStackName(std::move(value)); return *this;}
    inline UserStackAssociation& WithStackName(const char* value) { SetStackName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The email address of the user who is associated with the stack.</p> 
     * <p>Users' email addresses are case-sensitive.</p> 
     */
    inline const Aws::String& GetUserName() const{ return m_userName; }
    inline bool UserNameHasBeenSet() const { return m_userNameHasBeenSet; }
    inline void SetUserName(const Aws::String& value) { m_userNameHasBeenSet = true; m_userName = value; }
    inline void SetUserName(Aws::String&& value) { m_userNameHasBeenSet = true; m_userName = std::move(value); }
    inline void SetUserName(const char* value) { m_userNameHasBeenSet = true; m_userName.assign(value); }
    inline UserStackAssociation& WithUserName(const Aws::String& value) { SetUserName(value); return *this;}
    inline UserStackAssociation& WithUserName(Aws::String&& value) { SetUserName(std::move(value)); return *this;}
    inline UserStackAssociation& WithUserName(const char* value) { SetUserName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The authentication type for the user.</p>
     */
    inline const AuthenticationType& GetAuthenticationType() const{ return m_authenticationType; }
    inline bool AuthenticationTypeHasBeenSet() const { return m_authenticationTypeHasBeenSet; }
    inline void SetAuthenticationType(const AuthenticationType& value) { m_authenticationTypeHasBeenSet = true; m_authenticationType = value; }
    inline void SetAuthenticationType(AuthenticationType&& value) { m_authenticationTypeHasBeenSet = true; m_authenticationType = std::move(value); }
    inline UserStackAssociation& WithAuthenticationType(const AuthenticationType& value) { SetAuthenticationType(value); return *this;}
    inline UserStackAssociation& WithAuthenticationType(AuthenticationType&& value) { SetAuthenticationType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether a welcome email is sent to a user after the user is created
     * in the user pool.</p>
     */
    inline bool GetSendEmailNotification() const{ return m_sendEmailNotification; }
    inline bool SendEmailNotificationHasBeenSet() const { return m_sendEmailNotificationHasBeenSet; }
    inline void SetSendEmailNotification(bool value) { m_sendEmailNotificationHasBeenSet = true; m_sendEmailNotification = value; }
    inline UserStackAssociation& WithSendEmailNotification(bool value) { SetSendEmailNotification(value); return *this;}
    ///@}
  private:

    Aws::String m_stackName;
    bool m_stackNameHasBeenSet = false;

    Aws::String m_userName;
    bool m_userNameHasBeenSet = false;

    AuthenticationType m_authenticationType;
    bool m_authenticationTypeHasBeenSet = false;

    bool m_sendEmailNotification;
    bool m_sendEmailNotificationHasBeenSet = false;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
