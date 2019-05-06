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
#include <aws/cognito-idp/model/CustomDomainConfigType.h>
#include <utility>

namespace Aws
{
namespace CognitoIdentityProvider
{
namespace Model
{

  /**
   */
  class AWS_COGNITOIDENTITYPROVIDER_API CreateUserPoolDomainRequest : public CognitoIdentityProviderRequest
  {
  public:
    CreateUserPoolDomainRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateUserPoolDomain"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The domain string.</p>
     */
    inline const Aws::String& GetDomain() const{ return m_domain; }

    /**
     * <p>The domain string.</p>
     */
    inline bool DomainHasBeenSet() const { return m_domainHasBeenSet; }

    /**
     * <p>The domain string.</p>
     */
    inline void SetDomain(const Aws::String& value) { m_domainHasBeenSet = true; m_domain = value; }

    /**
     * <p>The domain string.</p>
     */
    inline void SetDomain(Aws::String&& value) { m_domainHasBeenSet = true; m_domain = std::move(value); }

    /**
     * <p>The domain string.</p>
     */
    inline void SetDomain(const char* value) { m_domainHasBeenSet = true; m_domain.assign(value); }

    /**
     * <p>The domain string.</p>
     */
    inline CreateUserPoolDomainRequest& WithDomain(const Aws::String& value) { SetDomain(value); return *this;}

    /**
     * <p>The domain string.</p>
     */
    inline CreateUserPoolDomainRequest& WithDomain(Aws::String&& value) { SetDomain(std::move(value)); return *this;}

    /**
     * <p>The domain string.</p>
     */
    inline CreateUserPoolDomainRequest& WithDomain(const char* value) { SetDomain(value); return *this;}


    /**
     * <p>The user pool ID.</p>
     */
    inline const Aws::String& GetUserPoolId() const{ return m_userPoolId; }

    /**
     * <p>The user pool ID.</p>
     */
    inline bool UserPoolIdHasBeenSet() const { return m_userPoolIdHasBeenSet; }

    /**
     * <p>The user pool ID.</p>
     */
    inline void SetUserPoolId(const Aws::String& value) { m_userPoolIdHasBeenSet = true; m_userPoolId = value; }

    /**
     * <p>The user pool ID.</p>
     */
    inline void SetUserPoolId(Aws::String&& value) { m_userPoolIdHasBeenSet = true; m_userPoolId = std::move(value); }

    /**
     * <p>The user pool ID.</p>
     */
    inline void SetUserPoolId(const char* value) { m_userPoolIdHasBeenSet = true; m_userPoolId.assign(value); }

    /**
     * <p>The user pool ID.</p>
     */
    inline CreateUserPoolDomainRequest& WithUserPoolId(const Aws::String& value) { SetUserPoolId(value); return *this;}

    /**
     * <p>The user pool ID.</p>
     */
    inline CreateUserPoolDomainRequest& WithUserPoolId(Aws::String&& value) { SetUserPoolId(std::move(value)); return *this;}

    /**
     * <p>The user pool ID.</p>
     */
    inline CreateUserPoolDomainRequest& WithUserPoolId(const char* value) { SetUserPoolId(value); return *this;}


    /**
     * <p>The configuration for a custom domain that hosts the sign-up and sign-in
     * webpages for your application.</p> <p>Provide this parameter only if you want to
     * use a custom domain for your user pool. Otherwise, you can exclude this
     * parameter and use the Amazon Cognito hosted domain instead.</p> <p>For more
     * information about the hosted domain and custom domains, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-pools-assign-domain.html">Configuring
     * a User Pool Domain</a>.</p>
     */
    inline const CustomDomainConfigType& GetCustomDomainConfig() const{ return m_customDomainConfig; }

    /**
     * <p>The configuration for a custom domain that hosts the sign-up and sign-in
     * webpages for your application.</p> <p>Provide this parameter only if you want to
     * use a custom domain for your user pool. Otherwise, you can exclude this
     * parameter and use the Amazon Cognito hosted domain instead.</p> <p>For more
     * information about the hosted domain and custom domains, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-pools-assign-domain.html">Configuring
     * a User Pool Domain</a>.</p>
     */
    inline bool CustomDomainConfigHasBeenSet() const { return m_customDomainConfigHasBeenSet; }

    /**
     * <p>The configuration for a custom domain that hosts the sign-up and sign-in
     * webpages for your application.</p> <p>Provide this parameter only if you want to
     * use a custom domain for your user pool. Otherwise, you can exclude this
     * parameter and use the Amazon Cognito hosted domain instead.</p> <p>For more
     * information about the hosted domain and custom domains, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-pools-assign-domain.html">Configuring
     * a User Pool Domain</a>.</p>
     */
    inline void SetCustomDomainConfig(const CustomDomainConfigType& value) { m_customDomainConfigHasBeenSet = true; m_customDomainConfig = value; }

    /**
     * <p>The configuration for a custom domain that hosts the sign-up and sign-in
     * webpages for your application.</p> <p>Provide this parameter only if you want to
     * use a custom domain for your user pool. Otherwise, you can exclude this
     * parameter and use the Amazon Cognito hosted domain instead.</p> <p>For more
     * information about the hosted domain and custom domains, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-pools-assign-domain.html">Configuring
     * a User Pool Domain</a>.</p>
     */
    inline void SetCustomDomainConfig(CustomDomainConfigType&& value) { m_customDomainConfigHasBeenSet = true; m_customDomainConfig = std::move(value); }

    /**
     * <p>The configuration for a custom domain that hosts the sign-up and sign-in
     * webpages for your application.</p> <p>Provide this parameter only if you want to
     * use a custom domain for your user pool. Otherwise, you can exclude this
     * parameter and use the Amazon Cognito hosted domain instead.</p> <p>For more
     * information about the hosted domain and custom domains, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-pools-assign-domain.html">Configuring
     * a User Pool Domain</a>.</p>
     */
    inline CreateUserPoolDomainRequest& WithCustomDomainConfig(const CustomDomainConfigType& value) { SetCustomDomainConfig(value); return *this;}

    /**
     * <p>The configuration for a custom domain that hosts the sign-up and sign-in
     * webpages for your application.</p> <p>Provide this parameter only if you want to
     * use a custom domain for your user pool. Otherwise, you can exclude this
     * parameter and use the Amazon Cognito hosted domain instead.</p> <p>For more
     * information about the hosted domain and custom domains, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-pools-assign-domain.html">Configuring
     * a User Pool Domain</a>.</p>
     */
    inline CreateUserPoolDomainRequest& WithCustomDomainConfig(CustomDomainConfigType&& value) { SetCustomDomainConfig(std::move(value)); return *this;}

  private:

    Aws::String m_domain;
    bool m_domainHasBeenSet;

    Aws::String m_userPoolId;
    bool m_userPoolIdHasBeenSet;

    CustomDomainConfigType m_customDomainConfig;
    bool m_customDomainConfigHasBeenSet;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
