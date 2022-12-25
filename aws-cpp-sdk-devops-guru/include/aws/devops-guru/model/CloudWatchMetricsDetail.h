/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-guru/DevOpsGuru_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/devops-guru/model/CloudWatchMetricsStat.h>
#include <aws/devops-guru/model/CloudWatchMetricsDataSummary.h>
#include <aws/devops-guru/model/CloudWatchMetricsDimension.h>
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
namespace DevOpsGuru
{
namespace Model
{

  /**
   * <p> Information about an Amazon CloudWatch metric. </p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/CloudWatchMetricsDetail">AWS
   * API Reference</a></p>
   */
  class CloudWatchMetricsDetail
  {
  public:
    AWS_DEVOPSGURU_API CloudWatchMetricsDetail();
    AWS_DEVOPSGURU_API CloudWatchMetricsDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API CloudWatchMetricsDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The name of the CloudWatch metric. </p>
     */
    inline const Aws::String& GetMetricName() const{ return m_metricName; }

    /**
     * <p> The name of the CloudWatch metric. </p>
     */
    inline bool MetricNameHasBeenSet() const { return m_metricNameHasBeenSet; }

    /**
     * <p> The name of the CloudWatch metric. </p>
     */
    inline void SetMetricName(const Aws::String& value) { m_metricNameHasBeenSet = true; m_metricName = value; }

    /**
     * <p> The name of the CloudWatch metric. </p>
     */
    inline void SetMetricName(Aws::String&& value) { m_metricNameHasBeenSet = true; m_metricName = std::move(value); }

    /**
     * <p> The name of the CloudWatch metric. </p>
     */
    inline void SetMetricName(const char* value) { m_metricNameHasBeenSet = true; m_metricName.assign(value); }

    /**
     * <p> The name of the CloudWatch metric. </p>
     */
    inline CloudWatchMetricsDetail& WithMetricName(const Aws::String& value) { SetMetricName(value); return *this;}

    /**
     * <p> The name of the CloudWatch metric. </p>
     */
    inline CloudWatchMetricsDetail& WithMetricName(Aws::String&& value) { SetMetricName(std::move(value)); return *this;}

    /**
     * <p> The name of the CloudWatch metric. </p>
     */
    inline CloudWatchMetricsDetail& WithMetricName(const char* value) { SetMetricName(value); return *this;}


    /**
     * <p> The namespace of the CloudWatch metric. A namespace is a container for
     * CloudWatch metrics. </p>
     */
    inline const Aws::String& GetNamespace() const{ return m_namespace; }

    /**
     * <p> The namespace of the CloudWatch metric. A namespace is a container for
     * CloudWatch metrics. </p>
     */
    inline bool NamespaceHasBeenSet() const { return m_namespaceHasBeenSet; }

    /**
     * <p> The namespace of the CloudWatch metric. A namespace is a container for
     * CloudWatch metrics. </p>
     */
    inline void SetNamespace(const Aws::String& value) { m_namespaceHasBeenSet = true; m_namespace = value; }

    /**
     * <p> The namespace of the CloudWatch metric. A namespace is a container for
     * CloudWatch metrics. </p>
     */
    inline void SetNamespace(Aws::String&& value) { m_namespaceHasBeenSet = true; m_namespace = std::move(value); }

    /**
     * <p> The namespace of the CloudWatch metric. A namespace is a container for
     * CloudWatch metrics. </p>
     */
    inline void SetNamespace(const char* value) { m_namespaceHasBeenSet = true; m_namespace.assign(value); }

    /**
     * <p> The namespace of the CloudWatch metric. A namespace is a container for
     * CloudWatch metrics. </p>
     */
    inline CloudWatchMetricsDetail& WithNamespace(const Aws::String& value) { SetNamespace(value); return *this;}

    /**
     * <p> The namespace of the CloudWatch metric. A namespace is a container for
     * CloudWatch metrics. </p>
     */
    inline CloudWatchMetricsDetail& WithNamespace(Aws::String&& value) { SetNamespace(std::move(value)); return *this;}

    /**
     * <p> The namespace of the CloudWatch metric. A namespace is a container for
     * CloudWatch metrics. </p>
     */
    inline CloudWatchMetricsDetail& WithNamespace(const char* value) { SetNamespace(value); return *this;}


    /**
     * <p> An array of CloudWatch dimensions associated with </p>
     */
    inline const Aws::Vector<CloudWatchMetricsDimension>& GetDimensions() const{ return m_dimensions; }

    /**
     * <p> An array of CloudWatch dimensions associated with </p>
     */
    inline bool DimensionsHasBeenSet() const { return m_dimensionsHasBeenSet; }

    /**
     * <p> An array of CloudWatch dimensions associated with </p>
     */
    inline void SetDimensions(const Aws::Vector<CloudWatchMetricsDimension>& value) { m_dimensionsHasBeenSet = true; m_dimensions = value; }

    /**
     * <p> An array of CloudWatch dimensions associated with </p>
     */
    inline void SetDimensions(Aws::Vector<CloudWatchMetricsDimension>&& value) { m_dimensionsHasBeenSet = true; m_dimensions = std::move(value); }

    /**
     * <p> An array of CloudWatch dimensions associated with </p>
     */
    inline CloudWatchMetricsDetail& WithDimensions(const Aws::Vector<CloudWatchMetricsDimension>& value) { SetDimensions(value); return *this;}

    /**
     * <p> An array of CloudWatch dimensions associated with </p>
     */
    inline CloudWatchMetricsDetail& WithDimensions(Aws::Vector<CloudWatchMetricsDimension>&& value) { SetDimensions(std::move(value)); return *this;}

    /**
     * <p> An array of CloudWatch dimensions associated with </p>
     */
    inline CloudWatchMetricsDetail& AddDimensions(const CloudWatchMetricsDimension& value) { m_dimensionsHasBeenSet = true; m_dimensions.push_back(value); return *this; }

    /**
     * <p> An array of CloudWatch dimensions associated with </p>
     */
    inline CloudWatchMetricsDetail& AddDimensions(CloudWatchMetricsDimension&& value) { m_dimensionsHasBeenSet = true; m_dimensions.push_back(std::move(value)); return *this; }


    /**
     * <p> The type of statistic associated with the CloudWatch metric. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/cloudwatch_concepts.html#Statistic">Statistics</a>
     * in the <i>Amazon CloudWatch User Guide</i>. </p>
     */
    inline const CloudWatchMetricsStat& GetStat() const{ return m_stat; }

    /**
     * <p> The type of statistic associated with the CloudWatch metric. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/cloudwatch_concepts.html#Statistic">Statistics</a>
     * in the <i>Amazon CloudWatch User Guide</i>. </p>
     */
    inline bool StatHasBeenSet() const { return m_statHasBeenSet; }

    /**
     * <p> The type of statistic associated with the CloudWatch metric. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/cloudwatch_concepts.html#Statistic">Statistics</a>
     * in the <i>Amazon CloudWatch User Guide</i>. </p>
     */
    inline void SetStat(const CloudWatchMetricsStat& value) { m_statHasBeenSet = true; m_stat = value; }

    /**
     * <p> The type of statistic associated with the CloudWatch metric. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/cloudwatch_concepts.html#Statistic">Statistics</a>
     * in the <i>Amazon CloudWatch User Guide</i>. </p>
     */
    inline void SetStat(CloudWatchMetricsStat&& value) { m_statHasBeenSet = true; m_stat = std::move(value); }

    /**
     * <p> The type of statistic associated with the CloudWatch metric. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/cloudwatch_concepts.html#Statistic">Statistics</a>
     * in the <i>Amazon CloudWatch User Guide</i>. </p>
     */
    inline CloudWatchMetricsDetail& WithStat(const CloudWatchMetricsStat& value) { SetStat(value); return *this;}

    /**
     * <p> The type of statistic associated with the CloudWatch metric. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/cloudwatch_concepts.html#Statistic">Statistics</a>
     * in the <i>Amazon CloudWatch User Guide</i>. </p>
     */
    inline CloudWatchMetricsDetail& WithStat(CloudWatchMetricsStat&& value) { SetStat(std::move(value)); return *this;}


    /**
     * <p> The unit of measure used for the CloudWatch metric. For example,
     * <code>Bytes</code>, <code>Seconds</code>, <code>Count</code>, and
     * <code>Percent</code>. </p>
     */
    inline const Aws::String& GetUnit() const{ return m_unit; }

    /**
     * <p> The unit of measure used for the CloudWatch metric. For example,
     * <code>Bytes</code>, <code>Seconds</code>, <code>Count</code>, and
     * <code>Percent</code>. </p>
     */
    inline bool UnitHasBeenSet() const { return m_unitHasBeenSet; }

    /**
     * <p> The unit of measure used for the CloudWatch metric. For example,
     * <code>Bytes</code>, <code>Seconds</code>, <code>Count</code>, and
     * <code>Percent</code>. </p>
     */
    inline void SetUnit(const Aws::String& value) { m_unitHasBeenSet = true; m_unit = value; }

    /**
     * <p> The unit of measure used for the CloudWatch metric. For example,
     * <code>Bytes</code>, <code>Seconds</code>, <code>Count</code>, and
     * <code>Percent</code>. </p>
     */
    inline void SetUnit(Aws::String&& value) { m_unitHasBeenSet = true; m_unit = std::move(value); }

    /**
     * <p> The unit of measure used for the CloudWatch metric. For example,
     * <code>Bytes</code>, <code>Seconds</code>, <code>Count</code>, and
     * <code>Percent</code>. </p>
     */
    inline void SetUnit(const char* value) { m_unitHasBeenSet = true; m_unit.assign(value); }

    /**
     * <p> The unit of measure used for the CloudWatch metric. For example,
     * <code>Bytes</code>, <code>Seconds</code>, <code>Count</code>, and
     * <code>Percent</code>. </p>
     */
    inline CloudWatchMetricsDetail& WithUnit(const Aws::String& value) { SetUnit(value); return *this;}

    /**
     * <p> The unit of measure used for the CloudWatch metric. For example,
     * <code>Bytes</code>, <code>Seconds</code>, <code>Count</code>, and
     * <code>Percent</code>. </p>
     */
    inline CloudWatchMetricsDetail& WithUnit(Aws::String&& value) { SetUnit(std::move(value)); return *this;}

    /**
     * <p> The unit of measure used for the CloudWatch metric. For example,
     * <code>Bytes</code>, <code>Seconds</code>, <code>Count</code>, and
     * <code>Percent</code>. </p>
     */
    inline CloudWatchMetricsDetail& WithUnit(const char* value) { SetUnit(value); return *this;}


    /**
     * <p> The length of time associated with the CloudWatch metric in number of
     * seconds. </p>
     */
    inline int GetPeriod() const{ return m_period; }

    /**
     * <p> The length of time associated with the CloudWatch metric in number of
     * seconds. </p>
     */
    inline bool PeriodHasBeenSet() const { return m_periodHasBeenSet; }

    /**
     * <p> The length of time associated with the CloudWatch metric in number of
     * seconds. </p>
     */
    inline void SetPeriod(int value) { m_periodHasBeenSet = true; m_period = value; }

    /**
     * <p> The length of time associated with the CloudWatch metric in number of
     * seconds. </p>
     */
    inline CloudWatchMetricsDetail& WithPeriod(int value) { SetPeriod(value); return *this;}


    /**
     * <p>This object returns anomaly metric data.</p>
     */
    inline const CloudWatchMetricsDataSummary& GetMetricDataSummary() const{ return m_metricDataSummary; }

    /**
     * <p>This object returns anomaly metric data.</p>
     */
    inline bool MetricDataSummaryHasBeenSet() const { return m_metricDataSummaryHasBeenSet; }

    /**
     * <p>This object returns anomaly metric data.</p>
     */
    inline void SetMetricDataSummary(const CloudWatchMetricsDataSummary& value) { m_metricDataSummaryHasBeenSet = true; m_metricDataSummary = value; }

    /**
     * <p>This object returns anomaly metric data.</p>
     */
    inline void SetMetricDataSummary(CloudWatchMetricsDataSummary&& value) { m_metricDataSummaryHasBeenSet = true; m_metricDataSummary = std::move(value); }

    /**
     * <p>This object returns anomaly metric data.</p>
     */
    inline CloudWatchMetricsDetail& WithMetricDataSummary(const CloudWatchMetricsDataSummary& value) { SetMetricDataSummary(value); return *this;}

    /**
     * <p>This object returns anomaly metric data.</p>
     */
    inline CloudWatchMetricsDetail& WithMetricDataSummary(CloudWatchMetricsDataSummary&& value) { SetMetricDataSummary(std::move(value)); return *this;}

  private:

    Aws::String m_metricName;
    bool m_metricNameHasBeenSet = false;

    Aws::String m_namespace;
    bool m_namespaceHasBeenSet = false;

    Aws::Vector<CloudWatchMetricsDimension> m_dimensions;
    bool m_dimensionsHasBeenSet = false;

    CloudWatchMetricsStat m_stat;
    bool m_statHasBeenSet = false;

    Aws::String m_unit;
    bool m_unitHasBeenSet = false;

    int m_period;
    bool m_periodHasBeenSet = false;

    CloudWatchMetricsDataSummary m_metricDataSummary;
    bool m_metricDataSummaryHasBeenSet = false;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
