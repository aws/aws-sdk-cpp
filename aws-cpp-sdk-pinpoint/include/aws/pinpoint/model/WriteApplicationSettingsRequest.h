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
   * <p>Specifies the default settings for an application.</p><p><h3>See Also:</h3>  
   * <a
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
     * <p>The settings for the AWS Lambda function to use by default as a code hook for
     * campaigns in the application. To override these settings for a specific
     * campaign, use the <link 
     * linkend="apps-application-id-campaigns-campaign-id">Campaign</link> resource to
     * define custom Lambda function settings for the campaign.</p>
     */
    inline const CampaignHook& GetCampaignHook() const{ return m_campaignHook; }

    /**
     * <p>The settings for the AWS Lambda function to use by default as a code hook for
     * campaigns in the application. To override these settings for a specific
     * campaign, use the <link 
     * linkend="apps-application-id-campaigns-campaign-id">Campaign</link> resource to
     * define custom Lambda function settings for the campaign.</p>
     */
    inline bool CampaignHookHasBeenSet() const { return m_campaignHookHasBeenSet; }

    /**
     * <p>The settings for the AWS Lambda function to use by default as a code hook for
     * campaigns in the application. To override these settings for a specific
     * campaign, use the <link 
     * linkend="apps-application-id-campaigns-campaign-id">Campaign</link> resource to
     * define custom Lambda function settings for the campaign.</p>
     */
    inline void SetCampaignHook(const CampaignHook& value) { m_campaignHookHasBeenSet = true; m_campaignHook = value; }

    /**
     * <p>The settings for the AWS Lambda function to use by default as a code hook for
     * campaigns in the application. To override these settings for a specific
     * campaign, use the <link 
     * linkend="apps-application-id-campaigns-campaign-id">Campaign</link> resource to
     * define custom Lambda function settings for the campaign.</p>
     */
    inline void SetCampaignHook(CampaignHook&& value) { m_campaignHookHasBeenSet = true; m_campaignHook = std::move(value); }

    /**
     * <p>The settings for the AWS Lambda function to use by default as a code hook for
     * campaigns in the application. To override these settings for a specific
     * campaign, use the <link 
     * linkend="apps-application-id-campaigns-campaign-id">Campaign</link> resource to
     * define custom Lambda function settings for the campaign.</p>
     */
    inline WriteApplicationSettingsRequest& WithCampaignHook(const CampaignHook& value) { SetCampaignHook(value); return *this;}

    /**
     * <p>The settings for the AWS Lambda function to use by default as a code hook for
     * campaigns in the application. To override these settings for a specific
     * campaign, use the <link 
     * linkend="apps-application-id-campaigns-campaign-id">Campaign</link> resource to
     * define custom Lambda function settings for the campaign.</p>
     */
    inline WriteApplicationSettingsRequest& WithCampaignHook(CampaignHook&& value) { SetCampaignHook(std::move(value)); return *this;}


    /**
     * <p>Specifies whether to enable application-related alarms in Amazon
     * CloudWatch.</p>
     */
    inline bool GetCloudWatchMetricsEnabled() const{ return m_cloudWatchMetricsEnabled; }

    /**
     * <p>Specifies whether to enable application-related alarms in Amazon
     * CloudWatch.</p>
     */
    inline bool CloudWatchMetricsEnabledHasBeenSet() const { return m_cloudWatchMetricsEnabledHasBeenSet; }

    /**
     * <p>Specifies whether to enable application-related alarms in Amazon
     * CloudWatch.</p>
     */
    inline void SetCloudWatchMetricsEnabled(bool value) { m_cloudWatchMetricsEnabledHasBeenSet = true; m_cloudWatchMetricsEnabled = value; }

    /**
     * <p>Specifies whether to enable application-related alarms in Amazon
     * CloudWatch.</p>
     */
    inline WriteApplicationSettingsRequest& WithCloudWatchMetricsEnabled(bool value) { SetCloudWatchMetricsEnabled(value); return *this;}


    /**
     * <p>The default sending limits for campaigns in the application. To override
     * these limits for a specific campaign, use the <link 
     * linkend="apps-application-id-campaigns-campaign-id">Campaign</link> resource to
     * define custom limits for the campaign.</p>
     */
    inline const CampaignLimits& GetLimits() const{ return m_limits; }

    /**
     * <p>The default sending limits for campaigns in the application. To override
     * these limits for a specific campaign, use the <link 
     * linkend="apps-application-id-campaigns-campaign-id">Campaign</link> resource to
     * define custom limits for the campaign.</p>
     */
    inline bool LimitsHasBeenSet() const { return m_limitsHasBeenSet; }

    /**
     * <p>The default sending limits for campaigns in the application. To override
     * these limits for a specific campaign, use the <link 
     * linkend="apps-application-id-campaigns-campaign-id">Campaign</link> resource to
     * define custom limits for the campaign.</p>
     */
    inline void SetLimits(const CampaignLimits& value) { m_limitsHasBeenSet = true; m_limits = value; }

    /**
     * <p>The default sending limits for campaigns in the application. To override
     * these limits for a specific campaign, use the <link 
     * linkend="apps-application-id-campaigns-campaign-id">Campaign</link> resource to
     * define custom limits for the campaign.</p>
     */
    inline void SetLimits(CampaignLimits&& value) { m_limitsHasBeenSet = true; m_limits = std::move(value); }

    /**
     * <p>The default sending limits for campaigns in the application. To override
     * these limits for a specific campaign, use the <link 
     * linkend="apps-application-id-campaigns-campaign-id">Campaign</link> resource to
     * define custom limits for the campaign.</p>
     */
    inline WriteApplicationSettingsRequest& WithLimits(const CampaignLimits& value) { SetLimits(value); return *this;}

    /**
     * <p>The default sending limits for campaigns in the application. To override
     * these limits for a specific campaign, use the <link 
     * linkend="apps-application-id-campaigns-campaign-id">Campaign</link> resource to
     * define custom limits for the campaign.</p>
     */
    inline WriteApplicationSettingsRequest& WithLimits(CampaignLimits&& value) { SetLimits(std::move(value)); return *this;}


    /**
     * <p>The default quiet time for campaigns in the application. Quiet time is a
     * specific time range when campaigns don't send messages to endpoints, if all the
     * following conditions are met:</p> <ul><li><p>The EndpointDemographic.Timezone
     * property of the endpoint is set to a valid value.</p></li> <li><p>The current
     * time in the endpoint's time zone is later than or equal to the time specified by
     * the QuietTime.Start property for the application (or a campaign that has custom
     * quiet time settings).</p></li> <li><p>The current time in the endpoint's time
     * zone is earlier than or equal to the time specified by the QuietTime.End
     * property for the application (or a campaign that has custom quiet time
     * settings).</p></li></ul> <p>If any of the preceding conditions isn't met, the
     * endpoint will receive messages from a campaign, even if quiet time is
     * enabled.</p> <p>To override the default quiet time settings for a specific
     * campaign, use the <link 
     * linkend="apps-application-id-campaigns-campaign-id">Campaign</link> resource to
     * define a custom quiet time for the campaign.</p>
     */
    inline const QuietTime& GetQuietTime() const{ return m_quietTime; }

    /**
     * <p>The default quiet time for campaigns in the application. Quiet time is a
     * specific time range when campaigns don't send messages to endpoints, if all the
     * following conditions are met:</p> <ul><li><p>The EndpointDemographic.Timezone
     * property of the endpoint is set to a valid value.</p></li> <li><p>The current
     * time in the endpoint's time zone is later than or equal to the time specified by
     * the QuietTime.Start property for the application (or a campaign that has custom
     * quiet time settings).</p></li> <li><p>The current time in the endpoint's time
     * zone is earlier than or equal to the time specified by the QuietTime.End
     * property for the application (or a campaign that has custom quiet time
     * settings).</p></li></ul> <p>If any of the preceding conditions isn't met, the
     * endpoint will receive messages from a campaign, even if quiet time is
     * enabled.</p> <p>To override the default quiet time settings for a specific
     * campaign, use the <link 
     * linkend="apps-application-id-campaigns-campaign-id">Campaign</link> resource to
     * define a custom quiet time for the campaign.</p>
     */
    inline bool QuietTimeHasBeenSet() const { return m_quietTimeHasBeenSet; }

    /**
     * <p>The default quiet time for campaigns in the application. Quiet time is a
     * specific time range when campaigns don't send messages to endpoints, if all the
     * following conditions are met:</p> <ul><li><p>The EndpointDemographic.Timezone
     * property of the endpoint is set to a valid value.</p></li> <li><p>The current
     * time in the endpoint's time zone is later than or equal to the time specified by
     * the QuietTime.Start property for the application (or a campaign that has custom
     * quiet time settings).</p></li> <li><p>The current time in the endpoint's time
     * zone is earlier than or equal to the time specified by the QuietTime.End
     * property for the application (or a campaign that has custom quiet time
     * settings).</p></li></ul> <p>If any of the preceding conditions isn't met, the
     * endpoint will receive messages from a campaign, even if quiet time is
     * enabled.</p> <p>To override the default quiet time settings for a specific
     * campaign, use the <link 
     * linkend="apps-application-id-campaigns-campaign-id">Campaign</link> resource to
     * define a custom quiet time for the campaign.</p>
     */
    inline void SetQuietTime(const QuietTime& value) { m_quietTimeHasBeenSet = true; m_quietTime = value; }

    /**
     * <p>The default quiet time for campaigns in the application. Quiet time is a
     * specific time range when campaigns don't send messages to endpoints, if all the
     * following conditions are met:</p> <ul><li><p>The EndpointDemographic.Timezone
     * property of the endpoint is set to a valid value.</p></li> <li><p>The current
     * time in the endpoint's time zone is later than or equal to the time specified by
     * the QuietTime.Start property for the application (or a campaign that has custom
     * quiet time settings).</p></li> <li><p>The current time in the endpoint's time
     * zone is earlier than or equal to the time specified by the QuietTime.End
     * property for the application (or a campaign that has custom quiet time
     * settings).</p></li></ul> <p>If any of the preceding conditions isn't met, the
     * endpoint will receive messages from a campaign, even if quiet time is
     * enabled.</p> <p>To override the default quiet time settings for a specific
     * campaign, use the <link 
     * linkend="apps-application-id-campaigns-campaign-id">Campaign</link> resource to
     * define a custom quiet time for the campaign.</p>
     */
    inline void SetQuietTime(QuietTime&& value) { m_quietTimeHasBeenSet = true; m_quietTime = std::move(value); }

    /**
     * <p>The default quiet time for campaigns in the application. Quiet time is a
     * specific time range when campaigns don't send messages to endpoints, if all the
     * following conditions are met:</p> <ul><li><p>The EndpointDemographic.Timezone
     * property of the endpoint is set to a valid value.</p></li> <li><p>The current
     * time in the endpoint's time zone is later than or equal to the time specified by
     * the QuietTime.Start property for the application (or a campaign that has custom
     * quiet time settings).</p></li> <li><p>The current time in the endpoint's time
     * zone is earlier than or equal to the time specified by the QuietTime.End
     * property for the application (or a campaign that has custom quiet time
     * settings).</p></li></ul> <p>If any of the preceding conditions isn't met, the
     * endpoint will receive messages from a campaign, even if quiet time is
     * enabled.</p> <p>To override the default quiet time settings for a specific
     * campaign, use the <link 
     * linkend="apps-application-id-campaigns-campaign-id">Campaign</link> resource to
     * define a custom quiet time for the campaign.</p>
     */
    inline WriteApplicationSettingsRequest& WithQuietTime(const QuietTime& value) { SetQuietTime(value); return *this;}

    /**
     * <p>The default quiet time for campaigns in the application. Quiet time is a
     * specific time range when campaigns don't send messages to endpoints, if all the
     * following conditions are met:</p> <ul><li><p>The EndpointDemographic.Timezone
     * property of the endpoint is set to a valid value.</p></li> <li><p>The current
     * time in the endpoint's time zone is later than or equal to the time specified by
     * the QuietTime.Start property for the application (or a campaign that has custom
     * quiet time settings).</p></li> <li><p>The current time in the endpoint's time
     * zone is earlier than or equal to the time specified by the QuietTime.End
     * property for the application (or a campaign that has custom quiet time
     * settings).</p></li></ul> <p>If any of the preceding conditions isn't met, the
     * endpoint will receive messages from a campaign, even if quiet time is
     * enabled.</p> <p>To override the default quiet time settings for a specific
     * campaign, use the <link 
     * linkend="apps-application-id-campaigns-campaign-id">Campaign</link> resource to
     * define a custom quiet time for the campaign.</p>
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
