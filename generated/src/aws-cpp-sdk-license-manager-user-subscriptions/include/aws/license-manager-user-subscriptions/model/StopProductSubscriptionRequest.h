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
    AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API StopProductSubscriptionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StopProductSubscription"; }

    AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The domain name of the Active Directory that contains the user for whom to
     * stop the product subscription.</p>
     */
    inline const Aws::String& GetDomain() const{ return m_domain; }
    inline bool DomainHasBeenSet() const { return m_domainHasBeenSet; }
    inline void SetDomain(const Aws::String& value) { m_domainHasBeenSet = true; m_domain = value; }
    inline void SetDomain(Aws::String&& value) { m_domainHasBeenSet = true; m_domain = std::move(value); }
    inline void SetDomain(const char* value) { m_domainHasBeenSet = true; m_domain.assign(value); }
    inline StopProductSubscriptionRequest& WithDomain(const Aws::String& value) { SetDomain(value); return *this;}
    inline StopProductSubscriptionRequest& WithDomain(Aws::String&& value) { SetDomain(std::move(value)); return *this;}
    inline StopProductSubscriptionRequest& WithDomain(const char* value) { SetDomain(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that specifies details for the identity provider.</p>
     */
    inline const IdentityProvider& GetIdentityProvider() const{ return m_identityProvider; }
    inline bool IdentityProviderHasBeenSet() const { return m_identityProviderHasBeenSet; }
    inline void SetIdentityProvider(const IdentityProvider& value) { m_identityProviderHasBeenSet = true; m_identityProvider = value; }
    inline void SetIdentityProvider(IdentityProvider&& value) { m_identityProviderHasBeenSet = true; m_identityProvider = std::move(value); }
    inline StopProductSubscriptionRequest& WithIdentityProvider(const IdentityProvider& value) { SetIdentityProvider(value); return *this;}
    inline StopProductSubscriptionRequest& WithIdentityProvider(IdentityProvider&& value) { SetIdentityProvider(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the user-based subscription product.</p> <p>Valid values:
     * <code>VISUAL_STUDIO_ENTERPRISE</code> | <code>VISUAL_STUDIO_PROFESSIONAL</code>
     * | <code>OFFICE_PROFESSIONAL_PLUS</code> </p>
     */
    inline const Aws::String& GetProduct() const{ return m_product; }
    inline bool ProductHasBeenSet() const { return m_productHasBeenSet; }
    inline void SetProduct(const Aws::String& value) { m_productHasBeenSet = true; m_product = value; }
    inline void SetProduct(Aws::String&& value) { m_productHasBeenSet = true; m_product = std::move(value); }
    inline void SetProduct(const char* value) { m_productHasBeenSet = true; m_product.assign(value); }
    inline StopProductSubscriptionRequest& WithProduct(const Aws::String& value) { SetProduct(value); return *this;}
    inline StopProductSubscriptionRequest& WithProduct(Aws::String&& value) { SetProduct(std::move(value)); return *this;}
    inline StopProductSubscriptionRequest& WithProduct(const char* value) { SetProduct(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the product user.</p>
     */
    inline const Aws::String& GetProductUserArn() const{ return m_productUserArn; }
    inline bool ProductUserArnHasBeenSet() const { return m_productUserArnHasBeenSet; }
    inline void SetProductUserArn(const Aws::String& value) { m_productUserArnHasBeenSet = true; m_productUserArn = value; }
    inline void SetProductUserArn(Aws::String&& value) { m_productUserArnHasBeenSet = true; m_productUserArn = std::move(value); }
    inline void SetProductUserArn(const char* value) { m_productUserArnHasBeenSet = true; m_productUserArn.assign(value); }
    inline StopProductSubscriptionRequest& WithProductUserArn(const Aws::String& value) { SetProductUserArn(value); return *this;}
    inline StopProductSubscriptionRequest& WithProductUserArn(Aws::String&& value) { SetProductUserArn(std::move(value)); return *this;}
    inline StopProductSubscriptionRequest& WithProductUserArn(const char* value) { SetProductUserArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user name from the identity provider for the user.</p>
     */
    inline const Aws::String& GetUsername() const{ return m_username; }
    inline bool UsernameHasBeenSet() const { return m_usernameHasBeenSet; }
    inline void SetUsername(const Aws::String& value) { m_usernameHasBeenSet = true; m_username = value; }
    inline void SetUsername(Aws::String&& value) { m_usernameHasBeenSet = true; m_username = std::move(value); }
    inline void SetUsername(const char* value) { m_usernameHasBeenSet = true; m_username.assign(value); }
    inline StopProductSubscriptionRequest& WithUsername(const Aws::String& value) { SetUsername(value); return *this;}
    inline StopProductSubscriptionRequest& WithUsername(Aws::String&& value) { SetUsername(std::move(value)); return *this;}
    inline StopProductSubscriptionRequest& WithUsername(const char* value) { SetUsername(value); return *this;}
    ///@}
  private:

    Aws::String m_domain;
    bool m_domainHasBeenSet = false;

    IdentityProvider m_identityProvider;
    bool m_identityProviderHasBeenSet = false;

    Aws::String m_product;
    bool m_productHasBeenSet = false;

    Aws::String m_productUserArn;
    bool m_productUserArnHasBeenSet = false;

    Aws::String m_username;
    bool m_usernameHasBeenSet = false;
  };

} // namespace Model
} // namespace LicenseManagerUserSubscriptions
} // namespace Aws
