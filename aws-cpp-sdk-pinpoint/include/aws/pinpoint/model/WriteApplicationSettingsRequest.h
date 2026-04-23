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
#include <aws/pinpoint/model/CampaignHook.h>
#include <aws/pinpoint/model/CampaignLimits.h>
#include <aws/pinpoint/model/QuietTime.h>
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
   * Creating application setting request<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/WriteApplicationSettingsRequest">AWS
   * API Reference</a></p>
   */
  class AWS_PINPOINT_API WriteApplicationSettingsRequest
  {
  public:
    WriteApplicationSettingsRequest();
    WriteApplicationSettingsRequest(Aws::Utils::Json::JsonView jsonValue);
    WriteApplicationSettingsRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Default campaign hook information.
     */
    inline const CampaignHook& GetCampaignHook() const{ return m_campaignHook; }

    /**
     * Default campaign hook information.
     */
    inline bool CampaignHookHasBeenSet() const { return m_campaignHookHasBeenSet; }

    /**
     * Default campaign hook information.
     */
    inline void SetCampaignHook(const CampaignHook& value) { m_campaignHookHasBeenSet = true; m_campaignHook = value; }

    /**
     * Default campaign hook information.
     */
    inline void SetCampaignHook(CampaignHook&& value) { m_campaignHookHasBeenSet = true; m_campaignHook = std::move(value); }

    /**
     * Default campaign hook information.
     */
    inline WriteApplicationSettingsRequest& WithCampaignHook(const CampaignHook& value) { SetCampaignHook(value); return *this;}

    /**
     * Default campaign hook information.
     */
    inline WriteApplicationSettingsRequest& WithCampaignHook(CampaignHook&& value) { SetCampaignHook(std::move(value)); return *this;}


    /**
     * The CloudWatchMetrics settings for the app.
     */
    inline bool GetCloudWatchMetricsEnabled() const{ return m_cloudWatchMetricsEnabled; }

    /**
     * The CloudWatchMetrics settings for the app.
     */
    inline bool CloudWatchMetricsEnabledHasBeenSet() const { return m_cloudWatchMetricsEnabledHasBeenSet; }

    /**
     * The CloudWatchMetrics settings for the app.
     */
    inline void SetCloudWatchMetricsEnabled(bool value) { m_cloudWatchMetricsEnabledHasBeenSet = true; m_cloudWatchMetricsEnabled = value; }

    /**
     * The CloudWatchMetrics settings for the app.
     */
    inline WriteApplicationSettingsRequest& WithCloudWatchMetricsEnabled(bool value) { SetCloudWatchMetricsEnabled(value); return *this;}


    /**
     * The limits that apply to each campaign in the project by default. Campaigns can
     * also have their own limits, which override the settings at the project level.
     */
    inline const CampaignLimits& GetLimits() const{ return m_limits; }

    /**
     * The limits that apply to each campaign in the project by default. Campaigns can
     * also have their own limits, which override the settings at the project level.
     */
    inline bool LimitsHasBeenSet() const { return m_limitsHasBeenSet; }

    /**
     * The limits that apply to each campaign in the project by default. Campaigns can
     * also have their own limits, which override the settings at the project level.
     */
    inline void SetLimits(const CampaignLimits& value) { m_limitsHasBeenSet = true; m_limits = value; }

    /**
     * The limits that apply to each campaign in the project by default. Campaigns can
     * also have their own limits, which override the settings at the project level.
     */
    inline void SetLimits(CampaignLimits&& value) { m_limitsHasBeenSet = true; m_limits = std::move(value); }

    /**
     * The limits that apply to each campaign in the project by default. Campaigns can
     * also have their own limits, which override the settings at the project level.
     */
    inline WriteApplicationSettingsRequest& WithLimits(const CampaignLimits& value) { SetLimits(value); return *this;}

    /**
     * The limits that apply to each campaign in the project by default. Campaigns can
     * also have their own limits, which override the settings at the project level.
     */
    inline WriteApplicationSettingsRequest& WithLimits(CampaignLimits&& value) { SetLimits(std::move(value)); return *this;}


    /**
     * The default quiet time for the app. Campaigns in the app don't send messages to
     * endpoints during the quiet time.

Note: Make sure that your endpoints include
     * the Demographics.Timezone attribute if you plan to enable a quiet time for your
     * app. If your endpoints don't include this attribute, they'll receive the
     * messages that you send them, even if quiet time is enabled.

When you set up an
     * app to use quiet time, campaigns in that app don't send messages during the time
     * range you specified, as long as all of the following are true:
- The endpoint
     * includes a valid Demographic.Timezone attribute.
- The current time in the
     * endpoint's time zone is later than or equal to the time specified in the
     * QuietTime.Start attribute for the app (or campaign, if applicable).
- The
     * current time in the endpoint's time zone is earlier than or equal to the time
     * specified in the QuietTime.End attribute for the app (or campaign, if
     * applicable).

Individual campaigns within the app can have their own quiet time
     * settings, which override the quiet time settings at the app level.
     */
    inline const QuietTime& GetQuietTime() const{ return m_quietTime; }

    /**
     * The default quiet time for the app. Campaigns in the app don't send messages to
     * endpoints during the quiet time.

Note: Make sure that your endpoints include
     * the Demographics.Timezone attribute if you plan to enable a quiet time for your
     * app. If your endpoints don't include this attribute, they'll receive the
     * messages that you send them, even if quiet time is enabled.

When you set up an
     * app to use quiet time, campaigns in that app don't send messages during the time
     * range you specified, as long as all of the following are true:
- The endpoint
     * includes a valid Demographic.Timezone attribute.
- The current time in the
     * endpoint's time zone is later than or equal to the time specified in the
     * QuietTime.Start attribute for the app (or campaign, if applicable).
- The
     * current time in the endpoint's time zone is earlier than or equal to the time
     * specified in the QuietTime.End attribute for the app (or campaign, if
     * applicable).

Individual campaigns within the app can have their own quiet time
     * settings, which override the quiet time settings at the app level.
     */
    inline bool QuietTimeHasBeenSet() const { return m_quietTimeHasBeenSet; }

    /**
     * The default quiet time for the app. Campaigns in the app don't send messages to
     * endpoints during the quiet time.

Note: Make sure that your endpoints include
     * the Demographics.Timezone attribute if you plan to enable a quiet time for your
     * app. If your endpoints don't include this attribute, they'll receive the
     * messages that you send them, even if quiet time is enabled.

When you set up an
     * app to use quiet time, campaigns in that app don't send messages during the time
     * range you specified, as long as all of the following are true:
- The endpoint
     * includes a valid Demographic.Timezone attribute.
- The current time in the
     * endpoint's time zone is later than or equal to the time specified in the
     * QuietTime.Start attribute for the app (or campaign, if applicable).
- The
     * current time in the endpoint's time zone is earlier than or equal to the time
     * specified in the QuietTime.End attribute for the app (or campaign, if
     * applicable).

Individual campaigns within the app can have their own quiet time
     * settings, which override the quiet time settings at the app level.
     */
    inline void SetQuietTime(const QuietTime& value) { m_quietTimeHasBeenSet = true; m_quietTime = value; }

    /**
     * The default quiet time for the app. Campaigns in the app don't send messages to
     * endpoints during the quiet time.

Note: Make sure that your endpoints include
     * the Demographics.Timezone attribute if you plan to enable a quiet time for your
     * app. If your endpoints don't include this attribute, they'll receive the
     * messages that you send them, even if quiet time is enabled.

When you set up an
     * app to use quiet time, campaigns in that app don't send messages during the time
     * range you specified, as long as all of the following are true:
- The endpoint
     * includes a valid Demographic.Timezone attribute.
- The current time in the
     * endpoint's time zone is later than or equal to the time specified in the
     * QuietTime.Start attribute for the app (or campaign, if applicable).
- The
     * current time in the endpoint's time zone is earlier than or equal to the time
     * specified in the QuietTime.End attribute for the app (or campaign, if
     * applicable).

Individual campaigns within the app can have their own quiet time
     * settings, which override the quiet time settings at the app level.
     */
    inline void SetQuietTime(QuietTime&& value) { m_quietTimeHasBeenSet = true; m_quietTime = std::move(value); }

    /**
     * The default quiet time for the app. Campaigns in the app don't send messages to
     * endpoints during the quiet time.

Note: Make sure that your endpoints include
     * the Demographics.Timezone attribute if you plan to enable a quiet time for your
     * app. If your endpoints don't include this attribute, they'll receive the
     * messages that you send them, even if quiet time is enabled.

When you set up an
     * app to use quiet time, campaigns in that app don't send messages during the time
     * range you specified, as long as all of the following are true:
- The endpoint
     * includes a valid Demographic.Timezone attribute.
- The current time in the
     * endpoint's time zone is later than or equal to the time specified in the
     * QuietTime.Start attribute for the app (or campaign, if applicable).
- The
     * current time in the endpoint's time zone is earlier than or equal to the time
     * specified in the QuietTime.End attribute for the app (or campaign, if
     * applicable).

Individual campaigns within the app can have their own quiet time
     * settings, which override the quiet time settings at the app level.
     */
    inline WriteApplicationSettingsRequest& WithQuietTime(const QuietTime& value) { SetQuietTime(value); return *this;}

    /**
     * The default quiet time for the app. Campaigns in the app don't send messages to
     * endpoints during the quiet time.

Note: Make sure that your endpoints include
     * the Demographics.Timezone attribute if you plan to enable a quiet time for your
     * app. If your endpoints don't include this attribute, they'll receive the
     * messages that you send them, even if quiet time is enabled.

When you set up an
     * app to use quiet time, campaigns in that app don't send messages during the time
     * range you specified, as long as all of the following are true:
- The endpoint
     * includes a valid Demographic.Timezone attribute.
- The current time in the
     * endpoint's time zone is later than or equal to the time specified in the
     * QuietTime.Start attribute for the app (or campaign, if applicable).
- The
     * current time in the endpoint's time zone is earlier than or equal to the time
     * specified in the QuietTime.End attribute for the app (or campaign, if
     * applicable).

Individual campaigns within the app can have their own quiet time
     * settings, which override the quiet time settings at the app level.
     */
    inline WriteApplicationSettingsRequest& WithQuietTime(QuietTime&& value) { SetQuietTime(std::move(value)); return *this;}

  private:

    CampaignHook m_campaignHook;
    bool m_campaignHookHasBeenSet;

    bool m_cloudWatchMetricsEnabled;
    bool m_cloudWatchMetricsEnabledHasBeenSet;

    CampaignLimits m_limits;
    bool m_limitsHasBeenSet;

    QuietTime m_quietTime;
    bool m_quietTimeHasBeenSet;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
