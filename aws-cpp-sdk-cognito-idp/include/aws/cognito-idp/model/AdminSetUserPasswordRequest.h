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
  class AWS_COGNITOIDENTITYPROVIDER_API AdminSetUserPasswordRequest : public CognitoIdentityProviderRequest
  {
  public:
    AdminSetUserPasswordRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AdminSetUserPassword"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    
    inline const Aws::String& GetUserPoolId() const{ return m_userPoolId; }

    
    inline bool UserPoolIdHasBeenSet() const { return m_userPoolIdHasBeenSet; }

    
    inline void SetUserPoolId(const Aws::String& value) { m_userPoolIdHasBeenSet = true; m_userPoolId = value; }

    
    inline void SetUserPoolId(Aws::String&& value) { m_userPoolIdHasBeenSet = true; m_userPoolId = std::move(value); }

    
    inline void SetUserPoolId(const char* value) { m_userPoolIdHasBeenSet = true; m_userPoolId.assign(value); }

    
    inline AdminSetUserPasswordRequest& WithUserPoolId(const Aws::String& value) { SetUserPoolId(value); return *this;}

    
    inline AdminSetUserPasswordRequest& WithUserPoolId(Aws::String&& value) { SetUserPoolId(std::move(value)); return *this;}

    
    inline AdminSetUserPasswordRequest& WithUserPoolId(const char* value) { SetUserPoolId(value); return *this;}


    
    inline const Aws::String& GetUsername() const{ return m_username; }

    
    inline bool UsernameHasBeenSet() const { return m_usernameHasBeenSet; }

    
    inline void SetUsername(const Aws::String& value) { m_usernameHasBeenSet = true; m_username = value; }

    
    inline void SetUsername(Aws::String&& value) { m_usernameHasBeenSet = true; m_username = std::move(value); }

    
    inline void SetUsername(const char* value) { m_usernameHasBeenSet = true; m_username.assign(value); }

    
    inline AdminSetUserPasswordRequest& WithUsername(const Aws::String& value) { SetUsername(value); return *this;}

    
    inline AdminSetUserPasswordRequest& WithUsername(Aws::String&& value) { SetUsername(std::move(value)); return *this;}

    
    inline AdminSetUserPasswordRequest& WithUsername(const char* value) { SetUsername(value); return *this;}


    
    inline const Aws::String& GetPassword() const{ return m_password; }

    
    inline bool PasswordHasBeenSet() const { return m_passwordHasBeenSet; }

    
    inline void SetPassword(const Aws::String& value) { m_passwordHasBeenSet = true; m_password = value; }

    
    inline void SetPassword(Aws::String&& value) { m_passwordHasBeenSet = true; m_password = std::move(value); }

    
    inline void SetPassword(const char* value) { m_passwordHasBeenSet = true; m_password.assign(value); }

    
    inline AdminSetUserPasswordRequest& WithPassword(const Aws::String& value) { SetPassword(value); return *this;}

    
    inline AdminSetUserPasswordRequest& WithPassword(Aws::String&& value) { SetPassword(std::move(value)); return *this;}

    
    inline AdminSetUserPasswordRequest& WithPassword(const char* value) { SetPassword(value); return *this;}


    
    inline bool GetPermanent() const{ return m_permanent; }

    
    inline bool PermanentHasBeenSet() const { return m_permanentHasBeenSet; }

    
    inline void SetPermanent(bool value) { m_permanentHasBeenSet = true; m_permanent = value; }

    
    inline AdminSetUserPasswordRequest& WithPermanent(bool value) { SetPermanent(value); return *this;}

  private:

    Aws::String m_userPoolId;
    bool m_userPoolIdHasBeenSet;

    Aws::String m_username;
    bool m_usernameHasBeenSet;

    Aws::String m_password;
    bool m_passwordHasBeenSet;

    bool m_permanent;
    bool m_permanentHasBeenSet;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
