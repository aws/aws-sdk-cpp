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
    Schedule(const Aws::Utils::Json::JsonValue& jsonValue);
    Schedule& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The scheduled time that the campaign ends in ISO 8601 format.
     */
    inline const Aws::String& GetEndTime() const{ return m_endTime; }

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
     * How often the campaign delivers messages.

Valid values: ONCE, HOURLY, DAILY,
     * WEEKLY, MONTHLY
     */
    inline const Frequency& GetFrequency() const{ return m_frequency; }

    /**
     * How often the campaign delivers messages.

Valid values: ONCE, HOURLY, DAILY,
     * WEEKLY, MONTHLY
     */
    inline void SetFrequency(const Frequency& value) { m_frequencyHasBeenSet = true; m_frequency = value; }

    /**
     * How often the campaign delivers messages.

Valid values: ONCE, HOURLY, DAILY,
     * WEEKLY, MONTHLY
     */
    inline void SetFrequency(Frequency&& value) { m_frequencyHasBeenSet = true; m_frequency = std::move(value); }

    /**
     * How often the campaign delivers messages.

Valid values: ONCE, HOURLY, DAILY,
     * WEEKLY, MONTHLY
     */
    inline Schedule& WithFrequency(const Frequency& value) { SetFrequency(value); return *this;}

    /**
     * How often the campaign delivers messages.

Valid values: ONCE, HOURLY, DAILY,
     * WEEKLY, MONTHLY
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
    inline void SetIsLocalTime(bool value) { m_isLocalTimeHasBeenSet = true; m_isLocalTime = value; }

    /**
     * Indicates whether the campaign schedule takes effect according to each user's
     * local time.
     */
    inline Schedule& WithIsLocalTime(bool value) { SetIsLocalTime(value); return *this;}


    /**
     * The time during which the campaign sends no messages.
     */
    inline const QuietTime& GetQuietTime() const{ return m_quietTime; }

    /**
     * The time during which the campaign sends no messages.
     */
    inline void SetQuietTime(const QuietTime& value) { m_quietTimeHasBeenSet = true; m_quietTime = value; }

    /**
     * The time during which the campaign sends no messages.
     */
    inline void SetQuietTime(QuietTime&& value) { m_quietTimeHasBeenSet = true; m_quietTime = std::move(value); }

    /**
     * The time during which the campaign sends no messages.
     */
    inline Schedule& WithQuietTime(const QuietTime& value) { SetQuietTime(value); return *this;}

    /**
     * The time during which the campaign sends no messages.
     */
    inline Schedule& WithQuietTime(QuietTime&& value) { SetQuietTime(std::move(value)); return *this;}


    /**
     * The scheduled time that the campaign begins in ISO 8601 format.
     */
    inline const Aws::String& GetStartTime() const{ return m_startTime; }

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
