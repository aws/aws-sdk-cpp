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
  class AWS_APPSTREAM_API UserStackAssociation
  {
  public:
    UserStackAssociation();
    UserStackAssociation(Aws::Utils::Json::JsonView jsonValue);
    UserStackAssociation& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the stack that is associated with the user.</p>
     */
    inline const Aws::String& GetStackName() const{ return m_stackName; }

    /**
     * <p>The name of the stack that is associated with the user.</p>
     */
    inline bool StackNameHasBeenSet() const { return m_stackNameHasBeenSet; }

    /**
     * <p>The name of the stack that is associated with the user.</p>
     */
    inline void SetStackName(const Aws::String& value) { m_stackNameHasBeenSet = true; m_stackName = value; }

    /**
     * <p>The name of the stack that is associated with the user.</p>
     */
    inline void SetStackName(Aws::String&& value) { m_stackNameHasBeenSet = true; m_stackName = std::move(value); }

    /**
     * <p>The name of the stack that is associated with the user.</p>
     */
    inline void SetStackName(const char* value) { m_stackNameHasBeenSet = true; m_stackName.assign(value); }

    /**
     * <p>The name of the stack that is associated with the user.</p>
     */
    inline UserStackAssociation& WithStackName(const Aws::String& value) { SetStackName(value); return *this;}

    /**
     * <p>The name of the stack that is associated with the user.</p>
     */
    inline UserStackAssociation& WithStackName(Aws::String&& value) { SetStackName(std::move(value)); return *this;}

    /**
     * <p>The name of the stack that is associated with the user.</p>
     */
    inline UserStackAssociation& WithStackName(const char* value) { SetStackName(value); return *this;}


    /**
     * <p>The email address of the user who is associated with the stack.</p> <note>
     * <p>Users' email addresses are case-sensitive.</p> </note>
     */
    inline const Aws::String& GetUserName() const{ return m_userName; }

    /**
     * <p>The email address of the user who is associated with the stack.</p> <note>
     * <p>Users' email addresses are case-sensitive.</p> </note>
     */
    inline bool UserNameHasBeenSet() const { return m_userNameHasBeenSet; }

    /**
     * <p>The email address of the user who is associated with the stack.</p> <note>
     * <p>Users' email addresses are case-sensitive.</p> </note>
     */
    inline void SetUserName(const Aws::String& value) { m_userNameHasBeenSet = true; m_userName = value; }

    /**
     * <p>The email address of the user who is associated with the stack.</p> <note>
     * <p>Users' email addresses are case-sensitive.</p> </note>
     */
    inline void SetUserName(Aws::String&& value) { m_userNameHasBeenSet = true; m_userName = std::move(value); }

    /**
     * <p>The email address of the user who is associated with the stack.</p> <note>
     * <p>Users' email addresses are case-sensitive.</p> </note>
     */
    inline void SetUserName(const char* value) { m_userNameHasBeenSet = true; m_userName.assign(value); }

    /**
     * <p>The email address of the user who is associated with the stack.</p> <note>
     * <p>Users' email addresses are case-sensitive.</p> </note>
     */
    inline UserStackAssociation& WithUserName(const Aws::String& value) { SetUserName(value); return *this;}

    /**
     * <p>The email address of the user who is associated with the stack.</p> <note>
     * <p>Users' email addresses are case-sensitive.</p> </note>
     */
    inline UserStackAssociation& WithUserName(Aws::String&& value) { SetUserName(std::move(value)); return *this;}

    /**
     * <p>The email address of the user who is associated with the stack.</p> <note>
     * <p>Users' email addresses are case-sensitive.</p> </note>
     */
    inline UserStackAssociation& WithUserName(const char* value) { SetUserName(value); return *this;}


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
    inline UserStackAssociation& WithAuthenticationType(const AuthenticationType& value) { SetAuthenticationType(value); return *this;}

    /**
     * <p>The authentication type for the user.</p>
     */
    inline UserStackAssociation& WithAuthenticationType(AuthenticationType&& value) { SetAuthenticationType(std::move(value)); return *this;}


    /**
     * <p>Specifies whether a welcome email is sent to a user after the user is created
     * in the user pool.</p>
     */
    inline bool GetSendEmailNotification() const{ return m_sendEmailNotification; }

    /**
     * <p>Specifies whether a welcome email is sent to a user after the user is created
     * in the user pool.</p>
     */
    inline bool SendEmailNotificationHasBeenSet() const { return m_sendEmailNotificationHasBeenSet; }

    /**
     * <p>Specifies whether a welcome email is sent to a user after the user is created
     * in the user pool.</p>
     */
    inline void SetSendEmailNotification(bool value) { m_sendEmailNotificationHasBeenSet = true; m_sendEmailNotification = value; }

    /**
     * <p>Specifies whether a welcome email is sent to a user after the user is created
     * in the user pool.</p>
     */
    inline UserStackAssociation& WithSendEmailNotification(bool value) { SetSendEmailNotification(value); return *this;}

  private:

    Aws::String m_stackName;
    bool m_stackNameHasBeenSet;

    Aws::String m_userName;
    bool m_userNameHasBeenSet;

    AuthenticationType m_authenticationType;
    bool m_authenticationTypeHasBeenSet;

    bool m_sendEmailNotification;
    bool m_sendEmailNotificationHasBeenSet;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
