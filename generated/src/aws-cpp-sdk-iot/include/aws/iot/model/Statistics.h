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
    AWS_IOT_API Statistics();
    AWS_IOT_API Statistics(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Statistics& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The count of things that match the query string criteria and contain a valid
     * aggregation field value.</p>
     */
    inline int GetCount() const{ return m_count; }

    /**
     * <p>The count of things that match the query string criteria and contain a valid
     * aggregation field value.</p>
     */
    inline bool CountHasBeenSet() const { return m_countHasBeenSet; }

    /**
     * <p>The count of things that match the query string criteria and contain a valid
     * aggregation field value.</p>
     */
    inline void SetCount(int value) { m_countHasBeenSet = true; m_count = value; }

    /**
     * <p>The count of things that match the query string criteria and contain a valid
     * aggregation field value.</p>
     */
    inline Statistics& WithCount(int value) { SetCount(value); return *this;}


    /**
     * <p>The average of the aggregated field values.</p>
     */
    inline double GetAverage() const{ return m_average; }

    /**
     * <p>The average of the aggregated field values.</p>
     */
    inline bool AverageHasBeenSet() const { return m_averageHasBeenSet; }

    /**
     * <p>The average of the aggregated field values.</p>
     */
    inline void SetAverage(double value) { m_averageHasBeenSet = true; m_average = value; }

    /**
     * <p>The average of the aggregated field values.</p>
     */
    inline Statistics& WithAverage(double value) { SetAverage(value); return *this;}


    /**
     * <p>The sum of the aggregated field values.</p>
     */
    inline double GetSum() const{ return m_sum; }

    /**
     * <p>The sum of the aggregated field values.</p>
     */
    inline bool SumHasBeenSet() const { return m_sumHasBeenSet; }

    /**
     * <p>The sum of the aggregated field values.</p>
     */
    inline void SetSum(double value) { m_sumHasBeenSet = true; m_sum = value; }

    /**
     * <p>The sum of the aggregated field values.</p>
     */
    inline Statistics& WithSum(double value) { SetSum(value); return *this;}


    /**
     * <p>The minimum aggregated field value.</p>
     */
    inline double GetMinimum() const{ return m_minimum; }

    /**
     * <p>The minimum aggregated field value.</p>
     */
    inline bool MinimumHasBeenSet() const { return m_minimumHasBeenSet; }

    /**
     * <p>The minimum aggregated field value.</p>
     */
    inline void SetMinimum(double value) { m_minimumHasBeenSet = true; m_minimum = value; }

    /**
     * <p>The minimum aggregated field value.</p>
     */
    inline Statistics& WithMinimum(double value) { SetMinimum(value); return *this;}


    /**
     * <p>The maximum aggregated field value.</p>
     */
    inline double GetMaximum() const{ return m_maximum; }

    /**
     * <p>The maximum aggregated field value.</p>
     */
    inline bool MaximumHasBeenSet() const { return m_maximumHasBeenSet; }

    /**
     * <p>The maximum aggregated field value.</p>
     */
    inline void SetMaximum(double value) { m_maximumHasBeenSet = true; m_maximum = value; }

    /**
     * <p>The maximum aggregated field value.</p>
     */
    inline Statistics& WithMaximum(double value) { SetMaximum(value); return *this;}


    /**
     * <p>The sum of the squares of the aggregated field values.</p>
     */
    inline double GetSumOfSquares() const{ return m_sumOfSquares; }

    /**
     * <p>The sum of the squares of the aggregated field values.</p>
     */
    inline bool SumOfSquaresHasBeenSet() const { return m_sumOfSquaresHasBeenSet; }

    /**
     * <p>The sum of the squares of the aggregated field values.</p>
     */
    inline void SetSumOfSquares(double value) { m_sumOfSquaresHasBeenSet = true; m_sumOfSquares = value; }

    /**
     * <p>The sum of the squares of the aggregated field values.</p>
     */
    inline Statistics& WithSumOfSquares(double value) { SetSumOfSquares(value); return *this;}


    /**
     * <p>The variance of the aggregated field values.</p>
     */
    inline double GetVariance() const{ return m_variance; }

    /**
     * <p>The variance of the aggregated field values.</p>
     */
    inline bool VarianceHasBeenSet() const { return m_varianceHasBeenSet; }

    /**
     * <p>The variance of the aggregated field values.</p>
     */
    inline void SetVariance(double value) { m_varianceHasBeenSet = true; m_variance = value; }

    /**
     * <p>The variance of the aggregated field values.</p>
     */
    inline Statistics& WithVariance(double value) { SetVariance(value); return *this;}


    /**
     * <p>The standard deviation of the aggregated field values.</p>
     */
    inline double GetStdDeviation() const{ return m_stdDeviation; }

    /**
     * <p>The standard deviation of the aggregated field values.</p>
     */
    inline bool StdDeviationHasBeenSet() const { return m_stdDeviationHasBeenSet; }

    /**
     * <p>The standard deviation of the aggregated field values.</p>
     */
    inline void SetStdDeviation(double value) { m_stdDeviationHasBeenSet = true; m_stdDeviation = value; }

    /**
     * <p>The standard deviation of the aggregated field values.</p>
     */
    inline Statistics& WithStdDeviation(double value) { SetStdDeviation(value); return *this;}

  private:

    int m_count;
    bool m_countHasBeenSet = false;

    double m_average;
    bool m_averageHasBeenSet = false;

    double m_sum;
    bool m_sumHasBeenSet = false;

    double m_minimum;
    bool m_minimumHasBeenSet = false;

    double m_maximum;
    bool m_maximumHasBeenSet = false;

    double m_sumOfSquares;
    bool m_sumOfSquaresHasBeenSet = false;

    double m_variance;
    bool m_varianceHasBeenSet = false;

    double m_stdDeviation;
    bool m_stdDeviationHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
