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
   * Campaign Limits are used to limit the number of messages that can be sent to a
   * single endpoint.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/CampaignLimits">AWS
   * API Reference</a></p>
   */
  class AWS_PINPOINT_API CampaignLimits
  {
  public:
    CampaignLimits();
    CampaignLimits(Aws::Utils::Json::JsonView jsonValue);
    CampaignLimits& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The maximum number of messages that each campaign can send to a single endpoint
     * in a 24-hour period.
     */
    inline int GetDaily() const{ return m_daily; }

    /**
     * The maximum number of messages that each campaign can send to a single endpoint
     * in a 24-hour period.
     */
    inline bool DailyHasBeenSet() const { return m_dailyHasBeenSet; }

    /**
     * The maximum number of messages that each campaign can send to a single endpoint
     * in a 24-hour period.
     */
    inline void SetDaily(int value) { m_dailyHasBeenSet = true; m_daily = value; }

    /**
     * The maximum number of messages that each campaign can send to a single endpoint
     * in a 24-hour period.
     */
    inline CampaignLimits& WithDaily(int value) { SetDaily(value); return *this;}


    /**
     * The length of time (in seconds) that the campaign can run before it ends and
     * message deliveries stop. This duration begins at the scheduled start time for
     * the campaign. The minimum value is 60.
     */
    inline int GetMaximumDuration() const{ return m_maximumDuration; }

    /**
     * The length of time (in seconds) that the campaign can run before it ends and
     * message deliveries stop. This duration begins at the scheduled start time for
     * the campaign. The minimum value is 60.
     */
    inline bool MaximumDurationHasBeenSet() const { return m_maximumDurationHasBeenSet; }

    /**
     * The length of time (in seconds) that the campaign can run before it ends and
     * message deliveries stop. This duration begins at the scheduled start time for
     * the campaign. The minimum value is 60.
     */
    inline void SetMaximumDuration(int value) { m_maximumDurationHasBeenSet = true; m_maximumDuration = value; }

    /**
     * The length of time (in seconds) that the campaign can run before it ends and
     * message deliveries stop. This duration begins at the scheduled start time for
     * the campaign. The minimum value is 60.
     */
    inline CampaignLimits& WithMaximumDuration(int value) { SetMaximumDuration(value); return *this;}


    /**
     * The number of messages that the campaign can send per second. The minimum value
     * is 50, and the maximum is 20000.
     */
    inline int GetMessagesPerSecond() const{ return m_messagesPerSecond; }

    /**
     * The number of messages that the campaign can send per second. The minimum value
     * is 50, and the maximum is 20000.
     */
    inline bool MessagesPerSecondHasBeenSet() const { return m_messagesPerSecondHasBeenSet; }

    /**
     * The number of messages that the campaign can send per second. The minimum value
     * is 50, and the maximum is 20000.
     */
    inline void SetMessagesPerSecond(int value) { m_messagesPerSecondHasBeenSet = true; m_messagesPerSecond = value; }

    /**
     * The number of messages that the campaign can send per second. The minimum value
     * is 50, and the maximum is 20000.
     */
    inline CampaignLimits& WithMessagesPerSecond(int value) { SetMessagesPerSecond(value); return *this;}


    /**
     * The maximum number of messages that an individual campaign can send to a single
     * endpoint over the course of the campaign.
     */
    inline int GetTotal() const{ return m_total; }

    /**
     * The maximum number of messages that an individual campaign can send to a single
     * endpoint over the course of the campaign.
     */
    inline bool TotalHasBeenSet() const { return m_totalHasBeenSet; }

    /**
     * The maximum number of messages that an individual campaign can send to a single
     * endpoint over the course of the campaign.
     */
    inline void SetTotal(int value) { m_totalHasBeenSet = true; m_total = value; }

    /**
     * The maximum number of messages that an individual campaign can send to a single
     * endpoint over the course of the campaign.
     */
    inline CampaignLimits& WithTotal(int value) { SetTotal(value); return *this;}

  private:

    int m_daily;
    bool m_dailyHasBeenSet;

    int m_maximumDuration;
    bool m_maximumDurationHasBeenSet;

    int m_messagesPerSecond;
    bool m_messagesPerSecondHasBeenSet;

    int m_total;
    bool m_totalHasBeenSet;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
