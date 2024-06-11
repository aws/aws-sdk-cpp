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


    ///@{
    /**
     * <p> The name of the CloudWatch metric. </p>
     */
    inline const Aws::String& GetMetricName() const{ return m_metricName; }
    inline bool MetricNameHasBeenSet() const { return m_metricNameHasBeenSet; }
    inline void SetMetricName(const Aws::String& value) { m_metricNameHasBeenSet = true; m_metricName = value; }
    inline void SetMetricName(Aws::String&& value) { m_metricNameHasBeenSet = true; m_metricName = std::move(value); }
    inline void SetMetricName(const char* value) { m_metricNameHasBeenSet = true; m_metricName.assign(value); }
    inline CloudWatchMetricsDetail& WithMetricName(const Aws::String& value) { SetMetricName(value); return *this;}
    inline CloudWatchMetricsDetail& WithMetricName(Aws::String&& value) { SetMetricName(std::move(value)); return *this;}
    inline CloudWatchMetricsDetail& WithMetricName(const char* value) { SetMetricName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The namespace of the CloudWatch metric. A namespace is a container for
     * CloudWatch metrics. </p>
     */
    inline const Aws::String& GetNamespace() const{ return m_namespace; }
    inline bool NamespaceHasBeenSet() const { return m_namespaceHasBeenSet; }
    inline void SetNamespace(const Aws::String& value) { m_namespaceHasBeenSet = true; m_namespace = value; }
    inline void SetNamespace(Aws::String&& value) { m_namespaceHasBeenSet = true; m_namespace = std::move(value); }
    inline void SetNamespace(const char* value) { m_namespaceHasBeenSet = true; m_namespace.assign(value); }
    inline CloudWatchMetricsDetail& WithNamespace(const Aws::String& value) { SetNamespace(value); return *this;}
    inline CloudWatchMetricsDetail& WithNamespace(Aws::String&& value) { SetNamespace(std::move(value)); return *this;}
    inline CloudWatchMetricsDetail& WithNamespace(const char* value) { SetNamespace(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> An array of CloudWatch dimensions associated with </p>
     */
    inline const Aws::Vector<CloudWatchMetricsDimension>& GetDimensions() const{ return m_dimensions; }
    inline bool DimensionsHasBeenSet() const { return m_dimensionsHasBeenSet; }
    inline void SetDimensions(const Aws::Vector<CloudWatchMetricsDimension>& value) { m_dimensionsHasBeenSet = true; m_dimensions = value; }
    inline void SetDimensions(Aws::Vector<CloudWatchMetricsDimension>&& value) { m_dimensionsHasBeenSet = true; m_dimensions = std::move(value); }
    inline CloudWatchMetricsDetail& WithDimensions(const Aws::Vector<CloudWatchMetricsDimension>& value) { SetDimensions(value); return *this;}
    inline CloudWatchMetricsDetail& WithDimensions(Aws::Vector<CloudWatchMetricsDimension>&& value) { SetDimensions(std::move(value)); return *this;}
    inline CloudWatchMetricsDetail& AddDimensions(const CloudWatchMetricsDimension& value) { m_dimensionsHasBeenSet = true; m_dimensions.push_back(value); return *this; }
    inline CloudWatchMetricsDetail& AddDimensions(CloudWatchMetricsDimension&& value) { m_dimensionsHasBeenSet = true; m_dimensions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The type of statistic associated with the CloudWatch metric. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/cloudwatch_concepts.html#Statistic">Statistics</a>
     * in the <i>Amazon CloudWatch User Guide</i>. </p>
     */
    inline const CloudWatchMetricsStat& GetStat() const{ return m_stat; }
    inline bool StatHasBeenSet() const { return m_statHasBeenSet; }
    inline void SetStat(const CloudWatchMetricsStat& value) { m_statHasBeenSet = true; m_stat = value; }
    inline void SetStat(CloudWatchMetricsStat&& value) { m_statHasBeenSet = true; m_stat = std::move(value); }
    inline CloudWatchMetricsDetail& WithStat(const CloudWatchMetricsStat& value) { SetStat(value); return *this;}
    inline CloudWatchMetricsDetail& WithStat(CloudWatchMetricsStat&& value) { SetStat(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The unit of measure used for the CloudWatch metric. For example,
     * <code>Bytes</code>, <code>Seconds</code>, <code>Count</code>, and
     * <code>Percent</code>. </p>
     */
    inline const Aws::String& GetUnit() const{ return m_unit; }
    inline bool UnitHasBeenSet() const { return m_unitHasBeenSet; }
    inline void SetUnit(const Aws::String& value) { m_unitHasBeenSet = true; m_unit = value; }
    inline void SetUnit(Aws::String&& value) { m_unitHasBeenSet = true; m_unit = std::move(value); }
    inline void SetUnit(const char* value) { m_unitHasBeenSet = true; m_unit.assign(value); }
    inline CloudWatchMetricsDetail& WithUnit(const Aws::String& value) { SetUnit(value); return *this;}
    inline CloudWatchMetricsDetail& WithUnit(Aws::String&& value) { SetUnit(std::move(value)); return *this;}
    inline CloudWatchMetricsDetail& WithUnit(const char* value) { SetUnit(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The length of time associated with the CloudWatch metric in number of
     * seconds. </p>
     */
    inline int GetPeriod() const{ return m_period; }
    inline bool PeriodHasBeenSet() const { return m_periodHasBeenSet; }
    inline void SetPeriod(int value) { m_periodHasBeenSet = true; m_period = value; }
    inline CloudWatchMetricsDetail& WithPeriod(int value) { SetPeriod(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This object returns anomaly metric data.</p>
     */
    inline const CloudWatchMetricsDataSummary& GetMetricDataSummary() const{ return m_metricDataSummary; }
    inline bool MetricDataSummaryHasBeenSet() const { return m_metricDataSummaryHasBeenSet; }
    inline void SetMetricDataSummary(const CloudWatchMetricsDataSummary& value) { m_metricDataSummaryHasBeenSet = true; m_metricDataSummary = value; }
    inline void SetMetricDataSummary(CloudWatchMetricsDataSummary&& value) { m_metricDataSummaryHasBeenSet = true; m_metricDataSummary = std::move(value); }
    inline CloudWatchMetricsDetail& WithMetricDataSummary(const CloudWatchMetricsDataSummary& value) { SetMetricDataSummary(value); return *this;}
    inline CloudWatchMetricsDetail& WithMetricDataSummary(CloudWatchMetricsDataSummary&& value) { SetMetricDataSummary(std::move(value)); return *this;}
    ///@}
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
