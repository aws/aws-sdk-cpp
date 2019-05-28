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
#include <aws/core/utils/DateTime.h>
#include <aws/pinpoint-email/model/DeliverabilityDashboardAccountStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/pinpoint-email/model/DomainDeliverabilityTrackingOption.h>
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
namespace PinpointEmail
{
namespace Model
{
  /**
   * <p>An object that shows the status of the Deliverability dashboard for your
   * Amazon Pinpoint account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-email-2018-07-26/GetDeliverabilityDashboardOptionsResponse">AWS
   * API Reference</a></p>
   */
  class AWS_PINPOINTEMAIL_API GetDeliverabilityDashboardOptionsResult
  {
  public:
    GetDeliverabilityDashboardOptionsResult();
    GetDeliverabilityDashboardOptionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetDeliverabilityDashboardOptionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Specifies whether the Deliverability dashboard is enabled for your Amazon
     * Pinpoint account. If this value is <code>true</code>, the dashboard is
     * enabled.</p>
     */
    inline bool GetDashboardEnabled() const{ return m_dashboardEnabled; }

    /**
     * <p>Specifies whether the Deliverability dashboard is enabled for your Amazon
     * Pinpoint account. If this value is <code>true</code>, the dashboard is
     * enabled.</p>
     */
    inline void SetDashboardEnabled(bool value) { m_dashboardEnabled = value; }

    /**
     * <p>Specifies whether the Deliverability dashboard is enabled for your Amazon
     * Pinpoint account. If this value is <code>true</code>, the dashboard is
     * enabled.</p>
     */
    inline GetDeliverabilityDashboardOptionsResult& WithDashboardEnabled(bool value) { SetDashboardEnabled(value); return *this;}


    /**
     * <p>The date, in Unix time format, when your current subscription to the
     * Deliverability dashboard is scheduled to expire, if your subscription is
     * scheduled to expire at the end of the current calendar month. This value is null
     * if you have an active subscription that isn’t due to expire at the end of the
     * month.</p>
     */
    inline const Aws::Utils::DateTime& GetSubscriptionExpiryDate() const{ return m_subscriptionExpiryDate; }

    /**
     * <p>The date, in Unix time format, when your current subscription to the
     * Deliverability dashboard is scheduled to expire, if your subscription is
     * scheduled to expire at the end of the current calendar month. This value is null
     * if you have an active subscription that isn’t due to expire at the end of the
     * month.</p>
     */
    inline void SetSubscriptionExpiryDate(const Aws::Utils::DateTime& value) { m_subscriptionExpiryDate = value; }

    /**
     * <p>The date, in Unix time format, when your current subscription to the
     * Deliverability dashboard is scheduled to expire, if your subscription is
     * scheduled to expire at the end of the current calendar month. This value is null
     * if you have an active subscription that isn’t due to expire at the end of the
     * month.</p>
     */
    inline void SetSubscriptionExpiryDate(Aws::Utils::DateTime&& value) { m_subscriptionExpiryDate = std::move(value); }

    /**
     * <p>The date, in Unix time format, when your current subscription to the
     * Deliverability dashboard is scheduled to expire, if your subscription is
     * scheduled to expire at the end of the current calendar month. This value is null
     * if you have an active subscription that isn’t due to expire at the end of the
     * month.</p>
     */
    inline GetDeliverabilityDashboardOptionsResult& WithSubscriptionExpiryDate(const Aws::Utils::DateTime& value) { SetSubscriptionExpiryDate(value); return *this;}

    /**
     * <p>The date, in Unix time format, when your current subscription to the
     * Deliverability dashboard is scheduled to expire, if your subscription is
     * scheduled to expire at the end of the current calendar month. This value is null
     * if you have an active subscription that isn’t due to expire at the end of the
     * month.</p>
     */
    inline GetDeliverabilityDashboardOptionsResult& WithSubscriptionExpiryDate(Aws::Utils::DateTime&& value) { SetSubscriptionExpiryDate(std::move(value)); return *this;}


    /**
     * <p>The current status of your Deliverability dashboard subscription. If this
     * value is <code>PENDING_EXPIRATION</code>, your subscription is scheduled to
     * expire at the end of the current calendar month.</p>
     */
    inline const DeliverabilityDashboardAccountStatus& GetAccountStatus() const{ return m_accountStatus; }

    /**
     * <p>The current status of your Deliverability dashboard subscription. If this
     * value is <code>PENDING_EXPIRATION</code>, your subscription is scheduled to
     * expire at the end of the current calendar month.</p>
     */
    inline void SetAccountStatus(const DeliverabilityDashboardAccountStatus& value) { m_accountStatus = value; }

    /**
     * <p>The current status of your Deliverability dashboard subscription. If this
     * value is <code>PENDING_EXPIRATION</code>, your subscription is scheduled to
     * expire at the end of the current calendar month.</p>
     */
    inline void SetAccountStatus(DeliverabilityDashboardAccountStatus&& value) { m_accountStatus = std::move(value); }

    /**
     * <p>The current status of your Deliverability dashboard subscription. If this
     * value is <code>PENDING_EXPIRATION</code>, your subscription is scheduled to
     * expire at the end of the current calendar month.</p>
     */
    inline GetDeliverabilityDashboardOptionsResult& WithAccountStatus(const DeliverabilityDashboardAccountStatus& value) { SetAccountStatus(value); return *this;}

    /**
     * <p>The current status of your Deliverability dashboard subscription. If this
     * value is <code>PENDING_EXPIRATION</code>, your subscription is scheduled to
     * expire at the end of the current calendar month.</p>
     */
    inline GetDeliverabilityDashboardOptionsResult& WithAccountStatus(DeliverabilityDashboardAccountStatus&& value) { SetAccountStatus(std::move(value)); return *this;}


    /**
     * <p>An array of objects, one for each verified domain that you use to send email
     * and currently has an active Deliverability dashboard subscription that isn’t
     * scheduled to expire at the end of the current calendar month.</p>
     */
    inline const Aws::Vector<DomainDeliverabilityTrackingOption>& GetActiveSubscribedDomains() const{ return m_activeSubscribedDomains; }

    /**
     * <p>An array of objects, one for each verified domain that you use to send email
     * and currently has an active Deliverability dashboard subscription that isn’t
     * scheduled to expire at the end of the current calendar month.</p>
     */
    inline void SetActiveSubscribedDomains(const Aws::Vector<DomainDeliverabilityTrackingOption>& value) { m_activeSubscribedDomains = value; }

    /**
     * <p>An array of objects, one for each verified domain that you use to send email
     * and currently has an active Deliverability dashboard subscription that isn’t
     * scheduled to expire at the end of the current calendar month.</p>
     */
    inline void SetActiveSubscribedDomains(Aws::Vector<DomainDeliverabilityTrackingOption>&& value) { m_activeSubscribedDomains = std::move(value); }

    /**
     * <p>An array of objects, one for each verified domain that you use to send email
     * and currently has an active Deliverability dashboard subscription that isn’t
     * scheduled to expire at the end of the current calendar month.</p>
     */
    inline GetDeliverabilityDashboardOptionsResult& WithActiveSubscribedDomains(const Aws::Vector<DomainDeliverabilityTrackingOption>& value) { SetActiveSubscribedDomains(value); return *this;}

    /**
     * <p>An array of objects, one for each verified domain that you use to send email
     * and currently has an active Deliverability dashboard subscription that isn’t
     * scheduled to expire at the end of the current calendar month.</p>
     */
    inline GetDeliverabilityDashboardOptionsResult& WithActiveSubscribedDomains(Aws::Vector<DomainDeliverabilityTrackingOption>&& value) { SetActiveSubscribedDomains(std::move(value)); return *this;}

    /**
     * <p>An array of objects, one for each verified domain that you use to send email
     * and currently has an active Deliverability dashboard subscription that isn’t
     * scheduled to expire at the end of the current calendar month.</p>
     */
    inline GetDeliverabilityDashboardOptionsResult& AddActiveSubscribedDomains(const DomainDeliverabilityTrackingOption& value) { m_activeSubscribedDomains.push_back(value); return *this; }

    /**
     * <p>An array of objects, one for each verified domain that you use to send email
     * and currently has an active Deliverability dashboard subscription that isn’t
     * scheduled to expire at the end of the current calendar month.</p>
     */
    inline GetDeliverabilityDashboardOptionsResult& AddActiveSubscribedDomains(DomainDeliverabilityTrackingOption&& value) { m_activeSubscribedDomains.push_back(std::move(value)); return *this; }


    /**
     * <p>An array of objects, one for each verified domain that you use to send email
     * and currently has an active Deliverability dashboard subscription that's
     * scheduled to expire at the end of the current calendar month.</p>
     */
    inline const Aws::Vector<DomainDeliverabilityTrackingOption>& GetPendingExpirationSubscribedDomains() const{ return m_pendingExpirationSubscribedDomains; }

    /**
     * <p>An array of objects, one for each verified domain that you use to send email
     * and currently has an active Deliverability dashboard subscription that's
     * scheduled to expire at the end of the current calendar month.</p>
     */
    inline void SetPendingExpirationSubscribedDomains(const Aws::Vector<DomainDeliverabilityTrackingOption>& value) { m_pendingExpirationSubscribedDomains = value; }

    /**
     * <p>An array of objects, one for each verified domain that you use to send email
     * and currently has an active Deliverability dashboard subscription that's
     * scheduled to expire at the end of the current calendar month.</p>
     */
    inline void SetPendingExpirationSubscribedDomains(Aws::Vector<DomainDeliverabilityTrackingOption>&& value) { m_pendingExpirationSubscribedDomains = std::move(value); }

    /**
     * <p>An array of objects, one for each verified domain that you use to send email
     * and currently has an active Deliverability dashboard subscription that's
     * scheduled to expire at the end of the current calendar month.</p>
     */
    inline GetDeliverabilityDashboardOptionsResult& WithPendingExpirationSubscribedDomains(const Aws::Vector<DomainDeliverabilityTrackingOption>& value) { SetPendingExpirationSubscribedDomains(value); return *this;}

    /**
     * <p>An array of objects, one for each verified domain that you use to send email
     * and currently has an active Deliverability dashboard subscription that's
     * scheduled to expire at the end of the current calendar month.</p>
     */
    inline GetDeliverabilityDashboardOptionsResult& WithPendingExpirationSubscribedDomains(Aws::Vector<DomainDeliverabilityTrackingOption>&& value) { SetPendingExpirationSubscribedDomains(std::move(value)); return *this;}

    /**
     * <p>An array of objects, one for each verified domain that you use to send email
     * and currently has an active Deliverability dashboard subscription that's
     * scheduled to expire at the end of the current calendar month.</p>
     */
    inline GetDeliverabilityDashboardOptionsResult& AddPendingExpirationSubscribedDomains(const DomainDeliverabilityTrackingOption& value) { m_pendingExpirationSubscribedDomains.push_back(value); return *this; }

    /**
     * <p>An array of objects, one for each verified domain that you use to send email
     * and currently has an active Deliverability dashboard subscription that's
     * scheduled to expire at the end of the current calendar month.</p>
     */
    inline GetDeliverabilityDashboardOptionsResult& AddPendingExpirationSubscribedDomains(DomainDeliverabilityTrackingOption&& value) { m_pendingExpirationSubscribedDomains.push_back(std::move(value)); return *this; }

  private:

    bool m_dashboardEnabled;

    Aws::Utils::DateTime m_subscriptionExpiryDate;

    DeliverabilityDashboardAccountStatus m_accountStatus;

    Aws::Vector<DomainDeliverabilityTrackingOption> m_activeSubscribedDomains;

    Aws::Vector<DomainDeliverabilityTrackingOption> m_pendingExpirationSubscribedDomains;
  };

} // namespace Model
} // namespace PinpointEmail
} // namespace Aws
