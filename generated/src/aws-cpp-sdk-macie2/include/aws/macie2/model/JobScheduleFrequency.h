/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/macie2/model/DailySchedule.h>
#include <aws/macie2/model/MonthlySchedule.h>
#include <aws/macie2/model/WeeklySchedule.h>
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
namespace Macie2
{
namespace Model
{

  /**
   * <p>Specifies the recurrence pattern for running a classification
   * job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/JobScheduleFrequency">AWS
   * API Reference</a></p>
   */
  class JobScheduleFrequency
  {
  public:
    AWS_MACIE2_API JobScheduleFrequency();
    AWS_MACIE2_API JobScheduleFrequency(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API JobScheduleFrequency& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies a daily recurrence pattern for running the job.</p>
     */
    inline const DailySchedule& GetDailySchedule() const{ return m_dailySchedule; }

    /**
     * <p>Specifies a daily recurrence pattern for running the job.</p>
     */
    inline bool DailyScheduleHasBeenSet() const { return m_dailyScheduleHasBeenSet; }

    /**
     * <p>Specifies a daily recurrence pattern for running the job.</p>
     */
    inline void SetDailySchedule(const DailySchedule& value) { m_dailyScheduleHasBeenSet = true; m_dailySchedule = value; }

    /**
     * <p>Specifies a daily recurrence pattern for running the job.</p>
     */
    inline void SetDailySchedule(DailySchedule&& value) { m_dailyScheduleHasBeenSet = true; m_dailySchedule = std::move(value); }

    /**
     * <p>Specifies a daily recurrence pattern for running the job.</p>
     */
    inline JobScheduleFrequency& WithDailySchedule(const DailySchedule& value) { SetDailySchedule(value); return *this;}

    /**
     * <p>Specifies a daily recurrence pattern for running the job.</p>
     */
    inline JobScheduleFrequency& WithDailySchedule(DailySchedule&& value) { SetDailySchedule(std::move(value)); return *this;}


    /**
     * <p>Specifies a monthly recurrence pattern for running the job.</p>
     */
    inline const MonthlySchedule& GetMonthlySchedule() const{ return m_monthlySchedule; }

    /**
     * <p>Specifies a monthly recurrence pattern for running the job.</p>
     */
    inline bool MonthlyScheduleHasBeenSet() const { return m_monthlyScheduleHasBeenSet; }

    /**
     * <p>Specifies a monthly recurrence pattern for running the job.</p>
     */
    inline void SetMonthlySchedule(const MonthlySchedule& value) { m_monthlyScheduleHasBeenSet = true; m_monthlySchedule = value; }

    /**
     * <p>Specifies a monthly recurrence pattern for running the job.</p>
     */
    inline void SetMonthlySchedule(MonthlySchedule&& value) { m_monthlyScheduleHasBeenSet = true; m_monthlySchedule = std::move(value); }

    /**
     * <p>Specifies a monthly recurrence pattern for running the job.</p>
     */
    inline JobScheduleFrequency& WithMonthlySchedule(const MonthlySchedule& value) { SetMonthlySchedule(value); return *this;}

    /**
     * <p>Specifies a monthly recurrence pattern for running the job.</p>
     */
    inline JobScheduleFrequency& WithMonthlySchedule(MonthlySchedule&& value) { SetMonthlySchedule(std::move(value)); return *this;}


    /**
     * <p>Specifies a weekly recurrence pattern for running the job.</p>
     */
    inline const WeeklySchedule& GetWeeklySchedule() const{ return m_weeklySchedule; }

    /**
     * <p>Specifies a weekly recurrence pattern for running the job.</p>
     */
    inline bool WeeklyScheduleHasBeenSet() const { return m_weeklyScheduleHasBeenSet; }

    /**
     * <p>Specifies a weekly recurrence pattern for running the job.</p>
     */
    inline void SetWeeklySchedule(const WeeklySchedule& value) { m_weeklyScheduleHasBeenSet = true; m_weeklySchedule = value; }

    /**
     * <p>Specifies a weekly recurrence pattern for running the job.</p>
     */
    inline void SetWeeklySchedule(WeeklySchedule&& value) { m_weeklyScheduleHasBeenSet = true; m_weeklySchedule = std::move(value); }

    /**
     * <p>Specifies a weekly recurrence pattern for running the job.</p>
     */
    inline JobScheduleFrequency& WithWeeklySchedule(const WeeklySchedule& value) { SetWeeklySchedule(value); return *this;}

    /**
     * <p>Specifies a weekly recurrence pattern for running the job.</p>
     */
    inline JobScheduleFrequency& WithWeeklySchedule(WeeklySchedule&& value) { SetWeeklySchedule(std::move(value)); return *this;}

  private:

    DailySchedule m_dailySchedule;
    bool m_dailyScheduleHasBeenSet = false;

    MonthlySchedule m_monthlySchedule;
    bool m_monthlyScheduleHasBeenSet = false;

    WeeklySchedule m_weeklySchedule;
    bool m_weeklyScheduleHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
