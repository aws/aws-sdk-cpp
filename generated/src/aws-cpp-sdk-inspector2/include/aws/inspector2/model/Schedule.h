/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/inspector2/model/DailySchedule.h>
#include <aws/inspector2/model/MonthlySchedule.h>
#include <aws/inspector2/model/OneTimeSchedule.h>
#include <aws/inspector2/model/WeeklySchedule.h>
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
   * <p>A schedule.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/Schedule">AWS
   * API Reference</a></p>
   */
  class Schedule
  {
  public:
    AWS_INSPECTOR2_API Schedule();
    AWS_INSPECTOR2_API Schedule(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Schedule& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The schedule's daily.</p>
     */
    inline const DailySchedule& GetDaily() const{ return m_daily; }

    /**
     * <p>The schedule's daily.</p>
     */
    inline bool DailyHasBeenSet() const { return m_dailyHasBeenSet; }

    /**
     * <p>The schedule's daily.</p>
     */
    inline void SetDaily(const DailySchedule& value) { m_dailyHasBeenSet = true; m_daily = value; }

    /**
     * <p>The schedule's daily.</p>
     */
    inline void SetDaily(DailySchedule&& value) { m_dailyHasBeenSet = true; m_daily = std::move(value); }

    /**
     * <p>The schedule's daily.</p>
     */
    inline Schedule& WithDaily(const DailySchedule& value) { SetDaily(value); return *this;}

    /**
     * <p>The schedule's daily.</p>
     */
    inline Schedule& WithDaily(DailySchedule&& value) { SetDaily(std::move(value)); return *this;}


    /**
     * <p>The schedule's monthly.</p>
     */
    inline const MonthlySchedule& GetMonthly() const{ return m_monthly; }

    /**
     * <p>The schedule's monthly.</p>
     */
    inline bool MonthlyHasBeenSet() const { return m_monthlyHasBeenSet; }

    /**
     * <p>The schedule's monthly.</p>
     */
    inline void SetMonthly(const MonthlySchedule& value) { m_monthlyHasBeenSet = true; m_monthly = value; }

    /**
     * <p>The schedule's monthly.</p>
     */
    inline void SetMonthly(MonthlySchedule&& value) { m_monthlyHasBeenSet = true; m_monthly = std::move(value); }

    /**
     * <p>The schedule's monthly.</p>
     */
    inline Schedule& WithMonthly(const MonthlySchedule& value) { SetMonthly(value); return *this;}

    /**
     * <p>The schedule's monthly.</p>
     */
    inline Schedule& WithMonthly(MonthlySchedule&& value) { SetMonthly(std::move(value)); return *this;}


    /**
     * <p>The schedule's one time.</p>
     */
    inline const OneTimeSchedule& GetOneTime() const{ return m_oneTime; }

    /**
     * <p>The schedule's one time.</p>
     */
    inline bool OneTimeHasBeenSet() const { return m_oneTimeHasBeenSet; }

    /**
     * <p>The schedule's one time.</p>
     */
    inline void SetOneTime(const OneTimeSchedule& value) { m_oneTimeHasBeenSet = true; m_oneTime = value; }

    /**
     * <p>The schedule's one time.</p>
     */
    inline void SetOneTime(OneTimeSchedule&& value) { m_oneTimeHasBeenSet = true; m_oneTime = std::move(value); }

    /**
     * <p>The schedule's one time.</p>
     */
    inline Schedule& WithOneTime(const OneTimeSchedule& value) { SetOneTime(value); return *this;}

    /**
     * <p>The schedule's one time.</p>
     */
    inline Schedule& WithOneTime(OneTimeSchedule&& value) { SetOneTime(std::move(value)); return *this;}


    /**
     * <p>The schedule's weekly.</p>
     */
    inline const WeeklySchedule& GetWeekly() const{ return m_weekly; }

    /**
     * <p>The schedule's weekly.</p>
     */
    inline bool WeeklyHasBeenSet() const { return m_weeklyHasBeenSet; }

    /**
     * <p>The schedule's weekly.</p>
     */
    inline void SetWeekly(const WeeklySchedule& value) { m_weeklyHasBeenSet = true; m_weekly = value; }

    /**
     * <p>The schedule's weekly.</p>
     */
    inline void SetWeekly(WeeklySchedule&& value) { m_weeklyHasBeenSet = true; m_weekly = std::move(value); }

    /**
     * <p>The schedule's weekly.</p>
     */
    inline Schedule& WithWeekly(const WeeklySchedule& value) { SetWeekly(value); return *this;}

    /**
     * <p>The schedule's weekly.</p>
     */
    inline Schedule& WithWeekly(WeeklySchedule&& value) { SetWeekly(std::move(value)); return *this;}

  private:

    DailySchedule m_daily;
    bool m_dailyHasBeenSet = false;

    MonthlySchedule m_monthly;
    bool m_monthlyHasBeenSet = false;

    OneTimeSchedule m_oneTime;
    bool m_oneTimeHasBeenSet = false;

    WeeklySchedule m_weekly;
    bool m_weeklyHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
