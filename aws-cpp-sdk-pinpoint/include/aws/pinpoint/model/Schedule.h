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
#include <aws/pinpoint/model/CampaignEventFilter.h>
#include <aws/pinpoint/model/Frequency.h>
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
   * <p>Specifies the schedule settings for a campaign.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/Schedule">AWS
   * API Reference</a></p>
   */
  class AWS_PINPOINT_API Schedule
  {
  public:
    Schedule();
    Schedule(Aws::Utils::Json::JsonView jsonValue);
    Schedule& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The scheduled time, in ISO 8601 format, for the campaign to end.</p>
     */
    inline const Aws::String& GetEndTime() const{ return m_endTime; }

    /**
     * <p>The scheduled time, in ISO 8601 format, for the campaign to end.</p>
     */
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }

    /**
     * <p>The scheduled time, in ISO 8601 format, for the campaign to end.</p>
     */
    inline void SetEndTime(const Aws::String& value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * <p>The scheduled time, in ISO 8601 format, for the campaign to end.</p>
     */
    inline void SetEndTime(Aws::String&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }

    /**
     * <p>The scheduled time, in ISO 8601 format, for the campaign to end.</p>
     */
    inline void SetEndTime(const char* value) { m_endTimeHasBeenSet = true; m_endTime.assign(value); }

    /**
     * <p>The scheduled time, in ISO 8601 format, for the campaign to end.</p>
     */
    inline Schedule& WithEndTime(const Aws::String& value) { SetEndTime(value); return *this;}

    /**
     * <p>The scheduled time, in ISO 8601 format, for the campaign to end.</p>
     */
    inline Schedule& WithEndTime(Aws::String&& value) { SetEndTime(std::move(value)); return *this;}

    /**
     * <p>The scheduled time, in ISO 8601 format, for the campaign to end.</p>
     */
    inline Schedule& WithEndTime(const char* value) { SetEndTime(value); return *this;}


    /**
     * <p>The type of event that causes the campaign to be sent, if the value of the
     * Frequency property is EVENT.</p>
     */
    inline const CampaignEventFilter& GetEventFilter() const{ return m_eventFilter; }

    /**
     * <p>The type of event that causes the campaign to be sent, if the value of the
     * Frequency property is EVENT.</p>
     */
    inline bool EventFilterHasBeenSet() const { return m_eventFilterHasBeenSet; }

    /**
     * <p>The type of event that causes the campaign to be sent, if the value of the
     * Frequency property is EVENT.</p>
     */
    inline void SetEventFilter(const CampaignEventFilter& value) { m_eventFilterHasBeenSet = true; m_eventFilter = value; }

    /**
     * <p>The type of event that causes the campaign to be sent, if the value of the
     * Frequency property is EVENT.</p>
     */
    inline void SetEventFilter(CampaignEventFilter&& value) { m_eventFilterHasBeenSet = true; m_eventFilter = std::move(value); }

    /**
     * <p>The type of event that causes the campaign to be sent, if the value of the
     * Frequency property is EVENT.</p>
     */
    inline Schedule& WithEventFilter(const CampaignEventFilter& value) { SetEventFilter(value); return *this;}

    /**
     * <p>The type of event that causes the campaign to be sent, if the value of the
     * Frequency property is EVENT.</p>
     */
    inline Schedule& WithEventFilter(CampaignEventFilter&& value) { SetEventFilter(std::move(value)); return *this;}


    /**
     * <p>Specifies how often the campaign is sent or whether the campaign is sent in
     * response to a specific event.</p>
     */
    inline const Frequency& GetFrequency() const{ return m_frequency; }

    /**
     * <p>Specifies how often the campaign is sent or whether the campaign is sent in
     * response to a specific event.</p>
     */
    inline bool FrequencyHasBeenSet() const { return m_frequencyHasBeenSet; }

    /**
     * <p>Specifies how often the campaign is sent or whether the campaign is sent in
     * response to a specific event.</p>
     */
    inline void SetFrequency(const Frequency& value) { m_frequencyHasBeenSet = true; m_frequency = value; }

    /**
     * <p>Specifies how often the campaign is sent or whether the campaign is sent in
     * response to a specific event.</p>
     */
    inline void SetFrequency(Frequency&& value) { m_frequencyHasBeenSet = true; m_frequency = std::move(value); }

    /**
     * <p>Specifies how often the campaign is sent or whether the campaign is sent in
     * response to a specific event.</p>
     */
    inline Schedule& WithFrequency(const Frequency& value) { SetFrequency(value); return *this;}

    /**
     * <p>Specifies how often the campaign is sent or whether the campaign is sent in
     * response to a specific event.</p>
     */
    inline Schedule& WithFrequency(Frequency&& value) { SetFrequency(std::move(value)); return *this;}


    /**
     * <p>Specifies whether the start and end times for the campaign schedule use each
     * recipient's local time. To base the schedule on each recipient's local time, set
     * this value to true.</p>
     */
    inline bool GetIsLocalTime() const{ return m_isLocalTime; }

    /**
     * <p>Specifies whether the start and end times for the campaign schedule use each
     * recipient's local time. To base the schedule on each recipient's local time, set
     * this value to true.</p>
     */
    inline bool IsLocalTimeHasBeenSet() const { return m_isLocalTimeHasBeenSet; }

    /**
     * <p>Specifies whether the start and end times for the campaign schedule use each
     * recipient's local time. To base the schedule on each recipient's local time, set
     * this value to true.</p>
     */
    inline void SetIsLocalTime(bool value) { m_isLocalTimeHasBeenSet = true; m_isLocalTime = value; }

    /**
     * <p>Specifies whether the start and end times for the campaign schedule use each
     * recipient's local time. To base the schedule on each recipient's local time, set
     * this value to true.</p>
     */
    inline Schedule& WithIsLocalTime(bool value) { SetIsLocalTime(value); return *this;}


    /**
     * <p>The default quiet time for the campaign. Quiet time is a specific time range
     * when a campaign doesn't send messages to endpoints, if all the following
     * conditions are met:</p> <ul><li><p>The EndpointDemographic.Timezone property of
     * the endpoint is set to a valid value.</p></li> <li><p>The current time in the
     * endpoint's time zone is later than or equal to the time specified by the
     * QuietTime.Start property for the campaign.</p></li> <li><p>The current time in
     * the endpoint's time zone is earlier than or equal to the time specified by the
     * QuietTime.End property for the campaign.</p></li></ul> <p>If any of the
     * preceding conditions isn't met, the endpoint will receive messages from the
     * campaign, even if quiet time is enabled.</p>
     */
    inline const QuietTime& GetQuietTime() const{ return m_quietTime; }

    /**
     * <p>The default quiet time for the campaign. Quiet time is a specific time range
     * when a campaign doesn't send messages to endpoints, if all the following
     * conditions are met:</p> <ul><li><p>The EndpointDemographic.Timezone property of
     * the endpoint is set to a valid value.</p></li> <li><p>The current time in the
     * endpoint's time zone is later than or equal to the time specified by the
     * QuietTime.Start property for the campaign.</p></li> <li><p>The current time in
     * the endpoint's time zone is earlier than or equal to the time specified by the
     * QuietTime.End property for the campaign.</p></li></ul> <p>If any of the
     * preceding conditions isn't met, the endpoint will receive messages from the
     * campaign, even if quiet time is enabled.</p>
     */
    inline bool QuietTimeHasBeenSet() const { return m_quietTimeHasBeenSet; }

    /**
     * <p>The default quiet time for the campaign. Quiet time is a specific time range
     * when a campaign doesn't send messages to endpoints, if all the following
     * conditions are met:</p> <ul><li><p>The EndpointDemographic.Timezone property of
     * the endpoint is set to a valid value.</p></li> <li><p>The current time in the
     * endpoint's time zone is later than or equal to the time specified by the
     * QuietTime.Start property for the campaign.</p></li> <li><p>The current time in
     * the endpoint's time zone is earlier than or equal to the time specified by the
     * QuietTime.End property for the campaign.</p></li></ul> <p>If any of the
     * preceding conditions isn't met, the endpoint will receive messages from the
     * campaign, even if quiet time is enabled.</p>
     */
    inline void SetQuietTime(const QuietTime& value) { m_quietTimeHasBeenSet = true; m_quietTime = value; }

    /**
     * <p>The default quiet time for the campaign. Quiet time is a specific time range
     * when a campaign doesn't send messages to endpoints, if all the following
     * conditions are met:</p> <ul><li><p>The EndpointDemographic.Timezone property of
     * the endpoint is set to a valid value.</p></li> <li><p>The current time in the
     * endpoint's time zone is later than or equal to the time specified by the
     * QuietTime.Start property for the campaign.</p></li> <li><p>The current time in
     * the endpoint's time zone is earlier than or equal to the time specified by the
     * QuietTime.End property for the campaign.</p></li></ul> <p>If any of the
     * preceding conditions isn't met, the endpoint will receive messages from the
     * campaign, even if quiet time is enabled.</p>
     */
    inline void SetQuietTime(QuietTime&& value) { m_quietTimeHasBeenSet = true; m_quietTime = std::move(value); }

    /**
     * <p>The default quiet time for the campaign. Quiet time is a specific time range
     * when a campaign doesn't send messages to endpoints, if all the following
     * conditions are met:</p> <ul><li><p>The EndpointDemographic.Timezone property of
     * the endpoint is set to a valid value.</p></li> <li><p>The current time in the
     * endpoint's time zone is later than or equal to the time specified by the
     * QuietTime.Start property for the campaign.</p></li> <li><p>The current time in
     * the endpoint's time zone is earlier than or equal to the time specified by the
     * QuietTime.End property for the campaign.</p></li></ul> <p>If any of the
     * preceding conditions isn't met, the endpoint will receive messages from the
     * campaign, even if quiet time is enabled.</p>
     */
    inline Schedule& WithQuietTime(const QuietTime& value) { SetQuietTime(value); return *this;}

    /**
     * <p>The default quiet time for the campaign. Quiet time is a specific time range
     * when a campaign doesn't send messages to endpoints, if all the following
     * conditions are met:</p> <ul><li><p>The EndpointDemographic.Timezone property of
     * the endpoint is set to a valid value.</p></li> <li><p>The current time in the
     * endpoint's time zone is later than or equal to the time specified by the
     * QuietTime.Start property for the campaign.</p></li> <li><p>The current time in
     * the endpoint's time zone is earlier than or equal to the time specified by the
     * QuietTime.End property for the campaign.</p></li></ul> <p>If any of the
     * preceding conditions isn't met, the endpoint will receive messages from the
     * campaign, even if quiet time is enabled.</p>
     */
    inline Schedule& WithQuietTime(QuietTime&& value) { SetQuietTime(std::move(value)); return *this;}


    /**
     * <p>The scheduled time, in ISO 8601 format, for the campaign to begin.</p>
     */
    inline const Aws::String& GetStartTime() const{ return m_startTime; }

    /**
     * <p>The scheduled time, in ISO 8601 format, for the campaign to begin.</p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p>The scheduled time, in ISO 8601 format, for the campaign to begin.</p>
     */
    inline void SetStartTime(const Aws::String& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>The scheduled time, in ISO 8601 format, for the campaign to begin.</p>
     */
    inline void SetStartTime(Aws::String&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p>The scheduled time, in ISO 8601 format, for the campaign to begin.</p>
     */
    inline void SetStartTime(const char* value) { m_startTimeHasBeenSet = true; m_startTime.assign(value); }

    /**
     * <p>The scheduled time, in ISO 8601 format, for the campaign to begin.</p>
     */
    inline Schedule& WithStartTime(const Aws::String& value) { SetStartTime(value); return *this;}

    /**
     * <p>The scheduled time, in ISO 8601 format, for the campaign to begin.</p>
     */
    inline Schedule& WithStartTime(Aws::String&& value) { SetStartTime(std::move(value)); return *this;}

    /**
     * <p>The scheduled time, in ISO 8601 format, for the campaign to begin.</p>
     */
    inline Schedule& WithStartTime(const char* value) { SetStartTime(value); return *this;}


    /**
     * <p>The starting UTC offset for the campaign schedule, if the value of the
     * IsLocalTime property is true. Valid values are: UTC, UTC+01, UTC+02, UTC+03,
     * UTC+03:30, UTC+04, UTC+04:30, UTC+05,
                  UTC+05:30, UTC+05:45,
     * UTC+06, UTC+06:30, UTC+07, UTC+08, UTC+09, UTC+09:30,
                  UTC+10,
     * UTC+10:30, UTC+11, UTC+12, UTC+13, UTC-02, UTC-03, UTC-04, UTC-05, UTC-06,
     
     *             UTC-07, UTC-08, UTC-09, UTC-10, and UTC-11.</p>
     */
    inline const Aws::String& GetTimezone() const{ return m_timezone; }

    /**
     * <p>The starting UTC offset for the campaign schedule, if the value of the
     * IsLocalTime property is true. Valid values are: UTC, UTC+01, UTC+02, UTC+03,
     * UTC+03:30, UTC+04, UTC+04:30, UTC+05,
                  UTC+05:30, UTC+05:45,
     * UTC+06, UTC+06:30, UTC+07, UTC+08, UTC+09, UTC+09:30,
                  UTC+10,
     * UTC+10:30, UTC+11, UTC+12, UTC+13, UTC-02, UTC-03, UTC-04, UTC-05, UTC-06,
     
     *             UTC-07, UTC-08, UTC-09, UTC-10, and UTC-11.</p>
     */
    inline bool TimezoneHasBeenSet() const { return m_timezoneHasBeenSet; }

    /**
     * <p>The starting UTC offset for the campaign schedule, if the value of the
     * IsLocalTime property is true. Valid values are: UTC, UTC+01, UTC+02, UTC+03,
     * UTC+03:30, UTC+04, UTC+04:30, UTC+05,
                  UTC+05:30, UTC+05:45,
     * UTC+06, UTC+06:30, UTC+07, UTC+08, UTC+09, UTC+09:30,
                  UTC+10,
     * UTC+10:30, UTC+11, UTC+12, UTC+13, UTC-02, UTC-03, UTC-04, UTC-05, UTC-06,
     
     *             UTC-07, UTC-08, UTC-09, UTC-10, and UTC-11.</p>
     */
    inline void SetTimezone(const Aws::String& value) { m_timezoneHasBeenSet = true; m_timezone = value; }

    /**
     * <p>The starting UTC offset for the campaign schedule, if the value of the
     * IsLocalTime property is true. Valid values are: UTC, UTC+01, UTC+02, UTC+03,
     * UTC+03:30, UTC+04, UTC+04:30, UTC+05,
                  UTC+05:30, UTC+05:45,
     * UTC+06, UTC+06:30, UTC+07, UTC+08, UTC+09, UTC+09:30,
                  UTC+10,
     * UTC+10:30, UTC+11, UTC+12, UTC+13, UTC-02, UTC-03, UTC-04, UTC-05, UTC-06,
     
     *             UTC-07, UTC-08, UTC-09, UTC-10, and UTC-11.</p>
     */
    inline void SetTimezone(Aws::String&& value) { m_timezoneHasBeenSet = true; m_timezone = std::move(value); }

    /**
     * <p>The starting UTC offset for the campaign schedule, if the value of the
     * IsLocalTime property is true. Valid values are: UTC, UTC+01, UTC+02, UTC+03,
     * UTC+03:30, UTC+04, UTC+04:30, UTC+05,
                  UTC+05:30, UTC+05:45,
     * UTC+06, UTC+06:30, UTC+07, UTC+08, UTC+09, UTC+09:30,
                  UTC+10,
     * UTC+10:30, UTC+11, UTC+12, UTC+13, UTC-02, UTC-03, UTC-04, UTC-05, UTC-06,
     
     *             UTC-07, UTC-08, UTC-09, UTC-10, and UTC-11.</p>
     */
    inline void SetTimezone(const char* value) { m_timezoneHasBeenSet = true; m_timezone.assign(value); }

    /**
     * <p>The starting UTC offset for the campaign schedule, if the value of the
     * IsLocalTime property is true. Valid values are: UTC, UTC+01, UTC+02, UTC+03,
     * UTC+03:30, UTC+04, UTC+04:30, UTC+05,
                  UTC+05:30, UTC+05:45,
     * UTC+06, UTC+06:30, UTC+07, UTC+08, UTC+09, UTC+09:30,
                  UTC+10,
     * UTC+10:30, UTC+11, UTC+12, UTC+13, UTC-02, UTC-03, UTC-04, UTC-05, UTC-06,
     
     *             UTC-07, UTC-08, UTC-09, UTC-10, and UTC-11.</p>
     */
    inline Schedule& WithTimezone(const Aws::String& value) { SetTimezone(value); return *this;}

    /**
     * <p>The starting UTC offset for the campaign schedule, if the value of the
     * IsLocalTime property is true. Valid values are: UTC, UTC+01, UTC+02, UTC+03,
     * UTC+03:30, UTC+04, UTC+04:30, UTC+05,
                  UTC+05:30, UTC+05:45,
     * UTC+06, UTC+06:30, UTC+07, UTC+08, UTC+09, UTC+09:30,
                  UTC+10,
     * UTC+10:30, UTC+11, UTC+12, UTC+13, UTC-02, UTC-03, UTC-04, UTC-05, UTC-06,
     
     *             UTC-07, UTC-08, UTC-09, UTC-10, and UTC-11.</p>
     */
    inline Schedule& WithTimezone(Aws::String&& value) { SetTimezone(std::move(value)); return *this;}

    /**
     * <p>The starting UTC offset for the campaign schedule, if the value of the
     * IsLocalTime property is true. Valid values are: UTC, UTC+01, UTC+02, UTC+03,
     * UTC+03:30, UTC+04, UTC+04:30, UTC+05,
                  UTC+05:30, UTC+05:45,
     * UTC+06, UTC+06:30, UTC+07, UTC+08, UTC+09, UTC+09:30,
                  UTC+10,
     * UTC+10:30, UTC+11, UTC+12, UTC+13, UTC-02, UTC-03, UTC-04, UTC-05, UTC-06,
     
     *             UTC-07, UTC-08, UTC-09, UTC-10, and UTC-11.</p>
     */
    inline Schedule& WithTimezone(const char* value) { SetTimezone(value); return *this;}

  private:

    Aws::String m_endTime;
    bool m_endTimeHasBeenSet;

    CampaignEventFilter m_eventFilter;
    bool m_eventFilterHasBeenSet;

    Frequency m_frequency;
    bool m_frequencyHasBeenSet;

    bool m_isLocalTime;
    bool m_isLocalTimeHasBeenSet;

    QuietTime m_quietTime;
    bool m_quietTimeHasBeenSet;

    Aws::String m_startTime;
    bool m_startTimeHasBeenSet;

    Aws::String m_timezone;
    bool m_timezoneHasBeenSet;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
