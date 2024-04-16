/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>

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
namespace IoTWireless
{
namespace Model
{

  /**
   * <p>The aggregated values of the metric.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/MetricQueryValue">AWS
   * API Reference</a></p>
   */
  class MetricQueryValue
  {
  public:
    AWS_IOTWIRELESS_API MetricQueryValue();
    AWS_IOTWIRELESS_API MetricQueryValue(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API MetricQueryValue& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The minimum of the values of all data points collected during the aggregation
     * period.</p>
     */
    inline double GetMin() const{ return m_min; }

    /**
     * <p>The minimum of the values of all data points collected during the aggregation
     * period.</p>
     */
    inline bool MinHasBeenSet() const { return m_minHasBeenSet; }

    /**
     * <p>The minimum of the values of all data points collected during the aggregation
     * period.</p>
     */
    inline void SetMin(double value) { m_minHasBeenSet = true; m_min = value; }

    /**
     * <p>The minimum of the values of all data points collected during the aggregation
     * period.</p>
     */
    inline MetricQueryValue& WithMin(double value) { SetMin(value); return *this;}


    /**
     * <p>The maximum of the values of all the data points collected during the
     * aggregation period.</p>
     */
    inline double GetMax() const{ return m_max; }

    /**
     * <p>The maximum of the values of all the data points collected during the
     * aggregation period.</p>
     */
    inline bool MaxHasBeenSet() const { return m_maxHasBeenSet; }

    /**
     * <p>The maximum of the values of all the data points collected during the
     * aggregation period.</p>
     */
    inline void SetMax(double value) { m_maxHasBeenSet = true; m_max = value; }

    /**
     * <p>The maximum of the values of all the data points collected during the
     * aggregation period.</p>
     */
    inline MetricQueryValue& WithMax(double value) { SetMax(value); return *this;}


    /**
     * <p>The sum of the values of all data points collected during the aggregation
     * period.</p>
     */
    inline double GetSum() const{ return m_sum; }

    /**
     * <p>The sum of the values of all data points collected during the aggregation
     * period.</p>
     */
    inline bool SumHasBeenSet() const { return m_sumHasBeenSet; }

    /**
     * <p>The sum of the values of all data points collected during the aggregation
     * period.</p>
     */
    inline void SetSum(double value) { m_sumHasBeenSet = true; m_sum = value; }

    /**
     * <p>The sum of the values of all data points collected during the aggregation
     * period.</p>
     */
    inline MetricQueryValue& WithSum(double value) { SetSum(value); return *this;}


    /**
     * <p>The average of the values of all data points collected during the aggregation
     * period.</p>
     */
    inline double GetAvg() const{ return m_avg; }

    /**
     * <p>The average of the values of all data points collected during the aggregation
     * period.</p>
     */
    inline bool AvgHasBeenSet() const { return m_avgHasBeenSet; }

    /**
     * <p>The average of the values of all data points collected during the aggregation
     * period.</p>
     */
    inline void SetAvg(double value) { m_avgHasBeenSet = true; m_avg = value; }

    /**
     * <p>The average of the values of all data points collected during the aggregation
     * period.</p>
     */
    inline MetricQueryValue& WithAvg(double value) { SetAvg(value); return *this;}


    /**
     * <p>The standard deviation of the values of all data points collected during the
     * aggregation period.</p>
     */
    inline double GetStd() const{ return m_std; }

    /**
     * <p>The standard deviation of the values of all data points collected during the
     * aggregation period.</p>
     */
    inline bool StdHasBeenSet() const { return m_stdHasBeenSet; }

    /**
     * <p>The standard deviation of the values of all data points collected during the
     * aggregation period.</p>
     */
    inline void SetStd(double value) { m_stdHasBeenSet = true; m_std = value; }

    /**
     * <p>The standard deviation of the values of all data points collected during the
     * aggregation period.</p>
     */
    inline MetricQueryValue& WithStd(double value) { SetStd(value); return *this;}


    /**
     * <p>The 90th percentile of the values of all data points collected during the
     * aggregation period.</p>
     */
    inline double GetP90() const{ return m_p90; }

    /**
     * <p>The 90th percentile of the values of all data points collected during the
     * aggregation period.</p>
     */
    inline bool P90HasBeenSet() const { return m_p90HasBeenSet; }

    /**
     * <p>The 90th percentile of the values of all data points collected during the
     * aggregation period.</p>
     */
    inline void SetP90(double value) { m_p90HasBeenSet = true; m_p90 = value; }

    /**
     * <p>The 90th percentile of the values of all data points collected during the
     * aggregation period.</p>
     */
    inline MetricQueryValue& WithP90(double value) { SetP90(value); return *this;}

  private:

    double m_min;
    bool m_minHasBeenSet = false;

    double m_max;
    bool m_maxHasBeenSet = false;

    double m_sum;
    bool m_sumHasBeenSet = false;

    double m_avg;
    bool m_avgHasBeenSet = false;

    double m_std;
    bool m_stdHasBeenSet = false;

    double m_p90;
    bool m_p90HasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
