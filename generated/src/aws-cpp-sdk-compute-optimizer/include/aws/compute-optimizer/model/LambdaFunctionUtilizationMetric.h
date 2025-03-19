/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer/ComputeOptimizer_EXPORTS.h>
#include <aws/compute-optimizer/model/LambdaFunctionMetricName.h>
#include <aws/compute-optimizer/model/LambdaFunctionMetricStatistic.h>
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
namespace ComputeOptimizer
{
namespace Model
{

  /**
   * <p>Describes a utilization metric of an Lambda function.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-2019-11-01/LambdaFunctionUtilizationMetric">AWS
   * API Reference</a></p>
   */
  class LambdaFunctionUtilizationMetric
  {
  public:
    AWS_COMPUTEOPTIMIZER_API LambdaFunctionUtilizationMetric() = default;
    AWS_COMPUTEOPTIMIZER_API LambdaFunctionUtilizationMetric(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API LambdaFunctionUtilizationMetric& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the utilization metric.</p> <p>The following utilization metrics
     * are available:</p> <ul> <li> <p> <code>Duration</code> - The amount of time that
     * your function code spends processing an event.</p> </li> <li> <p>
     * <code>Memory</code> - The amount of memory used per invocation.</p> </li> </ul>
     */
    inline LambdaFunctionMetricName GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(LambdaFunctionMetricName value) { m_nameHasBeenSet = true; m_name = value; }
    inline LambdaFunctionUtilizationMetric& WithName(LambdaFunctionMetricName value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The statistic of the utilization metric.</p> <p>The Compute Optimizer API,
     * Command Line Interface (CLI), and SDKs return utilization metrics using only the
     * <code>Maximum</code> statistic, which is the highest value observed during the
     * specified period.</p> <p>The Compute Optimizer console displays graphs for some
     * utilization metrics using the <code>Average</code> statistic, which is the value
     * of <code>Sum</code> / <code>SampleCount</code> during the specified period. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/compute-optimizer/latest/ug/viewing-recommendations.html">Viewing
     * resource recommendations</a> in the <i>Compute Optimizer User Guide</i>. You can
     * also get averaged utilization metric data for your resources using Amazon
     * CloudWatch. For more information, see the <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/WhatIsCloudWatch.html">Amazon
     * CloudWatch User Guide</a>.</p>
     */
    inline LambdaFunctionMetricStatistic GetStatistic() const { return m_statistic; }
    inline bool StatisticHasBeenSet() const { return m_statisticHasBeenSet; }
    inline void SetStatistic(LambdaFunctionMetricStatistic value) { m_statisticHasBeenSet = true; m_statistic = value; }
    inline LambdaFunctionUtilizationMetric& WithStatistic(LambdaFunctionMetricStatistic value) { SetStatistic(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value of the utilization metric.</p>
     */
    inline double GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    inline void SetValue(double value) { m_valueHasBeenSet = true; m_value = value; }
    inline LambdaFunctionUtilizationMetric& WithValue(double value) { SetValue(value); return *this;}
    ///@}
  private:

    LambdaFunctionMetricName m_name{LambdaFunctionMetricName::NOT_SET};
    bool m_nameHasBeenSet = false;

    LambdaFunctionMetricStatistic m_statistic{LambdaFunctionMetricStatistic::NOT_SET};
    bool m_statisticHasBeenSet = false;

    double m_value{0.0};
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
