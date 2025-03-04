/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/logs/model/StandardUnit.h>
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
namespace CloudWatchLogs
{
namespace Model
{

  /**
   * <p>Indicates how to transform ingested log events to metric data in a CloudWatch
   * metric.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/MetricTransformation">AWS
   * API Reference</a></p>
   */
  class MetricTransformation
  {
  public:
    AWS_CLOUDWATCHLOGS_API MetricTransformation() = default;
    AWS_CLOUDWATCHLOGS_API MetricTransformation(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API MetricTransformation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the CloudWatch metric.</p>
     */
    inline const Aws::String& GetMetricName() const { return m_metricName; }
    inline bool MetricNameHasBeenSet() const { return m_metricNameHasBeenSet; }
    template<typename MetricNameT = Aws::String>
    void SetMetricName(MetricNameT&& value) { m_metricNameHasBeenSet = true; m_metricName = std::forward<MetricNameT>(value); }
    template<typename MetricNameT = Aws::String>
    MetricTransformation& WithMetricName(MetricNameT&& value) { SetMetricName(std::forward<MetricNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A custom namespace to contain your metric in CloudWatch. Use namespaces to
     * group together metrics that are similar. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/cloudwatch_concepts.html#Namespace">Namespaces</a>.</p>
     */
    inline const Aws::String& GetMetricNamespace() const { return m_metricNamespace; }
    inline bool MetricNamespaceHasBeenSet() const { return m_metricNamespaceHasBeenSet; }
    template<typename MetricNamespaceT = Aws::String>
    void SetMetricNamespace(MetricNamespaceT&& value) { m_metricNamespaceHasBeenSet = true; m_metricNamespace = std::forward<MetricNamespaceT>(value); }
    template<typename MetricNamespaceT = Aws::String>
    MetricTransformation& WithMetricNamespace(MetricNamespaceT&& value) { SetMetricNamespace(std::forward<MetricNamespaceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value to publish to the CloudWatch metric when a filter pattern matches a
     * log event.</p>
     */
    inline const Aws::String& GetMetricValue() const { return m_metricValue; }
    inline bool MetricValueHasBeenSet() const { return m_metricValueHasBeenSet; }
    template<typename MetricValueT = Aws::String>
    void SetMetricValue(MetricValueT&& value) { m_metricValueHasBeenSet = true; m_metricValue = std::forward<MetricValueT>(value); }
    template<typename MetricValueT = Aws::String>
    MetricTransformation& WithMetricValue(MetricValueT&& value) { SetMetricValue(std::forward<MetricValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>(Optional) The value to emit when a filter pattern does not match a log
     * event. This value can be null.</p>
     */
    inline double GetDefaultValue() const { return m_defaultValue; }
    inline bool DefaultValueHasBeenSet() const { return m_defaultValueHasBeenSet; }
    inline void SetDefaultValue(double value) { m_defaultValueHasBeenSet = true; m_defaultValue = value; }
    inline MetricTransformation& WithDefaultValue(double value) { SetDefaultValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The fields to use as dimensions for the metric. One metric filter can include
     * as many as three dimensions.</p>  <p>Metrics extracted from log
     * events are charged as custom metrics. To prevent unexpected high charges, do not
     * specify high-cardinality fields such as <code>IPAddress</code> or
     * <code>requestID</code> as dimensions. Each different value found for a dimension
     * is treated as a separate metric and accrues charges as a separate custom metric.
     * </p> <p>CloudWatch Logs disables a metric filter if it generates 1000 different
     * name/value pairs for your specified dimensions within a certain amount of time.
     * This helps to prevent accidental high charges.</p> <p>You can also set up a
     * billing alarm to alert you if your charges are higher than expected. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/monitor_estimated_charges_with_cloudwatch.html">
     * Creating a Billing Alarm to Monitor Your Estimated Amazon Web Services
     * Charges</a>. </p> 
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetDimensions() const { return m_dimensions; }
    inline bool DimensionsHasBeenSet() const { return m_dimensionsHasBeenSet; }
    template<typename DimensionsT = Aws::Map<Aws::String, Aws::String>>
    void SetDimensions(DimensionsT&& value) { m_dimensionsHasBeenSet = true; m_dimensions = std::forward<DimensionsT>(value); }
    template<typename DimensionsT = Aws::Map<Aws::String, Aws::String>>
    MetricTransformation& WithDimensions(DimensionsT&& value) { SetDimensions(std::forward<DimensionsT>(value)); return *this;}
    template<typename DimensionsKeyT = Aws::String, typename DimensionsValueT = Aws::String>
    MetricTransformation& AddDimensions(DimensionsKeyT&& key, DimensionsValueT&& value) {
      m_dimensionsHasBeenSet = true; m_dimensions.emplace(std::forward<DimensionsKeyT>(key), std::forward<DimensionsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The unit to assign to the metric. If you omit this, the unit is set as
     * <code>None</code>.</p>
     */
    inline StandardUnit GetUnit() const { return m_unit; }
    inline bool UnitHasBeenSet() const { return m_unitHasBeenSet; }
    inline void SetUnit(StandardUnit value) { m_unitHasBeenSet = true; m_unit = value; }
    inline MetricTransformation& WithUnit(StandardUnit value) { SetUnit(value); return *this;}
    ///@}
  private:

    Aws::String m_metricName;
    bool m_metricNameHasBeenSet = false;

    Aws::String m_metricNamespace;
    bool m_metricNamespaceHasBeenSet = false;

    Aws::String m_metricValue;
    bool m_metricValueHasBeenSet = false;

    double m_defaultValue{0.0};
    bool m_defaultValueHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_dimensions;
    bool m_dimensionsHasBeenSet = false;

    StandardUnit m_unit{StandardUnit::NOT_SET};
    bool m_unitHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
