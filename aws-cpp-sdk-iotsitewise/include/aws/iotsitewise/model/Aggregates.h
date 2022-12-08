/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>

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
namespace IoTSiteWise
{
namespace Model
{

  /**
   * <p>Contains the (pre-calculated) aggregate values for an asset
   * property.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/Aggregates">AWS
   * API Reference</a></p>
   */
  class Aggregates
  {
  public:
    AWS_IOTSITEWISE_API Aggregates();
    AWS_IOTSITEWISE_API Aggregates(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API Aggregates& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The average (mean) value of the time series over a time interval window.</p>
     */
    inline double GetAverage() const{ return m_average; }

    /**
     * <p>The average (mean) value of the time series over a time interval window.</p>
     */
    inline bool AverageHasBeenSet() const { return m_averageHasBeenSet; }

    /**
     * <p>The average (mean) value of the time series over a time interval window.</p>
     */
    inline void SetAverage(double value) { m_averageHasBeenSet = true; m_average = value; }

    /**
     * <p>The average (mean) value of the time series over a time interval window.</p>
     */
    inline Aggregates& WithAverage(double value) { SetAverage(value); return *this;}


    /**
     * <p>The count of data points in the time series over a time interval window.</p>
     */
    inline double GetCount() const{ return m_count; }

    /**
     * <p>The count of data points in the time series over a time interval window.</p>
     */
    inline bool CountHasBeenSet() const { return m_countHasBeenSet; }

    /**
     * <p>The count of data points in the time series over a time interval window.</p>
     */
    inline void SetCount(double value) { m_countHasBeenSet = true; m_count = value; }

    /**
     * <p>The count of data points in the time series over a time interval window.</p>
     */
    inline Aggregates& WithCount(double value) { SetCount(value); return *this;}


    /**
     * <p>The maximum value of the time series over a time interval window.</p>
     */
    inline double GetMaximum() const{ return m_maximum; }

    /**
     * <p>The maximum value of the time series over a time interval window.</p>
     */
    inline bool MaximumHasBeenSet() const { return m_maximumHasBeenSet; }

    /**
     * <p>The maximum value of the time series over a time interval window.</p>
     */
    inline void SetMaximum(double value) { m_maximumHasBeenSet = true; m_maximum = value; }

    /**
     * <p>The maximum value of the time series over a time interval window.</p>
     */
    inline Aggregates& WithMaximum(double value) { SetMaximum(value); return *this;}


    /**
     * <p>The minimum value of the time series over a time interval window.</p>
     */
    inline double GetMinimum() const{ return m_minimum; }

    /**
     * <p>The minimum value of the time series over a time interval window.</p>
     */
    inline bool MinimumHasBeenSet() const { return m_minimumHasBeenSet; }

    /**
     * <p>The minimum value of the time series over a time interval window.</p>
     */
    inline void SetMinimum(double value) { m_minimumHasBeenSet = true; m_minimum = value; }

    /**
     * <p>The minimum value of the time series over a time interval window.</p>
     */
    inline Aggregates& WithMinimum(double value) { SetMinimum(value); return *this;}


    /**
     * <p>The sum of the time series over a time interval window.</p>
     */
    inline double GetSum() const{ return m_sum; }

    /**
     * <p>The sum of the time series over a time interval window.</p>
     */
    inline bool SumHasBeenSet() const { return m_sumHasBeenSet; }

    /**
     * <p>The sum of the time series over a time interval window.</p>
     */
    inline void SetSum(double value) { m_sumHasBeenSet = true; m_sum = value; }

    /**
     * <p>The sum of the time series over a time interval window.</p>
     */
    inline Aggregates& WithSum(double value) { SetSum(value); return *this;}


    /**
     * <p>The standard deviation of the time series over a time interval window.</p>
     */
    inline double GetStandardDeviation() const{ return m_standardDeviation; }

    /**
     * <p>The standard deviation of the time series over a time interval window.</p>
     */
    inline bool StandardDeviationHasBeenSet() const { return m_standardDeviationHasBeenSet; }

    /**
     * <p>The standard deviation of the time series over a time interval window.</p>
     */
    inline void SetStandardDeviation(double value) { m_standardDeviationHasBeenSet = true; m_standardDeviation = value; }

    /**
     * <p>The standard deviation of the time series over a time interval window.</p>
     */
    inline Aggregates& WithStandardDeviation(double value) { SetStandardDeviation(value); return *this;}

  private:

    double m_average;
    bool m_averageHasBeenSet = false;

    double m_count;
    bool m_countHasBeenSet = false;

    double m_maximum;
    bool m_maximumHasBeenSet = false;

    double m_minimum;
    bool m_minimumHasBeenSet = false;

    double m_sum;
    bool m_sumHasBeenSet = false;

    double m_standardDeviation;
    bool m_standardDeviationHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
