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
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace PinpointEmail
{
namespace Model
{

  /**
   * <p>Retrieve deliverability data for all the campaigns that used a specific
   * domain to send email during a specified time range. This data is available for a
   * domain only if you enabled the Deliverability dashboard
   * (<code>PutDeliverabilityDashboardOption</code> operation) for the
   * domain.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-email-2018-07-26/ListDomainDeliverabilityCampaignsRequest">AWS
   * API Reference</a></p>
   */
  class AWS_PINPOINTEMAIL_API ListDomainDeliverabilityCampaignsRequest : public PinpointEmailRequest
  {
  public:
    ListDomainDeliverabilityCampaignsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListDomainDeliverabilityCampaigns"; }

    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The first day, in Unix time format, that you want to obtain deliverability
     * data for.</p>
     */
    inline const Aws::Utils::DateTime& GetStartDate() const{ return m_startDate; }

    /**
     * <p>The first day, in Unix time format, that you want to obtain deliverability
     * data for.</p>
     */
    inline bool StartDateHasBeenSet() const { return m_startDateHasBeenSet; }

    /**
     * <p>The first day, in Unix time format, that you want to obtain deliverability
     * data for.</p>
     */
    inline void SetStartDate(const Aws::Utils::DateTime& value) { m_startDateHasBeenSet = true; m_startDate = value; }

    /**
     * <p>The first day, in Unix time format, that you want to obtain deliverability
     * data for.</p>
     */
    inline void SetStartDate(Aws::Utils::DateTime&& value) { m_startDateHasBeenSet = true; m_startDate = std::move(value); }

    /**
     * <p>The first day, in Unix time format, that you want to obtain deliverability
     * data for.</p>
     */
    inline ListDomainDeliverabilityCampaignsRequest& WithStartDate(const Aws::Utils::DateTime& value) { SetStartDate(value); return *this;}

    /**
     * <p>The first day, in Unix time format, that you want to obtain deliverability
     * data for.</p>
     */
    inline ListDomainDeliverabilityCampaignsRequest& WithStartDate(Aws::Utils::DateTime&& value) { SetStartDate(std::move(value)); return *this;}


    /**
     * <p>The last day, in Unix time format, that you want to obtain deliverability
     * data for. This value has to be less than or equal to 30 days after the value of
     * the <code>StartDate</code> parameter.</p>
     */
    inline const Aws::Utils::DateTime& GetEndDate() const{ return m_endDate; }

    /**
     * <p>The last day, in Unix time format, that you want to obtain deliverability
     * data for. This value has to be less than or equal to 30 days after the value of
     * the <code>StartDate</code> parameter.</p>
     */
    inline bool EndDateHasBeenSet() const { return m_endDateHasBeenSet; }

    /**
     * <p>The last day, in Unix time format, that you want to obtain deliverability
     * data for. This value has to be less than or equal to 30 days after the value of
     * the <code>StartDate</code> parameter.</p>
     */
    inline void SetEndDate(const Aws::Utils::DateTime& value) { m_endDateHasBeenSet = true; m_endDate = value; }

    /**
     * <p>The last day, in Unix time format, that you want to obtain deliverability
     * data for. This value has to be less than or equal to 30 days after the value of
     * the <code>StartDate</code> parameter.</p>
     */
    inline void SetEndDate(Aws::Utils::DateTime&& value) { m_endDateHasBeenSet = true; m_endDate = std::move(value); }

    /**
     * <p>The last day, in Unix time format, that you want to obtain deliverability
     * data for. This value has to be less than or equal to 30 days after the value of
     * the <code>StartDate</code> parameter.</p>
     */
    inline ListDomainDeliverabilityCampaignsRequest& WithEndDate(const Aws::Utils::DateTime& value) { SetEndDate(value); return *this;}

    /**
     * <p>The last day, in Unix time format, that you want to obtain deliverability
     * data for. This value has to be less than or equal to 30 days after the value of
     * the <code>StartDate</code> parameter.</p>
     */
    inline ListDomainDeliverabilityCampaignsRequest& WithEndDate(Aws::Utils::DateTime&& value) { SetEndDate(std::move(value)); return *this;}


    /**
     * <p>The domain to obtain deliverability data for.</p>
     */
    inline const Aws::String& GetSubscribedDomain() const{ return m_subscribedDomain; }

    /**
     * <p>The domain to obtain deliverability data for.</p>
     */
    inline bool SubscribedDomainHasBeenSet() const { return m_subscribedDomainHasBeenSet; }

    /**
     * <p>The domain to obtain deliverability data for.</p>
     */
    inline void SetSubscribedDomain(const Aws::String& value) { m_subscribedDomainHasBeenSet = true; m_subscribedDomain = value; }

    /**
     * <p>The domain to obtain deliverability data for.</p>
     */
    inline void SetSubscribedDomain(Aws::String&& value) { m_subscribedDomainHasBeenSet = true; m_subscribedDomain = std::move(value); }

    /**
     * <p>The domain to obtain deliverability data for.</p>
     */
    inline void SetSubscribedDomain(const char* value) { m_subscribedDomainHasBeenSet = true; m_subscribedDomain.assign(value); }

    /**
     * <p>The domain to obtain deliverability data for.</p>
     */
    inline ListDomainDeliverabilityCampaignsRequest& WithSubscribedDomain(const Aws::String& value) { SetSubscribedDomain(value); return *this;}

    /**
     * <p>The domain to obtain deliverability data for.</p>
     */
    inline ListDomainDeliverabilityCampaignsRequest& WithSubscribedDomain(Aws::String&& value) { SetSubscribedDomain(std::move(value)); return *this;}

    /**
     * <p>The domain to obtain deliverability data for.</p>
     */
    inline ListDomainDeliverabilityCampaignsRequest& WithSubscribedDomain(const char* value) { SetSubscribedDomain(value); return *this;}


    /**
     * <p>A token that’s returned from a previous call to the
     * <code>ListDomainDeliverabilityCampaigns</code> operation. This token indicates
     * the position of a campaign in the list of campaigns.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token that’s returned from a previous call to the
     * <code>ListDomainDeliverabilityCampaigns</code> operation. This token indicates
     * the position of a campaign in the list of campaigns.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>A token that’s returned from a previous call to the
     * <code>ListDomainDeliverabilityCampaigns</code> operation. This token indicates
     * the position of a campaign in the list of campaigns.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>A token that’s returned from a previous call to the
     * <code>ListDomainDeliverabilityCampaigns</code> operation. This token indicates
     * the position of a campaign in the list of campaigns.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>A token that’s returned from a previous call to the
     * <code>ListDomainDeliverabilityCampaigns</code> operation. This token indicates
     * the position of a campaign in the list of campaigns.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>A token that’s returned from a previous call to the
     * <code>ListDomainDeliverabilityCampaigns</code> operation. This token indicates
     * the position of a campaign in the list of campaigns.</p>
     */
    inline ListDomainDeliverabilityCampaignsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token that’s returned from a previous call to the
     * <code>ListDomainDeliverabilityCampaigns</code> operation. This token indicates
     * the position of a campaign in the list of campaigns.</p>
     */
    inline ListDomainDeliverabilityCampaignsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token that’s returned from a previous call to the
     * <code>ListDomainDeliverabilityCampaigns</code> operation. This token indicates
     * the position of a campaign in the list of campaigns.</p>
     */
    inline ListDomainDeliverabilityCampaignsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of results to include in response to a single call to the
     * <code>ListDomainDeliverabilityCampaigns</code> operation. If the number of
     * results is larger than the number that you specify in this parameter, the
     * response includes a <code>NextToken</code> element, which you can use to obtain
     * additional results.</p>
     */
    inline int GetPageSize() const{ return m_pageSize; }

    /**
     * <p>The maximum number of results to include in response to a single call to the
     * <code>ListDomainDeliverabilityCampaigns</code> operation. If the number of
     * results is larger than the number that you specify in this parameter, the
     * response includes a <code>NextToken</code> element, which you can use to obtain
     * additional results.</p>
     */
    inline bool PageSizeHasBeenSet() const { return m_pageSizeHasBeenSet; }

    /**
     * <p>The maximum number of results to include in response to a single call to the
     * <code>ListDomainDeliverabilityCampaigns</code> operation. If the number of
     * results is larger than the number that you specify in this parameter, the
     * response includes a <code>NextToken</code> element, which you can use to obtain
     * additional results.</p>
     */
    inline void SetPageSize(int value) { m_pageSizeHasBeenSet = true; m_pageSize = value; }

    /**
     * <p>The maximum number of results to include in response to a single call to the
     * <code>ListDomainDeliverabilityCampaigns</code> operation. If the number of
     * results is larger than the number that you specify in this parameter, the
     * response includes a <code>NextToken</code> element, which you can use to obtain
     * additional results.</p>
     */
    inline ListDomainDeliverabilityCampaignsRequest& WithPageSize(int value) { SetPageSize(value); return *this;}

  private:

    Aws::Utils::DateTime m_startDate;
    bool m_startDateHasBeenSet;

    Aws::Utils::DateTime m_endDate;
    bool m_endDateHasBeenSet;

    Aws::String m_subscribedDomain;
    bool m_subscribedDomainHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    int m_pageSize;
    bool m_pageSizeHasBeenSet;
  };

} // namespace Model
} // namespace PinpointEmail
} // namespace Aws
