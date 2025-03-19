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
    AWS_IOTWIRELESS_API MetricQueryValue() = default;
    AWS_IOTWIRELESS_API MetricQueryValue(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API MetricQueryValue& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The minimum of the values of all data points collected during the aggregation
     * period.</p>
     */
    inline double GetMin() const { return m_min; }
    inline bool MinHasBeenSet() const { return m_minHasBeenSet; }
    inline void SetMin(double value) { m_minHasBeenSet = true; m_min = value; }
    inline MetricQueryValue& WithMin(double value) { SetMin(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum of the values of all the data points collected during the
     * aggregation period.</p>
     */
    inline double GetMax() const { return m_max; }
    inline bool MaxHasBeenSet() const { return m_maxHasBeenSet; }
    inline void SetMax(double value) { m_maxHasBeenSet = true; m_max = value; }
    inline MetricQueryValue& WithMax(double value) { SetMax(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sum of the values of all data points collected during the aggregation
     * period.</p>
     */
    inline double GetSum() const { return m_sum; }
    inline bool SumHasBeenSet() const { return m_sumHasBeenSet; }
    inline void SetSum(double value) { m_sumHasBeenSet = true; m_sum = value; }
    inline MetricQueryValue& WithSum(double value) { SetSum(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The average of the values of all data points collected during the aggregation
     * period.</p>
     */
    inline double GetAvg() const { return m_avg; }
    inline bool AvgHasBeenSet() const { return m_avgHasBeenSet; }
    inline void SetAvg(double value) { m_avgHasBeenSet = true; m_avg = value; }
    inline MetricQueryValue& WithAvg(double value) { SetAvg(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The standard deviation of the values of all data points collected during the
     * aggregation period.</p>
     */
    inline double GetStd() const { return m_std; }
    inline bool StdHasBeenSet() const { return m_stdHasBeenSet; }
    inline void SetStd(double value) { m_stdHasBeenSet = true; m_std = value; }
    inline MetricQueryValue& WithStd(double value) { SetStd(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The 90th percentile of the values of all data points collected during the
     * aggregation period.</p>
     */
    inline double GetP90() const { return m_p90; }
    inline bool P90HasBeenSet() const { return m_p90HasBeenSet; }
    inline void SetP90(double value) { m_p90HasBeenSet = true; m_p90 = value; }
    inline MetricQueryValue& WithP90(double value) { SetP90(value); return *this;}
    ///@}
  private:

    double m_min{0.0};
    bool m_minHasBeenSet = false;

    double m_max{0.0};
    bool m_maxHasBeenSet = false;

    double m_sum{0.0};
    bool m_sumHasBeenSet = false;

    double m_avg{0.0};
    bool m_avgHasBeenSet = false;

    double m_std{0.0};
    bool m_stdHasBeenSet = false;

    double m_p90{0.0};
    bool m_p90HasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
