/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/license-manager-user-subscriptions/LicenseManagerUserSubscriptions_EXPORTS.h>
#include <aws/license-manager-user-subscriptions/LicenseManagerUserSubscriptionsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/license-manager-user-subscriptions/model/IdentityProvider.h>
#include <utility>

namespace Aws
{
namespace LicenseManagerUserSubscriptions
{
namespace Model
{

  /**
   */
  class StopProductSubscriptionRequest : public LicenseManagerUserSubscriptionsRequest
  {
  public:
    AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API StopProductSubscriptionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StopProductSubscription"; }

    AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The user name from the identity provider for the user.</p>
     */
    inline const Aws::String& GetUsername() const { return m_username; }
    inline bool UsernameHasBeenSet() const { return m_usernameHasBeenSet; }
    template<typename UsernameT = Aws::String>
    void SetUsername(UsernameT&& value) { m_usernameHasBeenSet = true; m_username = std::forward<UsernameT>(value); }
    template<typename UsernameT = Aws::String>
    StopProductSubscriptionRequest& WithUsername(UsernameT&& value) { SetUsername(std::forward<UsernameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that specifies details for the identity provider.</p>
     */
    inline const IdentityProvider& GetIdentityProvider() const { return m_identityProvider; }
    inline bool IdentityProviderHasBeenSet() const { return m_identityProviderHasBeenSet; }
    template<typename IdentityProviderT = IdentityProvider>
    void SetIdentityProvider(IdentityProviderT&& value) { m_identityProviderHasBeenSet = true; m_identityProvider = std::forward<IdentityProviderT>(value); }
    template<typename IdentityProviderT = IdentityProvider>
    StopProductSubscriptionRequest& WithIdentityProvider(IdentityProviderT&& value) { SetIdentityProvider(std::forward<IdentityProviderT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the user-based subscription product.</p> <p>Valid values:
     * <code>VISUAL_STUDIO_ENTERPRISE</code> | <code>VISUAL_STUDIO_PROFESSIONAL</code>
     * | <code>OFFICE_PROFESSIONAL_PLUS</code> | <code>REMOTE_DESKTOP_SERVICES</code>
     * </p>
     */
    inline const Aws::String& GetProduct() const { return m_product; }
    inline bool ProductHasBeenSet() const { return m_productHasBeenSet; }
    template<typename ProductT = Aws::String>
    void SetProduct(ProductT&& value) { m_productHasBeenSet = true; m_product = std::forward<ProductT>(value); }
    template<typename ProductT = Aws::String>
    StopProductSubscriptionRequest& WithProduct(ProductT&& value) { SetProduct(std::forward<ProductT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the product user.</p>
     */
    inline const Aws::String& GetProductUserArn() const { return m_productUserArn; }
    inline bool ProductUserArnHasBeenSet() const { return m_productUserArnHasBeenSet; }
    template<typename ProductUserArnT = Aws::String>
    void SetProductUserArn(ProductUserArnT&& value) { m_productUserArnHasBeenSet = true; m_productUserArn = std::forward<ProductUserArnT>(value); }
    template<typename ProductUserArnT = Aws::String>
    StopProductSubscriptionRequest& WithProductUserArn(ProductUserArnT&& value) { SetProductUserArn(std::forward<ProductUserArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The domain name of the Active Directory that contains the user for whom to
     * stop the product subscription.</p>
     */
    inline const Aws::String& GetDomain() const { return m_domain; }
    inline bool DomainHasBeenSet() const { return m_domainHasBeenSet; }
    template<typename DomainT = Aws::String>
    void SetDomain(DomainT&& value) { m_domainHasBeenSet = true; m_domain = std::forward<DomainT>(value); }
    template<typename DomainT = Aws::String>
    StopProductSubscriptionRequest& WithDomain(DomainT&& value) { SetDomain(std::forward<DomainT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_username;
    bool m_usernameHasBeenSet = false;

    IdentityProvider m_identityProvider;
    bool m_identityProviderHasBeenSet = false;

    Aws::String m_product;
    bool m_productHasBeenSet = false;

    Aws::String m_productUserArn;
    bool m_productUserArnHasBeenSet = false;

    Aws::String m_domain;
    bool m_domainHasBeenSet = false;
  };

} // namespace Model
} // namespace LicenseManagerUserSubscriptions
} // namespace Aws
