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
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/model/CampaignStatus.h>
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
namespace Pinpoint
{
namespace Model
{

  /**
   * State of the Campaign<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/CampaignState">AWS
   * API Reference</a></p>
   */
  class AWS_PINPOINT_API CampaignState
  {
  public:
    CampaignState();
    CampaignState(Aws::Utils::Json::JsonView jsonValue);
    CampaignState& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The status of the campaign, or the status of a treatment that belongs to an A/B
     * test campaign.

Valid values: SCHEDULED, EXECUTING, PENDING_NEXT_RUN, COMPLETED,
     * PAUSED
     */
    inline const CampaignStatus& GetCampaignStatus() const{ return m_campaignStatus; }

    /**
     * The status of the campaign, or the status of a treatment that belongs to an A/B
     * test campaign.

Valid values: SCHEDULED, EXECUTING, PENDING_NEXT_RUN, COMPLETED,
     * PAUSED
     */
    inline bool CampaignStatusHasBeenSet() const { return m_campaignStatusHasBeenSet; }

    /**
     * The status of the campaign, or the status of a treatment that belongs to an A/B
     * test campaign.

Valid values: SCHEDULED, EXECUTING, PENDING_NEXT_RUN, COMPLETED,
     * PAUSED
     */
    inline void SetCampaignStatus(const CampaignStatus& value) { m_campaignStatusHasBeenSet = true; m_campaignStatus = value; }

    /**
     * The status of the campaign, or the status of a treatment that belongs to an A/B
     * test campaign.

Valid values: SCHEDULED, EXECUTING, PENDING_NEXT_RUN, COMPLETED,
     * PAUSED
     */
    inline void SetCampaignStatus(CampaignStatus&& value) { m_campaignStatusHasBeenSet = true; m_campaignStatus = std::move(value); }

    /**
     * The status of the campaign, or the status of a treatment that belongs to an A/B
     * test campaign.

Valid values: SCHEDULED, EXECUTING, PENDING_NEXT_RUN, COMPLETED,
     * PAUSED
     */
    inline CampaignState& WithCampaignStatus(const CampaignStatus& value) { SetCampaignStatus(value); return *this;}

    /**
     * The status of the campaign, or the status of a treatment that belongs to an A/B
     * test campaign.

Valid values: SCHEDULED, EXECUTING, PENDING_NEXT_RUN, COMPLETED,
     * PAUSED
     */
    inline CampaignState& WithCampaignStatus(CampaignStatus&& value) { SetCampaignStatus(std::move(value)); return *this;}

  private:

    CampaignStatus m_campaignStatus;
    bool m_campaignStatusHasBeenSet;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
