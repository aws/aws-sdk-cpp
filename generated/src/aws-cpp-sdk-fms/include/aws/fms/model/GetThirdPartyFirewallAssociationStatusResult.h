/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fms/FMS_EXPORTS.h>
#include <aws/fms/model/ThirdPartyFirewallAssociationStatus.h>
#include <aws/fms/model/MarketplaceSubscriptionOnboardingStatus.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace FMS
{
namespace Model
{
  class GetThirdPartyFirewallAssociationStatusResult
  {
  public:
    AWS_FMS_API GetThirdPartyFirewallAssociationStatusResult();
    AWS_FMS_API GetThirdPartyFirewallAssociationStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FMS_API GetThirdPartyFirewallAssociationStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The current status for setting a Firewall Manager policy administrators
     * account as an administrator of the third-party firewall tenant.</p> <ul> <li>
     * <p> <code>ONBOARDING</code> - The Firewall Manager policy administrator is being
     * designated as a tenant administrator.</p> </li> <li> <p>
     * <code>ONBOARD_COMPLETE</code> - The Firewall Manager policy administrator is
     * designated as a tenant administrator.</p> </li> <li> <p>
     * <code>OFFBOARDING</code> - The Firewall Manager policy administrator is being
     * removed as a tenant administrator.</p> </li> <li> <p>
     * <code>OFFBOARD_COMPLETE</code> - The Firewall Manager policy administrator has
     * been removed as a tenant administrator.</p> </li> <li> <p>
     * <code>NOT_EXIST</code> - The Firewall Manager policy administrator doesn't exist
     * as a tenant administrator.</p> </li> </ul>
     */
    inline const ThirdPartyFirewallAssociationStatus& GetThirdPartyFirewallStatus() const{ return m_thirdPartyFirewallStatus; }

    /**
     * <p>The current status for setting a Firewall Manager policy administrators
     * account as an administrator of the third-party firewall tenant.</p> <ul> <li>
     * <p> <code>ONBOARDING</code> - The Firewall Manager policy administrator is being
     * designated as a tenant administrator.</p> </li> <li> <p>
     * <code>ONBOARD_COMPLETE</code> - The Firewall Manager policy administrator is
     * designated as a tenant administrator.</p> </li> <li> <p>
     * <code>OFFBOARDING</code> - The Firewall Manager policy administrator is being
     * removed as a tenant administrator.</p> </li> <li> <p>
     * <code>OFFBOARD_COMPLETE</code> - The Firewall Manager policy administrator has
     * been removed as a tenant administrator.</p> </li> <li> <p>
     * <code>NOT_EXIST</code> - The Firewall Manager policy administrator doesn't exist
     * as a tenant administrator.</p> </li> </ul>
     */
    inline void SetThirdPartyFirewallStatus(const ThirdPartyFirewallAssociationStatus& value) { m_thirdPartyFirewallStatus = value; }

    /**
     * <p>The current status for setting a Firewall Manager policy administrators
     * account as an administrator of the third-party firewall tenant.</p> <ul> <li>
     * <p> <code>ONBOARDING</code> - The Firewall Manager policy administrator is being
     * designated as a tenant administrator.</p> </li> <li> <p>
     * <code>ONBOARD_COMPLETE</code> - The Firewall Manager policy administrator is
     * designated as a tenant administrator.</p> </li> <li> <p>
     * <code>OFFBOARDING</code> - The Firewall Manager policy administrator is being
     * removed as a tenant administrator.</p> </li> <li> <p>
     * <code>OFFBOARD_COMPLETE</code> - The Firewall Manager policy administrator has
     * been removed as a tenant administrator.</p> </li> <li> <p>
     * <code>NOT_EXIST</code> - The Firewall Manager policy administrator doesn't exist
     * as a tenant administrator.</p> </li> </ul>
     */
    inline void SetThirdPartyFirewallStatus(ThirdPartyFirewallAssociationStatus&& value) { m_thirdPartyFirewallStatus = std::move(value); }

    /**
     * <p>The current status for setting a Firewall Manager policy administrators
     * account as an administrator of the third-party firewall tenant.</p> <ul> <li>
     * <p> <code>ONBOARDING</code> - The Firewall Manager policy administrator is being
     * designated as a tenant administrator.</p> </li> <li> <p>
     * <code>ONBOARD_COMPLETE</code> - The Firewall Manager policy administrator is
     * designated as a tenant administrator.</p> </li> <li> <p>
     * <code>OFFBOARDING</code> - The Firewall Manager policy administrator is being
     * removed as a tenant administrator.</p> </li> <li> <p>
     * <code>OFFBOARD_COMPLETE</code> - The Firewall Manager policy administrator has
     * been removed as a tenant administrator.</p> </li> <li> <p>
     * <code>NOT_EXIST</code> - The Firewall Manager policy administrator doesn't exist
     * as a tenant administrator.</p> </li> </ul>
     */
    inline GetThirdPartyFirewallAssociationStatusResult& WithThirdPartyFirewallStatus(const ThirdPartyFirewallAssociationStatus& value) { SetThirdPartyFirewallStatus(value); return *this;}

    /**
     * <p>The current status for setting a Firewall Manager policy administrators
     * account as an administrator of the third-party firewall tenant.</p> <ul> <li>
     * <p> <code>ONBOARDING</code> - The Firewall Manager policy administrator is being
     * designated as a tenant administrator.</p> </li> <li> <p>
     * <code>ONBOARD_COMPLETE</code> - The Firewall Manager policy administrator is
     * designated as a tenant administrator.</p> </li> <li> <p>
     * <code>OFFBOARDING</code> - The Firewall Manager policy administrator is being
     * removed as a tenant administrator.</p> </li> <li> <p>
     * <code>OFFBOARD_COMPLETE</code> - The Firewall Manager policy administrator has
     * been removed as a tenant administrator.</p> </li> <li> <p>
     * <code>NOT_EXIST</code> - The Firewall Manager policy administrator doesn't exist
     * as a tenant administrator.</p> </li> </ul>
     */
    inline GetThirdPartyFirewallAssociationStatusResult& WithThirdPartyFirewallStatus(ThirdPartyFirewallAssociationStatus&& value) { SetThirdPartyFirewallStatus(std::move(value)); return *this;}


    /**
     * <p>The status for subscribing to the third-party firewall vendor in the Amazon
     * Web Services Marketplace.</p> <ul> <li> <p> <code>NO_SUBSCRIPTION</code> - The
     * Firewall Manager policy administrator isn't subscribed to the third-party
     * firewall service in the Amazon Web Services Marketplace.</p> </li> <li> <p>
     * <code>NOT_COMPLETE</code> - The Firewall Manager policy administrator is in the
     * process of subscribing to the third-party firewall service in the Amazon Web
     * Services Marketplace, but doesn't yet have an active subscription.</p> </li>
     * <li> <p> <code>COMPLETE</code> - The Firewall Manager policy administrator has
     * an active subscription to the third-party firewall service in the Amazon Web
     * Services Marketplace.</p> </li> </ul>
     */
    inline const MarketplaceSubscriptionOnboardingStatus& GetMarketplaceOnboardingStatus() const{ return m_marketplaceOnboardingStatus; }

    /**
     * <p>The status for subscribing to the third-party firewall vendor in the Amazon
     * Web Services Marketplace.</p> <ul> <li> <p> <code>NO_SUBSCRIPTION</code> - The
     * Firewall Manager policy administrator isn't subscribed to the third-party
     * firewall service in the Amazon Web Services Marketplace.</p> </li> <li> <p>
     * <code>NOT_COMPLETE</code> - The Firewall Manager policy administrator is in the
     * process of subscribing to the third-party firewall service in the Amazon Web
     * Services Marketplace, but doesn't yet have an active subscription.</p> </li>
     * <li> <p> <code>COMPLETE</code> - The Firewall Manager policy administrator has
     * an active subscription to the third-party firewall service in the Amazon Web
     * Services Marketplace.</p> </li> </ul>
     */
    inline void SetMarketplaceOnboardingStatus(const MarketplaceSubscriptionOnboardingStatus& value) { m_marketplaceOnboardingStatus = value; }

    /**
     * <p>The status for subscribing to the third-party firewall vendor in the Amazon
     * Web Services Marketplace.</p> <ul> <li> <p> <code>NO_SUBSCRIPTION</code> - The
     * Firewall Manager policy administrator isn't subscribed to the third-party
     * firewall service in the Amazon Web Services Marketplace.</p> </li> <li> <p>
     * <code>NOT_COMPLETE</code> - The Firewall Manager policy administrator is in the
     * process of subscribing to the third-party firewall service in the Amazon Web
     * Services Marketplace, but doesn't yet have an active subscription.</p> </li>
     * <li> <p> <code>COMPLETE</code> - The Firewall Manager policy administrator has
     * an active subscription to the third-party firewall service in the Amazon Web
     * Services Marketplace.</p> </li> </ul>
     */
    inline void SetMarketplaceOnboardingStatus(MarketplaceSubscriptionOnboardingStatus&& value) { m_marketplaceOnboardingStatus = std::move(value); }

    /**
     * <p>The status for subscribing to the third-party firewall vendor in the Amazon
     * Web Services Marketplace.</p> <ul> <li> <p> <code>NO_SUBSCRIPTION</code> - The
     * Firewall Manager policy administrator isn't subscribed to the third-party
     * firewall service in the Amazon Web Services Marketplace.</p> </li> <li> <p>
     * <code>NOT_COMPLETE</code> - The Firewall Manager policy administrator is in the
     * process of subscribing to the third-party firewall service in the Amazon Web
     * Services Marketplace, but doesn't yet have an active subscription.</p> </li>
     * <li> <p> <code>COMPLETE</code> - The Firewall Manager policy administrator has
     * an active subscription to the third-party firewall service in the Amazon Web
     * Services Marketplace.</p> </li> </ul>
     */
    inline GetThirdPartyFirewallAssociationStatusResult& WithMarketplaceOnboardingStatus(const MarketplaceSubscriptionOnboardingStatus& value) { SetMarketplaceOnboardingStatus(value); return *this;}

    /**
     * <p>The status for subscribing to the third-party firewall vendor in the Amazon
     * Web Services Marketplace.</p> <ul> <li> <p> <code>NO_SUBSCRIPTION</code> - The
     * Firewall Manager policy administrator isn't subscribed to the third-party
     * firewall service in the Amazon Web Services Marketplace.</p> </li> <li> <p>
     * <code>NOT_COMPLETE</code> - The Firewall Manager policy administrator is in the
     * process of subscribing to the third-party firewall service in the Amazon Web
     * Services Marketplace, but doesn't yet have an active subscription.</p> </li>
     * <li> <p> <code>COMPLETE</code> - The Firewall Manager policy administrator has
     * an active subscription to the third-party firewall service in the Amazon Web
     * Services Marketplace.</p> </li> </ul>
     */
    inline GetThirdPartyFirewallAssociationStatusResult& WithMarketplaceOnboardingStatus(MarketplaceSubscriptionOnboardingStatus&& value) { SetMarketplaceOnboardingStatus(std::move(value)); return *this;}

  private:

    ThirdPartyFirewallAssociationStatus m_thirdPartyFirewallStatus;

    MarketplaceSubscriptionOnboardingStatus m_marketplaceOnboardingStatus;
  };

} // namespace Model
} // namespace FMS
} // namespace Aws
