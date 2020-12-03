/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * instance.</p> <p>Compare the utilization metric data of your resource against
   * its projected utilization metric data to determine the performance difference
   * between your current resource and the recommended option.</p><p><h3>See
   * Also:</h3>   <a
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
     * <p>The name of the utilization metric.</p> <p>The following utilization metrics
     * are available:</p> <ul> <li> <p> <code>Cpu</code> - The percentage of allocated
     * EC2 compute units that are currently in use on the instance. This metric
     * identifies the processing power required to run an application on the
     * instance.</p> <p>Depending on the instance type, tools in your operating system
     * can show a lower percentage than CloudWatch when the instance is not allocated a
     * full processor core.</p> <p>Units: Percent</p> </li> <li> <p>
     * <code>Memory</code> - The percentage of memory that is currently in use on the
     * instance. This metric identifies the amount of memory required to run an
     * application on the instance.</p> <p>Units: Percent</p>  <p>The
     * <code>Memory</code> metric is returned only for resources that have the unified
     * CloudWatch agent installed on them. For more information, see <a
     * href="https://docs.aws.amazon.com/compute-optimizer/latest/ug/metrics.html#cw-agent">Enabling
     * Memory Utilization with the CloudWatch Agent</a>.</p>  </li> <li> <p>
     * <code>EBS_READ_OPS_PER_SECOND</code> - The completed read operations from all
     * EBS volumes attached to the instance in a specified period of time.</p> <p>Unit:
     * Count</p> </li> <li> <p> <code>EBS_WRITE_OPS_PER_SECOND</code> - The completed
     * write operations to all EBS volumes attached to the instance in a specified
     * period of time.</p> <p>Unit: Count</p> </li> <li> <p>
     * <code>EBS_READ_BYTES_PER_SECOND</code> - The bytes read from all EBS volumes
     * attached to the instance in a specified period of time.</p> <p>Unit: Bytes</p>
     * </li> <li> <p> <code>EBS_WRITE_BYTES_PER_SECOND</code> - The bytes written to
     * all EBS volumes attached to the instance in a specified period of time.</p>
     * <p>Unit: Bytes</p> </li> </ul>
     */
    inline const MetricName& GetName() const{ return m_name; }

    /**
     * <p>The name of the utilization metric.</p> <p>The following utilization metrics
     * are available:</p> <ul> <li> <p> <code>Cpu</code> - The percentage of allocated
     * EC2 compute units that are currently in use on the instance. This metric
     * identifies the processing power required to run an application on the
     * instance.</p> <p>Depending on the instance type, tools in your operating system
     * can show a lower percentage than CloudWatch when the instance is not allocated a
     * full processor core.</p> <p>Units: Percent</p> </li> <li> <p>
     * <code>Memory</code> - The percentage of memory that is currently in use on the
     * instance. This metric identifies the amount of memory required to run an
     * application on the instance.</p> <p>Units: Percent</p>  <p>The
     * <code>Memory</code> metric is returned only for resources that have the unified
     * CloudWatch agent installed on them. For more information, see <a
     * href="https://docs.aws.amazon.com/compute-optimizer/latest/ug/metrics.html#cw-agent">Enabling
     * Memory Utilization with the CloudWatch Agent</a>.</p>  </li> <li> <p>
     * <code>EBS_READ_OPS_PER_SECOND</code> - The completed read operations from all
     * EBS volumes attached to the instance in a specified period of time.</p> <p>Unit:
     * Count</p> </li> <li> <p> <code>EBS_WRITE_OPS_PER_SECOND</code> - The completed
     * write operations to all EBS volumes attached to the instance in a specified
     * period of time.</p> <p>Unit: Count</p> </li> <li> <p>
     * <code>EBS_READ_BYTES_PER_SECOND</code> - The bytes read from all EBS volumes
     * attached to the instance in a specified period of time.</p> <p>Unit: Bytes</p>
     * </li> <li> <p> <code>EBS_WRITE_BYTES_PER_SECOND</code> - The bytes written to
     * all EBS volumes attached to the instance in a specified period of time.</p>
     * <p>Unit: Bytes</p> </li> </ul>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the utilization metric.</p> <p>The following utilization metrics
     * are available:</p> <ul> <li> <p> <code>Cpu</code> - The percentage of allocated
     * EC2 compute units that are currently in use on the instance. This metric
     * identifies the processing power required to run an application on the
     * instance.</p> <p>Depending on the instance type, tools in your operating system
     * can show a lower percentage than CloudWatch when the instance is not allocated a
     * full processor core.</p> <p>Units: Percent</p> </li> <li> <p>
     * <code>Memory</code> - The percentage of memory that is currently in use on the
     * instance. This metric identifies the amount of memory required to run an
     * application on the instance.</p> <p>Units: Percent</p>  <p>The
     * <code>Memory</code> metric is returned only for resources that have the unified
     * CloudWatch agent installed on them. For more information, see <a
     * href="https://docs.aws.amazon.com/compute-optimizer/latest/ug/metrics.html#cw-agent">Enabling
     * Memory Utilization with the CloudWatch Agent</a>.</p>  </li> <li> <p>
     * <code>EBS_READ_OPS_PER_SECOND</code> - The completed read operations from all
     * EBS volumes attached to the instance in a specified period of time.</p> <p>Unit:
     * Count</p> </li> <li> <p> <code>EBS_WRITE_OPS_PER_SECOND</code> - The completed
     * write operations to all EBS volumes attached to the instance in a specified
     * period of time.</p> <p>Unit: Count</p> </li> <li> <p>
     * <code>EBS_READ_BYTES_PER_SECOND</code> - The bytes read from all EBS volumes
     * attached to the instance in a specified period of time.</p> <p>Unit: Bytes</p>
     * </li> <li> <p> <code>EBS_WRITE_BYTES_PER_SECOND</code> - The bytes written to
     * all EBS volumes attached to the instance in a specified period of time.</p>
     * <p>Unit: Bytes</p> </li> </ul>
     */
    inline void SetName(const MetricName& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the utilization metric.</p> <p>The following utilization metrics
     * are available:</p> <ul> <li> <p> <code>Cpu</code> - The percentage of allocated
     * EC2 compute units that are currently in use on the instance. This metric
     * identifies the processing power required to run an application on the
     * instance.</p> <p>Depending on the instance type, tools in your operating system
     * can show a lower percentage than CloudWatch when the instance is not allocated a
     * full processor core.</p> <p>Units: Percent</p> </li> <li> <p>
     * <code>Memory</code> - The percentage of memory that is currently in use on the
     * instance. This metric identifies the amount of memory required to run an
     * application on the instance.</p> <p>Units: Percent</p>  <p>The
     * <code>Memory</code> metric is returned only for resources that have the unified
     * CloudWatch agent installed on them. For more information, see <a
     * href="https://docs.aws.amazon.com/compute-optimizer/latest/ug/metrics.html#cw-agent">Enabling
     * Memory Utilization with the CloudWatch Agent</a>.</p>  </li> <li> <p>
     * <code>EBS_READ_OPS_PER_SECOND</code> - The completed read operations from all
     * EBS volumes attached to the instance in a specified period of time.</p> <p>Unit:
     * Count</p> </li> <li> <p> <code>EBS_WRITE_OPS_PER_SECOND</code> - The completed
     * write operations to all EBS volumes attached to the instance in a specified
     * period of time.</p> <p>Unit: Count</p> </li> <li> <p>
     * <code>EBS_READ_BYTES_PER_SECOND</code> - The bytes read from all EBS volumes
     * attached to the instance in a specified period of time.</p> <p>Unit: Bytes</p>
     * </li> <li> <p> <code>EBS_WRITE_BYTES_PER_SECOND</code> - The bytes written to
     * all EBS volumes attached to the instance in a specified period of time.</p>
     * <p>Unit: Bytes</p> </li> </ul>
     */
    inline void SetName(MetricName&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the utilization metric.</p> <p>The following utilization metrics
     * are available:</p> <ul> <li> <p> <code>Cpu</code> - The percentage of allocated
     * EC2 compute units that are currently in use on the instance. This metric
     * identifies the processing power required to run an application on the
     * instance.</p> <p>Depending on the instance type, tools in your operating system
     * can show a lower percentage than CloudWatch when the instance is not allocated a
     * full processor core.</p> <p>Units: Percent</p> </li> <li> <p>
     * <code>Memory</code> - The percentage of memory that is currently in use on the
     * instance. This metric identifies the amount of memory required to run an
     * application on the instance.</p> <p>Units: Percent</p>  <p>The
     * <code>Memory</code> metric is returned only for resources that have the unified
     * CloudWatch agent installed on them. For more information, see <a
     * href="https://docs.aws.amazon.com/compute-optimizer/latest/ug/metrics.html#cw-agent">Enabling
     * Memory Utilization with the CloudWatch Agent</a>.</p>  </li> <li> <p>
     * <code>EBS_READ_OPS_PER_SECOND</code> - The completed read operations from all
     * EBS volumes attached to the instance in a specified period of time.</p> <p>Unit:
     * Count</p> </li> <li> <p> <code>EBS_WRITE_OPS_PER_SECOND</code> - The completed
     * write operations to all EBS volumes attached to the instance in a specified
     * period of time.</p> <p>Unit: Count</p> </li> <li> <p>
     * <code>EBS_READ_BYTES_PER_SECOND</code> - The bytes read from all EBS volumes
     * attached to the instance in a specified period of time.</p> <p>Unit: Bytes</p>
     * </li> <li> <p> <code>EBS_WRITE_BYTES_PER_SECOND</code> - The bytes written to
     * all EBS volumes attached to the instance in a specified period of time.</p>
     * <p>Unit: Bytes</p> </li> </ul>
     */
    inline UtilizationMetric& WithName(const MetricName& value) { SetName(value); return *this;}

    /**
     * <p>The name of the utilization metric.</p> <p>The following utilization metrics
     * are available:</p> <ul> <li> <p> <code>Cpu</code> - The percentage of allocated
     * EC2 compute units that are currently in use on the instance. This metric
     * identifies the processing power required to run an application on the
     * instance.</p> <p>Depending on the instance type, tools in your operating system
     * can show a lower percentage than CloudWatch when the instance is not allocated a
     * full processor core.</p> <p>Units: Percent</p> </li> <li> <p>
     * <code>Memory</code> - The percentage of memory that is currently in use on the
     * instance. This metric identifies the amount of memory required to run an
     * application on the instance.</p> <p>Units: Percent</p>  <p>The
     * <code>Memory</code> metric is returned only for resources that have the unified
     * CloudWatch agent installed on them. For more information, see <a
     * href="https://docs.aws.amazon.com/compute-optimizer/latest/ug/metrics.html#cw-agent">Enabling
     * Memory Utilization with the CloudWatch Agent</a>.</p>  </li> <li> <p>
     * <code>EBS_READ_OPS_PER_SECOND</code> - The completed read operations from all
     * EBS volumes attached to the instance in a specified period of time.</p> <p>Unit:
     * Count</p> </li> <li> <p> <code>EBS_WRITE_OPS_PER_SECOND</code> - The completed
     * write operations to all EBS volumes attached to the instance in a specified
     * period of time.</p> <p>Unit: Count</p> </li> <li> <p>
     * <code>EBS_READ_BYTES_PER_SECOND</code> - The bytes read from all EBS volumes
     * attached to the instance in a specified period of time.</p> <p>Unit: Bytes</p>
     * </li> <li> <p> <code>EBS_WRITE_BYTES_PER_SECOND</code> - The bytes written to
     * all EBS volumes attached to the instance in a specified period of time.</p>
     * <p>Unit: Bytes</p> </li> </ul>
     */
    inline UtilizationMetric& WithName(MetricName&& value) { SetName(std::move(value)); return *this;}


    /**
     * <p>The statistic of the utilization metric.</p> <p>The following statistics are
     * available:</p> <ul> <li> <p> <code>Average</code> - This is the value of Sum /
     * SampleCount during the specified period, or the average value observed during
     * the specified period.</p> </li> <li> <p> <code>Maximum</code> - The highest
     * value observed during the specified period. Use this value to determine high
     * volumes of activity for your application.</p> </li> </ul>
     */
    inline const MetricStatistic& GetStatistic() const{ return m_statistic; }

    /**
     * <p>The statistic of the utilization metric.</p> <p>The following statistics are
     * available:</p> <ul> <li> <p> <code>Average</code> - This is the value of Sum /
     * SampleCount during the specified period, or the average value observed during
     * the specified period.</p> </li> <li> <p> <code>Maximum</code> - The highest
     * value observed during the specified period. Use this value to determine high
     * volumes of activity for your application.</p> </li> </ul>
     */
    inline bool StatisticHasBeenSet() const { return m_statisticHasBeenSet; }

    /**
     * <p>The statistic of the utilization metric.</p> <p>The following statistics are
     * available:</p> <ul> <li> <p> <code>Average</code> - This is the value of Sum /
     * SampleCount during the specified period, or the average value observed during
     * the specified period.</p> </li> <li> <p> <code>Maximum</code> - The highest
     * value observed during the specified period. Use this value to determine high
     * volumes of activity for your application.</p> </li> </ul>
     */
    inline void SetStatistic(const MetricStatistic& value) { m_statisticHasBeenSet = true; m_statistic = value; }

    /**
     * <p>The statistic of the utilization metric.</p> <p>The following statistics are
     * available:</p> <ul> <li> <p> <code>Average</code> - This is the value of Sum /
     * SampleCount during the specified period, or the average value observed during
     * the specified period.</p> </li> <li> <p> <code>Maximum</code> - The highest
     * value observed during the specified period. Use this value to determine high
     * volumes of activity for your application.</p> </li> </ul>
     */
    inline void SetStatistic(MetricStatistic&& value) { m_statisticHasBeenSet = true; m_statistic = std::move(value); }

    /**
     * <p>The statistic of the utilization metric.</p> <p>The following statistics are
     * available:</p> <ul> <li> <p> <code>Average</code> - This is the value of Sum /
     * SampleCount during the specified period, or the average value observed during
     * the specified period.</p> </li> <li> <p> <code>Maximum</code> - The highest
     * value observed during the specified period. Use this value to determine high
     * volumes of activity for your application.</p> </li> </ul>
     */
    inline UtilizationMetric& WithStatistic(const MetricStatistic& value) { SetStatistic(value); return *this;}

    /**
     * <p>The statistic of the utilization metric.</p> <p>The following statistics are
     * available:</p> <ul> <li> <p> <code>Average</code> - This is the value of Sum /
     * SampleCount during the specified period, or the average value observed during
     * the specified period.</p> </li> <li> <p> <code>Maximum</code> - The highest
     * value observed during the specified period. Use this value to determine high
     * volumes of activity for your application.</p> </li> </ul>
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
