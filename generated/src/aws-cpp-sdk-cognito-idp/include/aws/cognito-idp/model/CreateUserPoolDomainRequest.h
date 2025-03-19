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
    AWS_COGNITOIDENTITYPROVIDER_API CreateUserPoolDomainRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateUserPoolDomain"; }

    AWS_COGNITOIDENTITYPROVIDER_API Aws::String SerializePayload() const override;

    AWS_COGNITOIDENTITYPROVIDER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The domain string. For custom domains, this is the fully-qualified domain
     * name, such as <code>auth.example.com</code>. For prefix domains, this is the
     * prefix alone, such as <code>myprefix</code>. A prefix value of
     * <code>myprefix</code> for a user pool in the <code>us-east-1</code> Region
     * results in a domain of
     * <code>myprefix.auth.us-east-1.amazoncognito.com</code>.</p>
     */
    inline const Aws::String& GetDomain() const { return m_domain; }
    inline bool DomainHasBeenSet() const { return m_domainHasBeenSet; }
    template<typename DomainT = Aws::String>
    void SetDomain(DomainT&& value) { m_domainHasBeenSet = true; m_domain = std::forward<DomainT>(value); }
    template<typename DomainT = Aws::String>
    CreateUserPoolDomainRequest& WithDomain(DomainT&& value) { SetDomain(std::forward<DomainT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the user pool where you want to add a domain.</p>
     */
    inline const Aws::String& GetUserPoolId() const { return m_userPoolId; }
    inline bool UserPoolIdHasBeenSet() const { return m_userPoolIdHasBeenSet; }
    template<typename UserPoolIdT = Aws::String>
    void SetUserPoolId(UserPoolIdT&& value) { m_userPoolIdHasBeenSet = true; m_userPoolId = std::forward<UserPoolIdT>(value); }
    template<typename UserPoolIdT = Aws::String>
    CreateUserPoolDomainRequest& WithUserPoolId(UserPoolIdT&& value) { SetUserPoolId(std::forward<UserPoolIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of managed login branding that you want to apply to your domain.
     * A value of <code>1</code> indicates hosted UI (classic) and a version of
     * <code>2</code> indicates managed login.</p> <p>Managed login requires that your
     * user pool be configured for any <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-sign-in-feature-plans.html">feature
     * plan</a> other than <code>Lite</code>.</p>
     */
    inline int GetManagedLoginVersion() const { return m_managedLoginVersion; }
    inline bool ManagedLoginVersionHasBeenSet() const { return m_managedLoginVersionHasBeenSet; }
    inline void SetManagedLoginVersion(int value) { m_managedLoginVersionHasBeenSet = true; m_managedLoginVersion = value; }
    inline CreateUserPoolDomainRequest& WithManagedLoginVersion(int value) { SetManagedLoginVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration for a custom domain. Configures your domain with an
     * Certificate Manager certificate in the <code>us-east-1</code> Region.</p>
     * <p>Provide this parameter only if you want to use a <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-pools-add-custom-domain.html">custom
     * domain</a> for your user pool. Otherwise, you can omit this parameter and use a
     * <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-pools-assign-domain-prefix.html">prefix
     * domain</a> instead.</p> <p>When you create a custom domain, the passkey RP ID
     * defaults to the custom domain. If you had a prefix domain active, this will
     * cause passkey integration for your prefix domain to stop working due to a
     * mismatch in RP ID. To keep the prefix domain passkey integration working, you
     * can explicitly set RP ID to the prefix domain.</p>
     */
    inline const CustomDomainConfigType& GetCustomDomainConfig() const { return m_customDomainConfig; }
    inline bool CustomDomainConfigHasBeenSet() const { return m_customDomainConfigHasBeenSet; }
    template<typename CustomDomainConfigT = CustomDomainConfigType>
    void SetCustomDomainConfig(CustomDomainConfigT&& value) { m_customDomainConfigHasBeenSet = true; m_customDomainConfig = std::forward<CustomDomainConfigT>(value); }
    template<typename CustomDomainConfigT = CustomDomainConfigType>
    CreateUserPoolDomainRequest& WithCustomDomainConfig(CustomDomainConfigT&& value) { SetCustomDomainConfig(std::forward<CustomDomainConfigT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_domain;
    bool m_domainHasBeenSet = false;

    Aws::String m_userPoolId;
    bool m_userPoolIdHasBeenSet = false;

    int m_managedLoginVersion{0};
    bool m_managedLoginVersionHasBeenSet = false;

    CustomDomainConfigType m_customDomainConfig;
    bool m_customDomainConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
