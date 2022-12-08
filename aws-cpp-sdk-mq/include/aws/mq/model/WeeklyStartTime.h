/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * <p>The scheduled time period relative to UTC during which Amazon MQ begins to
   * apply pending updates or patches to the broker.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mq-2017-11-27/WeeklyStartTime">AWS
   * API Reference</a></p>
   */
  class WeeklyStartTime
  {
  public:
    AWS_MQ_API WeeklyStartTime();
    AWS_MQ_API WeeklyStartTime(Aws::Utils::Json::JsonView jsonValue);
    AWS_MQ_API WeeklyStartTime& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MQ_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Required. The day of the week.</p>
     */
    inline const DayOfWeek& GetDayOfWeek() const{ return m_dayOfWeek; }

    /**
     * <p>Required. The day of the week.</p>
     */
    inline bool DayOfWeekHasBeenSet() const { return m_dayOfWeekHasBeenSet; }

    /**
     * <p>Required. The day of the week.</p>
     */
    inline void SetDayOfWeek(const DayOfWeek& value) { m_dayOfWeekHasBeenSet = true; m_dayOfWeek = value; }

    /**
     * <p>Required. The day of the week.</p>
     */
    inline void SetDayOfWeek(DayOfWeek&& value) { m_dayOfWeekHasBeenSet = true; m_dayOfWeek = std::move(value); }

    /**
     * <p>Required. The day of the week.</p>
     */
    inline WeeklyStartTime& WithDayOfWeek(const DayOfWeek& value) { SetDayOfWeek(value); return *this;}

    /**
     * <p>Required. The day of the week.</p>
     */
    inline WeeklyStartTime& WithDayOfWeek(DayOfWeek&& value) { SetDayOfWeek(std::move(value)); return *this;}


    /**
     * <p>Required. The time, in 24-hour format.</p>
     */
    inline const Aws::String& GetTimeOfDay() const{ return m_timeOfDay; }

    /**
     * <p>Required. The time, in 24-hour format.</p>
     */
    inline bool TimeOfDayHasBeenSet() const { return m_timeOfDayHasBeenSet; }

    /**
     * <p>Required. The time, in 24-hour format.</p>
     */
    inline void SetTimeOfDay(const Aws::String& value) { m_timeOfDayHasBeenSet = true; m_timeOfDay = value; }

    /**
     * <p>Required. The time, in 24-hour format.</p>
     */
    inline void SetTimeOfDay(Aws::String&& value) { m_timeOfDayHasBeenSet = true; m_timeOfDay = std::move(value); }

    /**
     * <p>Required. The time, in 24-hour format.</p>
     */
    inline void SetTimeOfDay(const char* value) { m_timeOfDayHasBeenSet = true; m_timeOfDay.assign(value); }

    /**
     * <p>Required. The time, in 24-hour format.</p>
     */
    inline WeeklyStartTime& WithTimeOfDay(const Aws::String& value) { SetTimeOfDay(value); return *this;}

    /**
     * <p>Required. The time, in 24-hour format.</p>
     */
    inline WeeklyStartTime& WithTimeOfDay(Aws::String&& value) { SetTimeOfDay(std::move(value)); return *this;}

    /**
     * <p>Required. The time, in 24-hour format.</p>
     */
    inline WeeklyStartTime& WithTimeOfDay(const char* value) { SetTimeOfDay(value); return *this;}


    /**
     * <p>The time zone, UTC by default, in either the Country/City format, or the UTC
     * offset format.</p>
     */
    inline const Aws::String& GetTimeZone() const{ return m_timeZone; }

    /**
     * <p>The time zone, UTC by default, in either the Country/City format, or the UTC
     * offset format.</p>
     */
    inline bool TimeZoneHasBeenSet() const { return m_timeZoneHasBeenSet; }

    /**
     * <p>The time zone, UTC by default, in either the Country/City format, or the UTC
     * offset format.</p>
     */
    inline void SetTimeZone(const Aws::String& value) { m_timeZoneHasBeenSet = true; m_timeZone = value; }

    /**
     * <p>The time zone, UTC by default, in either the Country/City format, or the UTC
     * offset format.</p>
     */
    inline void SetTimeZone(Aws::String&& value) { m_timeZoneHasBeenSet = true; m_timeZone = std::move(value); }

    /**
     * <p>The time zone, UTC by default, in either the Country/City format, or the UTC
     * offset format.</p>
     */
    inline void SetTimeZone(const char* value) { m_timeZoneHasBeenSet = true; m_timeZone.assign(value); }

    /**
     * <p>The time zone, UTC by default, in either the Country/City format, or the UTC
     * offset format.</p>
     */
    inline WeeklyStartTime& WithTimeZone(const Aws::String& value) { SetTimeZone(value); return *this;}

    /**
     * <p>The time zone, UTC by default, in either the Country/City format, or the UTC
     * offset format.</p>
     */
    inline WeeklyStartTime& WithTimeZone(Aws::String&& value) { SetTimeZone(std::move(value)); return *this;}

    /**
     * <p>The time zone, UTC by default, in either the Country/City format, or the UTC
     * offset format.</p>
     */
    inline WeeklyStartTime& WithTimeZone(const char* value) { SetTimeZone(value); return *this;}

  private:

    DayOfWeek m_dayOfWeek;
    bool m_dayOfWeekHasBeenSet = false;

    Aws::String m_timeOfDay;
    bool m_timeOfDayHasBeenSet = false;

    Aws::String m_timeZone;
    bool m_timeZoneHasBeenSet = false;
  };

} // namespace Model
} // namespace MQ
} // namespace Aws
