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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace PinpointEmail
{
namespace Model
{

  /**
   * <p>Retrieve all the deliverability data for a specific campaign. This data is
   * available for a campaign only if the campaign sent email by using a domain that
   * the Deliverability dashboard is enabled for
   * (<code>PutDeliverabilityDashboardOption</code> operation).</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-email-2018-07-26/GetDomainDeliverabilityCampaignRequest">AWS
   * API Reference</a></p>
   */
  class AWS_PINPOINTEMAIL_API GetDomainDeliverabilityCampaignRequest : public PinpointEmailRequest
  {
  public:
    GetDomainDeliverabilityCampaignRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetDomainDeliverabilityCampaign"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The unique identifier for the campaign. Amazon Pinpoint automatically
     * generates and assigns this identifier to a campaign. This value is not the same
     * as the campaign identifier that Amazon Pinpoint assigns to campaigns that you
     * create and manage by using the Amazon Pinpoint API or the Amazon Pinpoint
     * console.</p>
     */
    inline const Aws::String& GetCampaignId() const{ return m_campaignId; }

    /**
     * <p>The unique identifier for the campaign. Amazon Pinpoint automatically
     * generates and assigns this identifier to a campaign. This value is not the same
     * as the campaign identifier that Amazon Pinpoint assigns to campaigns that you
     * create and manage by using the Amazon Pinpoint API or the Amazon Pinpoint
     * console.</p>
     */
    inline bool CampaignIdHasBeenSet() const { return m_campaignIdHasBeenSet; }

    /**
     * <p>The unique identifier for the campaign. Amazon Pinpoint automatically
     * generates and assigns this identifier to a campaign. This value is not the same
     * as the campaign identifier that Amazon Pinpoint assigns to campaigns that you
     * create and manage by using the Amazon Pinpoint API or the Amazon Pinpoint
     * console.</p>
     */
    inline void SetCampaignId(const Aws::String& value) { m_campaignIdHasBeenSet = true; m_campaignId = value; }

    /**
     * <p>The unique identifier for the campaign. Amazon Pinpoint automatically
     * generates and assigns this identifier to a campaign. This value is not the same
     * as the campaign identifier that Amazon Pinpoint assigns to campaigns that you
     * create and manage by using the Amazon Pinpoint API or the Amazon Pinpoint
     * console.</p>
     */
    inline void SetCampaignId(Aws::String&& value) { m_campaignIdHasBeenSet = true; m_campaignId = std::move(value); }

    /**
     * <p>The unique identifier for the campaign. Amazon Pinpoint automatically
     * generates and assigns this identifier to a campaign. This value is not the same
     * as the campaign identifier that Amazon Pinpoint assigns to campaigns that you
     * create and manage by using the Amazon Pinpoint API or the Amazon Pinpoint
     * console.</p>
     */
    inline void SetCampaignId(const char* value) { m_campaignIdHasBeenSet = true; m_campaignId.assign(value); }

    /**
     * <p>The unique identifier for the campaign. Amazon Pinpoint automatically
     * generates and assigns this identifier to a campaign. This value is not the same
     * as the campaign identifier that Amazon Pinpoint assigns to campaigns that you
     * create and manage by using the Amazon Pinpoint API or the Amazon Pinpoint
     * console.</p>
     */
    inline GetDomainDeliverabilityCampaignRequest& WithCampaignId(const Aws::String& value) { SetCampaignId(value); return *this;}

    /**
     * <p>The unique identifier for the campaign. Amazon Pinpoint automatically
     * generates and assigns this identifier to a campaign. This value is not the same
     * as the campaign identifier that Amazon Pinpoint assigns to campaigns that you
     * create and manage by using the Amazon Pinpoint API or the Amazon Pinpoint
     * console.</p>
     */
    inline GetDomainDeliverabilityCampaignRequest& WithCampaignId(Aws::String&& value) { SetCampaignId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the campaign. Amazon Pinpoint automatically
     * generates and assigns this identifier to a campaign. This value is not the same
     * as the campaign identifier that Amazon Pinpoint assigns to campaigns that you
     * create and manage by using the Amazon Pinpoint API or the Amazon Pinpoint
     * console.</p>
     */
    inline GetDomainDeliverabilityCampaignRequest& WithCampaignId(const char* value) { SetCampaignId(value); return *this;}

  private:

    Aws::String m_campaignId;
    bool m_campaignIdHasBeenSet;
  };

} // namespace Model
} // namespace PinpointEmail
} // namespace Aws
