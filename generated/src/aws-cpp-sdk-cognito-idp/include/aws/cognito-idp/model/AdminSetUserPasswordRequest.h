/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/cognito-idp/CognitoIdentityProviderRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CognitoIdentityProvider
{
namespace Model
{

  /**
   */
  class AdminSetUserPasswordRequest : public CognitoIdentityProviderRequest
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API AdminSetUserPasswordRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AdminSetUserPassword"; }

    AWS_COGNITOIDENTITYPROVIDER_API Aws::String SerializePayload() const override;

    AWS_COGNITOIDENTITYPROVIDER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The user pool ID for the user pool where you want to set the user's
     * password.</p>
     */
    inline const Aws::String& GetUserPoolId() const{ return m_userPoolId; }

    /**
     * <p>The user pool ID for the user pool where you want to set the user's
     * password.</p>
     */
    inline bool UserPoolIdHasBeenSet() const { return m_userPoolIdHasBeenSet; }

    /**
     * <p>The user pool ID for the user pool where you want to set the user's
     * password.</p>
     */
    inline void SetUserPoolId(const Aws::String& value) { m_userPoolIdHasBeenSet = true; m_userPoolId = value; }

    /**
     * <p>The user pool ID for the user pool where you want to set the user's
     * password.</p>
     */
    inline void SetUserPoolId(Aws::String&& value) { m_userPoolIdHasBeenSet = true; m_userPoolId = std::move(value); }

    /**
     * <p>The user pool ID for the user pool where you want to set the user's
     * password.</p>
     */
    inline void SetUserPoolId(const char* value) { m_userPoolIdHasBeenSet = true; m_userPoolId.assign(value); }

    /**
     * <p>The user pool ID for the user pool where you want to set the user's
     * password.</p>
     */
    inline AdminSetUserPasswordRequest& WithUserPoolId(const Aws::String& value) { SetUserPoolId(value); return *this;}

    /**
     * <p>The user pool ID for the user pool where you want to set the user's
     * password.</p>
     */
    inline AdminSetUserPasswordRequest& WithUserPoolId(Aws::String&& value) { SetUserPoolId(std::move(value)); return *this;}

    /**
     * <p>The user pool ID for the user pool where you want to set the user's
     * password.</p>
     */
    inline AdminSetUserPasswordRequest& WithUserPoolId(const char* value) { SetUserPoolId(value); return *this;}


    /**
     * <p>The user name of the user whose password you want to set.</p>
     */
    inline const Aws::String& GetUsername() const{ return m_username; }

    /**
     * <p>The user name of the user whose password you want to set.</p>
     */
    inline bool UsernameHasBeenSet() const { return m_usernameHasBeenSet; }

    /**
     * <p>The user name of the user whose password you want to set.</p>
     */
    inline void SetUsername(const Aws::String& value) { m_usernameHasBeenSet = true; m_username = value; }

    /**
     * <p>The user name of the user whose password you want to set.</p>
     */
    inline void SetUsername(Aws::String&& value) { m_usernameHasBeenSet = true; m_username = std::move(value); }

    /**
     * <p>The user name of the user whose password you want to set.</p>
     */
    inline void SetUsername(const char* value) { m_usernameHasBeenSet = true; m_username.assign(value); }

    /**
     * <p>The user name of the user whose password you want to set.</p>
     */
    inline AdminSetUserPasswordRequest& WithUsername(const Aws::String& value) { SetUsername(value); return *this;}

    /**
     * <p>The user name of the user whose password you want to set.</p>
     */
    inline AdminSetUserPasswordRequest& WithUsername(Aws::String&& value) { SetUsername(std::move(value)); return *this;}

    /**
     * <p>The user name of the user whose password you want to set.</p>
     */
    inline AdminSetUserPasswordRequest& WithUsername(const char* value) { SetUsername(value); return *this;}


    /**
     * <p>The password for the user.</p>
     */
    inline const Aws::String& GetPassword() const{ return m_password; }

    /**
     * <p>The password for the user.</p>
     */
    inline bool PasswordHasBeenSet() const { return m_passwordHasBeenSet; }

    /**
     * <p>The password for the user.</p>
     */
    inline void SetPassword(const Aws::String& value) { m_passwordHasBeenSet = true; m_password = value; }

    /**
     * <p>The password for the user.</p>
     */
    inline void SetPassword(Aws::String&& value) { m_passwordHasBeenSet = true; m_password = std::move(value); }

    /**
     * <p>The password for the user.</p>
     */
    inline void SetPassword(const char* value) { m_passwordHasBeenSet = true; m_password.assign(value); }

    /**
     * <p>The password for the user.</p>
     */
    inline AdminSetUserPasswordRequest& WithPassword(const Aws::String& value) { SetPassword(value); return *this;}

    /**
     * <p>The password for the user.</p>
     */
    inline AdminSetUserPasswordRequest& WithPassword(Aws::String&& value) { SetPassword(std::move(value)); return *this;}

    /**
     * <p>The password for the user.</p>
     */
    inline AdminSetUserPasswordRequest& WithPassword(const char* value) { SetPassword(value); return *this;}


    /**
     * <p> <code>True</code> if the password is permanent, <code>False</code> if it is
     * temporary.</p>
     */
    inline bool GetPermanent() const{ return m_permanent; }

    /**
     * <p> <code>True</code> if the password is permanent, <code>False</code> if it is
     * temporary.</p>
     */
    inline bool PermanentHasBeenSet() const { return m_permanentHasBeenSet; }

    /**
     * <p> <code>True</code> if the password is permanent, <code>False</code> if it is
     * temporary.</p>
     */
    inline void SetPermanent(bool value) { m_permanentHasBeenSet = true; m_permanent = value; }

    /**
     * <p> <code>True</code> if the password is permanent, <code>False</code> if it is
     * temporary.</p>
     */
    inline AdminSetUserPasswordRequest& WithPermanent(bool value) { SetPermanent(value); return *this;}

  private:

    Aws::String m_userPoolId;
    bool m_userPoolIdHasBeenSet = false;

    Aws::String m_username;
    bool m_usernameHasBeenSet = false;

    Aws::String m_password;
    bool m_passwordHasBeenSet = false;

    bool m_permanent;
    bool m_permanentHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
