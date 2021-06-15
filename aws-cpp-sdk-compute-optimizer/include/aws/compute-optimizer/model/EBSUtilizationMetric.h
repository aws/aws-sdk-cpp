/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer/ComputeOptimizer_EXPORTS.h>
#include <aws/compute-optimizer/model/EBSMetricName.h>
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
   * <p>Describes a utilization metric of an Amazon Elastic Block Store (Amazon EBS)
   * volume.</p> <p>Compare the utilization metric data of your resource against its
   * projected utilization metric data to determine the performance difference
   * between your current resource and the recommended option.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-2019-11-01/EBSUtilizationMetric">AWS
   * API Reference</a></p>
   */
  class AWS_COMPUTEOPTIMIZER_API EBSUtilizationMetric
  {
  public:
    EBSUtilizationMetric();
    EBSUtilizationMetric(Aws::Utils::Json::JsonView jsonValue);
    EBSUtilizationMetric& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the utilization metric.</p> <p>The following utilization metrics
     * are available:</p> <ul> <li> <p> <code>VolumeReadOpsPerSecond</code> - The
     * completed read operations per second from the volume in a specified period of
     * time.</p> <p>Unit: Count</p> </li> <li> <p> <code>VolumeWriteOpsPerSecond</code>
     * - The completed write operations per second to the volume in a specified period
     * of time.</p> <p>Unit: Count</p> </li> <li> <p>
     * <code>VolumeReadBytesPerSecond</code> - The bytes read per second from the
     * volume in a specified period of time.</p> <p>Unit: Bytes</p> </li> <li> <p>
     * <code>VolumeWriteBytesPerSecond</code> - The bytes written to the volume in a
     * specified period of time.</p> <p>Unit: Bytes</p> </li> </ul>
     */
    inline const EBSMetricName& GetName() const{ return m_name; }

    /**
     * <p>The name of the utilization metric.</p> <p>The following utilization metrics
     * are available:</p> <ul> <li> <p> <code>VolumeReadOpsPerSecond</code> - The
     * completed read operations per second from the volume in a specified period of
     * time.</p> <p>Unit: Count</p> </li> <li> <p> <code>VolumeWriteOpsPerSecond</code>
     * - The completed write operations per second to the volume in a specified period
     * of time.</p> <p>Unit: Count</p> </li> <li> <p>
     * <code>VolumeReadBytesPerSecond</code> - The bytes read per second from the
     * volume in a specified period of time.</p> <p>Unit: Bytes</p> </li> <li> <p>
     * <code>VolumeWriteBytesPerSecond</code> - The bytes written to the volume in a
     * specified period of time.</p> <p>Unit: Bytes</p> </li> </ul>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the utilization metric.</p> <p>The following utilization metrics
     * are available:</p> <ul> <li> <p> <code>VolumeReadOpsPerSecond</code> - The
     * completed read operations per second from the volume in a specified period of
     * time.</p> <p>Unit: Count</p> </li> <li> <p> <code>VolumeWriteOpsPerSecond</code>
     * - The completed write operations per second to the volume in a specified period
     * of time.</p> <p>Unit: Count</p> </li> <li> <p>
     * <code>VolumeReadBytesPerSecond</code> - The bytes read per second from the
     * volume in a specified period of time.</p> <p>Unit: Bytes</p> </li> <li> <p>
     * <code>VolumeWriteBytesPerSecond</code> - The bytes written to the volume in a
     * specified period of time.</p> <p>Unit: Bytes</p> </li> </ul>
     */
    inline void SetName(const EBSMetricName& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the utilization metric.</p> <p>The following utilization metrics
     * are available:</p> <ul> <li> <p> <code>VolumeReadOpsPerSecond</code> - The
     * completed read operations per second from the volume in a specified period of
     * time.</p> <p>Unit: Count</p> </li> <li> <p> <code>VolumeWriteOpsPerSecond</code>
     * - The completed write operations per second to the volume in a specified period
     * of time.</p> <p>Unit: Count</p> </li> <li> <p>
     * <code>VolumeReadBytesPerSecond</code> - The bytes read per second from the
     * volume in a specified period of time.</p> <p>Unit: Bytes</p> </li> <li> <p>
     * <code>VolumeWriteBytesPerSecond</code> - The bytes written to the volume in a
     * specified period of time.</p> <p>Unit: Bytes</p> </li> </ul>
     */
    inline void SetName(EBSMetricName&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the utilization metric.</p> <p>The following utilization metrics
     * are available:</p> <ul> <li> <p> <code>VolumeReadOpsPerSecond</code> - The
     * completed read operations per second from the volume in a specified period of
     * time.</p> <p>Unit: Count</p> </li> <li> <p> <code>VolumeWriteOpsPerSecond</code>
     * - The completed write operations per second to the volume in a specified period
     * of time.</p> <p>Unit: Count</p> </li> <li> <p>
     * <code>VolumeReadBytesPerSecond</code> - The bytes read per second from the
     * volume in a specified period of time.</p> <p>Unit: Bytes</p> </li> <li> <p>
     * <code>VolumeWriteBytesPerSecond</code> - The bytes written to the volume in a
     * specified period of time.</p> <p>Unit: Bytes</p> </li> </ul>
     */
    inline EBSUtilizationMetric& WithName(const EBSMetricName& value) { SetName(value); return *this;}

    /**
     * <p>The name of the utilization metric.</p> <p>The following utilization metrics
     * are available:</p> <ul> <li> <p> <code>VolumeReadOpsPerSecond</code> - The
     * completed read operations per second from the volume in a specified period of
     * time.</p> <p>Unit: Count</p> </li> <li> <p> <code>VolumeWriteOpsPerSecond</code>
     * - The completed write operations per second to the volume in a specified period
     * of time.</p> <p>Unit: Count</p> </li> <li> <p>
     * <code>VolumeReadBytesPerSecond</code> - The bytes read per second from the
     * volume in a specified period of time.</p> <p>Unit: Bytes</p> </li> <li> <p>
     * <code>VolumeWriteBytesPerSecond</code> - The bytes written to the volume in a
     * specified period of time.</p> <p>Unit: Bytes</p> </li> </ul>
     */
    inline EBSUtilizationMetric& WithName(EBSMetricName&& value) { SetName(std::move(value)); return *this;}


    /**
     * <p>The statistic of the utilization metric.</p> <p>The Compute Optimizer API,
     * AWS Command Line Interface (AWS CLI), and SDKs return utilization metrics using
     * only the <code>Maximum</code> statistic, which is the highest value observed
     * during the specified period.</p> <p>The Compute Optimizer console displays
     * graphs for some utilization metrics using the <code>Average</code> statistic,
     * which is the value of <code>Sum</code> / <code>SampleCount</code> during the
     * specified period. For more information, see <a
     * href="https://docs.aws.amazon.com/compute-optimizer/latest/ug/viewing-recommendations.html">Viewing
     * resource recommendations</a> in the <i>AWS Compute Optimizer User Guide</i>. You
     * can also get averaged utilization metric data for your resources using Amazon
     * CloudWatch. For more information, see the <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/WhatIsCloudWatch.html">Amazon
     * CloudWatch User Guide</a>.</p>
     */
    inline const MetricStatistic& GetStatistic() const{ return m_statistic; }

    /**
     * <p>The statistic of the utilization metric.</p> <p>The Compute Optimizer API,
     * AWS Command Line Interface (AWS CLI), and SDKs return utilization metrics using
     * only the <code>Maximum</code> statistic, which is the highest value observed
     * during the specified period.</p> <p>The Compute Optimizer console displays
     * graphs for some utilization metrics using the <code>Average</code> statistic,
     * which is the value of <code>Sum</code> / <code>SampleCount</code> during the
     * specified period. For more information, see <a
     * href="https://docs.aws.amazon.com/compute-optimizer/latest/ug/viewing-recommendations.html">Viewing
     * resource recommendations</a> in the <i>AWS Compute Optimizer User Guide</i>. You
     * can also get averaged utilization metric data for your resources using Amazon
     * CloudWatch. For more information, see the <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/WhatIsCloudWatch.html">Amazon
     * CloudWatch User Guide</a>.</p>
     */
    inline bool StatisticHasBeenSet() const { return m_statisticHasBeenSet; }

    /**
     * <p>The statistic of the utilization metric.</p> <p>The Compute Optimizer API,
     * AWS Command Line Interface (AWS CLI), and SDKs return utilization metrics using
     * only the <code>Maximum</code> statistic, which is the highest value observed
     * during the specified period.</p> <p>The Compute Optimizer console displays
     * graphs for some utilization metrics using the <code>Average</code> statistic,
     * which is the value of <code>Sum</code> / <code>SampleCount</code> during the
     * specified period. For more information, see <a
     * href="https://docs.aws.amazon.com/compute-optimizer/latest/ug/viewing-recommendations.html">Viewing
     * resource recommendations</a> in the <i>AWS Compute Optimizer User Guide</i>. You
     * can also get averaged utilization metric data for your resources using Amazon
     * CloudWatch. For more information, see the <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/WhatIsCloudWatch.html">Amazon
     * CloudWatch User Guide</a>.</p>
     */
    inline void SetStatistic(const MetricStatistic& value) { m_statisticHasBeenSet = true; m_statistic = value; }

    /**
     * <p>The statistic of the utilization metric.</p> <p>The Compute Optimizer API,
     * AWS Command Line Interface (AWS CLI), and SDKs return utilization metrics using
     * only the <code>Maximum</code> statistic, which is the highest value observed
     * during the specified period.</p> <p>The Compute Optimizer console displays
     * graphs for some utilization metrics using the <code>Average</code> statistic,
     * which is the value of <code>Sum</code> / <code>SampleCount</code> during the
     * specified period. For more information, see <a
     * href="https://docs.aws.amazon.com/compute-optimizer/latest/ug/viewing-recommendations.html">Viewing
     * resource recommendations</a> in the <i>AWS Compute Optimizer User Guide</i>. You
     * can also get averaged utilization metric data for your resources using Amazon
     * CloudWatch. For more information, see the <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/WhatIsCloudWatch.html">Amazon
     * CloudWatch User Guide</a>.</p>
     */
    inline void SetStatistic(MetricStatistic&& value) { m_statisticHasBeenSet = true; m_statistic = std::move(value); }

    /**
     * <p>The statistic of the utilization metric.</p> <p>The Compute Optimizer API,
     * AWS Command Line Interface (AWS CLI), and SDKs return utilization metrics using
     * only the <code>Maximum</code> statistic, which is the highest value observed
     * during the specified period.</p> <p>The Compute Optimizer console displays
     * graphs for some utilization metrics using the <code>Average</code> statistic,
     * which is the value of <code>Sum</code> / <code>SampleCount</code> during the
     * specified period. For more information, see <a
     * href="https://docs.aws.amazon.com/compute-optimizer/latest/ug/viewing-recommendations.html">Viewing
     * resource recommendations</a> in the <i>AWS Compute Optimizer User Guide</i>. You
     * can also get averaged utilization metric data for your resources using Amazon
     * CloudWatch. For more information, see the <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/WhatIsCloudWatch.html">Amazon
     * CloudWatch User Guide</a>.</p>
     */
    inline EBSUtilizationMetric& WithStatistic(const MetricStatistic& value) { SetStatistic(value); return *this;}

    /**
     * <p>The statistic of the utilization metric.</p> <p>The Compute Optimizer API,
     * AWS Command Line Interface (AWS CLI), and SDKs return utilization metrics using
     * only the <code>Maximum</code> statistic, which is the highest value observed
     * during the specified period.</p> <p>The Compute Optimizer console displays
     * graphs for some utilization metrics using the <code>Average</code> statistic,
     * which is the value of <code>Sum</code> / <code>SampleCount</code> during the
     * specified period. For more information, see <a
     * href="https://docs.aws.amazon.com/compute-optimizer/latest/ug/viewing-recommendations.html">Viewing
     * resource recommendations</a> in the <i>AWS Compute Optimizer User Guide</i>. You
     * can also get averaged utilization metric data for your resources using Amazon
     * CloudWatch. For more information, see the <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/WhatIsCloudWatch.html">Amazon
     * CloudWatch User Guide</a>.</p>
     */
    inline EBSUtilizationMetric& WithStatistic(MetricStatistic&& value) { SetStatistic(std::move(value)); return *this;}


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
    inline EBSUtilizationMetric& WithValue(double value) { SetValue(value); return *this;}

  private:

    EBSMetricName m_name;
    bool m_nameHasBeenSet;

    MetricStatistic m_statistic;
    bool m_statisticHasBeenSet;

    double m_value;
    bool m_valueHasBeenSet;
  };

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
