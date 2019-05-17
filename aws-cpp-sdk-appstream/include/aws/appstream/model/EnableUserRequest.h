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
  class AWS_APPSTREAM_API EnableUserRequest : public AppStreamRequest
  {
  public:
    EnableUserRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "EnableUser"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The email address of the user.</p> <note> <p>Users' email addresses are
     * case-sensitive. During login, if they specify an email address that doesn't use
     * the same capitalization as the email address specified when their user pool
     * account was created, a "user does not exist" error message displays. </p>
     * </note>
     */
    inline const Aws::String& GetUserName() const{ return m_userName; }

    /**
     * <p>The email address of the user.</p> <note> <p>Users' email addresses are
     * case-sensitive. During login, if they specify an email address that doesn't use
     * the same capitalization as the email address specified when their user pool
     * account was created, a "user does not exist" error message displays. </p>
     * </note>
     */
    inline bool UserNameHasBeenSet() const { return m_userNameHasBeenSet; }

    /**
     * <p>The email address of the user.</p> <note> <p>Users' email addresses are
     * case-sensitive. During login, if they specify an email address that doesn't use
     * the same capitalization as the email address specified when their user pool
     * account was created, a "user does not exist" error message displays. </p>
     * </note>
     */
    inline void SetUserName(const Aws::String& value) { m_userNameHasBeenSet = true; m_userName = value; }

    /**
     * <p>The email address of the user.</p> <note> <p>Users' email addresses are
     * case-sensitive. During login, if they specify an email address that doesn't use
     * the same capitalization as the email address specified when their user pool
     * account was created, a "user does not exist" error message displays. </p>
     * </note>
     */
    inline void SetUserName(Aws::String&& value) { m_userNameHasBeenSet = true; m_userName = std::move(value); }

    /**
     * <p>The email address of the user.</p> <note> <p>Users' email addresses are
     * case-sensitive. During login, if they specify an email address that doesn't use
     * the same capitalization as the email address specified when their user pool
     * account was created, a "user does not exist" error message displays. </p>
     * </note>
     */
    inline void SetUserName(const char* value) { m_userNameHasBeenSet = true; m_userName.assign(value); }

    /**
     * <p>The email address of the user.</p> <note> <p>Users' email addresses are
     * case-sensitive. During login, if they specify an email address that doesn't use
     * the same capitalization as the email address specified when their user pool
     * account was created, a "user does not exist" error message displays. </p>
     * </note>
     */
    inline EnableUserRequest& WithUserName(const Aws::String& value) { SetUserName(value); return *this;}

    /**
     * <p>The email address of the user.</p> <note> <p>Users' email addresses are
     * case-sensitive. During login, if they specify an email address that doesn't use
     * the same capitalization as the email address specified when their user pool
     * account was created, a "user does not exist" error message displays. </p>
     * </note>
     */
    inline EnableUserRequest& WithUserName(Aws::String&& value) { SetUserName(std::move(value)); return *this;}

    /**
     * <p>The email address of the user.</p> <note> <p>Users' email addresses are
     * case-sensitive. During login, if they specify an email address that doesn't use
     * the same capitalization as the email address specified when their user pool
     * account was created, a "user does not exist" error message displays. </p>
     * </note>
     */
    inline EnableUserRequest& WithUserName(const char* value) { SetUserName(value); return *this;}


    /**
     * <p>The authentication type for the user. You must specify USERPOOL.</p>
     */
    inline const AuthenticationType& GetAuthenticationType() const{ return m_authenticationType; }

    /**
     * <p>The authentication type for the user. You must specify USERPOOL.</p>
     */
    inline bool AuthenticationTypeHasBeenSet() const { return m_authenticationTypeHasBeenSet; }

    /**
     * <p>The authentication type for the user. You must specify USERPOOL.</p>
     */
    inline void SetAuthenticationType(const AuthenticationType& value) { m_authenticationTypeHasBeenSet = true; m_authenticationType = value; }

    /**
     * <p>The authentication type for the user. You must specify USERPOOL.</p>
     */
    inline void SetAuthenticationType(AuthenticationType&& value) { m_authenticationTypeHasBeenSet = true; m_authenticationType = std::move(value); }

    /**
     * <p>The authentication type for the user. You must specify USERPOOL.</p>
     */
    inline EnableUserRequest& WithAuthenticationType(const AuthenticationType& value) { SetAuthenticationType(value); return *this;}

    /**
     * <p>The authentication type for the user. You must specify USERPOOL.</p>
     */
    inline EnableUserRequest& WithAuthenticationType(AuthenticationType&& value) { SetAuthenticationType(std::move(value)); return *this;}

  private:

    Aws::String m_userName;
    bool m_userNameHasBeenSet;

    AuthenticationType m_authenticationType;
    bool m_authenticationTypeHasBeenSet;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
