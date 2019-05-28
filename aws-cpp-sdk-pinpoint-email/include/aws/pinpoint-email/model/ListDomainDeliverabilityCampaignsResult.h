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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pinpoint-email/model/DomainDeliverabilityCampaign.h>
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
   * <p>An array of objects that provide deliverability data for all the campaigns
   * that used a specific domain to send email during a specified time range. This
   * data is available for a domain only if you enabled the Deliverability dashboard
   * (<code>PutDeliverabilityDashboardOption</code> operation) for the
   * domain.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-email-2018-07-26/ListDomainDeliverabilityCampaignsResponse">AWS
   * API Reference</a></p>
   */
  class AWS_PINPOINTEMAIL_API ListDomainDeliverabilityCampaignsResult
  {
  public:
    ListDomainDeliverabilityCampaignsResult();
    ListDomainDeliverabilityCampaignsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListDomainDeliverabilityCampaignsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of responses, one for each campaign that used the domain to send
     * email during the specified time range.</p>
     */
    inline const Aws::Vector<DomainDeliverabilityCampaign>& GetDomainDeliverabilityCampaigns() const{ return m_domainDeliverabilityCampaigns; }

    /**
     * <p>An array of responses, one for each campaign that used the domain to send
     * email during the specified time range.</p>
     */
    inline void SetDomainDeliverabilityCampaigns(const Aws::Vector<DomainDeliverabilityCampaign>& value) { m_domainDeliverabilityCampaigns = value; }

    /**
     * <p>An array of responses, one for each campaign that used the domain to send
     * email during the specified time range.</p>
     */
    inline void SetDomainDeliverabilityCampaigns(Aws::Vector<DomainDeliverabilityCampaign>&& value) { m_domainDeliverabilityCampaigns = std::move(value); }

    /**
     * <p>An array of responses, one for each campaign that used the domain to send
     * email during the specified time range.</p>
     */
    inline ListDomainDeliverabilityCampaignsResult& WithDomainDeliverabilityCampaigns(const Aws::Vector<DomainDeliverabilityCampaign>& value) { SetDomainDeliverabilityCampaigns(value); return *this;}

    /**
     * <p>An array of responses, one for each campaign that used the domain to send
     * email during the specified time range.</p>
     */
    inline ListDomainDeliverabilityCampaignsResult& WithDomainDeliverabilityCampaigns(Aws::Vector<DomainDeliverabilityCampaign>&& value) { SetDomainDeliverabilityCampaigns(std::move(value)); return *this;}

    /**
     * <p>An array of responses, one for each campaign that used the domain to send
     * email during the specified time range.</p>
     */
    inline ListDomainDeliverabilityCampaignsResult& AddDomainDeliverabilityCampaigns(const DomainDeliverabilityCampaign& value) { m_domainDeliverabilityCampaigns.push_back(value); return *this; }

    /**
     * <p>An array of responses, one for each campaign that used the domain to send
     * email during the specified time range.</p>
     */
    inline ListDomainDeliverabilityCampaignsResult& AddDomainDeliverabilityCampaigns(DomainDeliverabilityCampaign&& value) { m_domainDeliverabilityCampaigns.push_back(std::move(value)); return *this; }


    /**
     * <p>A token that’s returned from a previous call to the
     * <code>ListDomainDeliverabilityCampaigns</code> operation. This token indicates
     * the position of the campaign in the list of campaigns.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token that’s returned from a previous call to the
     * <code>ListDomainDeliverabilityCampaigns</code> operation. This token indicates
     * the position of the campaign in the list of campaigns.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A token that’s returned from a previous call to the
     * <code>ListDomainDeliverabilityCampaigns</code> operation. This token indicates
     * the position of the campaign in the list of campaigns.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A token that’s returned from a previous call to the
     * <code>ListDomainDeliverabilityCampaigns</code> operation. This token indicates
     * the position of the campaign in the list of campaigns.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A token that’s returned from a previous call to the
     * <code>ListDomainDeliverabilityCampaigns</code> operation. This token indicates
     * the position of the campaign in the list of campaigns.</p>
     */
    inline ListDomainDeliverabilityCampaignsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token that’s returned from a previous call to the
     * <code>ListDomainDeliverabilityCampaigns</code> operation. This token indicates
     * the position of the campaign in the list of campaigns.</p>
     */
    inline ListDomainDeliverabilityCampaignsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token that’s returned from a previous call to the
     * <code>ListDomainDeliverabilityCampaigns</code> operation. This token indicates
     * the position of the campaign in the list of campaigns.</p>
     */
    inline ListDomainDeliverabilityCampaignsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<DomainDeliverabilityCampaign> m_domainDeliverabilityCampaigns;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace PinpointEmail
} // namespace Aws
