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
   * <p>The summary of the user-based subscription products for a user.</p><p><h3>See
   * Also:</h3>   <a
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


    /**
     * <p>The domain name of the user.</p>
     */
    inline const Aws::String& GetDomain() const{ return m_domain; }

    /**
     * <p>The domain name of the user.</p>
     */
    inline bool DomainHasBeenSet() const { return m_domainHasBeenSet; }

    /**
     * <p>The domain name of the user.</p>
     */
    inline void SetDomain(const Aws::String& value) { m_domainHasBeenSet = true; m_domain = value; }

    /**
     * <p>The domain name of the user.</p>
     */
    inline void SetDomain(Aws::String&& value) { m_domainHasBeenSet = true; m_domain = std::move(value); }

    /**
     * <p>The domain name of the user.</p>
     */
    inline void SetDomain(const char* value) { m_domainHasBeenSet = true; m_domain.assign(value); }

    /**
     * <p>The domain name of the user.</p>
     */
    inline ProductUserSummary& WithDomain(const Aws::String& value) { SetDomain(value); return *this;}

    /**
     * <p>The domain name of the user.</p>
     */
    inline ProductUserSummary& WithDomain(Aws::String&& value) { SetDomain(std::move(value)); return *this;}

    /**
     * <p>The domain name of the user.</p>
     */
    inline ProductUserSummary& WithDomain(const char* value) { SetDomain(value); return *this;}


    /**
     * <p>An object that specifies details for the identity provider.</p>
     */
    inline const IdentityProvider& GetIdentityProvider() const{ return m_identityProvider; }

    /**
     * <p>An object that specifies details for the identity provider.</p>
     */
    inline bool IdentityProviderHasBeenSet() const { return m_identityProviderHasBeenSet; }

    /**
     * <p>An object that specifies details for the identity provider.</p>
     */
    inline void SetIdentityProvider(const IdentityProvider& value) { m_identityProviderHasBeenSet = true; m_identityProvider = value; }

    /**
     * <p>An object that specifies details for the identity provider.</p>
     */
    inline void SetIdentityProvider(IdentityProvider&& value) { m_identityProviderHasBeenSet = true; m_identityProvider = std::move(value); }

    /**
     * <p>An object that specifies details for the identity provider.</p>
     */
    inline ProductUserSummary& WithIdentityProvider(const IdentityProvider& value) { SetIdentityProvider(value); return *this;}

    /**
     * <p>An object that specifies details for the identity provider.</p>
     */
    inline ProductUserSummary& WithIdentityProvider(IdentityProvider&& value) { SetIdentityProvider(std::move(value)); return *this;}


    /**
     * <p>The name of the user-based subscription product.</p>
     */
    inline const Aws::String& GetProduct() const{ return m_product; }

    /**
     * <p>The name of the user-based subscription product.</p>
     */
    inline bool ProductHasBeenSet() const { return m_productHasBeenSet; }

    /**
     * <p>The name of the user-based subscription product.</p>
     */
    inline void SetProduct(const Aws::String& value) { m_productHasBeenSet = true; m_product = value; }

    /**
     * <p>The name of the user-based subscription product.</p>
     */
    inline void SetProduct(Aws::String&& value) { m_productHasBeenSet = true; m_product = std::move(value); }

    /**
     * <p>The name of the user-based subscription product.</p>
     */
    inline void SetProduct(const char* value) { m_productHasBeenSet = true; m_product.assign(value); }

    /**
     * <p>The name of the user-based subscription product.</p>
     */
    inline ProductUserSummary& WithProduct(const Aws::String& value) { SetProduct(value); return *this;}

    /**
     * <p>The name of the user-based subscription product.</p>
     */
    inline ProductUserSummary& WithProduct(Aws::String&& value) { SetProduct(std::move(value)); return *this;}

    /**
     * <p>The name of the user-based subscription product.</p>
     */
    inline ProductUserSummary& WithProduct(const char* value) { SetProduct(value); return *this;}


    /**
     * <p>The status of a product for a user.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>The status of a product for a user.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of a product for a user.</p>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of a product for a user.</p>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of a product for a user.</p>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p>The status of a product for a user.</p>
     */
    inline ProductUserSummary& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of a product for a user.</p>
     */
    inline ProductUserSummary& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>The status of a product for a user.</p>
     */
    inline ProductUserSummary& WithStatus(const char* value) { SetStatus(value); return *this;}


    /**
     * <p>The status message for a product for a user.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }

    /**
     * <p>The status message for a product for a user.</p>
     */
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }

    /**
     * <p>The status message for a product for a user.</p>
     */
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessageHasBeenSet = true; m_statusMessage = value; }

    /**
     * <p>The status message for a product for a user.</p>
     */
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::move(value); }

    /**
     * <p>The status message for a product for a user.</p>
     */
    inline void SetStatusMessage(const char* value) { m_statusMessageHasBeenSet = true; m_statusMessage.assign(value); }

    /**
     * <p>The status message for a product for a user.</p>
     */
    inline ProductUserSummary& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}

    /**
     * <p>The status message for a product for a user.</p>
     */
    inline ProductUserSummary& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}

    /**
     * <p>The status message for a product for a user.</p>
     */
    inline ProductUserSummary& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}


    /**
     * <p>The end date of a subscription.</p>
     */
    inline const Aws::String& GetSubscriptionEndDate() const{ return m_subscriptionEndDate; }

    /**
     * <p>The end date of a subscription.</p>
     */
    inline bool SubscriptionEndDateHasBeenSet() const { return m_subscriptionEndDateHasBeenSet; }

    /**
     * <p>The end date of a subscription.</p>
     */
    inline void SetSubscriptionEndDate(const Aws::String& value) { m_subscriptionEndDateHasBeenSet = true; m_subscriptionEndDate = value; }

    /**
     * <p>The end date of a subscription.</p>
     */
    inline void SetSubscriptionEndDate(Aws::String&& value) { m_subscriptionEndDateHasBeenSet = true; m_subscriptionEndDate = std::move(value); }

    /**
     * <p>The end date of a subscription.</p>
     */
    inline void SetSubscriptionEndDate(const char* value) { m_subscriptionEndDateHasBeenSet = true; m_subscriptionEndDate.assign(value); }

    /**
     * <p>The end date of a subscription.</p>
     */
    inline ProductUserSummary& WithSubscriptionEndDate(const Aws::String& value) { SetSubscriptionEndDate(value); return *this;}

    /**
     * <p>The end date of a subscription.</p>
     */
    inline ProductUserSummary& WithSubscriptionEndDate(Aws::String&& value) { SetSubscriptionEndDate(std::move(value)); return *this;}

    /**
     * <p>The end date of a subscription.</p>
     */
    inline ProductUserSummary& WithSubscriptionEndDate(const char* value) { SetSubscriptionEndDate(value); return *this;}


    /**
     * <p>The start date of a subscription.</p>
     */
    inline const Aws::String& GetSubscriptionStartDate() const{ return m_subscriptionStartDate; }

    /**
     * <p>The start date of a subscription.</p>
     */
    inline bool SubscriptionStartDateHasBeenSet() const { return m_subscriptionStartDateHasBeenSet; }

    /**
     * <p>The start date of a subscription.</p>
     */
    inline void SetSubscriptionStartDate(const Aws::String& value) { m_subscriptionStartDateHasBeenSet = true; m_subscriptionStartDate = value; }

    /**
     * <p>The start date of a subscription.</p>
     */
    inline void SetSubscriptionStartDate(Aws::String&& value) { m_subscriptionStartDateHasBeenSet = true; m_subscriptionStartDate = std::move(value); }

    /**
     * <p>The start date of a subscription.</p>
     */
    inline void SetSubscriptionStartDate(const char* value) { m_subscriptionStartDateHasBeenSet = true; m_subscriptionStartDate.assign(value); }

    /**
     * <p>The start date of a subscription.</p>
     */
    inline ProductUserSummary& WithSubscriptionStartDate(const Aws::String& value) { SetSubscriptionStartDate(value); return *this;}

    /**
     * <p>The start date of a subscription.</p>
     */
    inline ProductUserSummary& WithSubscriptionStartDate(Aws::String&& value) { SetSubscriptionStartDate(std::move(value)); return *this;}

    /**
     * <p>The start date of a subscription.</p>
     */
    inline ProductUserSummary& WithSubscriptionStartDate(const char* value) { SetSubscriptionStartDate(value); return *this;}


    /**
     * <p>The user name from the identity provider of the user.</p>
     */
    inline const Aws::String& GetUsername() const{ return m_username; }

    /**
     * <p>The user name from the identity provider of the user.</p>
     */
    inline bool UsernameHasBeenSet() const { return m_usernameHasBeenSet; }

    /**
     * <p>The user name from the identity provider of the user.</p>
     */
    inline void SetUsername(const Aws::String& value) { m_usernameHasBeenSet = true; m_username = value; }

    /**
     * <p>The user name from the identity provider of the user.</p>
     */
    inline void SetUsername(Aws::String&& value) { m_usernameHasBeenSet = true; m_username = std::move(value); }

    /**
     * <p>The user name from the identity provider of the user.</p>
     */
    inline void SetUsername(const char* value) { m_usernameHasBeenSet = true; m_username.assign(value); }

    /**
     * <p>The user name from the identity provider of the user.</p>
     */
    inline ProductUserSummary& WithUsername(const Aws::String& value) { SetUsername(value); return *this;}

    /**
     * <p>The user name from the identity provider of the user.</p>
     */
    inline ProductUserSummary& WithUsername(Aws::String&& value) { SetUsername(std::move(value)); return *this;}

    /**
     * <p>The user name from the identity provider of the user.</p>
     */
    inline ProductUserSummary& WithUsername(const char* value) { SetUsername(value); return *this;}

  private:

    Aws::String m_domain;
    bool m_domainHasBeenSet = false;

    IdentityProvider m_identityProvider;
    bool m_identityProviderHasBeenSet = false;

    Aws::String m_product;
    bool m_productHasBeenSet = false;

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
