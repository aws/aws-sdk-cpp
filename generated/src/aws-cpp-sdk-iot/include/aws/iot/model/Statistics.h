/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>

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
namespace IoT
{
namespace Model
{

  /**
   * <p>A map of key-value pairs for all supported statistics. For issues with
   * missing or unexpected values for this API, consult <a
   * href="https://docs.aws.amazon.com/iot/latest/developerguide/fleet-indexing-troubleshooting.html">
   * Fleet indexing troubleshooting guide</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/Statistics">AWS API
   * Reference</a></p>
   */
  class Statistics
  {
  public:
    AWS_IOT_API Statistics() = default;
    AWS_IOT_API Statistics(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Statistics& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The count of things that match the query string criteria and contain a valid
     * aggregation field value.</p>
     */
    inline int GetCount() const { return m_count; }
    inline bool CountHasBeenSet() const { return m_countHasBeenSet; }
    inline void SetCount(int value) { m_countHasBeenSet = true; m_count = value; }
    inline Statistics& WithCount(int value) { SetCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The average of the aggregated field values.</p>
     */
    inline double GetAverage() const { return m_average; }
    inline bool AverageHasBeenSet() const { return m_averageHasBeenSet; }
    inline void SetAverage(double value) { m_averageHasBeenSet = true; m_average = value; }
    inline Statistics& WithAverage(double value) { SetAverage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sum of the aggregated field values.</p>
     */
    inline double GetSum() const { return m_sum; }
    inline bool SumHasBeenSet() const { return m_sumHasBeenSet; }
    inline void SetSum(double value) { m_sumHasBeenSet = true; m_sum = value; }
    inline Statistics& WithSum(double value) { SetSum(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The minimum aggregated field value.</p>
     */
    inline double GetMinimum() const { return m_minimum; }
    inline bool MinimumHasBeenSet() const { return m_minimumHasBeenSet; }
    inline void SetMinimum(double value) { m_minimumHasBeenSet = true; m_minimum = value; }
    inline Statistics& WithMinimum(double value) { SetMinimum(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum aggregated field value.</p>
     */
    inline double GetMaximum() const { return m_maximum; }
    inline bool MaximumHasBeenSet() const { return m_maximumHasBeenSet; }
    inline void SetMaximum(double value) { m_maximumHasBeenSet = true; m_maximum = value; }
    inline Statistics& WithMaximum(double value) { SetMaximum(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sum of the squares of the aggregated field values.</p>
     */
    inline double GetSumOfSquares() const { return m_sumOfSquares; }
    inline bool SumOfSquaresHasBeenSet() const { return m_sumOfSquaresHasBeenSet; }
    inline void SetSumOfSquares(double value) { m_sumOfSquaresHasBeenSet = true; m_sumOfSquares = value; }
    inline Statistics& WithSumOfSquares(double value) { SetSumOfSquares(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The variance of the aggregated field values.</p>
     */
    inline double GetVariance() const { return m_variance; }
    inline bool VarianceHasBeenSet() const { return m_varianceHasBeenSet; }
    inline void SetVariance(double value) { m_varianceHasBeenSet = true; m_variance = value; }
    inline Statistics& WithVariance(double value) { SetVariance(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The standard deviation of the aggregated field values.</p>
     */
    inline double GetStdDeviation() const { return m_stdDeviation; }
    inline bool StdDeviationHasBeenSet() const { return m_stdDeviationHasBeenSet; }
    inline void SetStdDeviation(double value) { m_stdDeviationHasBeenSet = true; m_stdDeviation = value; }
    inline Statistics& WithStdDeviation(double value) { SetStdDeviation(value); return *this;}
    ///@}
  private:

    int m_count{0};
    bool m_countHasBeenSet = false;

    double m_average{0.0};
    bool m_averageHasBeenSet = false;

    double m_sum{0.0};
    bool m_sumHasBeenSet = false;

    double m_minimum{0.0};
    bool m_minimumHasBeenSet = false;

    double m_maximum{0.0};
    bool m_maximumHasBeenSet = false;

    double m_sumOfSquares{0.0};
    bool m_sumOfSquaresHasBeenSet = false;

    double m_variance{0.0};
    bool m_varianceHasBeenSet = false;

    double m_stdDeviation{0.0};
    bool m_stdDeviationHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
