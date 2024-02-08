/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/inspector2/model/Day.h>
#include <aws/inspector2/model/Time.h>
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
   * <p>A monthly schedule.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/MonthlySchedule">AWS
   * API Reference</a></p>
   */
  class MonthlySchedule
  {
  public:
    AWS_INSPECTOR2_API MonthlySchedule();
    AWS_INSPECTOR2_API MonthlySchedule(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API MonthlySchedule& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The monthly schedule's day.</p>
     */
    inline const Day& GetDay() const{ return m_day; }

    /**
     * <p>The monthly schedule's day.</p>
     */
    inline bool DayHasBeenSet() const { return m_dayHasBeenSet; }

    /**
     * <p>The monthly schedule's day.</p>
     */
    inline void SetDay(const Day& value) { m_dayHasBeenSet = true; m_day = value; }

    /**
     * <p>The monthly schedule's day.</p>
     */
    inline void SetDay(Day&& value) { m_dayHasBeenSet = true; m_day = std::move(value); }

    /**
     * <p>The monthly schedule's day.</p>
     */
    inline MonthlySchedule& WithDay(const Day& value) { SetDay(value); return *this;}

    /**
     * <p>The monthly schedule's day.</p>
     */
    inline MonthlySchedule& WithDay(Day&& value) { SetDay(std::move(value)); return *this;}


    /**
     * <p>The monthly schedule's start time.</p>
     */
    inline const Time& GetStartTime() const{ return m_startTime; }

    /**
     * <p>The monthly schedule's start time.</p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p>The monthly schedule's start time.</p>
     */
    inline void SetStartTime(const Time& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>The monthly schedule's start time.</p>
     */
    inline void SetStartTime(Time&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p>The monthly schedule's start time.</p>
     */
    inline MonthlySchedule& WithStartTime(const Time& value) { SetStartTime(value); return *this;}

    /**
     * <p>The monthly schedule's start time.</p>
     */
    inline MonthlySchedule& WithStartTime(Time&& value) { SetStartTime(std::move(value)); return *this;}

  private:

    Day m_day;
    bool m_dayHasBeenSet = false;

    Time m_startTime;
    bool m_startTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
