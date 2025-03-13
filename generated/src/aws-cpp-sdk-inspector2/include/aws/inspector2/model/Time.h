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
    AWS_INSPECTOR2_API Time() = default;
    AWS_INSPECTOR2_API Time(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Time& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The time of day in 24-hour format (00:00).</p>
     */
    inline const Aws::String& GetTimeOfDay() const { return m_timeOfDay; }
    inline bool TimeOfDayHasBeenSet() const { return m_timeOfDayHasBeenSet; }
    template<typename TimeOfDayT = Aws::String>
    void SetTimeOfDay(TimeOfDayT&& value) { m_timeOfDayHasBeenSet = true; m_timeOfDay = std::forward<TimeOfDayT>(value); }
    template<typename TimeOfDayT = Aws::String>
    Time& WithTimeOfDay(TimeOfDayT&& value) { SetTimeOfDay(std::forward<TimeOfDayT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timezone.</p>
     */
    inline const Aws::String& GetTimezone() const { return m_timezone; }
    inline bool TimezoneHasBeenSet() const { return m_timezoneHasBeenSet; }
    template<typename TimezoneT = Aws::String>
    void SetTimezone(TimezoneT&& value) { m_timezoneHasBeenSet = true; m_timezone = std::forward<TimezoneT>(value); }
    template<typename TimezoneT = Aws::String>
    Time& WithTimezone(TimezoneT&& value) { SetTimezone(std::forward<TimezoneT>(value)); return *this;}
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
