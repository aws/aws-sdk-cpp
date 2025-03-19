/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-signals/ApplicationSignals_EXPORTS.h>
#include <aws/application-signals/model/RollingInterval.h>
#include <aws/application-signals/model/CalendarInterval.h>
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
namespace ApplicationSignals
{
namespace Model
{

  /**
   * <p>The time period used to evaluate the SLO. It can be either a calendar
   * interval or rolling interval.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/application-signals-2024-04-15/Interval">AWS
   * API Reference</a></p>
   */
  class Interval
  {
  public:
    AWS_APPLICATIONSIGNALS_API Interval() = default;
    AWS_APPLICATIONSIGNALS_API Interval(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONSIGNALS_API Interval& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONSIGNALS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>If the interval is a rolling interval, this structure contains the interval
     * specifications.</p>
     */
    inline const RollingInterval& GetRollingInterval() const { return m_rollingInterval; }
    inline bool RollingIntervalHasBeenSet() const { return m_rollingIntervalHasBeenSet; }
    template<typename RollingIntervalT = RollingInterval>
    void SetRollingInterval(RollingIntervalT&& value) { m_rollingIntervalHasBeenSet = true; m_rollingInterval = std::forward<RollingIntervalT>(value); }
    template<typename RollingIntervalT = RollingInterval>
    Interval& WithRollingInterval(RollingIntervalT&& value) { SetRollingInterval(std::forward<RollingIntervalT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the interval is a calendar interval, this structure contains the interval
     * specifications.</p>
     */
    inline const CalendarInterval& GetCalendarInterval() const { return m_calendarInterval; }
    inline bool CalendarIntervalHasBeenSet() const { return m_calendarIntervalHasBeenSet; }
    template<typename CalendarIntervalT = CalendarInterval>
    void SetCalendarInterval(CalendarIntervalT&& value) { m_calendarIntervalHasBeenSet = true; m_calendarInterval = std::forward<CalendarIntervalT>(value); }
    template<typename CalendarIntervalT = CalendarInterval>
    Interval& WithCalendarInterval(CalendarIntervalT&& value) { SetCalendarInterval(std::forward<CalendarIntervalT>(value)); return *this;}
    ///@}
  private:

    RollingInterval m_rollingInterval;
    bool m_rollingIntervalHasBeenSet = false;

    CalendarInterval m_calendarInterval;
    bool m_calendarIntervalHasBeenSet = false;
  };

} // namespace Model
} // namespace ApplicationSignals
} // namespace Aws
