/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/license-manager-user-subscriptions/LicenseManagerUserSubscriptions_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/license-manager-user-subscriptions/model/IdentityProvider.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace LicenseManagerUserSubscriptions
{
namespace Model
{

  /**
   * <p>A summary of the user-based subscription products for a specific
   * user.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-user-subscriptions-2018-05-10/ProductUserSummary">AWS
   * API Reference</a></p>
   */
  class ProductUserSummary
  {
  public:
    AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API ProductUserSummary() = default;
    AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API ProductUserSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API ProductUserSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The user name from the identity provider for this product user.</p>
     */
    inline const Aws::String& GetUsername() const { return m_username; }
    inline bool UsernameHasBeenSet() const { return m_usernameHasBeenSet; }
    template<typename UsernameT = Aws::String>
    void SetUsername(UsernameT&& value) { m_usernameHasBeenSet = true; m_username = std::forward<UsernameT>(value); }
    template<typename UsernameT = Aws::String>
    ProductUserSummary& WithUsername(UsernameT&& value) { SetUsername(std::forward<UsernameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the user-based subscription product.</p>
     */
    inline const Aws::String& GetProduct() const { return m_product; }
    inline bool ProductHasBeenSet() const { return m_productHasBeenSet; }
    template<typename ProductT = Aws::String>
    void SetProduct(ProductT&& value) { m_productHasBeenSet = true; m_product = std::forward<ProductT>(value); }
    template<typename ProductT = Aws::String>
    ProductUserSummary& WithProduct(ProductT&& value) { SetProduct(std::forward<ProductT>(value)); return *this;}
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
    ProductUserSummary& WithIdentityProvider(IdentityProviderT&& value) { SetIdentityProvider(std::forward<IdentityProviderT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of a product for this user.</p>
     */
    inline const Aws::String& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = Aws::String>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::String>
    ProductUserSummary& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for this product user.</p>
     */
    inline const Aws::String& GetProductUserArn() const { return m_productUserArn; }
    inline bool ProductUserArnHasBeenSet() const { return m_productUserArnHasBeenSet; }
    template<typename ProductUserArnT = Aws::String>
    void SetProductUserArn(ProductUserArnT&& value) { m_productUserArnHasBeenSet = true; m_productUserArn = std::forward<ProductUserArnT>(value); }
    template<typename ProductUserArnT = Aws::String>
    ProductUserSummary& WithProductUserArn(ProductUserArnT&& value) { SetProductUserArn(std::forward<ProductUserArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status message for a product for this user.</p>
     */
    inline const Aws::String& GetStatusMessage() const { return m_statusMessage; }
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
    template<typename StatusMessageT = Aws::String>
    void SetStatusMessage(StatusMessageT&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::forward<StatusMessageT>(value); }
    template<typename StatusMessageT = Aws::String>
    ProductUserSummary& WithStatusMessage(StatusMessageT&& value) { SetStatusMessage(std::forward<StatusMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The domain name of the Active Directory that contains the user information
     * for the product subscription.</p>
     */
    inline const Aws::String& GetDomain() const { return m_domain; }
    inline bool DomainHasBeenSet() const { return m_domainHasBeenSet; }
    template<typename DomainT = Aws::String>
    void SetDomain(DomainT&& value) { m_domainHasBeenSet = true; m_domain = std::forward<DomainT>(value); }
    template<typename DomainT = Aws::String>
    ProductUserSummary& WithDomain(DomainT&& value) { SetDomain(std::forward<DomainT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The start date of a subscription.</p>
     */
    inline const Aws::String& GetSubscriptionStartDate() const { return m_subscriptionStartDate; }
    inline bool SubscriptionStartDateHasBeenSet() const { return m_subscriptionStartDateHasBeenSet; }
    template<typename SubscriptionStartDateT = Aws::String>
    void SetSubscriptionStartDate(SubscriptionStartDateT&& value) { m_subscriptionStartDateHasBeenSet = true; m_subscriptionStartDate = std::forward<SubscriptionStartDateT>(value); }
    template<typename SubscriptionStartDateT = Aws::String>
    ProductUserSummary& WithSubscriptionStartDate(SubscriptionStartDateT&& value) { SetSubscriptionStartDate(std::forward<SubscriptionStartDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The end date of a subscription.</p>
     */
    inline const Aws::String& GetSubscriptionEndDate() const { return m_subscriptionEndDate; }
    inline bool SubscriptionEndDateHasBeenSet() const { return m_subscriptionEndDateHasBeenSet; }
    template<typename SubscriptionEndDateT = Aws::String>
    void SetSubscriptionEndDate(SubscriptionEndDateT&& value) { m_subscriptionEndDateHasBeenSet = true; m_subscriptionEndDate = std::forward<SubscriptionEndDateT>(value); }
    template<typename SubscriptionEndDateT = Aws::String>
    ProductUserSummary& WithSubscriptionEndDate(SubscriptionEndDateT&& value) { SetSubscriptionEndDate(std::forward<SubscriptionEndDateT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_username;
    bool m_usernameHasBeenSet = false;

    Aws::String m_product;
    bool m_productHasBeenSet = false;

    IdentityProvider m_identityProvider;
    bool m_identityProviderHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_productUserArn;
    bool m_productUserArnHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;

    Aws::String m_domain;
    bool m_domainHasBeenSet = false;

    Aws::String m_subscriptionStartDate;
    bool m_subscriptionStartDateHasBeenSet = false;

    Aws::String m_subscriptionEndDate;
    bool m_subscriptionEndDateHasBeenSet = false;
  };

} // namespace Model
} // namespace LicenseManagerUserSubscriptions
} // namespace Aws
