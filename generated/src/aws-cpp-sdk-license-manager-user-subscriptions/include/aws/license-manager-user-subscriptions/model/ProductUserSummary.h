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
    AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API ProductUserSummary();
    AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API ProductUserSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API ProductUserSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The domain name of the Active Directory that contains the user information
     * for the product subscription.</p>
     */
    inline const Aws::String& GetDomain() const{ return m_domain; }
    inline bool DomainHasBeenSet() const { return m_domainHasBeenSet; }
    inline void SetDomain(const Aws::String& value) { m_domainHasBeenSet = true; m_domain = value; }
    inline void SetDomain(Aws::String&& value) { m_domainHasBeenSet = true; m_domain = std::move(value); }
    inline void SetDomain(const char* value) { m_domainHasBeenSet = true; m_domain.assign(value); }
    inline ProductUserSummary& WithDomain(const Aws::String& value) { SetDomain(value); return *this;}
    inline ProductUserSummary& WithDomain(Aws::String&& value) { SetDomain(std::move(value)); return *this;}
    inline ProductUserSummary& WithDomain(const char* value) { SetDomain(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that specifies details for the identity provider.</p>
     */
    inline const IdentityProvider& GetIdentityProvider() const{ return m_identityProvider; }
    inline bool IdentityProviderHasBeenSet() const { return m_identityProviderHasBeenSet; }
    inline void SetIdentityProvider(const IdentityProvider& value) { m_identityProviderHasBeenSet = true; m_identityProvider = value; }
    inline void SetIdentityProvider(IdentityProvider&& value) { m_identityProviderHasBeenSet = true; m_identityProvider = std::move(value); }
    inline ProductUserSummary& WithIdentityProvider(const IdentityProvider& value) { SetIdentityProvider(value); return *this;}
    inline ProductUserSummary& WithIdentityProvider(IdentityProvider&& value) { SetIdentityProvider(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the user-based subscription product.</p>
     */
    inline const Aws::String& GetProduct() const{ return m_product; }
    inline bool ProductHasBeenSet() const { return m_productHasBeenSet; }
    inline void SetProduct(const Aws::String& value) { m_productHasBeenSet = true; m_product = value; }
    inline void SetProduct(Aws::String&& value) { m_productHasBeenSet = true; m_product = std::move(value); }
    inline void SetProduct(const char* value) { m_productHasBeenSet = true; m_product.assign(value); }
    inline ProductUserSummary& WithProduct(const Aws::String& value) { SetProduct(value); return *this;}
    inline ProductUserSummary& WithProduct(Aws::String&& value) { SetProduct(std::move(value)); return *this;}
    inline ProductUserSummary& WithProduct(const char* value) { SetProduct(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for this product user.</p>
     */
    inline const Aws::String& GetProductUserArn() const{ return m_productUserArn; }
    inline bool ProductUserArnHasBeenSet() const { return m_productUserArnHasBeenSet; }
    inline void SetProductUserArn(const Aws::String& value) { m_productUserArnHasBeenSet = true; m_productUserArn = value; }
    inline void SetProductUserArn(Aws::String&& value) { m_productUserArnHasBeenSet = true; m_productUserArn = std::move(value); }
    inline void SetProductUserArn(const char* value) { m_productUserArnHasBeenSet = true; m_productUserArn.assign(value); }
    inline ProductUserSummary& WithProductUserArn(const Aws::String& value) { SetProductUserArn(value); return *this;}
    inline ProductUserSummary& WithProductUserArn(Aws::String&& value) { SetProductUserArn(std::move(value)); return *this;}
    inline ProductUserSummary& WithProductUserArn(const char* value) { SetProductUserArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of a product for this user.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }
    inline ProductUserSummary& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}
    inline ProductUserSummary& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}
    inline ProductUserSummary& WithStatus(const char* value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status message for a product for this user.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessageHasBeenSet = true; m_statusMessage = value; }
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::move(value); }
    inline void SetStatusMessage(const char* value) { m_statusMessageHasBeenSet = true; m_statusMessage.assign(value); }
    inline ProductUserSummary& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}
    inline ProductUserSummary& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}
    inline ProductUserSummary& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The end date of a subscription.</p>
     */
    inline const Aws::String& GetSubscriptionEndDate() const{ return m_subscriptionEndDate; }
    inline bool SubscriptionEndDateHasBeenSet() const { return m_subscriptionEndDateHasBeenSet; }
    inline void SetSubscriptionEndDate(const Aws::String& value) { m_subscriptionEndDateHasBeenSet = true; m_subscriptionEndDate = value; }
    inline void SetSubscriptionEndDate(Aws::String&& value) { m_subscriptionEndDateHasBeenSet = true; m_subscriptionEndDate = std::move(value); }
    inline void SetSubscriptionEndDate(const char* value) { m_subscriptionEndDateHasBeenSet = true; m_subscriptionEndDate.assign(value); }
    inline ProductUserSummary& WithSubscriptionEndDate(const Aws::String& value) { SetSubscriptionEndDate(value); return *this;}
    inline ProductUserSummary& WithSubscriptionEndDate(Aws::String&& value) { SetSubscriptionEndDate(std::move(value)); return *this;}
    inline ProductUserSummary& WithSubscriptionEndDate(const char* value) { SetSubscriptionEndDate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The start date of a subscription.</p>
     */
    inline const Aws::String& GetSubscriptionStartDate() const{ return m_subscriptionStartDate; }
    inline bool SubscriptionStartDateHasBeenSet() const { return m_subscriptionStartDateHasBeenSet; }
    inline void SetSubscriptionStartDate(const Aws::String& value) { m_subscriptionStartDateHasBeenSet = true; m_subscriptionStartDate = value; }
    inline void SetSubscriptionStartDate(Aws::String&& value) { m_subscriptionStartDateHasBeenSet = true; m_subscriptionStartDate = std::move(value); }
    inline void SetSubscriptionStartDate(const char* value) { m_subscriptionStartDateHasBeenSet = true; m_subscriptionStartDate.assign(value); }
    inline ProductUserSummary& WithSubscriptionStartDate(const Aws::String& value) { SetSubscriptionStartDate(value); return *this;}
    inline ProductUserSummary& WithSubscriptionStartDate(Aws::String&& value) { SetSubscriptionStartDate(std::move(value)); return *this;}
    inline ProductUserSummary& WithSubscriptionStartDate(const char* value) { SetSubscriptionStartDate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user name from the identity provider for this product user.</p>
     */
    inline const Aws::String& GetUsername() const{ return m_username; }
    inline bool UsernameHasBeenSet() const { return m_usernameHasBeenSet; }
    inline void SetUsername(const Aws::String& value) { m_usernameHasBeenSet = true; m_username = value; }
    inline void SetUsername(Aws::String&& value) { m_usernameHasBeenSet = true; m_username = std::move(value); }
    inline void SetUsername(const char* value) { m_usernameHasBeenSet = true; m_username.assign(value); }
    inline ProductUserSummary& WithUsername(const Aws::String& value) { SetUsername(value); return *this;}
    inline ProductUserSummary& WithUsername(Aws::String&& value) { SetUsername(std::move(value)); return *this;}
    inline ProductUserSummary& WithUsername(const char* value) { SetUsername(value); return *this;}
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

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;

    Aws::String m_subscriptionEndDate;
    bool m_subscriptionEndDateHasBeenSet = false;

    Aws::String m_subscriptionStartDate;
    bool m_subscriptionStartDateHasBeenSet = false;

    Aws::String m_username;
    bool m_usernameHasBeenSet = false;
  };

} // namespace Model
} // namespace LicenseManagerUserSubscriptions
} // namespace Aws
