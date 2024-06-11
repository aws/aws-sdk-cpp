/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-signals/ApplicationSignals_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/application-signals/model/DurationUnit.h>
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
   * <p>If the interval for this service level objective is a calendar interval, this
   * structure contains the interval specifications.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/application-signals-2024-04-15/CalendarInterval">AWS
   * API Reference</a></p>
   */
  class CalendarInterval
  {
  public:
    AWS_APPLICATIONSIGNALS_API CalendarInterval();
    AWS_APPLICATIONSIGNALS_API CalendarInterval(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONSIGNALS_API CalendarInterval& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONSIGNALS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The date and time when you want the first interval to start. Be sure to
     * choose a time that configures the intervals the way that you want. For example,
     * if you want weekly intervals starting on Mondays at 6 a.m., be sure to specify a
     * start time that is a Monday at 6 a.m.</p> <p>When used in a raw HTTP Query API,
     * it is formatted as be epoch time in seconds. For example:
     * <code>1698778057</code> </p> <p>As soon as one calendar interval ends, another
     * automatically begins.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }
    inline CalendarInterval& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}
    inline CalendarInterval& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the calendar interval unit.</p>
     */
    inline const DurationUnit& GetDurationUnit() const{ return m_durationUnit; }
    inline bool DurationUnitHasBeenSet() const { return m_durationUnitHasBeenSet; }
    inline void SetDurationUnit(const DurationUnit& value) { m_durationUnitHasBeenSet = true; m_durationUnit = value; }
    inline void SetDurationUnit(DurationUnit&& value) { m_durationUnitHasBeenSet = true; m_durationUnit = std::move(value); }
    inline CalendarInterval& WithDurationUnit(const DurationUnit& value) { SetDurationUnit(value); return *this;}
    inline CalendarInterval& WithDurationUnit(DurationUnit&& value) { SetDurationUnit(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the duration of each calendar interval. For example, if
     * <code>Duration</code> is <code>1</code> and <code>DurationUnit</code> is
     * <code>MONTH</code>, each interval is one month, aligned with the calendar.</p>
     */
    inline int GetDuration() const{ return m_duration; }
    inline bool DurationHasBeenSet() const { return m_durationHasBeenSet; }
    inline void SetDuration(int value) { m_durationHasBeenSet = true; m_duration = value; }
    inline CalendarInterval& WithDuration(int value) { SetDuration(value); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    DurationUnit m_durationUnit;
    bool m_durationUnitHasBeenSet = false;

    int m_duration;
    bool m_durationHasBeenSet = false;
  };

} // namespace Model
} // namespace ApplicationSignals
} // namespace Aws
