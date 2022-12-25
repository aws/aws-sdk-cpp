/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/forecast/ForecastService_EXPORTS.h>
#include <aws/forecast/model/Month.h>
#include <aws/forecast/model/DayOfWeek.h>
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
namespace ForecastService
{
namespace Model
{

  /**
   * <p>The time boundary Forecast uses to align and aggregate your data to match
   * your forecast frequency. Provide the unit of time and the time boundary as a key
   * value pair. If you don't provide a time boundary, Forecast uses a set of <a
   * href="https://docs.aws.amazon.com/forecast/latest/dg/data-aggregation.html#default-time-boundaries">Default
   * Time Boundaries</a>. </p> <p>For more information about aggregation, see <a
   * href="https://docs.aws.amazon.com/forecast/latest/dg/data-aggregation.html">Data
   * Aggregation for Different Forecast Frequencies</a>. For more information setting
   * a custom time boundary, see <a
   * href="https://docs.aws.amazon.com/forecast/latest/dg/data-aggregation.html#specifying-time-boundary">Specifying
   * a Time Boundary</a>. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/TimeAlignmentBoundary">AWS
   * API Reference</a></p>
   */
  class TimeAlignmentBoundary
  {
  public:
    AWS_FORECASTSERVICE_API TimeAlignmentBoundary();
    AWS_FORECASTSERVICE_API TimeAlignmentBoundary(Aws::Utils::Json::JsonView jsonValue);
    AWS_FORECASTSERVICE_API TimeAlignmentBoundary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FORECASTSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The month to use for time alignment during aggregation. The month must be in
     * uppercase.</p>
     */
    inline const Month& GetMonth() const{ return m_month; }

    /**
     * <p>The month to use for time alignment during aggregation. The month must be in
     * uppercase.</p>
     */
    inline bool MonthHasBeenSet() const { return m_monthHasBeenSet; }

    /**
     * <p>The month to use for time alignment during aggregation. The month must be in
     * uppercase.</p>
     */
    inline void SetMonth(const Month& value) { m_monthHasBeenSet = true; m_month = value; }

    /**
     * <p>The month to use for time alignment during aggregation. The month must be in
     * uppercase.</p>
     */
    inline void SetMonth(Month&& value) { m_monthHasBeenSet = true; m_month = std::move(value); }

    /**
     * <p>The month to use for time alignment during aggregation. The month must be in
     * uppercase.</p>
     */
    inline TimeAlignmentBoundary& WithMonth(const Month& value) { SetMonth(value); return *this;}

    /**
     * <p>The month to use for time alignment during aggregation. The month must be in
     * uppercase.</p>
     */
    inline TimeAlignmentBoundary& WithMonth(Month&& value) { SetMonth(std::move(value)); return *this;}


    /**
     * <p>The day of the month to use for time alignment during aggregation.</p>
     */
    inline int GetDayOfMonth() const{ return m_dayOfMonth; }

    /**
     * <p>The day of the month to use for time alignment during aggregation.</p>
     */
    inline bool DayOfMonthHasBeenSet() const { return m_dayOfMonthHasBeenSet; }

    /**
     * <p>The day of the month to use for time alignment during aggregation.</p>
     */
    inline void SetDayOfMonth(int value) { m_dayOfMonthHasBeenSet = true; m_dayOfMonth = value; }

    /**
     * <p>The day of the month to use for time alignment during aggregation.</p>
     */
    inline TimeAlignmentBoundary& WithDayOfMonth(int value) { SetDayOfMonth(value); return *this;}


    /**
     * <p>The day of week to use for time alignment during aggregation. The day must be
     * in uppercase.</p>
     */
    inline const DayOfWeek& GetDayOfWeek() const{ return m_dayOfWeek; }

    /**
     * <p>The day of week to use for time alignment during aggregation. The day must be
     * in uppercase.</p>
     */
    inline bool DayOfWeekHasBeenSet() const { return m_dayOfWeekHasBeenSet; }

    /**
     * <p>The day of week to use for time alignment during aggregation. The day must be
     * in uppercase.</p>
     */
    inline void SetDayOfWeek(const DayOfWeek& value) { m_dayOfWeekHasBeenSet = true; m_dayOfWeek = value; }

    /**
     * <p>The day of week to use for time alignment during aggregation. The day must be
     * in uppercase.</p>
     */
    inline void SetDayOfWeek(DayOfWeek&& value) { m_dayOfWeekHasBeenSet = true; m_dayOfWeek = std::move(value); }

    /**
     * <p>The day of week to use for time alignment during aggregation. The day must be
     * in uppercase.</p>
     */
    inline TimeAlignmentBoundary& WithDayOfWeek(const DayOfWeek& value) { SetDayOfWeek(value); return *this;}

    /**
     * <p>The day of week to use for time alignment during aggregation. The day must be
     * in uppercase.</p>
     */
    inline TimeAlignmentBoundary& WithDayOfWeek(DayOfWeek&& value) { SetDayOfWeek(std::move(value)); return *this;}


    /**
     * <p>The hour of day to use for time alignment during aggregation.</p>
     */
    inline int GetHour() const{ return m_hour; }

    /**
     * <p>The hour of day to use for time alignment during aggregation.</p>
     */
    inline bool HourHasBeenSet() const { return m_hourHasBeenSet; }

    /**
     * <p>The hour of day to use for time alignment during aggregation.</p>
     */
    inline void SetHour(int value) { m_hourHasBeenSet = true; m_hour = value; }

    /**
     * <p>The hour of day to use for time alignment during aggregation.</p>
     */
    inline TimeAlignmentBoundary& WithHour(int value) { SetHour(value); return *this;}

  private:

    Month m_month;
    bool m_monthHasBeenSet = false;

    int m_dayOfMonth;
    bool m_dayOfMonthHasBeenSet = false;

    DayOfWeek m_dayOfWeek;
    bool m_dayOfWeekHasBeenSet = false;

    int m_hour;
    bool m_hourHasBeenSet = false;
  };

} // namespace Model
} // namespace ForecastService
} // namespace Aws
