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
#include <aws/pinpoint-email/PinpointEmail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/pinpoint-email/model/InboxPlacementTrackingOption.h>
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
namespace PinpointEmail
{
namespace Model
{

  /**
   * <p>An object that contains information about the Deliverability dashboard
   * subscription for a verified domain that you use to send email and currently has
   * an active Deliverability dashboard subscription. If a Deliverability dashboard
   * subscription is active for a domain, you gain access to reputation, inbox
   * placement, and other metrics for the domain.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-email-2018-07-26/DomainDeliverabilityTrackingOption">AWS
   * API Reference</a></p>
   */
  class AWS_PINPOINTEMAIL_API DomainDeliverabilityTrackingOption
  {
  public:
    DomainDeliverabilityTrackingOption();
    DomainDeliverabilityTrackingOption(Aws::Utils::Json::JsonView jsonValue);
    DomainDeliverabilityTrackingOption& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A verified domain that’s associated with your AWS account and currently has
     * an active Deliverability dashboard subscription.</p>
     */
    inline const Aws::String& GetDomain() const{ return m_domain; }

    /**
     * <p>A verified domain that’s associated with your AWS account and currently has
     * an active Deliverability dashboard subscription.</p>
     */
    inline bool DomainHasBeenSet() const { return m_domainHasBeenSet; }

    /**
     * <p>A verified domain that’s associated with your AWS account and currently has
     * an active Deliverability dashboard subscription.</p>
     */
    inline void SetDomain(const Aws::String& value) { m_domainHasBeenSet = true; m_domain = value; }

    /**
     * <p>A verified domain that’s associated with your AWS account and currently has
     * an active Deliverability dashboard subscription.</p>
     */
    inline void SetDomain(Aws::String&& value) { m_domainHasBeenSet = true; m_domain = std::move(value); }

    /**
     * <p>A verified domain that’s associated with your AWS account and currently has
     * an active Deliverability dashboard subscription.</p>
     */
    inline void SetDomain(const char* value) { m_domainHasBeenSet = true; m_domain.assign(value); }

    /**
     * <p>A verified domain that’s associated with your AWS account and currently has
     * an active Deliverability dashboard subscription.</p>
     */
    inline DomainDeliverabilityTrackingOption& WithDomain(const Aws::String& value) { SetDomain(value); return *this;}

    /**
     * <p>A verified domain that’s associated with your AWS account and currently has
     * an active Deliverability dashboard subscription.</p>
     */
    inline DomainDeliverabilityTrackingOption& WithDomain(Aws::String&& value) { SetDomain(std::move(value)); return *this;}

    /**
     * <p>A verified domain that’s associated with your AWS account and currently has
     * an active Deliverability dashboard subscription.</p>
     */
    inline DomainDeliverabilityTrackingOption& WithDomain(const char* value) { SetDomain(value); return *this;}


    /**
     * <p>The date, in Unix time format, when you enabled the Deliverability dashboard
     * for the domain.</p>
     */
    inline const Aws::Utils::DateTime& GetSubscriptionStartDate() const{ return m_subscriptionStartDate; }

    /**
     * <p>The date, in Unix time format, when you enabled the Deliverability dashboard
     * for the domain.</p>
     */
    inline bool SubscriptionStartDateHasBeenSet() const { return m_subscriptionStartDateHasBeenSet; }

    /**
     * <p>The date, in Unix time format, when you enabled the Deliverability dashboard
     * for the domain.</p>
     */
    inline void SetSubscriptionStartDate(const Aws::Utils::DateTime& value) { m_subscriptionStartDateHasBeenSet = true; m_subscriptionStartDate = value; }

    /**
     * <p>The date, in Unix time format, when you enabled the Deliverability dashboard
     * for the domain.</p>
     */
    inline void SetSubscriptionStartDate(Aws::Utils::DateTime&& value) { m_subscriptionStartDateHasBeenSet = true; m_subscriptionStartDate = std::move(value); }

    /**
     * <p>The date, in Unix time format, when you enabled the Deliverability dashboard
     * for the domain.</p>
     */
    inline DomainDeliverabilityTrackingOption& WithSubscriptionStartDate(const Aws::Utils::DateTime& value) { SetSubscriptionStartDate(value); return *this;}

    /**
     * <p>The date, in Unix time format, when you enabled the Deliverability dashboard
     * for the domain.</p>
     */
    inline DomainDeliverabilityTrackingOption& WithSubscriptionStartDate(Aws::Utils::DateTime&& value) { SetSubscriptionStartDate(std::move(value)); return *this;}


    /**
     * <p>An object that contains information about the inbox placement data settings
     * for the domain.</p>
     */
    inline const InboxPlacementTrackingOption& GetInboxPlacementTrackingOption() const{ return m_inboxPlacementTrackingOption; }

    /**
     * <p>An object that contains information about the inbox placement data settings
     * for the domain.</p>
     */
    inline bool InboxPlacementTrackingOptionHasBeenSet() const { return m_inboxPlacementTrackingOptionHasBeenSet; }

    /**
     * <p>An object that contains information about the inbox placement data settings
     * for the domain.</p>
     */
    inline void SetInboxPlacementTrackingOption(const InboxPlacementTrackingOption& value) { m_inboxPlacementTrackingOptionHasBeenSet = true; m_inboxPlacementTrackingOption = value; }

    /**
     * <p>An object that contains information about the inbox placement data settings
     * for the domain.</p>
     */
    inline void SetInboxPlacementTrackingOption(InboxPlacementTrackingOption&& value) { m_inboxPlacementTrackingOptionHasBeenSet = true; m_inboxPlacementTrackingOption = std::move(value); }

    /**
     * <p>An object that contains information about the inbox placement data settings
     * for the domain.</p>
     */
    inline DomainDeliverabilityTrackingOption& WithInboxPlacementTrackingOption(const InboxPlacementTrackingOption& value) { SetInboxPlacementTrackingOption(value); return *this;}

    /**
     * <p>An object that contains information about the inbox placement data settings
     * for the domain.</p>
     */
    inline DomainDeliverabilityTrackingOption& WithInboxPlacementTrackingOption(InboxPlacementTrackingOption&& value) { SetInboxPlacementTrackingOption(std::move(value)); return *this;}

  private:

    Aws::String m_domain;
    bool m_domainHasBeenSet;

    Aws::Utils::DateTime m_subscriptionStartDate;
    bool m_subscriptionStartDateHasBeenSet;

    InboxPlacementTrackingOption m_inboxPlacementTrackingOption;
    bool m_inboxPlacementTrackingOptionHasBeenSet;
  };

} // namespace Model
} // namespace PinpointEmail
} // namespace Aws
