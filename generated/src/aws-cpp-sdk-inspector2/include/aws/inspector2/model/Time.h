/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
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
namespace Inspector2
{
namespace Model
{

  /**
   * <p>The time.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/Time">AWS API
   * Reference</a></p>
   */
  class Time
  {
  public:
    AWS_INSPECTOR2_API Time();
    AWS_INSPECTOR2_API Time(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Time& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The time of day in 24-hour format (00:00).</p>
     */
    inline const Aws::String& GetTimeOfDay() const{ return m_timeOfDay; }
    inline bool TimeOfDayHasBeenSet() const { return m_timeOfDayHasBeenSet; }
    inline void SetTimeOfDay(const Aws::String& value) { m_timeOfDayHasBeenSet = true; m_timeOfDay = value; }
    inline void SetTimeOfDay(Aws::String&& value) { m_timeOfDayHasBeenSet = true; m_timeOfDay = std::move(value); }
    inline void SetTimeOfDay(const char* value) { m_timeOfDayHasBeenSet = true; m_timeOfDay.assign(value); }
    inline Time& WithTimeOfDay(const Aws::String& value) { SetTimeOfDay(value); return *this;}
    inline Time& WithTimeOfDay(Aws::String&& value) { SetTimeOfDay(std::move(value)); return *this;}
    inline Time& WithTimeOfDay(const char* value) { SetTimeOfDay(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timezone.</p>
     */
    inline const Aws::String& GetTimezone() const{ return m_timezone; }
    inline bool TimezoneHasBeenSet() const { return m_timezoneHasBeenSet; }
    inline void SetTimezone(const Aws::String& value) { m_timezoneHasBeenSet = true; m_timezone = value; }
    inline void SetTimezone(Aws::String&& value) { m_timezoneHasBeenSet = true; m_timezone = std::move(value); }
    inline void SetTimezone(const char* value) { m_timezoneHasBeenSet = true; m_timezone.assign(value); }
    inline Time& WithTimezone(const Aws::String& value) { SetTimezone(value); return *this;}
    inline Time& WithTimezone(Aws::String&& value) { SetTimezone(std::move(value)); return *this;}
    inline Time& WithTimezone(const char* value) { SetTimezone(value); return *this;}
    ///@}
  private:

    Aws::String m_timeOfDay;
    bool m_timeOfDayHasBeenSet = false;

    Aws::String m_timezone;
    bool m_timezoneHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
