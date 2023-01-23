/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/lightsail/LightsailRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lightsail/model/InstanceMetricName.h>
#include <aws/core/utils/DateTime.h>
#include <aws/lightsail/model/MetricUnit.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lightsail/model/MetricStatistic.h>
#include <utility>

namespace Aws
{
namespace Lightsail
{
namespace Model
{

  /**
   */
  class GetInstanceMetricDataRequest : public LightsailRequest
  {
  public:
    AWS_LIGHTSAIL_API GetInstanceMetricDataRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetInstanceMetricData"; }

    AWS_LIGHTSAIL_API Aws::String SerializePayload() const override;

    AWS_LIGHTSAIL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the instance for which you want to get metrics data.</p>
     */
    inline const Aws::String& GetInstanceName() const{ return m_instanceName; }

    /**
     * <p>The name of the instance for which you want to get metrics data.</p>
     */
    inline bool InstanceNameHasBeenSet() const { return m_instanceNameHasBeenSet; }

    /**
     * <p>The name of the instance for which you want to get metrics data.</p>
     */
    inline void SetInstanceName(const Aws::String& value) { m_instanceNameHasBeenSet = true; m_instanceName = value; }

    /**
     * <p>The name of the instance for which you want to get metrics data.</p>
     */
    inline void SetInstanceName(Aws::String&& value) { m_instanceNameHasBeenSet = true; m_instanceName = std::move(value); }

    /**
     * <p>The name of the instance for which you want to get metrics data.</p>
     */
    inline void SetInstanceName(const char* value) { m_instanceNameHasBeenSet = true; m_instanceName.assign(value); }

    /**
     * <p>The name of the instance for which you want to get metrics data.</p>
     */
    inline GetInstanceMetricDataRequest& WithInstanceName(const Aws::String& value) { SetInstanceName(value); return *this;}

    /**
     * <p>The name of the instance for which you want to get metrics data.</p>
     */
    inline GetInstanceMetricDataRequest& WithInstanceName(Aws::String&& value) { SetInstanceName(std::move(value)); return *this;}

    /**
     * <p>The name of the instance for which you want to get metrics data.</p>
     */
    inline GetInstanceMetricDataRequest& WithInstanceName(const char* value) { SetInstanceName(value); return *this;}


    /**
     * <p>The metric for which you want to return information.</p> <p>Valid instance
     * metric names are listed below, along with the most useful
     * <code>statistics</code> to include in your request, and the published
     * <code>unit</code> value.</p> <ul> <li> <p> <b>
     * <code>BurstCapacityPercentage</code> </b> - The percentage of CPU performance
     * available for your instance to burst above its baseline. Your instance
     * continuously accrues and consumes burst capacity. Burst capacity stops accruing
     * when your instance's <code>BurstCapacityPercentage</code> reaches 100%. For more
     * information, see <a
     * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-viewing-instance-burst-capacity">Viewing
     * instance burst capacity in Amazon Lightsail</a>.</p> <p>
     * <code>Statistics</code>: The most useful statistics are <code>Maximum</code> and
     * <code>Average</code>.</p> <p> <code>Unit</code>: The published unit is
     * <code>Percent</code>.</p> </li> <li> <p> <b> <code>BurstCapacityTime</code> </b>
     * - The available amount of time for your instance to burst at 100% CPU
     * utilization. Your instance continuously accrues and consumes burst capacity.
     * Burst capacity time stops accruing when your instance's
     * <code>BurstCapacityPercentage</code> metric reaches 100%.</p> <p>Burst capacity
     * time is consumed at the full rate only when your instance operates at 100% CPU
     * utilization. For example, if your instance operates at 50% CPU utilization in
     * the burstable zone for a 5-minute period, then it consumes CPU burst capacity
     * minutes at a 50% rate in that period. Your instance consumed 2 minutes and 30
     * seconds of CPU burst capacity minutes in the 5-minute period. For more
     * information, see <a
     * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-viewing-instance-burst-capacity">Viewing
     * instance burst capacity in Amazon Lightsail</a>.</p> <p>
     * <code>Statistics</code>: The most useful statistics are <code>Maximum</code> and
     * <code>Average</code>.</p> <p> <code>Unit</code>: The published unit is
     * <code>Seconds</code>.</p> </li> <li> <p> <b> <code>CPUUtilization</code> </b> -
     * The percentage of allocated compute units that are currently in use on the
     * instance. This metric identifies the processing power to run the applications on
     * the instance. Tools in your operating system can show a lower percentage than
     * Lightsail when the instance is not allocated a full processor core.</p> <p>
     * <code>Statistics</code>: The most useful statistics are <code>Maximum</code> and
     * <code>Average</code>.</p> <p> <code>Unit</code>: The published unit is
     * <code>Percent</code>.</p> </li> <li> <p> <b> <code>NetworkIn</code> </b> - The
     * number of bytes received on all network interfaces by the instance. This metric
     * identifies the volume of incoming network traffic to the instance. The number
     * reported is the number of bytes received during the period. Because this metric
     * is reported in 5-minute intervals, divide the reported number by 300 to find
     * Bytes/second.</p> <p> <code>Statistics</code>: The most useful statistic is
     * <code>Sum</code>.</p> <p> <code>Unit</code>: The published unit is
     * <code>Bytes</code>.</p> </li> <li> <p> <b> <code>NetworkOut</code> </b> - The
     * number of bytes sent out on all network interfaces by the instance. This metric
     * identifies the volume of outgoing network traffic from the instance. The number
     * reported is the number of bytes sent during the period. Because this metric is
     * reported in 5-minute intervals, divide the reported number by 300 to find
     * Bytes/second.</p> <p> <code>Statistics</code>: The most useful statistic is
     * <code>Sum</code>.</p> <p> <code>Unit</code>: The published unit is
     * <code>Bytes</code>.</p> </li> <li> <p> <b> <code>StatusCheckFailed</code> </b> -
     * Reports whether the instance passed or failed both the instance status check and
     * the system status check. This metric can be either 0 (passed) or 1 (failed).
     * This metric data is available in 1-minute (60 seconds) granularity.</p> <p>
     * <code>Statistics</code>: The most useful statistic is <code>Sum</code>.</p> <p>
     * <code>Unit</code>: The published unit is <code>Count</code>.</p> </li> <li> <p>
     * <b> <code>StatusCheckFailed_Instance</code> </b> - Reports whether the instance
     * passed or failed the instance status check. This metric can be either 0 (passed)
     * or 1 (failed). This metric data is available in 1-minute (60 seconds)
     * granularity.</p> <p> <code>Statistics</code>: The most useful statistic is
     * <code>Sum</code>.</p> <p> <code>Unit</code>: The published unit is
     * <code>Count</code>.</p> </li> <li> <p> <b> <code>StatusCheckFailed_System</code>
     * </b> - Reports whether the instance passed or failed the system status check.
     * This metric can be either 0 (passed) or 1 (failed). This metric data is
     * available in 1-minute (60 seconds) granularity.</p> <p> <code>Statistics</code>:
     * The most useful statistic is <code>Sum</code>.</p> <p> <code>Unit</code>: The
     * published unit is <code>Count</code>.</p> </li> <li> <p> <b>
     * <code>MetadataNoToken</code> </b> - Reports the number of times that the
     * instance metadata service was successfully accessed without a token. This metric
     * determines if there are any processes accessing instance metadata by using
     * Instance Metadata Service Version 1, which doesn't use a token. If all requests
     * use token-backed sessions, such as Instance Metadata Service Version 2, then the
     * value is 0.</p> <p> <code>Statistics</code>: The most useful statistic is
     * <code>Sum</code>.</p> <p> <code>Unit</code>: The published unit is
     * <code>Count</code>.</p> </li> </ul>
     */
    inline const InstanceMetricName& GetMetricName() const{ return m_metricName; }

    /**
     * <p>The metric for which you want to return information.</p> <p>Valid instance
     * metric names are listed below, along with the most useful
     * <code>statistics</code> to include in your request, and the published
     * <code>unit</code> value.</p> <ul> <li> <p> <b>
     * <code>BurstCapacityPercentage</code> </b> - The percentage of CPU performance
     * available for your instance to burst above its baseline. Your instance
     * continuously accrues and consumes burst capacity. Burst capacity stops accruing
     * when your instance's <code>BurstCapacityPercentage</code> reaches 100%. For more
     * information, see <a
     * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-viewing-instance-burst-capacity">Viewing
     * instance burst capacity in Amazon Lightsail</a>.</p> <p>
     * <code>Statistics</code>: The most useful statistics are <code>Maximum</code> and
     * <code>Average</code>.</p> <p> <code>Unit</code>: The published unit is
     * <code>Percent</code>.</p> </li> <li> <p> <b> <code>BurstCapacityTime</code> </b>
     * - The available amount of time for your instance to burst at 100% CPU
     * utilization. Your instance continuously accrues and consumes burst capacity.
     * Burst capacity time stops accruing when your instance's
     * <code>BurstCapacityPercentage</code> metric reaches 100%.</p> <p>Burst capacity
     * time is consumed at the full rate only when your instance operates at 100% CPU
     * utilization. For example, if your instance operates at 50% CPU utilization in
     * the burstable zone for a 5-minute period, then it consumes CPU burst capacity
     * minutes at a 50% rate in that period. Your instance consumed 2 minutes and 30
     * seconds of CPU burst capacity minutes in the 5-minute period. For more
     * information, see <a
     * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-viewing-instance-burst-capacity">Viewing
     * instance burst capacity in Amazon Lightsail</a>.</p> <p>
     * <code>Statistics</code>: The most useful statistics are <code>Maximum</code> and
     * <code>Average</code>.</p> <p> <code>Unit</code>: The published unit is
     * <code>Seconds</code>.</p> </li> <li> <p> <b> <code>CPUUtilization</code> </b> -
     * The percentage of allocated compute units that are currently in use on the
     * instance. This metric identifies the processing power to run the applications on
     * the instance. Tools in your operating system can show a lower percentage than
     * Lightsail when the instance is not allocated a full processor core.</p> <p>
     * <code>Statistics</code>: The most useful statistics are <code>Maximum</code> and
     * <code>Average</code>.</p> <p> <code>Unit</code>: The published unit is
     * <code>Percent</code>.</p> </li> <li> <p> <b> <code>NetworkIn</code> </b> - The
     * number of bytes received on all network interfaces by the instance. This metric
     * identifies the volume of incoming network traffic to the instance. The number
     * reported is the number of bytes received during the period. Because this metric
     * is reported in 5-minute intervals, divide the reported number by 300 to find
     * Bytes/second.</p> <p> <code>Statistics</code>: The most useful statistic is
     * <code>Sum</code>.</p> <p> <code>Unit</code>: The published unit is
     * <code>Bytes</code>.</p> </li> <li> <p> <b> <code>NetworkOut</code> </b> - The
     * number of bytes sent out on all network interfaces by the instance. This metric
     * identifies the volume of outgoing network traffic from the instance. The number
     * reported is the number of bytes sent during the period. Because this metric is
     * reported in 5-minute intervals, divide the reported number by 300 to find
     * Bytes/second.</p> <p> <code>Statistics</code>: The most useful statistic is
     * <code>Sum</code>.</p> <p> <code>Unit</code>: The published unit is
     * <code>Bytes</code>.</p> </li> <li> <p> <b> <code>StatusCheckFailed</code> </b> -
     * Reports whether the instance passed or failed both the instance status check and
     * the system status check. This metric can be either 0 (passed) or 1 (failed).
     * This metric data is available in 1-minute (60 seconds) granularity.</p> <p>
     * <code>Statistics</code>: The most useful statistic is <code>Sum</code>.</p> <p>
     * <code>Unit</code>: The published unit is <code>Count</code>.</p> </li> <li> <p>
     * <b> <code>StatusCheckFailed_Instance</code> </b> - Reports whether the instance
     * passed or failed the instance status check. This metric can be either 0 (passed)
     * or 1 (failed). This metric data is available in 1-minute (60 seconds)
     * granularity.</p> <p> <code>Statistics</code>: The most useful statistic is
     * <code>Sum</code>.</p> <p> <code>Unit</code>: The published unit is
     * <code>Count</code>.</p> </li> <li> <p> <b> <code>StatusCheckFailed_System</code>
     * </b> - Reports whether the instance passed or failed the system status check.
     * This metric can be either 0 (passed) or 1 (failed). This metric data is
     * available in 1-minute (60 seconds) granularity.</p> <p> <code>Statistics</code>:
     * The most useful statistic is <code>Sum</code>.</p> <p> <code>Unit</code>: The
     * published unit is <code>Count</code>.</p> </li> <li> <p> <b>
     * <code>MetadataNoToken</code> </b> - Reports the number of times that the
     * instance metadata service was successfully accessed without a token. This metric
     * determines if there are any processes accessing instance metadata by using
     * Instance Metadata Service Version 1, which doesn't use a token. If all requests
     * use token-backed sessions, such as Instance Metadata Service Version 2, then the
     * value is 0.</p> <p> <code>Statistics</code>: The most useful statistic is
     * <code>Sum</code>.</p> <p> <code>Unit</code>: The published unit is
     * <code>Count</code>.</p> </li> </ul>
     */
    inline bool MetricNameHasBeenSet() const { return m_metricNameHasBeenSet; }

    /**
     * <p>The metric for which you want to return information.</p> <p>Valid instance
     * metric names are listed below, along with the most useful
     * <code>statistics</code> to include in your request, and the published
     * <code>unit</code> value.</p> <ul> <li> <p> <b>
     * <code>BurstCapacityPercentage</code> </b> - The percentage of CPU performance
     * available for your instance to burst above its baseline. Your instance
     * continuously accrues and consumes burst capacity. Burst capacity stops accruing
     * when your instance's <code>BurstCapacityPercentage</code> reaches 100%. For more
     * information, see <a
     * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-viewing-instance-burst-capacity">Viewing
     * instance burst capacity in Amazon Lightsail</a>.</p> <p>
     * <code>Statistics</code>: The most useful statistics are <code>Maximum</code> and
     * <code>Average</code>.</p> <p> <code>Unit</code>: The published unit is
     * <code>Percent</code>.</p> </li> <li> <p> <b> <code>BurstCapacityTime</code> </b>
     * - The available amount of time for your instance to burst at 100% CPU
     * utilization. Your instance continuously accrues and consumes burst capacity.
     * Burst capacity time stops accruing when your instance's
     * <code>BurstCapacityPercentage</code> metric reaches 100%.</p> <p>Burst capacity
     * time is consumed at the full rate only when your instance operates at 100% CPU
     * utilization. For example, if your instance operates at 50% CPU utilization in
     * the burstable zone for a 5-minute period, then it consumes CPU burst capacity
     * minutes at a 50% rate in that period. Your instance consumed 2 minutes and 30
     * seconds of CPU burst capacity minutes in the 5-minute period. For more
     * information, see <a
     * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-viewing-instance-burst-capacity">Viewing
     * instance burst capacity in Amazon Lightsail</a>.</p> <p>
     * <code>Statistics</code>: The most useful statistics are <code>Maximum</code> and
     * <code>Average</code>.</p> <p> <code>Unit</code>: The published unit is
     * <code>Seconds</code>.</p> </li> <li> <p> <b> <code>CPUUtilization</code> </b> -
     * The percentage of allocated compute units that are currently in use on the
     * instance. This metric identifies the processing power to run the applications on
     * the instance. Tools in your operating system can show a lower percentage than
     * Lightsail when the instance is not allocated a full processor core.</p> <p>
     * <code>Statistics</code>: The most useful statistics are <code>Maximum</code> and
     * <code>Average</code>.</p> <p> <code>Unit</code>: The published unit is
     * <code>Percent</code>.</p> </li> <li> <p> <b> <code>NetworkIn</code> </b> - The
     * number of bytes received on all network interfaces by the instance. This metric
     * identifies the volume of incoming network traffic to the instance. The number
     * reported is the number of bytes received during the period. Because this metric
     * is reported in 5-minute intervals, divide the reported number by 300 to find
     * Bytes/second.</p> <p> <code>Statistics</code>: The most useful statistic is
     * <code>Sum</code>.</p> <p> <code>Unit</code>: The published unit is
     * <code>Bytes</code>.</p> </li> <li> <p> <b> <code>NetworkOut</code> </b> - The
     * number of bytes sent out on all network interfaces by the instance. This metric
     * identifies the volume of outgoing network traffic from the instance. The number
     * reported is the number of bytes sent during the period. Because this metric is
     * reported in 5-minute intervals, divide the reported number by 300 to find
     * Bytes/second.</p> <p> <code>Statistics</code>: The most useful statistic is
     * <code>Sum</code>.</p> <p> <code>Unit</code>: The published unit is
     * <code>Bytes</code>.</p> </li> <li> <p> <b> <code>StatusCheckFailed</code> </b> -
     * Reports whether the instance passed or failed both the instance status check and
     * the system status check. This metric can be either 0 (passed) or 1 (failed).
     * This metric data is available in 1-minute (60 seconds) granularity.</p> <p>
     * <code>Statistics</code>: The most useful statistic is <code>Sum</code>.</p> <p>
     * <code>Unit</code>: The published unit is <code>Count</code>.</p> </li> <li> <p>
     * <b> <code>StatusCheckFailed_Instance</code> </b> - Reports whether the instance
     * passed or failed the instance status check. This metric can be either 0 (passed)
     * or 1 (failed). This metric data is available in 1-minute (60 seconds)
     * granularity.</p> <p> <code>Statistics</code>: The most useful statistic is
     * <code>Sum</code>.</p> <p> <code>Unit</code>: The published unit is
     * <code>Count</code>.</p> </li> <li> <p> <b> <code>StatusCheckFailed_System</code>
     * </b> - Reports whether the instance passed or failed the system status check.
     * This metric can be either 0 (passed) or 1 (failed). This metric data is
     * available in 1-minute (60 seconds) granularity.</p> <p> <code>Statistics</code>:
     * The most useful statistic is <code>Sum</code>.</p> <p> <code>Unit</code>: The
     * published unit is <code>Count</code>.</p> </li> <li> <p> <b>
     * <code>MetadataNoToken</code> </b> - Reports the number of times that the
     * instance metadata service was successfully accessed without a token. This metric
     * determines if there are any processes accessing instance metadata by using
     * Instance Metadata Service Version 1, which doesn't use a token. If all requests
     * use token-backed sessions, such as Instance Metadata Service Version 2, then the
     * value is 0.</p> <p> <code>Statistics</code>: The most useful statistic is
     * <code>Sum</code>.</p> <p> <code>Unit</code>: The published unit is
     * <code>Count</code>.</p> </li> </ul>
     */
    inline void SetMetricName(const InstanceMetricName& value) { m_metricNameHasBeenSet = true; m_metricName = value; }

    /**
     * <p>The metric for which you want to return information.</p> <p>Valid instance
     * metric names are listed below, along with the most useful
     * <code>statistics</code> to include in your request, and the published
     * <code>unit</code> value.</p> <ul> <li> <p> <b>
     * <code>BurstCapacityPercentage</code> </b> - The percentage of CPU performance
     * available for your instance to burst above its baseline. Your instance
     * continuously accrues and consumes burst capacity. Burst capacity stops accruing
     * when your instance's <code>BurstCapacityPercentage</code> reaches 100%. For more
     * information, see <a
     * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-viewing-instance-burst-capacity">Viewing
     * instance burst capacity in Amazon Lightsail</a>.</p> <p>
     * <code>Statistics</code>: The most useful statistics are <code>Maximum</code> and
     * <code>Average</code>.</p> <p> <code>Unit</code>: The published unit is
     * <code>Percent</code>.</p> </li> <li> <p> <b> <code>BurstCapacityTime</code> </b>
     * - The available amount of time for your instance to burst at 100% CPU
     * utilization. Your instance continuously accrues and consumes burst capacity.
     * Burst capacity time stops accruing when your instance's
     * <code>BurstCapacityPercentage</code> metric reaches 100%.</p> <p>Burst capacity
     * time is consumed at the full rate only when your instance operates at 100% CPU
     * utilization. For example, if your instance operates at 50% CPU utilization in
     * the burstable zone for a 5-minute period, then it consumes CPU burst capacity
     * minutes at a 50% rate in that period. Your instance consumed 2 minutes and 30
     * seconds of CPU burst capacity minutes in the 5-minute period. For more
     * information, see <a
     * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-viewing-instance-burst-capacity">Viewing
     * instance burst capacity in Amazon Lightsail</a>.</p> <p>
     * <code>Statistics</code>: The most useful statistics are <code>Maximum</code> and
     * <code>Average</code>.</p> <p> <code>Unit</code>: The published unit is
     * <code>Seconds</code>.</p> </li> <li> <p> <b> <code>CPUUtilization</code> </b> -
     * The percentage of allocated compute units that are currently in use on the
     * instance. This metric identifies the processing power to run the applications on
     * the instance. Tools in your operating system can show a lower percentage than
     * Lightsail when the instance is not allocated a full processor core.</p> <p>
     * <code>Statistics</code>: The most useful statistics are <code>Maximum</code> and
     * <code>Average</code>.</p> <p> <code>Unit</code>: The published unit is
     * <code>Percent</code>.</p> </li> <li> <p> <b> <code>NetworkIn</code> </b> - The
     * number of bytes received on all network interfaces by the instance. This metric
     * identifies the volume of incoming network traffic to the instance. The number
     * reported is the number of bytes received during the period. Because this metric
     * is reported in 5-minute intervals, divide the reported number by 300 to find
     * Bytes/second.</p> <p> <code>Statistics</code>: The most useful statistic is
     * <code>Sum</code>.</p> <p> <code>Unit</code>: The published unit is
     * <code>Bytes</code>.</p> </li> <li> <p> <b> <code>NetworkOut</code> </b> - The
     * number of bytes sent out on all network interfaces by the instance. This metric
     * identifies the volume of outgoing network traffic from the instance. The number
     * reported is the number of bytes sent during the period. Because this metric is
     * reported in 5-minute intervals, divide the reported number by 300 to find
     * Bytes/second.</p> <p> <code>Statistics</code>: The most useful statistic is
     * <code>Sum</code>.</p> <p> <code>Unit</code>: The published unit is
     * <code>Bytes</code>.</p> </li> <li> <p> <b> <code>StatusCheckFailed</code> </b> -
     * Reports whether the instance passed or failed both the instance status check and
     * the system status check. This metric can be either 0 (passed) or 1 (failed).
     * This metric data is available in 1-minute (60 seconds) granularity.</p> <p>
     * <code>Statistics</code>: The most useful statistic is <code>Sum</code>.</p> <p>
     * <code>Unit</code>: The published unit is <code>Count</code>.</p> </li> <li> <p>
     * <b> <code>StatusCheckFailed_Instance</code> </b> - Reports whether the instance
     * passed or failed the instance status check. This metric can be either 0 (passed)
     * or 1 (failed). This metric data is available in 1-minute (60 seconds)
     * granularity.</p> <p> <code>Statistics</code>: The most useful statistic is
     * <code>Sum</code>.</p> <p> <code>Unit</code>: The published unit is
     * <code>Count</code>.</p> </li> <li> <p> <b> <code>StatusCheckFailed_System</code>
     * </b> - Reports whether the instance passed or failed the system status check.
     * This metric can be either 0 (passed) or 1 (failed). This metric data is
     * available in 1-minute (60 seconds) granularity.</p> <p> <code>Statistics</code>:
     * The most useful statistic is <code>Sum</code>.</p> <p> <code>Unit</code>: The
     * published unit is <code>Count</code>.</p> </li> <li> <p> <b>
     * <code>MetadataNoToken</code> </b> - Reports the number of times that the
     * instance metadata service was successfully accessed without a token. This metric
     * determines if there are any processes accessing instance metadata by using
     * Instance Metadata Service Version 1, which doesn't use a token. If all requests
     * use token-backed sessions, such as Instance Metadata Service Version 2, then the
     * value is 0.</p> <p> <code>Statistics</code>: The most useful statistic is
     * <code>Sum</code>.</p> <p> <code>Unit</code>: The published unit is
     * <code>Count</code>.</p> </li> </ul>
     */
    inline void SetMetricName(InstanceMetricName&& value) { m_metricNameHasBeenSet = true; m_metricName = std::move(value); }

    /**
     * <p>The metric for which you want to return information.</p> <p>Valid instance
     * metric names are listed below, along with the most useful
     * <code>statistics</code> to include in your request, and the published
     * <code>unit</code> value.</p> <ul> <li> <p> <b>
     * <code>BurstCapacityPercentage</code> </b> - The percentage of CPU performance
     * available for your instance to burst above its baseline. Your instance
     * continuously accrues and consumes burst capacity. Burst capacity stops accruing
     * when your instance's <code>BurstCapacityPercentage</code> reaches 100%. For more
     * information, see <a
     * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-viewing-instance-burst-capacity">Viewing
     * instance burst capacity in Amazon Lightsail</a>.</p> <p>
     * <code>Statistics</code>: The most useful statistics are <code>Maximum</code> and
     * <code>Average</code>.</p> <p> <code>Unit</code>: The published unit is
     * <code>Percent</code>.</p> </li> <li> <p> <b> <code>BurstCapacityTime</code> </b>
     * - The available amount of time for your instance to burst at 100% CPU
     * utilization. Your instance continuously accrues and consumes burst capacity.
     * Burst capacity time stops accruing when your instance's
     * <code>BurstCapacityPercentage</code> metric reaches 100%.</p> <p>Burst capacity
     * time is consumed at the full rate only when your instance operates at 100% CPU
     * utilization. For example, if your instance operates at 50% CPU utilization in
     * the burstable zone for a 5-minute period, then it consumes CPU burst capacity
     * minutes at a 50% rate in that period. Your instance consumed 2 minutes and 30
     * seconds of CPU burst capacity minutes in the 5-minute period. For more
     * information, see <a
     * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-viewing-instance-burst-capacity">Viewing
     * instance burst capacity in Amazon Lightsail</a>.</p> <p>
     * <code>Statistics</code>: The most useful statistics are <code>Maximum</code> and
     * <code>Average</code>.</p> <p> <code>Unit</code>: The published unit is
     * <code>Seconds</code>.</p> </li> <li> <p> <b> <code>CPUUtilization</code> </b> -
     * The percentage of allocated compute units that are currently in use on the
     * instance. This metric identifies the processing power to run the applications on
     * the instance. Tools in your operating system can show a lower percentage than
     * Lightsail when the instance is not allocated a full processor core.</p> <p>
     * <code>Statistics</code>: The most useful statistics are <code>Maximum</code> and
     * <code>Average</code>.</p> <p> <code>Unit</code>: The published unit is
     * <code>Percent</code>.</p> </li> <li> <p> <b> <code>NetworkIn</code> </b> - The
     * number of bytes received on all network interfaces by the instance. This metric
     * identifies the volume of incoming network traffic to the instance. The number
     * reported is the number of bytes received during the period. Because this metric
     * is reported in 5-minute intervals, divide the reported number by 300 to find
     * Bytes/second.</p> <p> <code>Statistics</code>: The most useful statistic is
     * <code>Sum</code>.</p> <p> <code>Unit</code>: The published unit is
     * <code>Bytes</code>.</p> </li> <li> <p> <b> <code>NetworkOut</code> </b> - The
     * number of bytes sent out on all network interfaces by the instance. This metric
     * identifies the volume of outgoing network traffic from the instance. The number
     * reported is the number of bytes sent during the period. Because this metric is
     * reported in 5-minute intervals, divide the reported number by 300 to find
     * Bytes/second.</p> <p> <code>Statistics</code>: The most useful statistic is
     * <code>Sum</code>.</p> <p> <code>Unit</code>: The published unit is
     * <code>Bytes</code>.</p> </li> <li> <p> <b> <code>StatusCheckFailed</code> </b> -
     * Reports whether the instance passed or failed both the instance status check and
     * the system status check. This metric can be either 0 (passed) or 1 (failed).
     * This metric data is available in 1-minute (60 seconds) granularity.</p> <p>
     * <code>Statistics</code>: The most useful statistic is <code>Sum</code>.</p> <p>
     * <code>Unit</code>: The published unit is <code>Count</code>.</p> </li> <li> <p>
     * <b> <code>StatusCheckFailed_Instance</code> </b> - Reports whether the instance
     * passed or failed the instance status check. This metric can be either 0 (passed)
     * or 1 (failed). This metric data is available in 1-minute (60 seconds)
     * granularity.</p> <p> <code>Statistics</code>: The most useful statistic is
     * <code>Sum</code>.</p> <p> <code>Unit</code>: The published unit is
     * <code>Count</code>.</p> </li> <li> <p> <b> <code>StatusCheckFailed_System</code>
     * </b> - Reports whether the instance passed or failed the system status check.
     * This metric can be either 0 (passed) or 1 (failed). This metric data is
     * available in 1-minute (60 seconds) granularity.</p> <p> <code>Statistics</code>:
     * The most useful statistic is <code>Sum</code>.</p> <p> <code>Unit</code>: The
     * published unit is <code>Count</code>.</p> </li> <li> <p> <b>
     * <code>MetadataNoToken</code> </b> - Reports the number of times that the
     * instance metadata service was successfully accessed without a token. This metric
     * determines if there are any processes accessing instance metadata by using
     * Instance Metadata Service Version 1, which doesn't use a token. If all requests
     * use token-backed sessions, such as Instance Metadata Service Version 2, then the
     * value is 0.</p> <p> <code>Statistics</code>: The most useful statistic is
     * <code>Sum</code>.</p> <p> <code>Unit</code>: The published unit is
     * <code>Count</code>.</p> </li> </ul>
     */
    inline GetInstanceMetricDataRequest& WithMetricName(const InstanceMetricName& value) { SetMetricName(value); return *this;}

    /**
     * <p>The metric for which you want to return information.</p> <p>Valid instance
     * metric names are listed below, along with the most useful
     * <code>statistics</code> to include in your request, and the published
     * <code>unit</code> value.</p> <ul> <li> <p> <b>
     * <code>BurstCapacityPercentage</code> </b> - The percentage of CPU performance
     * available for your instance to burst above its baseline. Your instance
     * continuously accrues and consumes burst capacity. Burst capacity stops accruing
     * when your instance's <code>BurstCapacityPercentage</code> reaches 100%. For more
     * information, see <a
     * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-viewing-instance-burst-capacity">Viewing
     * instance burst capacity in Amazon Lightsail</a>.</p> <p>
     * <code>Statistics</code>: The most useful statistics are <code>Maximum</code> and
     * <code>Average</code>.</p> <p> <code>Unit</code>: The published unit is
     * <code>Percent</code>.</p> </li> <li> <p> <b> <code>BurstCapacityTime</code> </b>
     * - The available amount of time for your instance to burst at 100% CPU
     * utilization. Your instance continuously accrues and consumes burst capacity.
     * Burst capacity time stops accruing when your instance's
     * <code>BurstCapacityPercentage</code> metric reaches 100%.</p> <p>Burst capacity
     * time is consumed at the full rate only when your instance operates at 100% CPU
     * utilization. For example, if your instance operates at 50% CPU utilization in
     * the burstable zone for a 5-minute period, then it consumes CPU burst capacity
     * minutes at a 50% rate in that period. Your instance consumed 2 minutes and 30
     * seconds of CPU burst capacity minutes in the 5-minute period. For more
     * information, see <a
     * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-viewing-instance-burst-capacity">Viewing
     * instance burst capacity in Amazon Lightsail</a>.</p> <p>
     * <code>Statistics</code>: The most useful statistics are <code>Maximum</code> and
     * <code>Average</code>.</p> <p> <code>Unit</code>: The published unit is
     * <code>Seconds</code>.</p> </li> <li> <p> <b> <code>CPUUtilization</code> </b> -
     * The percentage of allocated compute units that are currently in use on the
     * instance. This metric identifies the processing power to run the applications on
     * the instance. Tools in your operating system can show a lower percentage than
     * Lightsail when the instance is not allocated a full processor core.</p> <p>
     * <code>Statistics</code>: The most useful statistics are <code>Maximum</code> and
     * <code>Average</code>.</p> <p> <code>Unit</code>: The published unit is
     * <code>Percent</code>.</p> </li> <li> <p> <b> <code>NetworkIn</code> </b> - The
     * number of bytes received on all network interfaces by the instance. This metric
     * identifies the volume of incoming network traffic to the instance. The number
     * reported is the number of bytes received during the period. Because this metric
     * is reported in 5-minute intervals, divide the reported number by 300 to find
     * Bytes/second.</p> <p> <code>Statistics</code>: The most useful statistic is
     * <code>Sum</code>.</p> <p> <code>Unit</code>: The published unit is
     * <code>Bytes</code>.</p> </li> <li> <p> <b> <code>NetworkOut</code> </b> - The
     * number of bytes sent out on all network interfaces by the instance. This metric
     * identifies the volume of outgoing network traffic from the instance. The number
     * reported is the number of bytes sent during the period. Because this metric is
     * reported in 5-minute intervals, divide the reported number by 300 to find
     * Bytes/second.</p> <p> <code>Statistics</code>: The most useful statistic is
     * <code>Sum</code>.</p> <p> <code>Unit</code>: The published unit is
     * <code>Bytes</code>.</p> </li> <li> <p> <b> <code>StatusCheckFailed</code> </b> -
     * Reports whether the instance passed or failed both the instance status check and
     * the system status check. This metric can be either 0 (passed) or 1 (failed).
     * This metric data is available in 1-minute (60 seconds) granularity.</p> <p>
     * <code>Statistics</code>: The most useful statistic is <code>Sum</code>.</p> <p>
     * <code>Unit</code>: The published unit is <code>Count</code>.</p> </li> <li> <p>
     * <b> <code>StatusCheckFailed_Instance</code> </b> - Reports whether the instance
     * passed or failed the instance status check. This metric can be either 0 (passed)
     * or 1 (failed). This metric data is available in 1-minute (60 seconds)
     * granularity.</p> <p> <code>Statistics</code>: The most useful statistic is
     * <code>Sum</code>.</p> <p> <code>Unit</code>: The published unit is
     * <code>Count</code>.</p> </li> <li> <p> <b> <code>StatusCheckFailed_System</code>
     * </b> - Reports whether the instance passed or failed the system status check.
     * This metric can be either 0 (passed) or 1 (failed). This metric data is
     * available in 1-minute (60 seconds) granularity.</p> <p> <code>Statistics</code>:
     * The most useful statistic is <code>Sum</code>.</p> <p> <code>Unit</code>: The
     * published unit is <code>Count</code>.</p> </li> <li> <p> <b>
     * <code>MetadataNoToken</code> </b> - Reports the number of times that the
     * instance metadata service was successfully accessed without a token. This metric
     * determines if there are any processes accessing instance metadata by using
     * Instance Metadata Service Version 1, which doesn't use a token. If all requests
     * use token-backed sessions, such as Instance Metadata Service Version 2, then the
     * value is 0.</p> <p> <code>Statistics</code>: The most useful statistic is
     * <code>Sum</code>.</p> <p> <code>Unit</code>: The published unit is
     * <code>Count</code>.</p> </li> </ul>
     */
    inline GetInstanceMetricDataRequest& WithMetricName(InstanceMetricName&& value) { SetMetricName(std::move(value)); return *this;}


    /**
     * <p>The granularity, in seconds, of the returned data points.</p> <p>The
     * <code>StatusCheckFailed</code>, <code>StatusCheckFailed_Instance</code>, and
     * <code>StatusCheckFailed_System</code> instance metric data is available in
     * 1-minute (60 seconds) granularity. All other instance metric data is available
     * in 5-minute (300 seconds) granularity.</p>
     */
    inline int GetPeriod() const{ return m_period; }

    /**
     * <p>The granularity, in seconds, of the returned data points.</p> <p>The
     * <code>StatusCheckFailed</code>, <code>StatusCheckFailed_Instance</code>, and
     * <code>StatusCheckFailed_System</code> instance metric data is available in
     * 1-minute (60 seconds) granularity. All other instance metric data is available
     * in 5-minute (300 seconds) granularity.</p>
     */
    inline bool PeriodHasBeenSet() const { return m_periodHasBeenSet; }

    /**
     * <p>The granularity, in seconds, of the returned data points.</p> <p>The
     * <code>StatusCheckFailed</code>, <code>StatusCheckFailed_Instance</code>, and
     * <code>StatusCheckFailed_System</code> instance metric data is available in
     * 1-minute (60 seconds) granularity. All other instance metric data is available
     * in 5-minute (300 seconds) granularity.</p>
     */
    inline void SetPeriod(int value) { m_periodHasBeenSet = true; m_period = value; }

    /**
     * <p>The granularity, in seconds, of the returned data points.</p> <p>The
     * <code>StatusCheckFailed</code>, <code>StatusCheckFailed_Instance</code>, and
     * <code>StatusCheckFailed_System</code> instance metric data is available in
     * 1-minute (60 seconds) granularity. All other instance metric data is available
     * in 5-minute (300 seconds) granularity.</p>
     */
    inline GetInstanceMetricDataRequest& WithPeriod(int value) { SetPeriod(value); return *this;}


    /**
     * <p>The start time of the time period.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>The start time of the time period.</p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p>The start time of the time period.</p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>The start time of the time period.</p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p>The start time of the time period.</p>
     */
    inline GetInstanceMetricDataRequest& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>The start time of the time period.</p>
     */
    inline GetInstanceMetricDataRequest& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


    /**
     * <p>The end time of the time period.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }

    /**
     * <p>The end time of the time period.</p>
     */
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }

    /**
     * <p>The end time of the time period.</p>
     */
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * <p>The end time of the time period.</p>
     */
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }

    /**
     * <p>The end time of the time period.</p>
     */
    inline GetInstanceMetricDataRequest& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}

    /**
     * <p>The end time of the time period.</p>
     */
    inline GetInstanceMetricDataRequest& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}


    /**
     * <p>The unit for the metric data request. Valid units depend on the metric data
     * being requested. For the valid units to specify with each available metric, see
     * the <code>metricName</code> parameter.</p>
     */
    inline const MetricUnit& GetUnit() const{ return m_unit; }

    /**
     * <p>The unit for the metric data request. Valid units depend on the metric data
     * being requested. For the valid units to specify with each available metric, see
     * the <code>metricName</code> parameter.</p>
     */
    inline bool UnitHasBeenSet() const { return m_unitHasBeenSet; }

    /**
     * <p>The unit for the metric data request. Valid units depend on the metric data
     * being requested. For the valid units to specify with each available metric, see
     * the <code>metricName</code> parameter.</p>
     */
    inline void SetUnit(const MetricUnit& value) { m_unitHasBeenSet = true; m_unit = value; }

    /**
     * <p>The unit for the metric data request. Valid units depend on the metric data
     * being requested. For the valid units to specify with each available metric, see
     * the <code>metricName</code> parameter.</p>
     */
    inline void SetUnit(MetricUnit&& value) { m_unitHasBeenSet = true; m_unit = std::move(value); }

    /**
     * <p>The unit for the metric data request. Valid units depend on the metric data
     * being requested. For the valid units to specify with each available metric, see
     * the <code>metricName</code> parameter.</p>
     */
    inline GetInstanceMetricDataRequest& WithUnit(const MetricUnit& value) { SetUnit(value); return *this;}

    /**
     * <p>The unit for the metric data request. Valid units depend on the metric data
     * being requested. For the valid units to specify with each available metric, see
     * the <code>metricName</code> parameter.</p>
     */
    inline GetInstanceMetricDataRequest& WithUnit(MetricUnit&& value) { SetUnit(std::move(value)); return *this;}


    /**
     * <p>The statistic for the metric.</p> <p>The following statistics are
     * available:</p> <ul> <li> <p> <code>Minimum</code> - The lowest value observed
     * during the specified period. Use this value to determine low volumes of activity
     * for your application.</p> </li> <li> <p> <code>Maximum</code> - The highest
     * value observed during the specified period. Use this value to determine high
     * volumes of activity for your application.</p> </li> <li> <p> <code>Sum</code> -
     * All values submitted for the matching metric added together. You can use this
     * statistic to determine the total volume of a metric.</p> </li> <li> <p>
     * <code>Average</code> - The value of Sum / SampleCount during the specified
     * period. By comparing this statistic with the Minimum and Maximum values, you can
     * determine the full scope of a metric and how close the average use is to the
     * Minimum and Maximum values. This comparison helps you to know when to increase
     * or decrease your resources.</p> </li> <li> <p> <code>SampleCount</code> - The
     * count, or number, of data points used for the statistical calculation.</p> </li>
     * </ul>
     */
    inline const Aws::Vector<MetricStatistic>& GetStatistics() const{ return m_statistics; }

    /**
     * <p>The statistic for the metric.</p> <p>The following statistics are
     * available:</p> <ul> <li> <p> <code>Minimum</code> - The lowest value observed
     * during the specified period. Use this value to determine low volumes of activity
     * for your application.</p> </li> <li> <p> <code>Maximum</code> - The highest
     * value observed during the specified period. Use this value to determine high
     * volumes of activity for your application.</p> </li> <li> <p> <code>Sum</code> -
     * All values submitted for the matching metric added together. You can use this
     * statistic to determine the total volume of a metric.</p> </li> <li> <p>
     * <code>Average</code> - The value of Sum / SampleCount during the specified
     * period. By comparing this statistic with the Minimum and Maximum values, you can
     * determine the full scope of a metric and how close the average use is to the
     * Minimum and Maximum values. This comparison helps you to know when to increase
     * or decrease your resources.</p> </li> <li> <p> <code>SampleCount</code> - The
     * count, or number, of data points used for the statistical calculation.</p> </li>
     * </ul>
     */
    inline bool StatisticsHasBeenSet() const { return m_statisticsHasBeenSet; }

    /**
     * <p>The statistic for the metric.</p> <p>The following statistics are
     * available:</p> <ul> <li> <p> <code>Minimum</code> - The lowest value observed
     * during the specified period. Use this value to determine low volumes of activity
     * for your application.</p> </li> <li> <p> <code>Maximum</code> - The highest
     * value observed during the specified period. Use this value to determine high
     * volumes of activity for your application.</p> </li> <li> <p> <code>Sum</code> -
     * All values submitted for the matching metric added together. You can use this
     * statistic to determine the total volume of a metric.</p> </li> <li> <p>
     * <code>Average</code> - The value of Sum / SampleCount during the specified
     * period. By comparing this statistic with the Minimum and Maximum values, you can
     * determine the full scope of a metric and how close the average use is to the
     * Minimum and Maximum values. This comparison helps you to know when to increase
     * or decrease your resources.</p> </li> <li> <p> <code>SampleCount</code> - The
     * count, or number, of data points used for the statistical calculation.</p> </li>
     * </ul>
     */
    inline void SetStatistics(const Aws::Vector<MetricStatistic>& value) { m_statisticsHasBeenSet = true; m_statistics = value; }

    /**
     * <p>The statistic for the metric.</p> <p>The following statistics are
     * available:</p> <ul> <li> <p> <code>Minimum</code> - The lowest value observed
     * during the specified period. Use this value to determine low volumes of activity
     * for your application.</p> </li> <li> <p> <code>Maximum</code> - The highest
     * value observed during the specified period. Use this value to determine high
     * volumes of activity for your application.</p> </li> <li> <p> <code>Sum</code> -
     * All values submitted for the matching metric added together. You can use this
     * statistic to determine the total volume of a metric.</p> </li> <li> <p>
     * <code>Average</code> - The value of Sum / SampleCount during the specified
     * period. By comparing this statistic with the Minimum and Maximum values, you can
     * determine the full scope of a metric and how close the average use is to the
     * Minimum and Maximum values. This comparison helps you to know when to increase
     * or decrease your resources.</p> </li> <li> <p> <code>SampleCount</code> - The
     * count, or number, of data points used for the statistical calculation.</p> </li>
     * </ul>
     */
    inline void SetStatistics(Aws::Vector<MetricStatistic>&& value) { m_statisticsHasBeenSet = true; m_statistics = std::move(value); }

    /**
     * <p>The statistic for the metric.</p> <p>The following statistics are
     * available:</p> <ul> <li> <p> <code>Minimum</code> - The lowest value observed
     * during the specified period. Use this value to determine low volumes of activity
     * for your application.</p> </li> <li> <p> <code>Maximum</code> - The highest
     * value observed during the specified period. Use this value to determine high
     * volumes of activity for your application.</p> </li> <li> <p> <code>Sum</code> -
     * All values submitted for the matching metric added together. You can use this
     * statistic to determine the total volume of a metric.</p> </li> <li> <p>
     * <code>Average</code> - The value of Sum / SampleCount during the specified
     * period. By comparing this statistic with the Minimum and Maximum values, you can
     * determine the full scope of a metric and how close the average use is to the
     * Minimum and Maximum values. This comparison helps you to know when to increase
     * or decrease your resources.</p> </li> <li> <p> <code>SampleCount</code> - The
     * count, or number, of data points used for the statistical calculation.</p> </li>
     * </ul>
     */
    inline GetInstanceMetricDataRequest& WithStatistics(const Aws::Vector<MetricStatistic>& value) { SetStatistics(value); return *this;}

    /**
     * <p>The statistic for the metric.</p> <p>The following statistics are
     * available:</p> <ul> <li> <p> <code>Minimum</code> - The lowest value observed
     * during the specified period. Use this value to determine low volumes of activity
     * for your application.</p> </li> <li> <p> <code>Maximum</code> - The highest
     * value observed during the specified period. Use this value to determine high
     * volumes of activity for your application.</p> </li> <li> <p> <code>Sum</code> -
     * All values submitted for the matching metric added together. You can use this
     * statistic to determine the total volume of a metric.</p> </li> <li> <p>
     * <code>Average</code> - The value of Sum / SampleCount during the specified
     * period. By comparing this statistic with the Minimum and Maximum values, you can
     * determine the full scope of a metric and how close the average use is to the
     * Minimum and Maximum values. This comparison helps you to know when to increase
     * or decrease your resources.</p> </li> <li> <p> <code>SampleCount</code> - The
     * count, or number, of data points used for the statistical calculation.</p> </li>
     * </ul>
     */
    inline GetInstanceMetricDataRequest& WithStatistics(Aws::Vector<MetricStatistic>&& value) { SetStatistics(std::move(value)); return *this;}

    /**
     * <p>The statistic for the metric.</p> <p>The following statistics are
     * available:</p> <ul> <li> <p> <code>Minimum</code> - The lowest value observed
     * during the specified period. Use this value to determine low volumes of activity
     * for your application.</p> </li> <li> <p> <code>Maximum</code> - The highest
     * value observed during the specified period. Use this value to determine high
     * volumes of activity for your application.</p> </li> <li> <p> <code>Sum</code> -
     * All values submitted for the matching metric added together. You can use this
     * statistic to determine the total volume of a metric.</p> </li> <li> <p>
     * <code>Average</code> - The value of Sum / SampleCount during the specified
     * period. By comparing this statistic with the Minimum and Maximum values, you can
     * determine the full scope of a metric and how close the average use is to the
     * Minimum and Maximum values. This comparison helps you to know when to increase
     * or decrease your resources.</p> </li> <li> <p> <code>SampleCount</code> - The
     * count, or number, of data points used for the statistical calculation.</p> </li>
     * </ul>
     */
    inline GetInstanceMetricDataRequest& AddStatistics(const MetricStatistic& value) { m_statisticsHasBeenSet = true; m_statistics.push_back(value); return *this; }

    /**
     * <p>The statistic for the metric.</p> <p>The following statistics are
     * available:</p> <ul> <li> <p> <code>Minimum</code> - The lowest value observed
     * during the specified period. Use this value to determine low volumes of activity
     * for your application.</p> </li> <li> <p> <code>Maximum</code> - The highest
     * value observed during the specified period. Use this value to determine high
     * volumes of activity for your application.</p> </li> <li> <p> <code>Sum</code> -
     * All values submitted for the matching metric added together. You can use this
     * statistic to determine the total volume of a metric.</p> </li> <li> <p>
     * <code>Average</code> - The value of Sum / SampleCount during the specified
     * period. By comparing this statistic with the Minimum and Maximum values, you can
     * determine the full scope of a metric and how close the average use is to the
     * Minimum and Maximum values. This comparison helps you to know when to increase
     * or decrease your resources.</p> </li> <li> <p> <code>SampleCount</code> - The
     * count, or number, of data points used for the statistical calculation.</p> </li>
     * </ul>
     */
    inline GetInstanceMetricDataRequest& AddStatistics(MetricStatistic&& value) { m_statisticsHasBeenSet = true; m_statistics.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_instanceName;
    bool m_instanceNameHasBeenSet = false;

    InstanceMetricName m_metricName;
    bool m_metricNameHasBeenSet = false;

    int m_period;
    bool m_periodHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet = false;

    MetricUnit m_unit;
    bool m_unitHasBeenSet = false;

    Aws::Vector<MetricStatistic> m_statistics;
    bool m_statisticsHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
