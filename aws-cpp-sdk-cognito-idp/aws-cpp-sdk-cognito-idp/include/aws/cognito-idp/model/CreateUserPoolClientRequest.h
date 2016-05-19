/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

namespace Aws
{
namespace CognitoIdentityProvider
{
namespace Model
{

  /**
   * <p>Represents the request to create a user pool client.</p>
   */
  class AWS_COGNITOIDENTITYPROVIDER_API CreateUserPoolClientRequest : public CognitoIdentityProviderRequest
  {
  public:
    CreateUserPoolClientRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The user pool ID for the user pool where you want to create a user pool
     * client.</p>
     */
    inline const Aws::String& GetUserPoolId() const{ return m_userPoolId; }

    /**
     * <p>The user pool ID for the user pool where you want to create a user pool
     * client.</p>
     */
    inline void SetUserPoolId(const Aws::String& value) { m_userPoolIdHasBeenSet = true; m_userPoolId = value; }

    /**
     * <p>The user pool ID for the user pool where you want to create a user pool
     * client.</p>
     */
    inline void SetUserPoolId(Aws::String&& value) { m_userPoolIdHasBeenSet = true; m_userPoolId = value; }

    /**
     * <p>The user pool ID for the user pool where you want to create a user pool
     * client.</p>
     */
    inline void SetUserPoolId(const char* value) { m_userPoolIdHasBeenSet = true; m_userPoolId.assign(value); }

    /**
     * <p>The user pool ID for the user pool where you want to create a user pool
     * client.</p>
     */
    inline CreateUserPoolClientRequest& WithUserPoolId(const Aws::String& value) { SetUserPoolId(value); return *this;}

    /**
     * <p>The user pool ID for the user pool where you want to create a user pool
     * client.</p>
     */
    inline CreateUserPoolClientRequest& WithUserPoolId(Aws::String&& value) { SetUserPoolId(value); return *this;}

    /**
     * <p>The user pool ID for the user pool where you want to create a user pool
     * client.</p>
     */
    inline CreateUserPoolClientRequest& WithUserPoolId(const char* value) { SetUserPoolId(value); return *this;}

    /**
     * <p>The client name for the user pool client you would like to create.</p>
     */
    inline const Aws::String& GetClientName() const{ return m_clientName; }

    /**
     * <p>The client name for the user pool client you would like to create.</p>
     */
    inline void SetClientName(const Aws::String& value) { m_clientNameHasBeenSet = true; m_clientName = value; }

    /**
     * <p>The client name for the user pool client you would like to create.</p>
     */
    inline void SetClientName(Aws::String&& value) { m_clientNameHasBeenSet = true; m_clientName = value; }

    /**
     * <p>The client name for the user pool client you would like to create.</p>
     */
    inline void SetClientName(const char* value) { m_clientNameHasBeenSet = true; m_clientName.assign(value); }

    /**
     * <p>The client name for the user pool client you would like to create.</p>
     */
    inline CreateUserPoolClientRequest& WithClientName(const Aws::String& value) { SetClientName(value); return *this;}

    /**
     * <p>The client name for the user pool client you would like to create.</p>
     */
    inline CreateUserPoolClientRequest& WithClientName(Aws::String&& value) { SetClientName(value); return *this;}

    /**
     * <p>The client name for the user pool client you would like to create.</p>
     */
    inline CreateUserPoolClientRequest& WithClientName(const char* value) { SetClientName(value); return *this;}

    /**
     * <p> Boolean to specify whether you want to generate a secret for the user pool
     * client being created.</p>
     */
    inline bool GetGenerateSecret() const{ return m_generateSecret; }

    /**
     * <p> Boolean to specify whether you want to generate a secret for the user pool
     * client being created.</p>
     */
    inline void SetGenerateSecret(bool value) { m_generateSecretHasBeenSet = true; m_generateSecret = value; }

    /**
     * <p> Boolean to specify whether you want to generate a secret for the user pool
     * client being created.</p>
     */
    inline CreateUserPoolClientRequest& WithGenerateSecret(bool value) { SetGenerateSecret(value); return *this;}

  private:
    Aws::String m_userPoolId;
    bool m_userPoolIdHasBeenSet;
    Aws::String m_clientName;
    bool m_clientNameHasBeenSet;
    bool m_generateSecret;
    bool m_generateSecretHasBeenSet;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
