/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer/ComputeOptimizer_EXPORTS.h>
#include <aws/compute-optimizer/model/LambdaFunctionMemoryMetricName.h>
#include <aws/compute-optimizer/model/LambdaFunctionMemoryMetricStatistic.h>
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
   * <p>Describes a projected utilization metric of an Lambda function recommendation
   * option.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-2019-11-01/LambdaFunctionMemoryProjectedMetric">AWS
   * API Reference</a></p>
   */
  class LambdaFunctionMemoryProjectedMetric
  {
  public:
    AWS_COMPUTEOPTIMIZER_API LambdaFunctionMemoryProjectedMetric() = default;
    AWS_COMPUTEOPTIMIZER_API LambdaFunctionMemoryProjectedMetric(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API LambdaFunctionMemoryProjectedMetric& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the projected utilization metric.</p>
     */
    inline LambdaFunctionMemoryMetricName GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(LambdaFunctionMemoryMetricName value) { m_nameHasBeenSet = true; m_name = value; }
    inline LambdaFunctionMemoryProjectedMetric& WithName(LambdaFunctionMemoryMetricName value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The statistic of the projected utilization metric.</p>
     */
    inline LambdaFunctionMemoryMetricStatistic GetStatistic() const { return m_statistic; }
    inline bool StatisticHasBeenSet() const { return m_statisticHasBeenSet; }
    inline void SetStatistic(LambdaFunctionMemoryMetricStatistic value) { m_statisticHasBeenSet = true; m_statistic = value; }
    inline LambdaFunctionMemoryProjectedMetric& WithStatistic(LambdaFunctionMemoryMetricStatistic value) { SetStatistic(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The values of the projected utilization metrics.</p>
     */
    inline double GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    inline void SetValue(double value) { m_valueHasBeenSet = true; m_value = value; }
    inline LambdaFunctionMemoryProjectedMetric& WithValue(double value) { SetValue(value); return *this;}
    ///@}
  private:

    LambdaFunctionMemoryMetricName m_name{LambdaFunctionMemoryMetricName::NOT_SET};
    bool m_nameHasBeenSet = false;

    LambdaFunctionMemoryMetricStatistic m_statistic{LambdaFunctionMemoryMetricStatistic::NOT_SET};
    bool m_statisticHasBeenSet = false;

    double m_value{0.0};
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
