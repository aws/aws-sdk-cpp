/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/IntervalPeriod.h>
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
   * <p>Information about the interval period to use for returning
   * results.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/IntervalDetails">AWS
   * API Reference</a></p>
   */
  class IntervalDetails
  {
  public:
    AWS_CONNECT_API IntervalDetails();
    AWS_CONNECT_API IntervalDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API IntervalDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The timezone applied to requested metrics.</p>
     */
    inline const Aws::String& GetTimeZone() const{ return m_timeZone; }

    /**
     * <p>The timezone applied to requested metrics.</p>
     */
    inline bool TimeZoneHasBeenSet() const { return m_timeZoneHasBeenSet; }

    /**
     * <p>The timezone applied to requested metrics.</p>
     */
    inline void SetTimeZone(const Aws::String& value) { m_timeZoneHasBeenSet = true; m_timeZone = value; }

    /**
     * <p>The timezone applied to requested metrics.</p>
     */
    inline void SetTimeZone(Aws::String&& value) { m_timeZoneHasBeenSet = true; m_timeZone = std::move(value); }

    /**
     * <p>The timezone applied to requested metrics.</p>
     */
    inline void SetTimeZone(const char* value) { m_timeZoneHasBeenSet = true; m_timeZone.assign(value); }

    /**
     * <p>The timezone applied to requested metrics.</p>
     */
    inline IntervalDetails& WithTimeZone(const Aws::String& value) { SetTimeZone(value); return *this;}

    /**
     * <p>The timezone applied to requested metrics.</p>
     */
    inline IntervalDetails& WithTimeZone(Aws::String&& value) { SetTimeZone(std::move(value)); return *this;}

    /**
     * <p>The timezone applied to requested metrics.</p>
     */
    inline IntervalDetails& WithTimeZone(const char* value) { SetTimeZone(value); return *this;}


    /**
     * <p> <code>IntervalPeriod</code>: An aggregated grouping applied to request
     * metrics. Valid <code>IntervalPeriod</code> values are: <code>FIFTEEN_MIN</code>
     * | <code>THIRTY_MIN</code> | <code>HOUR</code> | <code>DAY</code> |
     * <code>WEEK</code> | <code>TOTAL</code>. </p> <p>For example, if
     * <code>IntervalPeriod</code> is selected <code>THIRTY_MIN</code>,
     * <code>StartTime</code> and <code>EndTime</code> differs by 1 day, then Amazon
     * Connect returns 48 results in the response. Each result is aggregated by the
     * THIRTY_MIN period. By default Amazon Connect aggregates results based on the
     * <code>TOTAL</code> interval period. </p> <p>The following list describes
     * restrictions on <code>StartTime</code> and <code>EndTime</code> based on what
     * <code>IntervalPeriod</code> is requested. </p> <ul> <li> <p>
     * <code>FIFTEEN_MIN</code>: The difference between <code>StartTime</code> and
     * <code>EndTime</code> must be less than 3 days.</p> </li> <li> <p>
     * <code>THIRTY_MIN</code>: The difference between <code>StartTime</code> and
     * <code>EndTime</code> must be less than 3 days.</p> </li> <li> <p>
     * <code>HOUR</code>: The difference between <code>StartTime</code> and
     * <code>EndTime</code> must be less than 3 days.</p> </li> <li> <p>
     * <code>DAY</code>: The difference between <code>StartTime</code> and
     * <code>EndTime</code> must be less than 35 days.</p> </li> <li> <p>
     * <code>WEEK</code>: The difference between <code>StartTime</code> and
     * <code>EndTime</code> must be less than 35 days.</p> </li> <li> <p>
     * <code>TOTAL</code>: The difference between <code>StartTime</code> and
     * <code>EndTime</code> must be less than 35 days.</p> </li> </ul>
     */
    inline const IntervalPeriod& GetIntervalPeriod() const{ return m_intervalPeriod; }

    /**
     * <p> <code>IntervalPeriod</code>: An aggregated grouping applied to request
     * metrics. Valid <code>IntervalPeriod</code> values are: <code>FIFTEEN_MIN</code>
     * | <code>THIRTY_MIN</code> | <code>HOUR</code> | <code>DAY</code> |
     * <code>WEEK</code> | <code>TOTAL</code>. </p> <p>For example, if
     * <code>IntervalPeriod</code> is selected <code>THIRTY_MIN</code>,
     * <code>StartTime</code> and <code>EndTime</code> differs by 1 day, then Amazon
     * Connect returns 48 results in the response. Each result is aggregated by the
     * THIRTY_MIN period. By default Amazon Connect aggregates results based on the
     * <code>TOTAL</code> interval period. </p> <p>The following list describes
     * restrictions on <code>StartTime</code> and <code>EndTime</code> based on what
     * <code>IntervalPeriod</code> is requested. </p> <ul> <li> <p>
     * <code>FIFTEEN_MIN</code>: The difference between <code>StartTime</code> and
     * <code>EndTime</code> must be less than 3 days.</p> </li> <li> <p>
     * <code>THIRTY_MIN</code>: The difference between <code>StartTime</code> and
     * <code>EndTime</code> must be less than 3 days.</p> </li> <li> <p>
     * <code>HOUR</code>: The difference between <code>StartTime</code> and
     * <code>EndTime</code> must be less than 3 days.</p> </li> <li> <p>
     * <code>DAY</code>: The difference between <code>StartTime</code> and
     * <code>EndTime</code> must be less than 35 days.</p> </li> <li> <p>
     * <code>WEEK</code>: The difference between <code>StartTime</code> and
     * <code>EndTime</code> must be less than 35 days.</p> </li> <li> <p>
     * <code>TOTAL</code>: The difference between <code>StartTime</code> and
     * <code>EndTime</code> must be less than 35 days.</p> </li> </ul>
     */
    inline bool IntervalPeriodHasBeenSet() const { return m_intervalPeriodHasBeenSet; }

    /**
     * <p> <code>IntervalPeriod</code>: An aggregated grouping applied to request
     * metrics. Valid <code>IntervalPeriod</code> values are: <code>FIFTEEN_MIN</code>
     * | <code>THIRTY_MIN</code> | <code>HOUR</code> | <code>DAY</code> |
     * <code>WEEK</code> | <code>TOTAL</code>. </p> <p>For example, if
     * <code>IntervalPeriod</code> is selected <code>THIRTY_MIN</code>,
     * <code>StartTime</code> and <code>EndTime</code> differs by 1 day, then Amazon
     * Connect returns 48 results in the response. Each result is aggregated by the
     * THIRTY_MIN period. By default Amazon Connect aggregates results based on the
     * <code>TOTAL</code> interval period. </p> <p>The following list describes
     * restrictions on <code>StartTime</code> and <code>EndTime</code> based on what
     * <code>IntervalPeriod</code> is requested. </p> <ul> <li> <p>
     * <code>FIFTEEN_MIN</code>: The difference between <code>StartTime</code> and
     * <code>EndTime</code> must be less than 3 days.</p> </li> <li> <p>
     * <code>THIRTY_MIN</code>: The difference between <code>StartTime</code> and
     * <code>EndTime</code> must be less than 3 days.</p> </li> <li> <p>
     * <code>HOUR</code>: The difference between <code>StartTime</code> and
     * <code>EndTime</code> must be less than 3 days.</p> </li> <li> <p>
     * <code>DAY</code>: The difference between <code>StartTime</code> and
     * <code>EndTime</code> must be less than 35 days.</p> </li> <li> <p>
     * <code>WEEK</code>: The difference between <code>StartTime</code> and
     * <code>EndTime</code> must be less than 35 days.</p> </li> <li> <p>
     * <code>TOTAL</code>: The difference between <code>StartTime</code> and
     * <code>EndTime</code> must be less than 35 days.</p> </li> </ul>
     */
    inline void SetIntervalPeriod(const IntervalPeriod& value) { m_intervalPeriodHasBeenSet = true; m_intervalPeriod = value; }

    /**
     * <p> <code>IntervalPeriod</code>: An aggregated grouping applied to request
     * metrics. Valid <code>IntervalPeriod</code> values are: <code>FIFTEEN_MIN</code>
     * | <code>THIRTY_MIN</code> | <code>HOUR</code> | <code>DAY</code> |
     * <code>WEEK</code> | <code>TOTAL</code>. </p> <p>For example, if
     * <code>IntervalPeriod</code> is selected <code>THIRTY_MIN</code>,
     * <code>StartTime</code> and <code>EndTime</code> differs by 1 day, then Amazon
     * Connect returns 48 results in the response. Each result is aggregated by the
     * THIRTY_MIN period. By default Amazon Connect aggregates results based on the
     * <code>TOTAL</code> interval period. </p> <p>The following list describes
     * restrictions on <code>StartTime</code> and <code>EndTime</code> based on what
     * <code>IntervalPeriod</code> is requested. </p> <ul> <li> <p>
     * <code>FIFTEEN_MIN</code>: The difference between <code>StartTime</code> and
     * <code>EndTime</code> must be less than 3 days.</p> </li> <li> <p>
     * <code>THIRTY_MIN</code>: The difference between <code>StartTime</code> and
     * <code>EndTime</code> must be less than 3 days.</p> </li> <li> <p>
     * <code>HOUR</code>: The difference between <code>StartTime</code> and
     * <code>EndTime</code> must be less than 3 days.</p> </li> <li> <p>
     * <code>DAY</code>: The difference between <code>StartTime</code> and
     * <code>EndTime</code> must be less than 35 days.</p> </li> <li> <p>
     * <code>WEEK</code>: The difference between <code>StartTime</code> and
     * <code>EndTime</code> must be less than 35 days.</p> </li> <li> <p>
     * <code>TOTAL</code>: The difference between <code>StartTime</code> and
     * <code>EndTime</code> must be less than 35 days.</p> </li> </ul>
     */
    inline void SetIntervalPeriod(IntervalPeriod&& value) { m_intervalPeriodHasBeenSet = true; m_intervalPeriod = std::move(value); }

    /**
     * <p> <code>IntervalPeriod</code>: An aggregated grouping applied to request
     * metrics. Valid <code>IntervalPeriod</code> values are: <code>FIFTEEN_MIN</code>
     * | <code>THIRTY_MIN</code> | <code>HOUR</code> | <code>DAY</code> |
     * <code>WEEK</code> | <code>TOTAL</code>. </p> <p>For example, if
     * <code>IntervalPeriod</code> is selected <code>THIRTY_MIN</code>,
     * <code>StartTime</code> and <code>EndTime</code> differs by 1 day, then Amazon
     * Connect returns 48 results in the response. Each result is aggregated by the
     * THIRTY_MIN period. By default Amazon Connect aggregates results based on the
     * <code>TOTAL</code> interval period. </p> <p>The following list describes
     * restrictions on <code>StartTime</code> and <code>EndTime</code> based on what
     * <code>IntervalPeriod</code> is requested. </p> <ul> <li> <p>
     * <code>FIFTEEN_MIN</code>: The difference between <code>StartTime</code> and
     * <code>EndTime</code> must be less than 3 days.</p> </li> <li> <p>
     * <code>THIRTY_MIN</code>: The difference between <code>StartTime</code> and
     * <code>EndTime</code> must be less than 3 days.</p> </li> <li> <p>
     * <code>HOUR</code>: The difference between <code>StartTime</code> and
     * <code>EndTime</code> must be less than 3 days.</p> </li> <li> <p>
     * <code>DAY</code>: The difference between <code>StartTime</code> and
     * <code>EndTime</code> must be less than 35 days.</p> </li> <li> <p>
     * <code>WEEK</code>: The difference between <code>StartTime</code> and
     * <code>EndTime</code> must be less than 35 days.</p> </li> <li> <p>
     * <code>TOTAL</code>: The difference between <code>StartTime</code> and
     * <code>EndTime</code> must be less than 35 days.</p> </li> </ul>
     */
    inline IntervalDetails& WithIntervalPeriod(const IntervalPeriod& value) { SetIntervalPeriod(value); return *this;}

    /**
     * <p> <code>IntervalPeriod</code>: An aggregated grouping applied to request
     * metrics. Valid <code>IntervalPeriod</code> values are: <code>FIFTEEN_MIN</code>
     * | <code>THIRTY_MIN</code> | <code>HOUR</code> | <code>DAY</code> |
     * <code>WEEK</code> | <code>TOTAL</code>. </p> <p>For example, if
     * <code>IntervalPeriod</code> is selected <code>THIRTY_MIN</code>,
     * <code>StartTime</code> and <code>EndTime</code> differs by 1 day, then Amazon
     * Connect returns 48 results in the response. Each result is aggregated by the
     * THIRTY_MIN period. By default Amazon Connect aggregates results based on the
     * <code>TOTAL</code> interval period. </p> <p>The following list describes
     * restrictions on <code>StartTime</code> and <code>EndTime</code> based on what
     * <code>IntervalPeriod</code> is requested. </p> <ul> <li> <p>
     * <code>FIFTEEN_MIN</code>: The difference between <code>StartTime</code> and
     * <code>EndTime</code> must be less than 3 days.</p> </li> <li> <p>
     * <code>THIRTY_MIN</code>: The difference between <code>StartTime</code> and
     * <code>EndTime</code> must be less than 3 days.</p> </li> <li> <p>
     * <code>HOUR</code>: The difference between <code>StartTime</code> and
     * <code>EndTime</code> must be less than 3 days.</p> </li> <li> <p>
     * <code>DAY</code>: The difference between <code>StartTime</code> and
     * <code>EndTime</code> must be less than 35 days.</p> </li> <li> <p>
     * <code>WEEK</code>: The difference between <code>StartTime</code> and
     * <code>EndTime</code> must be less than 35 days.</p> </li> <li> <p>
     * <code>TOTAL</code>: The difference between <code>StartTime</code> and
     * <code>EndTime</code> must be less than 35 days.</p> </li> </ul>
     */
    inline IntervalDetails& WithIntervalPeriod(IntervalPeriod&& value) { SetIntervalPeriod(std::move(value)); return *this;}

  private:

    Aws::String m_timeZone;
    bool m_timeZoneHasBeenSet = false;

    IntervalPeriod m_intervalPeriod;
    bool m_intervalPeriodHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
