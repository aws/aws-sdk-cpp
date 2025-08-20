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
   * <p>The UpdateUserPoolDomain request input.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/UpdateUserPoolDomainRequest">AWS
   * API Reference</a></p>
   */
  class UpdateUserPoolDomainRequest : public CognitoIdentityProviderRequest
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API UpdateUserPoolDomainRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateUserPoolDomain"; }

    AWS_COGNITOIDENTITYPROVIDER_API Aws::String SerializePayload() const override;

    AWS_COGNITOIDENTITYPROVIDER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the domain that you want to update. For custom domains, this is
     * the fully-qualified domain name, for example <code>auth.example.com</code>. For
     * prefix domains, this is the prefix alone, such as <code>myprefix</code>.</p>
     */
    inline const Aws::String& GetDomain() const { return m_domain; }
    inline bool DomainHasBeenSet() const { return m_domainHasBeenSet; }
    template<typename DomainT = Aws::String>
    void SetDomain(DomainT&& value) { m_domainHasBeenSet = true; m_domain = std::forward<DomainT>(value); }
    template<typename DomainT = Aws::String>
    UpdateUserPoolDomainRequest& WithDomain(DomainT&& value) { SetDomain(std::forward<DomainT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the user pool that is associated with the domain you're
     * updating.</p>
     */
    inline const Aws::String& GetUserPoolId() const { return m_userPoolId; }
    inline bool UserPoolIdHasBeenSet() const { return m_userPoolIdHasBeenSet; }
    template<typename UserPoolIdT = Aws::String>
    void SetUserPoolId(UserPoolIdT&& value) { m_userPoolIdHasBeenSet = true; m_userPoolId = std::forward<UserPoolIdT>(value); }
    template<typename UserPoolIdT = Aws::String>
    UpdateUserPoolDomainRequest& WithUserPoolId(UserPoolIdT&& value) { SetUserPoolId(std::forward<UserPoolIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A version number that indicates the state of managed login for your domain.
     * Version <code>1</code> is hosted UI (classic). Version <code>2</code> is the
     * newer managed login with the branding editor. For more information, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-pools-managed-login.html">Managed
     * login</a>.</p>
     */
    inline int GetManagedLoginVersion() const { return m_managedLoginVersion; }
    inline bool ManagedLoginVersionHasBeenSet() const { return m_managedLoginVersionHasBeenSet; }
    inline void SetManagedLoginVersion(int value) { m_managedLoginVersionHasBeenSet = true; m_managedLoginVersion = value; }
    inline UpdateUserPoolDomainRequest& WithManagedLoginVersion(int value) { SetManagedLoginVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration for a custom domain that hosts managed login for your
     * application. In an <code>UpdateUserPoolDomain</code> request, this parameter
     * specifies an SSL certificate for the managed login hosted webserver. The
     * certificate must be an ACM ARN in <code>us-east-1</code>.</p> <p>When you create
     * a custom domain, the passkey RP ID defaults to the custom domain. If you had a
     * prefix domain active, this will cause passkey integration for your prefix domain
     * to stop working due to a mismatch in RP ID. To keep the prefix domain passkey
     * integration working, you can explicitly set RP ID to the prefix domain.</p>
     */
    inline const CustomDomainConfigType& GetCustomDomainConfig() const { return m_customDomainConfig; }
    inline bool CustomDomainConfigHasBeenSet() const { return m_customDomainConfigHasBeenSet; }
    template<typename CustomDomainConfigT = CustomDomainConfigType>
    void SetCustomDomainConfig(CustomDomainConfigT&& value) { m_customDomainConfigHasBeenSet = true; m_customDomainConfig = std::forward<CustomDomainConfigT>(value); }
    template<typename CustomDomainConfigT = CustomDomainConfigType>
    UpdateUserPoolDomainRequest& WithCustomDomainConfig(CustomDomainConfigT&& value) { SetCustomDomainConfig(std::forward<CustomDomainConfigT>(value)); return *this;}
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
