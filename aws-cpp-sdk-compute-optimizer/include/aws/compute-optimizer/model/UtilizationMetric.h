/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/compute-optimizer/ComputeOptimizer_EXPORTS.h>
#include <aws/compute-optimizer/model/MetricName.h>
#include <aws/compute-optimizer/model/MetricStatistic.h>
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
   * <p>Describes a utilization metric of a resource, such as an Amazon EC2
   * instance.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-2019-11-01/UtilizationMetric">AWS
   * API Reference</a></p>
   */
  class AWS_COMPUTEOPTIMIZER_API UtilizationMetric
  {
  public:
    UtilizationMetric();
    UtilizationMetric(Aws::Utils::Json::JsonView jsonValue);
    UtilizationMetric& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the utilization metric.</p> <note> <p>Memory metrics are only
     * returned for resources that have the unified CloudWatch agent installed on them.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/Install-CloudWatch-Agent.html">Enabling
     * Memory Utilization with the CloudWatch Agent</a>.</p> </note>
     */
    inline const MetricName& GetName() const{ return m_name; }

    /**
     * <p>The name of the utilization metric.</p> <note> <p>Memory metrics are only
     * returned for resources that have the unified CloudWatch agent installed on them.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/Install-CloudWatch-Agent.html">Enabling
     * Memory Utilization with the CloudWatch Agent</a>.</p> </note>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the utilization metric.</p> <note> <p>Memory metrics are only
     * returned for resources that have the unified CloudWatch agent installed on them.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/Install-CloudWatch-Agent.html">Enabling
     * Memory Utilization with the CloudWatch Agent</a>.</p> </note>
     */
    inline void SetName(const MetricName& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the utilization metric.</p> <note> <p>Memory metrics are only
     * returned for resources that have the unified CloudWatch agent installed on them.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/Install-CloudWatch-Agent.html">Enabling
     * Memory Utilization with the CloudWatch Agent</a>.</p> </note>
     */
    inline void SetName(MetricName&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the utilization metric.</p> <note> <p>Memory metrics are only
     * returned for resources that have the unified CloudWatch agent installed on them.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/Install-CloudWatch-Agent.html">Enabling
     * Memory Utilization with the CloudWatch Agent</a>.</p> </note>
     */
    inline UtilizationMetric& WithName(const MetricName& value) { SetName(value); return *this;}

    /**
     * <p>The name of the utilization metric.</p> <note> <p>Memory metrics are only
     * returned for resources that have the unified CloudWatch agent installed on them.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/Install-CloudWatch-Agent.html">Enabling
     * Memory Utilization with the CloudWatch Agent</a>.</p> </note>
     */
    inline UtilizationMetric& WithName(MetricName&& value) { SetName(std::move(value)); return *this;}


    /**
     * <p>The statistic of the utilization metric.</p>
     */
    inline const MetricStatistic& GetStatistic() const{ return m_statistic; }

    /**
     * <p>The statistic of the utilization metric.</p>
     */
    inline bool StatisticHasBeenSet() const { return m_statisticHasBeenSet; }

    /**
     * <p>The statistic of the utilization metric.</p>
     */
    inline void SetStatistic(const MetricStatistic& value) { m_statisticHasBeenSet = true; m_statistic = value; }

    /**
     * <p>The statistic of the utilization metric.</p>
     */
    inline void SetStatistic(MetricStatistic&& value) { m_statisticHasBeenSet = true; m_statistic = std::move(value); }

    /**
     * <p>The statistic of the utilization metric.</p>
     */
    inline UtilizationMetric& WithStatistic(const MetricStatistic& value) { SetStatistic(value); return *this;}

    /**
     * <p>The statistic of the utilization metric.</p>
     */
    inline UtilizationMetric& WithStatistic(MetricStatistic&& value) { SetStatistic(std::move(value)); return *this;}


    /**
     * <p>The value of the utilization metric.</p>
     */
    inline double GetValue() const{ return m_value; }

    /**
     * <p>The value of the utilization metric.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The value of the utilization metric.</p>
     */
    inline void SetValue(double value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The value of the utilization metric.</p>
     */
    inline UtilizationMetric& WithValue(double value) { SetValue(value); return *this;}

  private:

    MetricName m_name;
    bool m_nameHasBeenSet;

    MetricStatistic m_statistic;
    bool m_statisticHasBeenSet;

    double m_value;
    bool m_valueHasBeenSet;
  };

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
