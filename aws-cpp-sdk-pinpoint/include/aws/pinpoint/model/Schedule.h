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
   * Shcedule that defines when a campaign is run.<p><h3>See Also:</h3>   <a
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
     * The scheduled time that the campaign ends in ISO 8601 format.
     */
    inline const Aws::String& GetEndTime() const{ return m_endTime; }

    /**
     * The scheduled time that the campaign ends in ISO 8601 format.
     */
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }

    /**
     * The scheduled time that the campaign ends in ISO 8601 format.
     */
    inline void SetEndTime(const Aws::String& value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * The scheduled time that the campaign ends in ISO 8601 format.
     */
    inline void SetEndTime(Aws::String&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }

    /**
     * The scheduled time that the campaign ends in ISO 8601 format.
     */
    inline void SetEndTime(const char* value) { m_endTimeHasBeenSet = true; m_endTime.assign(value); }

    /**
     * The scheduled time that the campaign ends in ISO 8601 format.
     */
    inline Schedule& WithEndTime(const Aws::String& value) { SetEndTime(value); return *this;}

    /**
     * The scheduled time that the campaign ends in ISO 8601 format.
     */
    inline Schedule& WithEndTime(Aws::String&& value) { SetEndTime(std::move(value)); return *this;}

    /**
     * The scheduled time that the campaign ends in ISO 8601 format.
     */
    inline Schedule& WithEndTime(const char* value) { SetEndTime(value); return *this;}


    /**
     * Defines the type of events that can trigger the campaign. Used when the
     * Frequency is set to EVENT.
     */
    inline const CampaignEventFilter& GetEventFilter() const{ return m_eventFilter; }

    /**
     * Defines the type of events that can trigger the campaign. Used when the
     * Frequency is set to EVENT.
     */
    inline bool EventFilterHasBeenSet() const { return m_eventFilterHasBeenSet; }

    /**
     * Defines the type of events that can trigger the campaign. Used when the
     * Frequency is set to EVENT.
     */
    inline void SetEventFilter(const CampaignEventFilter& value) { m_eventFilterHasBeenSet = true; m_eventFilter = value; }

    /**
     * Defines the type of events that can trigger the campaign. Used when the
     * Frequency is set to EVENT.
     */
    inline void SetEventFilter(CampaignEventFilter&& value) { m_eventFilterHasBeenSet = true; m_eventFilter = std::move(value); }

    /**
     * Defines the type of events that can trigger the campaign. Used when the
     * Frequency is set to EVENT.
     */
    inline Schedule& WithEventFilter(const CampaignEventFilter& value) { SetEventFilter(value); return *this;}

    /**
     * Defines the type of events that can trigger the campaign. Used when the
     * Frequency is set to EVENT.
     */
    inline Schedule& WithEventFilter(CampaignEventFilter&& value) { SetEventFilter(std::move(value)); return *this;}


    /**
     * How often the campaign delivers messages.

Valid
     * values:

ONCE

HOURLY

DAILY

WEEKLY

MONTHLY

EVENT
     */
    inline const Frequency& GetFrequency() const{ return m_frequency; }

    /**
     * How often the campaign delivers messages.

Valid
     * values:

ONCE

HOURLY

DAILY

WEEKLY

MONTHLY

EVENT
     */
    inline bool FrequencyHasBeenSet() const { return m_frequencyHasBeenSet; }

    /**
     * How often the campaign delivers messages.

Valid
     * values:

ONCE

HOURLY

DAILY

WEEKLY

MONTHLY

EVENT
     */
    inline void SetFrequency(const Frequency& value) { m_frequencyHasBeenSet = true; m_frequency = value; }

    /**
     * How often the campaign delivers messages.

Valid
     * values:

ONCE

HOURLY

DAILY

WEEKLY

MONTHLY

EVENT
     */
    inline void SetFrequency(Frequency&& value) { m_frequencyHasBeenSet = true; m_frequency = std::move(value); }

    /**
     * How often the campaign delivers messages.

Valid
     * values:

ONCE

HOURLY

DAILY

WEEKLY

MONTHLY

EVENT
     */
    inline Schedule& WithFrequency(const Frequency& value) { SetFrequency(value); return *this;}

    /**
     * How often the campaign delivers messages.

Valid
     * values:

ONCE

HOURLY

DAILY

WEEKLY

MONTHLY

EVENT
     */
    inline Schedule& WithFrequency(Frequency&& value) { SetFrequency(std::move(value)); return *this;}


    /**
     * Indicates whether the campaign schedule takes effect according to each user's
     * local time.
     */
    inline bool GetIsLocalTime() const{ return m_isLocalTime; }

    /**
     * Indicates whether the campaign schedule takes effect according to each user's
     * local time.
     */
    inline bool IsLocalTimeHasBeenSet() const { return m_isLocalTimeHasBeenSet; }

    /**
     * Indicates whether the campaign schedule takes effect according to each user's
     * local time.
     */
    inline void SetIsLocalTime(bool value) { m_isLocalTimeHasBeenSet = true; m_isLocalTime = value; }

    /**
     * Indicates whether the campaign schedule takes effect according to each user's
     * local time.
     */
    inline Schedule& WithIsLocalTime(bool value) { SetIsLocalTime(value); return *this;}


    /**
     * The default quiet time for the campaign. The campaign doesn't send messages to
     * endpoints during the quiet time.

Note: Make sure that your endpoints include
     * the Demographics.Timezone attribute if you plan to enable a quiet time for your
     * campaign. If your endpoints don't include this attribute, they'll receive the
     * messages that you send them, even if quiet time is enabled.

When you set up a
     * campaign to use quiet time, the campaign doesn't send messages during the time
     * range you specified, as long as all of the following are true:
- The endpoint
     * includes a valid Demographic.Timezone attribute.
- The current time in the
     * endpoint's time zone is later than or equal to the time specified in the
     * QuietTime.Start attribute for the campaign.
- The current time in the endpoint's
     * time zone is earlier than or equal to the time specified in the QuietTime.End
     * attribute for the campaign.
     */
    inline const QuietTime& GetQuietTime() const{ return m_quietTime; }

    /**
     * The default quiet time for the campaign. The campaign doesn't send messages to
     * endpoints during the quiet time.

Note: Make sure that your endpoints include
     * the Demographics.Timezone attribute if you plan to enable a quiet time for your
     * campaign. If your endpoints don't include this attribute, they'll receive the
     * messages that you send them, even if quiet time is enabled.

When you set up a
     * campaign to use quiet time, the campaign doesn't send messages during the time
     * range you specified, as long as all of the following are true:
- The endpoint
     * includes a valid Demographic.Timezone attribute.
- The current time in the
     * endpoint's time zone is later than or equal to the time specified in the
     * QuietTime.Start attribute for the campaign.
- The current time in the endpoint's
     * time zone is earlier than or equal to the time specified in the QuietTime.End
     * attribute for the campaign.
     */
    inline bool QuietTimeHasBeenSet() const { return m_quietTimeHasBeenSet; }

    /**
     * The default quiet time for the campaign. The campaign doesn't send messages to
     * endpoints during the quiet time.

Note: Make sure that your endpoints include
     * the Demographics.Timezone attribute if you plan to enable a quiet time for your
     * campaign. If your endpoints don't include this attribute, they'll receive the
     * messages that you send them, even if quiet time is enabled.

When you set up a
     * campaign to use quiet time, the campaign doesn't send messages during the time
     * range you specified, as long as all of the following are true:
- The endpoint
     * includes a valid Demographic.Timezone attribute.
- The current time in the
     * endpoint's time zone is later than or equal to the time specified in the
     * QuietTime.Start attribute for the campaign.
- The current time in the endpoint's
     * time zone is earlier than or equal to the time specified in the QuietTime.End
     * attribute for the campaign.
     */
    inline void SetQuietTime(const QuietTime& value) { m_quietTimeHasBeenSet = true; m_quietTime = value; }

    /**
     * The default quiet time for the campaign. The campaign doesn't send messages to
     * endpoints during the quiet time.

Note: Make sure that your endpoints include
     * the Demographics.Timezone attribute if you plan to enable a quiet time for your
     * campaign. If your endpoints don't include this attribute, they'll receive the
     * messages that you send them, even if quiet time is enabled.

When you set up a
     * campaign to use quiet time, the campaign doesn't send messages during the time
     * range you specified, as long as all of the following are true:
- The endpoint
     * includes a valid Demographic.Timezone attribute.
- The current time in the
     * endpoint's time zone is later than or equal to the time specified in the
     * QuietTime.Start attribute for the campaign.
- The current time in the endpoint's
     * time zone is earlier than or equal to the time specified in the QuietTime.End
     * attribute for the campaign.
     */
    inline void SetQuietTime(QuietTime&& value) { m_quietTimeHasBeenSet = true; m_quietTime = std::move(value); }

    /**
     * The default quiet time for the campaign. The campaign doesn't send messages to
     * endpoints during the quiet time.

Note: Make sure that your endpoints include
     * the Demographics.Timezone attribute if you plan to enable a quiet time for your
     * campaign. If your endpoints don't include this attribute, they'll receive the
     * messages that you send them, even if quiet time is enabled.

When you set up a
     * campaign to use quiet time, the campaign doesn't send messages during the time
     * range you specified, as long as all of the following are true:
- The endpoint
     * includes a valid Demographic.Timezone attribute.
- The current time in the
     * endpoint's time zone is later than or equal to the time specified in the
     * QuietTime.Start attribute for the campaign.
- The current time in the endpoint's
     * time zone is earlier than or equal to the time specified in the QuietTime.End
     * attribute for the campaign.
     */
    inline Schedule& WithQuietTime(const QuietTime& value) { SetQuietTime(value); return *this;}

    /**
     * The default quiet time for the campaign. The campaign doesn't send messages to
     * endpoints during the quiet time.

Note: Make sure that your endpoints include
     * the Demographics.Timezone attribute if you plan to enable a quiet time for your
     * campaign. If your endpoints don't include this attribute, they'll receive the
     * messages that you send them, even if quiet time is enabled.

When you set up a
     * campaign to use quiet time, the campaign doesn't send messages during the time
     * range you specified, as long as all of the following are true:
- The endpoint
     * includes a valid Demographic.Timezone attribute.
- The current time in the
     * endpoint's time zone is later than or equal to the time specified in the
     * QuietTime.Start attribute for the campaign.
- The current time in the endpoint's
     * time zone is earlier than or equal to the time specified in the QuietTime.End
     * attribute for the campaign.
     */
    inline Schedule& WithQuietTime(QuietTime&& value) { SetQuietTime(std::move(value)); return *this;}


    /**
     * The scheduled time that the campaign begins in ISO 8601 format.
     */
    inline const Aws::String& GetStartTime() const{ return m_startTime; }

    /**
     * The scheduled time that the campaign begins in ISO 8601 format.
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * The scheduled time that the campaign begins in ISO 8601 format.
     */
    inline void SetStartTime(const Aws::String& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * The scheduled time that the campaign begins in ISO 8601 format.
     */
    inline void SetStartTime(Aws::String&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * The scheduled time that the campaign begins in ISO 8601 format.
     */
    inline void SetStartTime(const char* value) { m_startTimeHasBeenSet = true; m_startTime.assign(value); }

    /**
     * The scheduled time that the campaign begins in ISO 8601 format.
     */
    inline Schedule& WithStartTime(const Aws::String& value) { SetStartTime(value); return *this;}

    /**
     * The scheduled time that the campaign begins in ISO 8601 format.
     */
    inline Schedule& WithStartTime(Aws::String&& value) { SetStartTime(std::move(value)); return *this;}

    /**
     * The scheduled time that the campaign begins in ISO 8601 format.
     */
    inline Schedule& WithStartTime(const char* value) { SetStartTime(value); return *this;}


    /**
     * The starting UTC offset for the schedule if the value for isLocalTime is
     * true

Valid values:
     * 
UTC
UTC+01
UTC+02
UTC+03
UTC+03:30
UTC+04
UTC+04:30
UTC+05
UTC+05:30
UTC+05:45
UTC+06
UTC+06:30
UTC+07
UTC+08
UTC+09
UTC+09:30
UTC+10
UTC+10:30
UTC+11
UTC+12
UTC+13
UTC-02
UTC-03
UTC-04
UTC-05
UTC-06
UTC-07
UTC-08
UTC-09
UTC-10
UTC-11
     */
    inline const Aws::String& GetTimezone() const{ return m_timezone; }

    /**
     * The starting UTC offset for the schedule if the value for isLocalTime is
     * true

Valid values:
     * 
UTC
UTC+01
UTC+02
UTC+03
UTC+03:30
UTC+04
UTC+04:30
UTC+05
UTC+05:30
UTC+05:45
UTC+06
UTC+06:30
UTC+07
UTC+08
UTC+09
UTC+09:30
UTC+10
UTC+10:30
UTC+11
UTC+12
UTC+13
UTC-02
UTC-03
UTC-04
UTC-05
UTC-06
UTC-07
UTC-08
UTC-09
UTC-10
UTC-11
     */
    inline bool TimezoneHasBeenSet() const { return m_timezoneHasBeenSet; }

    /**
     * The starting UTC offset for the schedule if the value for isLocalTime is
     * true

Valid values:
     * 
UTC
UTC+01
UTC+02
UTC+03
UTC+03:30
UTC+04
UTC+04:30
UTC+05
UTC+05:30
UTC+05:45
UTC+06
UTC+06:30
UTC+07
UTC+08
UTC+09
UTC+09:30
UTC+10
UTC+10:30
UTC+11
UTC+12
UTC+13
UTC-02
UTC-03
UTC-04
UTC-05
UTC-06
UTC-07
UTC-08
UTC-09
UTC-10
UTC-11
     */
    inline void SetTimezone(const Aws::String& value) { m_timezoneHasBeenSet = true; m_timezone = value; }

    /**
     * The starting UTC offset for the schedule if the value for isLocalTime is
     * true

Valid values:
     * 
UTC
UTC+01
UTC+02
UTC+03
UTC+03:30
UTC+04
UTC+04:30
UTC+05
UTC+05:30
UTC+05:45
UTC+06
UTC+06:30
UTC+07
UTC+08
UTC+09
UTC+09:30
UTC+10
UTC+10:30
UTC+11
UTC+12
UTC+13
UTC-02
UTC-03
UTC-04
UTC-05
UTC-06
UTC-07
UTC-08
UTC-09
UTC-10
UTC-11
     */
    inline void SetTimezone(Aws::String&& value) { m_timezoneHasBeenSet = true; m_timezone = std::move(value); }

    /**
     * The starting UTC offset for the schedule if the value for isLocalTime is
     * true

Valid values:
     * 
UTC
UTC+01
UTC+02
UTC+03
UTC+03:30
UTC+04
UTC+04:30
UTC+05
UTC+05:30
UTC+05:45
UTC+06
UTC+06:30
UTC+07
UTC+08
UTC+09
UTC+09:30
UTC+10
UTC+10:30
UTC+11
UTC+12
UTC+13
UTC-02
UTC-03
UTC-04
UTC-05
UTC-06
UTC-07
UTC-08
UTC-09
UTC-10
UTC-11
     */
    inline void SetTimezone(const char* value) { m_timezoneHasBeenSet = true; m_timezone.assign(value); }

    /**
     * The starting UTC offset for the schedule if the value for isLocalTime is
     * true

Valid values:
     * 
UTC
UTC+01
UTC+02
UTC+03
UTC+03:30
UTC+04
UTC+04:30
UTC+05
UTC+05:30
UTC+05:45
UTC+06
UTC+06:30
UTC+07
UTC+08
UTC+09
UTC+09:30
UTC+10
UTC+10:30
UTC+11
UTC+12
UTC+13
UTC-02
UTC-03
UTC-04
UTC-05
UTC-06
UTC-07
UTC-08
UTC-09
UTC-10
UTC-11
     */
    inline Schedule& WithTimezone(const Aws::String& value) { SetTimezone(value); return *this;}

    /**
     * The starting UTC offset for the schedule if the value for isLocalTime is
     * true

Valid values:
     * 
UTC
UTC+01
UTC+02
UTC+03
UTC+03:30
UTC+04
UTC+04:30
UTC+05
UTC+05:30
UTC+05:45
UTC+06
UTC+06:30
UTC+07
UTC+08
UTC+09
UTC+09:30
UTC+10
UTC+10:30
UTC+11
UTC+12
UTC+13
UTC-02
UTC-03
UTC-04
UTC-05
UTC-06
UTC-07
UTC-08
UTC-09
UTC-10
UTC-11
     */
    inline Schedule& WithTimezone(Aws::String&& value) { SetTimezone(std::move(value)); return *this;}

    /**
     * The starting UTC offset for the schedule if the value for isLocalTime is
     * true

Valid values:
     * 
UTC
UTC+01
UTC+02
UTC+03
UTC+03:30
UTC+04
UTC+04:30
UTC+05
UTC+05:30
UTC+05:45
UTC+06
UTC+06:30
UTC+07
UTC+08
UTC+09
UTC+09:30
UTC+10
UTC+10:30
UTC+11
UTC+12
UTC+13
UTC-02
UTC-03
UTC-04
UTC-05
UTC-06
UTC-07
UTC-08
UTC-09
UTC-10
UTC-11
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
