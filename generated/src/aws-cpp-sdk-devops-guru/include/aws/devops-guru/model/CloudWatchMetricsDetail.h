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
    AWS_DEVOPSGURU_API CloudWatchMetricsDetail() = default;
    AWS_DEVOPSGURU_API CloudWatchMetricsDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API CloudWatchMetricsDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The name of the CloudWatch metric. </p>
     */
    inline const Aws::String& GetMetricName() const { return m_metricName; }
    inline bool MetricNameHasBeenSet() const { return m_metricNameHasBeenSet; }
    template<typename MetricNameT = Aws::String>
    void SetMetricName(MetricNameT&& value) { m_metricNameHasBeenSet = true; m_metricName = std::forward<MetricNameT>(value); }
    template<typename MetricNameT = Aws::String>
    CloudWatchMetricsDetail& WithMetricName(MetricNameT&& value) { SetMetricName(std::forward<MetricNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The namespace of the CloudWatch metric. A namespace is a container for
     * CloudWatch metrics. </p>
     */
    inline const Aws::String& GetNamespace() const { return m_namespace; }
    inline bool NamespaceHasBeenSet() const { return m_namespaceHasBeenSet; }
    template<typename NamespaceT = Aws::String>
    void SetNamespace(NamespaceT&& value) { m_namespaceHasBeenSet = true; m_namespace = std::forward<NamespaceT>(value); }
    template<typename NamespaceT = Aws::String>
    CloudWatchMetricsDetail& WithNamespace(NamespaceT&& value) { SetNamespace(std::forward<NamespaceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> An array of CloudWatch dimensions associated with </p>
     */
    inline const Aws::Vector<CloudWatchMetricsDimension>& GetDimensions() const { return m_dimensions; }
    inline bool DimensionsHasBeenSet() const { return m_dimensionsHasBeenSet; }
    template<typename DimensionsT = Aws::Vector<CloudWatchMetricsDimension>>
    void SetDimensions(DimensionsT&& value) { m_dimensionsHasBeenSet = true; m_dimensions = std::forward<DimensionsT>(value); }
    template<typename DimensionsT = Aws::Vector<CloudWatchMetricsDimension>>
    CloudWatchMetricsDetail& WithDimensions(DimensionsT&& value) { SetDimensions(std::forward<DimensionsT>(value)); return *this;}
    template<typename DimensionsT = CloudWatchMetricsDimension>
    CloudWatchMetricsDetail& AddDimensions(DimensionsT&& value) { m_dimensionsHasBeenSet = true; m_dimensions.emplace_back(std::forward<DimensionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The type of statistic associated with the CloudWatch metric. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/cloudwatch_concepts.html#Statistic">Statistics</a>
     * in the <i>Amazon CloudWatch User Guide</i>. </p>
     */
    inline CloudWatchMetricsStat GetStat() const { return m_stat; }
    inline bool StatHasBeenSet() const { return m_statHasBeenSet; }
    inline void SetStat(CloudWatchMetricsStat value) { m_statHasBeenSet = true; m_stat = value; }
    inline CloudWatchMetricsDetail& WithStat(CloudWatchMetricsStat value) { SetStat(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The unit of measure used for the CloudWatch metric. For example,
     * <code>Bytes</code>, <code>Seconds</code>, <code>Count</code>, and
     * <code>Percent</code>. </p>
     */
    inline const Aws::String& GetUnit() const { return m_unit; }
    inline bool UnitHasBeenSet() const { return m_unitHasBeenSet; }
    template<typename UnitT = Aws::String>
    void SetUnit(UnitT&& value) { m_unitHasBeenSet = true; m_unit = std::forward<UnitT>(value); }
    template<typename UnitT = Aws::String>
    CloudWatchMetricsDetail& WithUnit(UnitT&& value) { SetUnit(std::forward<UnitT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The length of time associated with the CloudWatch metric in number of
     * seconds. </p>
     */
    inline int GetPeriod() const { return m_period; }
    inline bool PeriodHasBeenSet() const { return m_periodHasBeenSet; }
    inline void SetPeriod(int value) { m_periodHasBeenSet = true; m_period = value; }
    inline CloudWatchMetricsDetail& WithPeriod(int value) { SetPeriod(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This object returns anomaly metric data.</p>
     */
    inline const CloudWatchMetricsDataSummary& GetMetricDataSummary() const { return m_metricDataSummary; }
    inline bool MetricDataSummaryHasBeenSet() const { return m_metricDataSummaryHasBeenSet; }
    template<typename MetricDataSummaryT = CloudWatchMetricsDataSummary>
    void SetMetricDataSummary(MetricDataSummaryT&& value) { m_metricDataSummaryHasBeenSet = true; m_metricDataSummary = std::forward<MetricDataSummaryT>(value); }
    template<typename MetricDataSummaryT = CloudWatchMetricsDataSummary>
    CloudWatchMetricsDetail& WithMetricDataSummary(MetricDataSummaryT&& value) { SetMetricDataSummary(std::forward<MetricDataSummaryT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_metricName;
    bool m_metricNameHasBeenSet = false;

    Aws::String m_namespace;
    bool m_namespaceHasBeenSet = false;

    Aws::Vector<CloudWatchMetricsDimension> m_dimensions;
    bool m_dimensionsHasBeenSet = false;

    CloudWatchMetricsStat m_stat{CloudWatchMetricsStat::NOT_SET};
    bool m_statHasBeenSet = false;

    Aws::String m_unit;
    bool m_unitHasBeenSet = false;

    int m_period{0};
    bool m_periodHasBeenSet = false;

    CloudWatchMetricsDataSummary m_metricDataSummary;
    bool m_metricDataSummaryHasBeenSet = false;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
