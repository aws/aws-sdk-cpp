/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/inspector2/model/Time.h>
#include <aws/inspector2/model/Day.h>
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
   * <p>A weekly schedule.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/WeeklySchedule">AWS
   * API Reference</a></p>
   */
  class WeeklySchedule
  {
  public:
    AWS_INSPECTOR2_API WeeklySchedule();
    AWS_INSPECTOR2_API WeeklySchedule(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API WeeklySchedule& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The weekly schedule's days.</p>
     */
    inline const Aws::Vector<Day>& GetDays() const{ return m_days; }

    /**
     * <p>The weekly schedule's days.</p>
     */
    inline bool DaysHasBeenSet() const { return m_daysHasBeenSet; }

    /**
     * <p>The weekly schedule's days.</p>
     */
    inline void SetDays(const Aws::Vector<Day>& value) { m_daysHasBeenSet = true; m_days = value; }

    /**
     * <p>The weekly schedule's days.</p>
     */
    inline void SetDays(Aws::Vector<Day>&& value) { m_daysHasBeenSet = true; m_days = std::move(value); }

    /**
     * <p>The weekly schedule's days.</p>
     */
    inline WeeklySchedule& WithDays(const Aws::Vector<Day>& value) { SetDays(value); return *this;}

    /**
     * <p>The weekly schedule's days.</p>
     */
    inline WeeklySchedule& WithDays(Aws::Vector<Day>&& value) { SetDays(std::move(value)); return *this;}

    /**
     * <p>The weekly schedule's days.</p>
     */
    inline WeeklySchedule& AddDays(const Day& value) { m_daysHasBeenSet = true; m_days.push_back(value); return *this; }

    /**
     * <p>The weekly schedule's days.</p>
     */
    inline WeeklySchedule& AddDays(Day&& value) { m_daysHasBeenSet = true; m_days.push_back(std::move(value)); return *this; }


    /**
     * <p>The weekly schedule's start time.</p>
     */
    inline const Time& GetStartTime() const{ return m_startTime; }

    /**
     * <p>The weekly schedule's start time.</p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p>The weekly schedule's start time.</p>
     */
    inline void SetStartTime(const Time& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>The weekly schedule's start time.</p>
     */
    inline void SetStartTime(Time&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p>The weekly schedule's start time.</p>
     */
    inline WeeklySchedule& WithStartTime(const Time& value) { SetStartTime(value); return *this;}

    /**
     * <p>The weekly schedule's start time.</p>
     */
    inline WeeklySchedule& WithStartTime(Time&& value) { SetStartTime(std::move(value)); return *this;}

  private:

    Aws::Vector<Day> m_days;
    bool m_daysHasBeenSet = false;

    Time m_startTime;
    bool m_startTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
