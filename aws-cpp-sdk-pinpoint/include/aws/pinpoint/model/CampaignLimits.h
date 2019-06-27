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
   * <p>Specifies limits on the messages that a campaign can send.</p><p><h3>See
   * Also:</h3>   <a
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
     * <p>The maximum number of messages that a campaign can send to a single endpoint
     * during a 24-hour period. The maximum value is 100.</p>
     */
    inline int GetDaily() const{ return m_daily; }

    /**
     * <p>The maximum number of messages that a campaign can send to a single endpoint
     * during a 24-hour period. The maximum value is 100.</p>
     */
    inline bool DailyHasBeenSet() const { return m_dailyHasBeenSet; }

    /**
     * <p>The maximum number of messages that a campaign can send to a single endpoint
     * during a 24-hour period. The maximum value is 100.</p>
     */
    inline void SetDaily(int value) { m_dailyHasBeenSet = true; m_daily = value; }

    /**
     * <p>The maximum number of messages that a campaign can send to a single endpoint
     * during a 24-hour period. The maximum value is 100.</p>
     */
    inline CampaignLimits& WithDaily(int value) { SetDaily(value); return *this;}


    /**
     * <p>The maximum amount of time, in seconds, that a campaign can attempt to
     * deliver a message after the scheduled start time for the campaign. The minimum
     * value is 60 seconds.</p>
     */
    inline int GetMaximumDuration() const{ return m_maximumDuration; }

    /**
     * <p>The maximum amount of time, in seconds, that a campaign can attempt to
     * deliver a message after the scheduled start time for the campaign. The minimum
     * value is 60 seconds.</p>
     */
    inline bool MaximumDurationHasBeenSet() const { return m_maximumDurationHasBeenSet; }

    /**
     * <p>The maximum amount of time, in seconds, that a campaign can attempt to
     * deliver a message after the scheduled start time for the campaign. The minimum
     * value is 60 seconds.</p>
     */
    inline void SetMaximumDuration(int value) { m_maximumDurationHasBeenSet = true; m_maximumDuration = value; }

    /**
     * <p>The maximum amount of time, in seconds, that a campaign can attempt to
     * deliver a message after the scheduled start time for the campaign. The minimum
     * value is 60 seconds.</p>
     */
    inline CampaignLimits& WithMaximumDuration(int value) { SetMaximumDuration(value); return *this;}


    /**
     * <p>The maximum number of messages that a campaign can send each second. The
     * minimum value is 50. The maximum value is 20,000.</p>
     */
    inline int GetMessagesPerSecond() const{ return m_messagesPerSecond; }

    /**
     * <p>The maximum number of messages that a campaign can send each second. The
     * minimum value is 50. The maximum value is 20,000.</p>
     */
    inline bool MessagesPerSecondHasBeenSet() const { return m_messagesPerSecondHasBeenSet; }

    /**
     * <p>The maximum number of messages that a campaign can send each second. The
     * minimum value is 50. The maximum value is 20,000.</p>
     */
    inline void SetMessagesPerSecond(int value) { m_messagesPerSecondHasBeenSet = true; m_messagesPerSecond = value; }

    /**
     * <p>The maximum number of messages that a campaign can send each second. The
     * minimum value is 50. The maximum value is 20,000.</p>
     */
    inline CampaignLimits& WithMessagesPerSecond(int value) { SetMessagesPerSecond(value); return *this;}


    /**
     * <p>The maximum number of messages that a campaign can send to a single endpoint
     * during the course of the campaign. The maximum value is 100.</p>
     */
    inline int GetTotal() const{ return m_total; }

    /**
     * <p>The maximum number of messages that a campaign can send to a single endpoint
     * during the course of the campaign. The maximum value is 100.</p>
     */
    inline bool TotalHasBeenSet() const { return m_totalHasBeenSet; }

    /**
     * <p>The maximum number of messages that a campaign can send to a single endpoint
     * during the course of the campaign. The maximum value is 100.</p>
     */
    inline void SetTotal(int value) { m_totalHasBeenSet = true; m_total = value; }

    /**
     * <p>The maximum number of messages that a campaign can send to a single endpoint
     * during the course of the campaign. The maximum value is 100.</p>
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
