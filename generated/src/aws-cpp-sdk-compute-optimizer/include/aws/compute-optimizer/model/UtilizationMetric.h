﻿/**
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
  class UtilizationMetric
  {
  public:
    AWS_COMPUTEOPTIMIZER_API UtilizationMetric() = default;
    AWS_COMPUTEOPTIMIZER_API UtilizationMetric(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API UtilizationMetric& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
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
     * <code>GPU</code> - The percentage of allocated GPUs that currently run on the
     * instance.</p> </li> <li> <p> <code>GPU_MEMORY</code> - The percentage of total
     * GPU memory that currently runs on the instance.</p>  <p>The
     * <code>GPU</code> and <code>GPU_MEMORY</code> metrics are only returned for
     * resources with the unified CloudWatch Agent installed on them. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/compute-optimizer/latest/ug/metrics.html#nvidia-cw-agent">Enabling
     * NVIDIA GPU utilization with the CloudWatch Agent</a>.</p>  </li> <li> <p>
     * <code>EBS_READ_OPS_PER_SECOND</code> - The completed read operations from all
     * EBS volumes attached to the instance in a specified period of time.</p> <p>Unit:
     * Count</p> </li> <li> <p> <code>EBS_WRITE_OPS_PER_SECOND</code> - The completed
     * write operations to all EBS volumes attached to the instance in a specified
     * period of time.</p> <p>Unit: Count</p> </li> <li> <p>
     * <code>EBS_READ_BYTES_PER_SECOND</code> - The bytes read from all EBS volumes
     * attached to the instance in a specified period of time.</p> <p>Unit: Bytes</p>
     * </li> <li> <p> <code>EBS_WRITE_BYTES_PER_SECOND</code> - The bytes written to
     * all EBS volumes attached to the instance in a specified period of time.</p>
     * <p>Unit: Bytes</p> </li> <li> <p> <code>DISK_READ_OPS_PER_SECOND</code> - The
     * completed read operations from all instance store volumes available to the
     * instance in a specified period of time.</p> <p>If there are no instance store
     * volumes, either the value is <code>0</code> or the metric is not reported.</p>
     * </li> <li> <p> <code>DISK_WRITE_OPS_PER_SECOND</code> - The completed write
     * operations from all instance store volumes available to the instance in a
     * specified period of time.</p> <p>If there are no instance store volumes, either
     * the value is <code>0</code> or the metric is not reported.</p> </li> <li> <p>
     * <code>DISK_READ_BYTES_PER_SECOND</code> - The bytes read from all instance store
     * volumes available to the instance. This metric is used to determine the volume
     * of the data the application reads from the disk of the instance. This can be
     * used to determine the speed of the application.</p> <p>If there are no instance
     * store volumes, either the value is <code>0</code> or the metric is not
     * reported.</p> </li> <li> <p> <code>DISK_WRITE_BYTES_PER_SECOND</code> - The
     * bytes written to all instance store volumes available to the instance. This
     * metric is used to determine the volume of the data the application writes onto
     * the disk of the instance. This can be used to determine the speed of the
     * application.</p> <p>If there are no instance store volumes, either the value is
     * <code>0</code> or the metric is not reported.</p> </li> <li> <p>
     * <code>NETWORK_IN_BYTES_PER_SECOND</code> - The number of bytes received by the
     * instance on all network interfaces. This metric identifies the volume of
     * incoming network traffic to a single instance.</p> </li> <li> <p>
     * <code>NETWORK_OUT_BYTES_PER_SECOND</code> - The number of bytes sent out by the
     * instance on all network interfaces. This metric identifies the volume of
     * outgoing network traffic from a single instance.</p> </li> <li> <p>
     * <code>NETWORK_PACKETS_IN_PER_SECOND</code> - The number of packets received by
     * the instance on all network interfaces. This metric identifies the volume of
     * incoming traffic in terms of the number of packets on a single instance.</p>
     * </li> <li> <p> <code>NETWORK_PACKETS_OUT_PER_SECOND</code> - The number of
     * packets sent out by the instance on all network interfaces. This metric
     * identifies the volume of outgoing traffic in terms of the number of packets on a
     * single instance.</p> </li> </ul>
     */
    inline MetricName GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(MetricName value) { m_nameHasBeenSet = true; m_name = value; }
    inline UtilizationMetric& WithName(MetricName value) { SetName(value); return *this;}
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
    inline MetricStatistic GetStatistic() const { return m_statistic; }
    inline bool StatisticHasBeenSet() const { return m_statisticHasBeenSet; }
    inline void SetStatistic(MetricStatistic value) { m_statisticHasBeenSet = true; m_statistic = value; }
    inline UtilizationMetric& WithStatistic(MetricStatistic value) { SetStatistic(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value of the utilization metric.</p>
     */
    inline double GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    inline void SetValue(double value) { m_valueHasBeenSet = true; m_value = value; }
    inline UtilizationMetric& WithValue(double value) { SetValue(value); return *this;}
    ///@}
  private:

    MetricName m_name{MetricName::NOT_SET};
    bool m_nameHasBeenSet = false;

    MetricStatistic m_statistic{MetricStatistic::NOT_SET};
    bool m_statisticHasBeenSet = false;

    double m_value{0.0};
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
