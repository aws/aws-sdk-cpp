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
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * Application settings.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/ApplicationSettingsResource">AWS
   * API Reference</a></p>
   */
  class AWS_PINPOINT_API ApplicationSettingsResource
  {
  public:
    ApplicationSettingsResource();
    ApplicationSettingsResource(Aws::Utils::Json::JsonView jsonValue);
    ApplicationSettingsResource& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The unique ID for the application.
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }

    /**
     * The unique ID for the application.
     */
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }

    /**
     * The unique ID for the application.
     */
    inline void SetApplicationId(const Aws::String& value) { m_applicationIdHasBeenSet = true; m_applicationId = value; }

    /**
     * The unique ID for the application.
     */
    inline void SetApplicationId(Aws::String&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::move(value); }

    /**
     * The unique ID for the application.
     */
    inline void SetApplicationId(const char* value) { m_applicationIdHasBeenSet = true; m_applicationId.assign(value); }

    /**
     * The unique ID for the application.
     */
    inline ApplicationSettingsResource& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}

    /**
     * The unique ID for the application.
     */
    inline ApplicationSettingsResource& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}

    /**
     * The unique ID for the application.
     */
    inline ApplicationSettingsResource& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}


    /**
     * Default campaign hook.
     */
    inline const CampaignHook& GetCampaignHook() const{ return m_campaignHook; }

    /**
     * Default campaign hook.
     */
    inline bool CampaignHookHasBeenSet() const { return m_campaignHookHasBeenSet; }

    /**
     * Default campaign hook.
     */
    inline void SetCampaignHook(const CampaignHook& value) { m_campaignHookHasBeenSet = true; m_campaignHook = value; }

    /**
     * Default campaign hook.
     */
    inline void SetCampaignHook(CampaignHook&& value) { m_campaignHookHasBeenSet = true; m_campaignHook = std::move(value); }

    /**
     * Default campaign hook.
     */
    inline ApplicationSettingsResource& WithCampaignHook(const CampaignHook& value) { SetCampaignHook(value); return *this;}

    /**
     * Default campaign hook.
     */
    inline ApplicationSettingsResource& WithCampaignHook(CampaignHook&& value) { SetCampaignHook(std::move(value)); return *this;}


    /**
     * The date that the settings were last updated in ISO 8601 format.
     */
    inline const Aws::String& GetLastModifiedDate() const{ return m_lastModifiedDate; }

    /**
     * The date that the settings were last updated in ISO 8601 format.
     */
    inline bool LastModifiedDateHasBeenSet() const { return m_lastModifiedDateHasBeenSet; }

    /**
     * The date that the settings were last updated in ISO 8601 format.
     */
    inline void SetLastModifiedDate(const Aws::String& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = value; }

    /**
     * The date that the settings were last updated in ISO 8601 format.
     */
    inline void SetLastModifiedDate(Aws::String&& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = std::move(value); }

    /**
     * The date that the settings were last updated in ISO 8601 format.
     */
    inline void SetLastModifiedDate(const char* value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate.assign(value); }

    /**
     * The date that the settings were last updated in ISO 8601 format.
     */
    inline ApplicationSettingsResource& WithLastModifiedDate(const Aws::String& value) { SetLastModifiedDate(value); return *this;}

    /**
     * The date that the settings were last updated in ISO 8601 format.
     */
    inline ApplicationSettingsResource& WithLastModifiedDate(Aws::String&& value) { SetLastModifiedDate(std::move(value)); return *this;}

    /**
     * The date that the settings were last updated in ISO 8601 format.
     */
    inline ApplicationSettingsResource& WithLastModifiedDate(const char* value) { SetLastModifiedDate(value); return *this;}


    /**
     * The default campaign limits for the app. These limits apply to each campaign for
     * the app, unless the campaign overrides the default with limits of its own.
     */
    inline const CampaignLimits& GetLimits() const{ return m_limits; }

    /**
     * The default campaign limits for the app. These limits apply to each campaign for
     * the app, unless the campaign overrides the default with limits of its own.
     */
    inline bool LimitsHasBeenSet() const { return m_limitsHasBeenSet; }

    /**
     * The default campaign limits for the app. These limits apply to each campaign for
     * the app, unless the campaign overrides the default with limits of its own.
     */
    inline void SetLimits(const CampaignLimits& value) { m_limitsHasBeenSet = true; m_limits = value; }

    /**
     * The default campaign limits for the app. These limits apply to each campaign for
     * the app, unless the campaign overrides the default with limits of its own.
     */
    inline void SetLimits(CampaignLimits&& value) { m_limitsHasBeenSet = true; m_limits = std::move(value); }

    /**
     * The default campaign limits for the app. These limits apply to each campaign for
     * the app, unless the campaign overrides the default with limits of its own.
     */
    inline ApplicationSettingsResource& WithLimits(const CampaignLimits& value) { SetLimits(value); return *this;}

    /**
     * The default campaign limits for the app. These limits apply to each campaign for
     * the app, unless the campaign overrides the default with limits of its own.
     */
    inline ApplicationSettingsResource& WithLimits(CampaignLimits&& value) { SetLimits(std::move(value)); return *this;}


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
    inline ApplicationSettingsResource& WithQuietTime(const QuietTime& value) { SetQuietTime(value); return *this;}

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
    inline ApplicationSettingsResource& WithQuietTime(QuietTime&& value) { SetQuietTime(std::move(value)); return *this;}

  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet;

    CampaignHook m_campaignHook;
    bool m_campaignHookHasBeenSet;

    Aws::String m_lastModifiedDate;
    bool m_lastModifiedDateHasBeenSet;

    CampaignLimits m_limits;
    bool m_limitsHasBeenSet;

    QuietTime m_quietTime;
    bool m_quietTimeHasBeenSet;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
