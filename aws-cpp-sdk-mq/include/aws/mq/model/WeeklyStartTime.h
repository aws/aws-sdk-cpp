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
#include <aws/mq/MQ_EXPORTS.h>
#include <aws/mq/model/DayOfWeek.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace MQ
{
namespace Model
{

  /**
   * The scheduled time period relative to UTC during which Amazon MQ begins to apply
   * pending updates or patches to the broker.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mq-2017-11-27/WeeklyStartTime">AWS
   * API Reference</a></p>
   */
  class AWS_MQ_API WeeklyStartTime
  {
  public:
    WeeklyStartTime();
    WeeklyStartTime(Aws::Utils::Json::JsonView jsonValue);
    WeeklyStartTime& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Required. The day of the week.
     */
    inline const DayOfWeek& GetDayOfWeek() const{ return m_dayOfWeek; }

    /**
     * Required. The day of the week.
     */
    inline bool DayOfWeekHasBeenSet() const { return m_dayOfWeekHasBeenSet; }

    /**
     * Required. The day of the week.
     */
    inline void SetDayOfWeek(const DayOfWeek& value) { m_dayOfWeekHasBeenSet = true; m_dayOfWeek = value; }

    /**
     * Required. The day of the week.
     */
    inline void SetDayOfWeek(DayOfWeek&& value) { m_dayOfWeekHasBeenSet = true; m_dayOfWeek = std::move(value); }

    /**
     * Required. The day of the week.
     */
    inline WeeklyStartTime& WithDayOfWeek(const DayOfWeek& value) { SetDayOfWeek(value); return *this;}

    /**
     * Required. The day of the week.
     */
    inline WeeklyStartTime& WithDayOfWeek(DayOfWeek&& value) { SetDayOfWeek(std::move(value)); return *this;}


    /**
     * Required. The time, in 24-hour format.
     */
    inline const Aws::String& GetTimeOfDay() const{ return m_timeOfDay; }

    /**
     * Required. The time, in 24-hour format.
     */
    inline bool TimeOfDayHasBeenSet() const { return m_timeOfDayHasBeenSet; }

    /**
     * Required. The time, in 24-hour format.
     */
    inline void SetTimeOfDay(const Aws::String& value) { m_timeOfDayHasBeenSet = true; m_timeOfDay = value; }

    /**
     * Required. The time, in 24-hour format.
     */
    inline void SetTimeOfDay(Aws::String&& value) { m_timeOfDayHasBeenSet = true; m_timeOfDay = std::move(value); }

    /**
     * Required. The time, in 24-hour format.
     */
    inline void SetTimeOfDay(const char* value) { m_timeOfDayHasBeenSet = true; m_timeOfDay.assign(value); }

    /**
     * Required. The time, in 24-hour format.
     */
    inline WeeklyStartTime& WithTimeOfDay(const Aws::String& value) { SetTimeOfDay(value); return *this;}

    /**
     * Required. The time, in 24-hour format.
     */
    inline WeeklyStartTime& WithTimeOfDay(Aws::String&& value) { SetTimeOfDay(std::move(value)); return *this;}

    /**
     * Required. The time, in 24-hour format.
     */
    inline WeeklyStartTime& WithTimeOfDay(const char* value) { SetTimeOfDay(value); return *this;}


    /**
     * The time zone, UTC by default, in either the Country/City format, or the UTC
     * offset format.
     */
    inline const Aws::String& GetTimeZone() const{ return m_timeZone; }

    /**
     * The time zone, UTC by default, in either the Country/City format, or the UTC
     * offset format.
     */
    inline bool TimeZoneHasBeenSet() const { return m_timeZoneHasBeenSet; }

    /**
     * The time zone, UTC by default, in either the Country/City format, or the UTC
     * offset format.
     */
    inline void SetTimeZone(const Aws::String& value) { m_timeZoneHasBeenSet = true; m_timeZone = value; }

    /**
     * The time zone, UTC by default, in either the Country/City format, or the UTC
     * offset format.
     */
    inline void SetTimeZone(Aws::String&& value) { m_timeZoneHasBeenSet = true; m_timeZone = std::move(value); }

    /**
     * The time zone, UTC by default, in either the Country/City format, or the UTC
     * offset format.
     */
    inline void SetTimeZone(const char* value) { m_timeZoneHasBeenSet = true; m_timeZone.assign(value); }

    /**
     * The time zone, UTC by default, in either the Country/City format, or the UTC
     * offset format.
     */
    inline WeeklyStartTime& WithTimeZone(const Aws::String& value) { SetTimeZone(value); return *this;}

    /**
     * The time zone, UTC by default, in either the Country/City format, or the UTC
     * offset format.
     */
    inline WeeklyStartTime& WithTimeZone(Aws::String&& value) { SetTimeZone(std::move(value)); return *this;}

    /**
     * The time zone, UTC by default, in either the Country/City format, or the UTC
     * offset format.
     */
    inline WeeklyStartTime& WithTimeZone(const char* value) { SetTimeZone(value); return *this;}

  private:

    DayOfWeek m_dayOfWeek;
    bool m_dayOfWeekHasBeenSet;

    Aws::String m_timeOfDay;
    bool m_timeOfDayHasBeenSet;

    Aws::String m_timeZone;
    bool m_timeZoneHasBeenSet;
  };

} // namespace Model
} // namespace MQ
} // namespace Aws
