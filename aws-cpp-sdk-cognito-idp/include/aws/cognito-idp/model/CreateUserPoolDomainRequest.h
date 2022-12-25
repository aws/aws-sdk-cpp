/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class CreateUserPoolDomainRequest : public CognitoIdentityProviderRequest
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API CreateUserPoolDomainRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateUserPoolDomain"; }

    AWS_COGNITOIDENTITYPROVIDER_API Aws::String SerializePayload() const override;

    AWS_COGNITOIDENTITYPROVIDER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The domain string. For custom domains, this is the fully-qualified domain
     * name, such as <code>auth.example.com</code>. For Amazon Cognito prefix domains,
     * this is the prefix alone, such as <code>auth</code>.</p>
     */
    inline const Aws::String& GetDomain() const{ return m_domain; }

    /**
     * <p>The domain string. For custom domains, this is the fully-qualified domain
     * name, such as <code>auth.example.com</code>. For Amazon Cognito prefix domains,
     * this is the prefix alone, such as <code>auth</code>.</p>
     */
    inline bool DomainHasBeenSet() const { return m_domainHasBeenSet; }

    /**
     * <p>The domain string. For custom domains, this is the fully-qualified domain
     * name, such as <code>auth.example.com</code>. For Amazon Cognito prefix domains,
     * this is the prefix alone, such as <code>auth</code>.</p>
     */
    inline void SetDomain(const Aws::String& value) { m_domainHasBeenSet = true; m_domain = value; }

    /**
     * <p>The domain string. For custom domains, this is the fully-qualified domain
     * name, such as <code>auth.example.com</code>. For Amazon Cognito prefix domains,
     * this is the prefix alone, such as <code>auth</code>.</p>
     */
    inline void SetDomain(Aws::String&& value) { m_domainHasBeenSet = true; m_domain = std::move(value); }

    /**
     * <p>The domain string. For custom domains, this is the fully-qualified domain
     * name, such as <code>auth.example.com</code>. For Amazon Cognito prefix domains,
     * this is the prefix alone, such as <code>auth</code>.</p>
     */
    inline void SetDomain(const char* value) { m_domainHasBeenSet = true; m_domain.assign(value); }

    /**
     * <p>The domain string. For custom domains, this is the fully-qualified domain
     * name, such as <code>auth.example.com</code>. For Amazon Cognito prefix domains,
     * this is the prefix alone, such as <code>auth</code>.</p>
     */
    inline CreateUserPoolDomainRequest& WithDomain(const Aws::String& value) { SetDomain(value); return *this;}

    /**
     * <p>The domain string. For custom domains, this is the fully-qualified domain
     * name, such as <code>auth.example.com</code>. For Amazon Cognito prefix domains,
     * this is the prefix alone, such as <code>auth</code>.</p>
     */
    inline CreateUserPoolDomainRequest& WithDomain(Aws::String&& value) { SetDomain(std::move(value)); return *this;}

    /**
     * <p>The domain string. For custom domains, this is the fully-qualified domain
     * name, such as <code>auth.example.com</code>. For Amazon Cognito prefix domains,
     * this is the prefix alone, such as <code>auth</code>.</p>
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
    bool m_domainHasBeenSet = false;

    Aws::String m_userPoolId;
    bool m_userPoolIdHasBeenSet = false;

    CustomDomainConfigType m_customDomainConfig;
    bool m_customDomainConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
