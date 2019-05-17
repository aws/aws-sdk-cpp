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
#include <aws/appstream/AppStreamRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appstream/model/MessageAction.h>
#include <aws/appstream/model/AuthenticationType.h>
#include <utility>

namespace Aws
{
namespace AppStream
{
namespace Model
{

  /**
   */
  class AWS_APPSTREAM_API CreateUserRequest : public AppStreamRequest
  {
  public:
    CreateUserRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateUser"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The email address of the user.</p> <note> <p>Users' email addresses are
     * case-sensitive. During login, if they specify an email address that doesn't use
     * the same capitalization as the email address specified when their user pool
     * account was created, a "user does not exist" error message displays.</p> </note>
     */
    inline const Aws::String& GetUserName() const{ return m_userName; }

    /**
     * <p>The email address of the user.</p> <note> <p>Users' email addresses are
     * case-sensitive. During login, if they specify an email address that doesn't use
     * the same capitalization as the email address specified when their user pool
     * account was created, a "user does not exist" error message displays.</p> </note>
     */
    inline bool UserNameHasBeenSet() const { return m_userNameHasBeenSet; }

    /**
     * <p>The email address of the user.</p> <note> <p>Users' email addresses are
     * case-sensitive. During login, if they specify an email address that doesn't use
     * the same capitalization as the email address specified when their user pool
     * account was created, a "user does not exist" error message displays.</p> </note>
     */
    inline void SetUserName(const Aws::String& value) { m_userNameHasBeenSet = true; m_userName = value; }

    /**
     * <p>The email address of the user.</p> <note> <p>Users' email addresses are
     * case-sensitive. During login, if they specify an email address that doesn't use
     * the same capitalization as the email address specified when their user pool
     * account was created, a "user does not exist" error message displays.</p> </note>
     */
    inline void SetUserName(Aws::String&& value) { m_userNameHasBeenSet = true; m_userName = std::move(value); }

    /**
     * <p>The email address of the user.</p> <note> <p>Users' email addresses are
     * case-sensitive. During login, if they specify an email address that doesn't use
     * the same capitalization as the email address specified when their user pool
     * account was created, a "user does not exist" error message displays.</p> </note>
     */
    inline void SetUserName(const char* value) { m_userNameHasBeenSet = true; m_userName.assign(value); }

    /**
     * <p>The email address of the user.</p> <note> <p>Users' email addresses are
     * case-sensitive. During login, if they specify an email address that doesn't use
     * the same capitalization as the email address specified when their user pool
     * account was created, a "user does not exist" error message displays.</p> </note>
     */
    inline CreateUserRequest& WithUserName(const Aws::String& value) { SetUserName(value); return *this;}

    /**
     * <p>The email address of the user.</p> <note> <p>Users' email addresses are
     * case-sensitive. During login, if they specify an email address that doesn't use
     * the same capitalization as the email address specified when their user pool
     * account was created, a "user does not exist" error message displays.</p> </note>
     */
    inline CreateUserRequest& WithUserName(Aws::String&& value) { SetUserName(std::move(value)); return *this;}

    /**
     * <p>The email address of the user.</p> <note> <p>Users' email addresses are
     * case-sensitive. During login, if they specify an email address that doesn't use
     * the same capitalization as the email address specified when their user pool
     * account was created, a "user does not exist" error message displays.</p> </note>
     */
    inline CreateUserRequest& WithUserName(const char* value) { SetUserName(value); return *this;}


    /**
     * <p>The action to take for the welcome email that is sent to a user after the
     * user is created in the user pool. If you specify SUPPRESS, no email is sent. If
     * you specify RESEND, do not specify the first name or last name of the user. If
     * the value is null, the email is sent. </p> <note> <p>The temporary password in
     * the welcome email is valid for only 7 days. If users don’t set their passwords
     * within 7 days, you must send them a new welcome email.</p> </note>
     */
    inline const MessageAction& GetMessageAction() const{ return m_messageAction; }

    /**
     * <p>The action to take for the welcome email that is sent to a user after the
     * user is created in the user pool. If you specify SUPPRESS, no email is sent. If
     * you specify RESEND, do not specify the first name or last name of the user. If
     * the value is null, the email is sent. </p> <note> <p>The temporary password in
     * the welcome email is valid for only 7 days. If users don’t set their passwords
     * within 7 days, you must send them a new welcome email.</p> </note>
     */
    inline bool MessageActionHasBeenSet() const { return m_messageActionHasBeenSet; }

    /**
     * <p>The action to take for the welcome email that is sent to a user after the
     * user is created in the user pool. If you specify SUPPRESS, no email is sent. If
     * you specify RESEND, do not specify the first name or last name of the user. If
     * the value is null, the email is sent. </p> <note> <p>The temporary password in
     * the welcome email is valid for only 7 days. If users don’t set their passwords
     * within 7 days, you must send them a new welcome email.</p> </note>
     */
    inline void SetMessageAction(const MessageAction& value) { m_messageActionHasBeenSet = true; m_messageAction = value; }

    /**
     * <p>The action to take for the welcome email that is sent to a user after the
     * user is created in the user pool. If you specify SUPPRESS, no email is sent. If
     * you specify RESEND, do not specify the first name or last name of the user. If
     * the value is null, the email is sent. </p> <note> <p>The temporary password in
     * the welcome email is valid for only 7 days. If users don’t set their passwords
     * within 7 days, you must send them a new welcome email.</p> </note>
     */
    inline void SetMessageAction(MessageAction&& value) { m_messageActionHasBeenSet = true; m_messageAction = std::move(value); }

    /**
     * <p>The action to take for the welcome email that is sent to a user after the
     * user is created in the user pool. If you specify SUPPRESS, no email is sent. If
     * you specify RESEND, do not specify the first name or last name of the user. If
     * the value is null, the email is sent. </p> <note> <p>The temporary password in
     * the welcome email is valid for only 7 days. If users don’t set their passwords
     * within 7 days, you must send them a new welcome email.</p> </note>
     */
    inline CreateUserRequest& WithMessageAction(const MessageAction& value) { SetMessageAction(value); return *this;}

    /**
     * <p>The action to take for the welcome email that is sent to a user after the
     * user is created in the user pool. If you specify SUPPRESS, no email is sent. If
     * you specify RESEND, do not specify the first name or last name of the user. If
     * the value is null, the email is sent. </p> <note> <p>The temporary password in
     * the welcome email is valid for only 7 days. If users don’t set their passwords
     * within 7 days, you must send them a new welcome email.</p> </note>
     */
    inline CreateUserRequest& WithMessageAction(MessageAction&& value) { SetMessageAction(std::move(value)); return *this;}


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
    inline CreateUserRequest& WithFirstName(const Aws::String& value) { SetFirstName(value); return *this;}

    /**
     * <p>The first name, or given name, of the user.</p>
     */
    inline CreateUserRequest& WithFirstName(Aws::String&& value) { SetFirstName(std::move(value)); return *this;}

    /**
     * <p>The first name, or given name, of the user.</p>
     */
    inline CreateUserRequest& WithFirstName(const char* value) { SetFirstName(value); return *this;}


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
    inline CreateUserRequest& WithLastName(const Aws::String& value) { SetLastName(value); return *this;}

    /**
     * <p>The last name, or surname, of the user.</p>
     */
    inline CreateUserRequest& WithLastName(Aws::String&& value) { SetLastName(std::move(value)); return *this;}

    /**
     * <p>The last name, or surname, of the user.</p>
     */
    inline CreateUserRequest& WithLastName(const char* value) { SetLastName(value); return *this;}


    /**
     * <p>The authentication type for the user. You must specify USERPOOL. </p>
     */
    inline const AuthenticationType& GetAuthenticationType() const{ return m_authenticationType; }

    /**
     * <p>The authentication type for the user. You must specify USERPOOL. </p>
     */
    inline bool AuthenticationTypeHasBeenSet() const { return m_authenticationTypeHasBeenSet; }

    /**
     * <p>The authentication type for the user. You must specify USERPOOL. </p>
     */
    inline void SetAuthenticationType(const AuthenticationType& value) { m_authenticationTypeHasBeenSet = true; m_authenticationType = value; }

    /**
     * <p>The authentication type for the user. You must specify USERPOOL. </p>
     */
    inline void SetAuthenticationType(AuthenticationType&& value) { m_authenticationTypeHasBeenSet = true; m_authenticationType = std::move(value); }

    /**
     * <p>The authentication type for the user. You must specify USERPOOL. </p>
     */
    inline CreateUserRequest& WithAuthenticationType(const AuthenticationType& value) { SetAuthenticationType(value); return *this;}

    /**
     * <p>The authentication type for the user. You must specify USERPOOL. </p>
     */
    inline CreateUserRequest& WithAuthenticationType(AuthenticationType&& value) { SetAuthenticationType(std::move(value)); return *this;}

  private:

    Aws::String m_userName;
    bool m_userNameHasBeenSet;

    MessageAction m_messageAction;
    bool m_messageActionHasBeenSet;

    Aws::String m_firstName;
    bool m_firstNameHasBeenSet;

    Aws::String m_lastName;
    bool m_lastNameHasBeenSet;

    AuthenticationType m_authenticationType;
    bool m_authenticationTypeHasBeenSet;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
