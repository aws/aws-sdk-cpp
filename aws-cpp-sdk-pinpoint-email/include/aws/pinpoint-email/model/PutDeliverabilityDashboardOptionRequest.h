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
#include <aws/pinpoint-email/PinpointEmailRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/pinpoint-email/model/DomainDeliverabilityTrackingOption.h>
#include <utility>

namespace Aws
{
namespace PinpointEmail
{
namespace Model
{

  /**
   * <p>Enable or disable the Deliverability dashboard for your Amazon Pinpoint
   * account. When you enable the Deliverability dashboard, you gain access to
   * reputation, deliverability, and other metrics for the domains that you use to
   * send email using Amazon Pinpoint. You also gain the ability to perform
   * predictive inbox placement tests.</p> <p>When you use the Deliverability
   * dashboard, you pay a monthly subscription charge, in addition to any other fees
   * that you accrue by using Amazon Pinpoint. For more information about the
   * features and cost of a Deliverability dashboard subscription, see <a
   * href="http://aws.amazon.com/pinpoint/pricing/">Amazon Pinpoint
   * Pricing</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-email-2018-07-26/PutDeliverabilityDashboardOptionRequest">AWS
   * API Reference</a></p>
   */
  class AWS_PINPOINTEMAIL_API PutDeliverabilityDashboardOptionRequest : public PinpointEmailRequest
  {
  public:
    PutDeliverabilityDashboardOptionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutDeliverabilityDashboardOption"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>Specifies whether to enable the Deliverability dashboard for your Amazon
     * Pinpoint account. To enable the dashboard, set this value to
     * <code>true</code>.</p>
     */
    inline bool GetDashboardEnabled() const{ return m_dashboardEnabled; }

    /**
     * <p>Specifies whether to enable the Deliverability dashboard for your Amazon
     * Pinpoint account. To enable the dashboard, set this value to
     * <code>true</code>.</p>
     */
    inline bool DashboardEnabledHasBeenSet() const { return m_dashboardEnabledHasBeenSet; }

    /**
     * <p>Specifies whether to enable the Deliverability dashboard for your Amazon
     * Pinpoint account. To enable the dashboard, set this value to
     * <code>true</code>.</p>
     */
    inline void SetDashboardEnabled(bool value) { m_dashboardEnabledHasBeenSet = true; m_dashboardEnabled = value; }

    /**
     * <p>Specifies whether to enable the Deliverability dashboard for your Amazon
     * Pinpoint account. To enable the dashboard, set this value to
     * <code>true</code>.</p>
     */
    inline PutDeliverabilityDashboardOptionRequest& WithDashboardEnabled(bool value) { SetDashboardEnabled(value); return *this;}


    /**
     * <p>An array of objects, one for each verified domain that you use to send email
     * and enabled the Deliverability dashboard for.</p>
     */
    inline const Aws::Vector<DomainDeliverabilityTrackingOption>& GetSubscribedDomains() const{ return m_subscribedDomains; }

    /**
     * <p>An array of objects, one for each verified domain that you use to send email
     * and enabled the Deliverability dashboard for.</p>
     */
    inline bool SubscribedDomainsHasBeenSet() const { return m_subscribedDomainsHasBeenSet; }

    /**
     * <p>An array of objects, one for each verified domain that you use to send email
     * and enabled the Deliverability dashboard for.</p>
     */
    inline void SetSubscribedDomains(const Aws::Vector<DomainDeliverabilityTrackingOption>& value) { m_subscribedDomainsHasBeenSet = true; m_subscribedDomains = value; }

    /**
     * <p>An array of objects, one for each verified domain that you use to send email
     * and enabled the Deliverability dashboard for.</p>
     */
    inline void SetSubscribedDomains(Aws::Vector<DomainDeliverabilityTrackingOption>&& value) { m_subscribedDomainsHasBeenSet = true; m_subscribedDomains = std::move(value); }

    /**
     * <p>An array of objects, one for each verified domain that you use to send email
     * and enabled the Deliverability dashboard for.</p>
     */
    inline PutDeliverabilityDashboardOptionRequest& WithSubscribedDomains(const Aws::Vector<DomainDeliverabilityTrackingOption>& value) { SetSubscribedDomains(value); return *this;}

    /**
     * <p>An array of objects, one for each verified domain that you use to send email
     * and enabled the Deliverability dashboard for.</p>
     */
    inline PutDeliverabilityDashboardOptionRequest& WithSubscribedDomains(Aws::Vector<DomainDeliverabilityTrackingOption>&& value) { SetSubscribedDomains(std::move(value)); return *this;}

    /**
     * <p>An array of objects, one for each verified domain that you use to send email
     * and enabled the Deliverability dashboard for.</p>
     */
    inline PutDeliverabilityDashboardOptionRequest& AddSubscribedDomains(const DomainDeliverabilityTrackingOption& value) { m_subscribedDomainsHasBeenSet = true; m_subscribedDomains.push_back(value); return *this; }

    /**
     * <p>An array of objects, one for each verified domain that you use to send email
     * and enabled the Deliverability dashboard for.</p>
     */
    inline PutDeliverabilityDashboardOptionRequest& AddSubscribedDomains(DomainDeliverabilityTrackingOption&& value) { m_subscribedDomainsHasBeenSet = true; m_subscribedDomains.push_back(std::move(value)); return *this; }

  private:

    bool m_dashboardEnabled;
    bool m_dashboardEnabledHasBeenSet;

    Aws::Vector<DomainDeliverabilityTrackingOption> m_subscribedDomains;
    bool m_subscribedDomainsHasBeenSet;
  };

} // namespace Model
} // namespace PinpointEmail
} // namespace Aws
