/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/IntervalPeriod.h>
#include <aws/core/utils/DateTime.h>
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
namespace Connect
{
namespace Model
{

  /**
   * <p>The interval period with the start and end time for the
   * metrics.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/MetricInterval">AWS
   * API Reference</a></p>
   */
  class MetricInterval
  {
  public:
    AWS_CONNECT_API MetricInterval();
    AWS_CONNECT_API MetricInterval(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API MetricInterval& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The interval period provided in the API request. </p>
     */
    inline const IntervalPeriod& GetInterval() const{ return m_interval; }

    /**
     * <p>The interval period provided in the API request. </p>
     */
    inline bool IntervalHasBeenSet() const { return m_intervalHasBeenSet; }

    /**
     * <p>The interval period provided in the API request. </p>
     */
    inline void SetInterval(const IntervalPeriod& value) { m_intervalHasBeenSet = true; m_interval = value; }

    /**
     * <p>The interval period provided in the API request. </p>
     */
    inline void SetInterval(IntervalPeriod&& value) { m_intervalHasBeenSet = true; m_interval = std::move(value); }

    /**
     * <p>The interval period provided in the API request. </p>
     */
    inline MetricInterval& WithInterval(const IntervalPeriod& value) { SetInterval(value); return *this;}

    /**
     * <p>The interval period provided in the API request. </p>
     */
    inline MetricInterval& WithInterval(IntervalPeriod&& value) { SetInterval(std::move(value)); return *this;}


    /**
     * <p>The timestamp, in UNIX Epoch time format. Start time is based on the interval
     * period selected. </p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>The timestamp, in UNIX Epoch time format. Start time is based on the interval
     * period selected. </p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p>The timestamp, in UNIX Epoch time format. Start time is based on the interval
     * period selected. </p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>The timestamp, in UNIX Epoch time format. Start time is based on the interval
     * period selected. </p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p>The timestamp, in UNIX Epoch time format. Start time is based on the interval
     * period selected. </p>
     */
    inline MetricInterval& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>The timestamp, in UNIX Epoch time format. Start time is based on the interval
     * period selected. </p>
     */
    inline MetricInterval& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


    /**
     * <p>The timestamp, in UNIX Epoch time format. End time is based on the interval
     * period selected. For example, If <code>IntervalPeriod</code> is selected
     * <code>THIRTY_MIN</code>, <code>StartTime</code> and <code>EndTime</code> in the
     * API request differs by 1 day, then 48 results are returned in the response. Each
     * result is aggregated by the 30 minutes period, with each <code>StartTime</code>
     * and <code>EndTime</code> differing by 30 minutes. </p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }

    /**
     * <p>The timestamp, in UNIX Epoch time format. End time is based on the interval
     * period selected. For example, If <code>IntervalPeriod</code> is selected
     * <code>THIRTY_MIN</code>, <code>StartTime</code> and <code>EndTime</code> in the
     * API request differs by 1 day, then 48 results are returned in the response. Each
     * result is aggregated by the 30 minutes period, with each <code>StartTime</code>
     * and <code>EndTime</code> differing by 30 minutes. </p>
     */
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }

    /**
     * <p>The timestamp, in UNIX Epoch time format. End time is based on the interval
     * period selected. For example, If <code>IntervalPeriod</code> is selected
     * <code>THIRTY_MIN</code>, <code>StartTime</code> and <code>EndTime</code> in the
     * API request differs by 1 day, then 48 results are returned in the response. Each
     * result is aggregated by the 30 minutes period, with each <code>StartTime</code>
     * and <code>EndTime</code> differing by 30 minutes. </p>
     */
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * <p>The timestamp, in UNIX Epoch time format. End time is based on the interval
     * period selected. For example, If <code>IntervalPeriod</code> is selected
     * <code>THIRTY_MIN</code>, <code>StartTime</code> and <code>EndTime</code> in the
     * API request differs by 1 day, then 48 results are returned in the response. Each
     * result is aggregated by the 30 minutes period, with each <code>StartTime</code>
     * and <code>EndTime</code> differing by 30 minutes. </p>
     */
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }

    /**
     * <p>The timestamp, in UNIX Epoch time format. End time is based on the interval
     * period selected. For example, If <code>IntervalPeriod</code> is selected
     * <code>THIRTY_MIN</code>, <code>StartTime</code> and <code>EndTime</code> in the
     * API request differs by 1 day, then 48 results are returned in the response. Each
     * result is aggregated by the 30 minutes period, with each <code>StartTime</code>
     * and <code>EndTime</code> differing by 30 minutes. </p>
     */
    inline MetricInterval& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}

    /**
     * <p>The timestamp, in UNIX Epoch time format. End time is based on the interval
     * period selected. For example, If <code>IntervalPeriod</code> is selected
     * <code>THIRTY_MIN</code>, <code>StartTime</code> and <code>EndTime</code> in the
     * API request differs by 1 day, then 48 results are returned in the response. Each
     * result is aggregated by the 30 minutes period, with each <code>StartTime</code>
     * and <code>EndTime</code> differing by 30 minutes. </p>
     */
    inline MetricInterval& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}

  private:

    IntervalPeriod m_interval;
    bool m_intervalHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
