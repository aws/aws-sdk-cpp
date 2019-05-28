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
   * <p>An object that contains all the deliverability data for a specific campaign.
   * This data is available for a campaign only if the campaign sent email by using a
   * domain that the Deliverability dashboard is enabled for
   * (<code>PutDeliverabilityDashboardOption</code> operation).</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-email-2018-07-26/GetDomainDeliverabilityCampaignResponse">AWS
   * API Reference</a></p>
   */
  class AWS_PINPOINTEMAIL_API GetDomainDeliverabilityCampaignResult
  {
  public:
    GetDomainDeliverabilityCampaignResult();
    GetDomainDeliverabilityCampaignResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetDomainDeliverabilityCampaignResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An object that contains the deliverability data for the campaign.</p>
     */
    inline const DomainDeliverabilityCampaign& GetDomainDeliverabilityCampaign() const{ return m_domainDeliverabilityCampaign; }

    /**
     * <p>An object that contains the deliverability data for the campaign.</p>
     */
    inline void SetDomainDeliverabilityCampaign(const DomainDeliverabilityCampaign& value) { m_domainDeliverabilityCampaign = value; }

    /**
     * <p>An object that contains the deliverability data for the campaign.</p>
     */
    inline void SetDomainDeliverabilityCampaign(DomainDeliverabilityCampaign&& value) { m_domainDeliverabilityCampaign = std::move(value); }

    /**
     * <p>An object that contains the deliverability data for the campaign.</p>
     */
    inline GetDomainDeliverabilityCampaignResult& WithDomainDeliverabilityCampaign(const DomainDeliverabilityCampaign& value) { SetDomainDeliverabilityCampaign(value); return *this;}

    /**
     * <p>An object that contains the deliverability data for the campaign.</p>
     */
    inline GetDomainDeliverabilityCampaignResult& WithDomainDeliverabilityCampaign(DomainDeliverabilityCampaign&& value) { SetDomainDeliverabilityCampaign(std::move(value)); return *this;}

  private:

    DomainDeliverabilityCampaign m_domainDeliverabilityCampaign;
  };

} // namespace Model
} // namespace PinpointEmail
} // namespace Aws
