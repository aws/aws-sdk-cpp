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
    WriteApplicationSettingsRequest(const Aws::Utils::Json::JsonValue& jsonValue);
    WriteApplicationSettingsRequest& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Default campaign hook information.
     */
    inline const CampaignHook& GetCampaignHook() const{ return m_campaignHook; }

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
     * The default campaign limits for the app. These limits apply to each campaign for
     * the app, unless the campaign overrides the default with limits of its own.
     */
    inline const CampaignLimits& GetLimits() const{ return m_limits; }

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
    inline WriteApplicationSettingsRequest& WithLimits(const CampaignLimits& value) { SetLimits(value); return *this;}

    /**
     * The default campaign limits for the app. These limits apply to each campaign for
     * the app, unless the campaign overrides the default with limits of its own.
     */
    inline WriteApplicationSettingsRequest& WithLimits(CampaignLimits&& value) { SetLimits(std::move(value)); return *this;}


    /**
     * The default quiet time for the app. Each campaign for this app sends no messages
     * during this time unless the campaign overrides the default with a quiet time of
     * its own.
     */
    inline const QuietTime& GetQuietTime() const{ return m_quietTime; }

    /**
     * The default quiet time for the app. Each campaign for this app sends no messages
     * during this time unless the campaign overrides the default with a quiet time of
     * its own.
     */
    inline void SetQuietTime(const QuietTime& value) { m_quietTimeHasBeenSet = true; m_quietTime = value; }

    /**
     * The default quiet time for the app. Each campaign for this app sends no messages
     * during this time unless the campaign overrides the default with a quiet time of
     * its own.
     */
    inline void SetQuietTime(QuietTime&& value) { m_quietTimeHasBeenSet = true; m_quietTime = std::move(value); }

    /**
     * The default quiet time for the app. Each campaign for this app sends no messages
     * during this time unless the campaign overrides the default with a quiet time of
     * its own.
     */
    inline WriteApplicationSettingsRequest& WithQuietTime(const QuietTime& value) { SetQuietTime(value); return *this;}

    /**
     * The default quiet time for the app. Each campaign for this app sends no messages
     * during this time unless the campaign overrides the default with a quiet time of
     * its own.
     */
    inline WriteApplicationSettingsRequest& WithQuietTime(QuietTime&& value) { SetQuietTime(std::move(value)); return *this;}

  private:

    CampaignHook m_campaignHook;
    bool m_campaignHookHasBeenSet;

    CampaignLimits m_limits;
    bool m_limitsHasBeenSet;

    QuietTime m_quietTime;
    bool m_quietTimeHasBeenSet;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
