/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/timestream-query/TimestreamQuery_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>
#include <memory>

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
namespace TimestreamQuery
{
namespace Model
{
  class Datum;

  /**
   * <p>The timeseries datatype represents the values of a measure over time. A time
   * series is an array of rows of timestamps and measure values, with rows sorted in
   * ascending order of time. A TimeSeriesDataPoint is a single data point in the
   * timeseries. It represents a tuple of (time, measure value) in a timeseries.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-query-2018-11-01/TimeSeriesDataPoint">AWS
   * API Reference</a></p>
   */
  class AWS_TIMESTREAMQUERY_API TimeSeriesDataPoint
  {
  public:
    TimeSeriesDataPoint();
    TimeSeriesDataPoint(Aws::Utils::Json::JsonView jsonValue);
    TimeSeriesDataPoint& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The timestamp when the measure value was collected.</p>
     */
    inline const Aws::String& GetTime() const{ return m_time; }

    /**
     * <p>The timestamp when the measure value was collected.</p>
     */
    inline bool TimeHasBeenSet() const { return m_timeHasBeenSet; }

    /**
     * <p>The timestamp when the measure value was collected.</p>
     */
    inline void SetTime(const Aws::String& value) { m_timeHasBeenSet = true; m_time = value; }

    /**
     * <p>The timestamp when the measure value was collected.</p>
     */
    inline void SetTime(Aws::String&& value) { m_timeHasBeenSet = true; m_time = std::move(value); }

    /**
     * <p>The timestamp when the measure value was collected.</p>
     */
    inline void SetTime(const char* value) { m_timeHasBeenSet = true; m_time.assign(value); }

    /**
     * <p>The timestamp when the measure value was collected.</p>
     */
    inline TimeSeriesDataPoint& WithTime(const Aws::String& value) { SetTime(value); return *this;}

    /**
     * <p>The timestamp when the measure value was collected.</p>
     */
    inline TimeSeriesDataPoint& WithTime(Aws::String&& value) { SetTime(std::move(value)); return *this;}

    /**
     * <p>The timestamp when the measure value was collected.</p>
     */
    inline TimeSeriesDataPoint& WithTime(const char* value) { SetTime(value); return *this;}


    /**
     * <p>The measure value for the data point.</p>
     */
    const Datum& GetValue() const;

    /**
     * <p>The measure value for the data point.</p>
     */
    bool ValueHasBeenSet() const;

    /**
     * <p>The measure value for the data point.</p>
     */
    void SetValue(const Datum& value);

    /**
     * <p>The measure value for the data point.</p>
     */
    void SetValue(Datum&& value);

    /**
     * <p>The measure value for the data point.</p>
     */
    TimeSeriesDataPoint& WithValue(const Datum& value);

    /**
     * <p>The measure value for the data point.</p>
     */
    TimeSeriesDataPoint& WithValue(Datum&& value);

  private:

    Aws::String m_time;
    bool m_timeHasBeenSet;

    std::shared_ptr<Datum> m_value;
    bool m_valueHasBeenSet;
  };

} // namespace Model
} // namespace TimestreamQuery
} // namespace Aws
