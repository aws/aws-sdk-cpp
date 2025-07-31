/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/inspector2/model/OneTimeSchedule.h>
#include <aws/inspector2/model/DailySchedule.h>
#include <aws/inspector2/model/WeeklySchedule.h>
#include <aws/inspector2/model/MonthlySchedule.h>
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
    AWS_INSPECTOR2_API Schedule() = default;
    AWS_INSPECTOR2_API Schedule(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Schedule& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The schedule's one time.</p>
     */
    inline const OneTimeSchedule& GetOneTime() const { return m_oneTime; }
    inline bool OneTimeHasBeenSet() const { return m_oneTimeHasBeenSet; }
    template<typename OneTimeT = OneTimeSchedule>
    void SetOneTime(OneTimeT&& value) { m_oneTimeHasBeenSet = true; m_oneTime = std::forward<OneTimeT>(value); }
    template<typename OneTimeT = OneTimeSchedule>
    Schedule& WithOneTime(OneTimeT&& value) { SetOneTime(std::forward<OneTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The schedule's daily.</p>
     */
    inline const DailySchedule& GetDaily() const { return m_daily; }
    inline bool DailyHasBeenSet() const { return m_dailyHasBeenSet; }
    template<typename DailyT = DailySchedule>
    void SetDaily(DailyT&& value) { m_dailyHasBeenSet = true; m_daily = std::forward<DailyT>(value); }
    template<typename DailyT = DailySchedule>
    Schedule& WithDaily(DailyT&& value) { SetDaily(std::forward<DailyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The schedule's weekly.</p>
     */
    inline const WeeklySchedule& GetWeekly() const { return m_weekly; }
    inline bool WeeklyHasBeenSet() const { return m_weeklyHasBeenSet; }
    template<typename WeeklyT = WeeklySchedule>
    void SetWeekly(WeeklyT&& value) { m_weeklyHasBeenSet = true; m_weekly = std::forward<WeeklyT>(value); }
    template<typename WeeklyT = WeeklySchedule>
    Schedule& WithWeekly(WeeklyT&& value) { SetWeekly(std::forward<WeeklyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The schedule's monthly.</p>
     */
    inline const MonthlySchedule& GetMonthly() const { return m_monthly; }
    inline bool MonthlyHasBeenSet() const { return m_monthlyHasBeenSet; }
    template<typename MonthlyT = MonthlySchedule>
    void SetMonthly(MonthlyT&& value) { m_monthlyHasBeenSet = true; m_monthly = std::forward<MonthlyT>(value); }
    template<typename MonthlyT = MonthlySchedule>
    Schedule& WithMonthly(MonthlyT&& value) { SetMonthly(std::forward<MonthlyT>(value)); return *this;}
    ///@}
  private:

    OneTimeSchedule m_oneTime;
    bool m_oneTimeHasBeenSet = false;

    DailySchedule m_daily;
    bool m_dailyHasBeenSet = false;

    WeeklySchedule m_weekly;
    bool m_weeklyHasBeenSet = false;

    MonthlySchedule m_monthly;
    bool m_monthlyHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
