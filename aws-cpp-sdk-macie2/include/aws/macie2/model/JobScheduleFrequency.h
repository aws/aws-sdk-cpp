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
  class AWS_MACIE2_API JobScheduleFrequency
  {
  public:
    JobScheduleFrequency();
    JobScheduleFrequency(Aws::Utils::Json::JsonView jsonValue);
    JobScheduleFrequency& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Run the job once a day, every day. If specified, this is an empty object.</p>
     */
    inline const DailySchedule& GetDailySchedule() const{ return m_dailySchedule; }

    /**
     * <p>Run the job once a day, every day. If specified, this is an empty object.</p>
     */
    inline bool DailyScheduleHasBeenSet() const { return m_dailyScheduleHasBeenSet; }

    /**
     * <p>Run the job once a day, every day. If specified, this is an empty object.</p>
     */
    inline void SetDailySchedule(const DailySchedule& value) { m_dailyScheduleHasBeenSet = true; m_dailySchedule = value; }

    /**
     * <p>Run the job once a day, every day. If specified, this is an empty object.</p>
     */
    inline void SetDailySchedule(DailySchedule&& value) { m_dailyScheduleHasBeenSet = true; m_dailySchedule = std::move(value); }

    /**
     * <p>Run the job once a day, every day. If specified, this is an empty object.</p>
     */
    inline JobScheduleFrequency& WithDailySchedule(const DailySchedule& value) { SetDailySchedule(value); return *this;}

    /**
     * <p>Run the job once a day, every day. If specified, this is an empty object.</p>
     */
    inline JobScheduleFrequency& WithDailySchedule(DailySchedule&& value) { SetDailySchedule(std::move(value)); return *this;}


    /**
     * <p>Run the job once a month, on a specific day of the month. This value can be
     * an integer from 1 through 30.</p>
     */
    inline const MonthlySchedule& GetMonthlySchedule() const{ return m_monthlySchedule; }

    /**
     * <p>Run the job once a month, on a specific day of the month. This value can be
     * an integer from 1 through 30.</p>
     */
    inline bool MonthlyScheduleHasBeenSet() const { return m_monthlyScheduleHasBeenSet; }

    /**
     * <p>Run the job once a month, on a specific day of the month. This value can be
     * an integer from 1 through 30.</p>
     */
    inline void SetMonthlySchedule(const MonthlySchedule& value) { m_monthlyScheduleHasBeenSet = true; m_monthlySchedule = value; }

    /**
     * <p>Run the job once a month, on a specific day of the month. This value can be
     * an integer from 1 through 30.</p>
     */
    inline void SetMonthlySchedule(MonthlySchedule&& value) { m_monthlyScheduleHasBeenSet = true; m_monthlySchedule = std::move(value); }

    /**
     * <p>Run the job once a month, on a specific day of the month. This value can be
     * an integer from 1 through 30.</p>
     */
    inline JobScheduleFrequency& WithMonthlySchedule(const MonthlySchedule& value) { SetMonthlySchedule(value); return *this;}

    /**
     * <p>Run the job once a month, on a specific day of the month. This value can be
     * an integer from 1 through 30.</p>
     */
    inline JobScheduleFrequency& WithMonthlySchedule(MonthlySchedule&& value) { SetMonthlySchedule(std::move(value)); return *this;}


    /**
     * <p>Run the job once a week, on a specific day of the week. Valid values are:
     * MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY, and SUNDAY.</p>
     */
    inline const WeeklySchedule& GetWeeklySchedule() const{ return m_weeklySchedule; }

    /**
     * <p>Run the job once a week, on a specific day of the week. Valid values are:
     * MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY, and SUNDAY.</p>
     */
    inline bool WeeklyScheduleHasBeenSet() const { return m_weeklyScheduleHasBeenSet; }

    /**
     * <p>Run the job once a week, on a specific day of the week. Valid values are:
     * MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY, and SUNDAY.</p>
     */
    inline void SetWeeklySchedule(const WeeklySchedule& value) { m_weeklyScheduleHasBeenSet = true; m_weeklySchedule = value; }

    /**
     * <p>Run the job once a week, on a specific day of the week. Valid values are:
     * MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY, and SUNDAY.</p>
     */
    inline void SetWeeklySchedule(WeeklySchedule&& value) { m_weeklyScheduleHasBeenSet = true; m_weeklySchedule = std::move(value); }

    /**
     * <p>Run the job once a week, on a specific day of the week. Valid values are:
     * MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY, and SUNDAY.</p>
     */
    inline JobScheduleFrequency& WithWeeklySchedule(const WeeklySchedule& value) { SetWeeklySchedule(value); return *this;}

    /**
     * <p>Run the job once a week, on a specific day of the week. Valid values are:
     * MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY, and SUNDAY.</p>
     */
    inline JobScheduleFrequency& WithWeeklySchedule(WeeklySchedule&& value) { SetWeeklySchedule(std::move(value)); return *this;}

  private:

    DailySchedule m_dailySchedule;
    bool m_dailyScheduleHasBeenSet;

    MonthlySchedule m_monthlySchedule;
    bool m_monthlyScheduleHasBeenSet;

    WeeklySchedule m_weeklySchedule;
    bool m_weeklyScheduleHasBeenSet;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
