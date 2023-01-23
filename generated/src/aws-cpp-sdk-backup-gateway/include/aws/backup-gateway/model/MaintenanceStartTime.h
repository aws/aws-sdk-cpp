/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup-gateway/BackupGateway_EXPORTS.h>

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
namespace BackupGateway
{
namespace Model
{

  /**
   * <p>This is your gateway's weekly maintenance start time including the day and
   * time of the week. Note that values are in terms of the gateway's time zone. Can
   * be weekly or monthly.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/backup-gateway-2021-01-01/MaintenanceStartTime">AWS
   * API Reference</a></p>
   */
  class MaintenanceStartTime
  {
  public:
    AWS_BACKUPGATEWAY_API MaintenanceStartTime();
    AWS_BACKUPGATEWAY_API MaintenanceStartTime(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUPGATEWAY_API MaintenanceStartTime& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUPGATEWAY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The day of the month component of the maintenance start time represented as
     * an ordinal number from 1 to 28, where 1 represents the first day of the month
     * and 28 represents the last day of the month.</p>
     */
    inline int GetDayOfMonth() const{ return m_dayOfMonth; }

    /**
     * <p>The day of the month component of the maintenance start time represented as
     * an ordinal number from 1 to 28, where 1 represents the first day of the month
     * and 28 represents the last day of the month.</p>
     */
    inline bool DayOfMonthHasBeenSet() const { return m_dayOfMonthHasBeenSet; }

    /**
     * <p>The day of the month component of the maintenance start time represented as
     * an ordinal number from 1 to 28, where 1 represents the first day of the month
     * and 28 represents the last day of the month.</p>
     */
    inline void SetDayOfMonth(int value) { m_dayOfMonthHasBeenSet = true; m_dayOfMonth = value; }

    /**
     * <p>The day of the month component of the maintenance start time represented as
     * an ordinal number from 1 to 28, where 1 represents the first day of the month
     * and 28 represents the last day of the month.</p>
     */
    inline MaintenanceStartTime& WithDayOfMonth(int value) { SetDayOfMonth(value); return *this;}


    /**
     * <p>An ordinal number between 0 and 6 that represents the day of the week, where
     * 0 represents Sunday and 6 represents Saturday. The day of week is in the time
     * zone of the gateway.</p>
     */
    inline int GetDayOfWeek() const{ return m_dayOfWeek; }

    /**
     * <p>An ordinal number between 0 and 6 that represents the day of the week, where
     * 0 represents Sunday and 6 represents Saturday. The day of week is in the time
     * zone of the gateway.</p>
     */
    inline bool DayOfWeekHasBeenSet() const { return m_dayOfWeekHasBeenSet; }

    /**
     * <p>An ordinal number between 0 and 6 that represents the day of the week, where
     * 0 represents Sunday and 6 represents Saturday. The day of week is in the time
     * zone of the gateway.</p>
     */
    inline void SetDayOfWeek(int value) { m_dayOfWeekHasBeenSet = true; m_dayOfWeek = value; }

    /**
     * <p>An ordinal number between 0 and 6 that represents the day of the week, where
     * 0 represents Sunday and 6 represents Saturday. The day of week is in the time
     * zone of the gateway.</p>
     */
    inline MaintenanceStartTime& WithDayOfWeek(int value) { SetDayOfWeek(value); return *this;}


    /**
     * <p>The hour component of the maintenance start time represented as <i>hh</i>,
     * where <i>hh</i> is the hour (0 to 23). The hour of the day is in the time zone
     * of the gateway.</p>
     */
    inline int GetHourOfDay() const{ return m_hourOfDay; }

    /**
     * <p>The hour component of the maintenance start time represented as <i>hh</i>,
     * where <i>hh</i> is the hour (0 to 23). The hour of the day is in the time zone
     * of the gateway.</p>
     */
    inline bool HourOfDayHasBeenSet() const { return m_hourOfDayHasBeenSet; }

    /**
     * <p>The hour component of the maintenance start time represented as <i>hh</i>,
     * where <i>hh</i> is the hour (0 to 23). The hour of the day is in the time zone
     * of the gateway.</p>
     */
    inline void SetHourOfDay(int value) { m_hourOfDayHasBeenSet = true; m_hourOfDay = value; }

    /**
     * <p>The hour component of the maintenance start time represented as <i>hh</i>,
     * where <i>hh</i> is the hour (0 to 23). The hour of the day is in the time zone
     * of the gateway.</p>
     */
    inline MaintenanceStartTime& WithHourOfDay(int value) { SetHourOfDay(value); return *this;}


    /**
     * <p>The minute component of the maintenance start time represented as <i>mm</i>,
     * where <i>mm</i> is the minute (0 to 59). The minute of the hour is in the time
     * zone of the gateway.</p>
     */
    inline int GetMinuteOfHour() const{ return m_minuteOfHour; }

    /**
     * <p>The minute component of the maintenance start time represented as <i>mm</i>,
     * where <i>mm</i> is the minute (0 to 59). The minute of the hour is in the time
     * zone of the gateway.</p>
     */
    inline bool MinuteOfHourHasBeenSet() const { return m_minuteOfHourHasBeenSet; }

    /**
     * <p>The minute component of the maintenance start time represented as <i>mm</i>,
     * where <i>mm</i> is the minute (0 to 59). The minute of the hour is in the time
     * zone of the gateway.</p>
     */
    inline void SetMinuteOfHour(int value) { m_minuteOfHourHasBeenSet = true; m_minuteOfHour = value; }

    /**
     * <p>The minute component of the maintenance start time represented as <i>mm</i>,
     * where <i>mm</i> is the minute (0 to 59). The minute of the hour is in the time
     * zone of the gateway.</p>
     */
    inline MaintenanceStartTime& WithMinuteOfHour(int value) { SetMinuteOfHour(value); return *this;}

  private:

    int m_dayOfMonth;
    bool m_dayOfMonthHasBeenSet = false;

    int m_dayOfWeek;
    bool m_dayOfWeekHasBeenSet = false;

    int m_hourOfDay;
    bool m_hourOfDayHasBeenSet = false;

    int m_minuteOfHour;
    bool m_minuteOfHourHasBeenSet = false;
  };

} // namespace Model
} // namespace BackupGateway
} // namespace Aws
