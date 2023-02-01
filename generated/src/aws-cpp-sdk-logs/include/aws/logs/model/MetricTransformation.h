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
    AWS_CLOUDWATCHLOGS_API MetricTransformation();
    AWS_CLOUDWATCHLOGS_API MetricTransformation(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API MetricTransformation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the CloudWatch metric.</p>
     */
    inline const Aws::String& GetMetricName() const{ return m_metricName; }

    /**
     * <p>The name of the CloudWatch metric.</p>
     */
    inline bool MetricNameHasBeenSet() const { return m_metricNameHasBeenSet; }

    /**
     * <p>The name of the CloudWatch metric.</p>
     */
    inline void SetMetricName(const Aws::String& value) { m_metricNameHasBeenSet = true; m_metricName = value; }

    /**
     * <p>The name of the CloudWatch metric.</p>
     */
    inline void SetMetricName(Aws::String&& value) { m_metricNameHasBeenSet = true; m_metricName = std::move(value); }

    /**
     * <p>The name of the CloudWatch metric.</p>
     */
    inline void SetMetricName(const char* value) { m_metricNameHasBeenSet = true; m_metricName.assign(value); }

    /**
     * <p>The name of the CloudWatch metric.</p>
     */
    inline MetricTransformation& WithMetricName(const Aws::String& value) { SetMetricName(value); return *this;}

    /**
     * <p>The name of the CloudWatch metric.</p>
     */
    inline MetricTransformation& WithMetricName(Aws::String&& value) { SetMetricName(std::move(value)); return *this;}

    /**
     * <p>The name of the CloudWatch metric.</p>
     */
    inline MetricTransformation& WithMetricName(const char* value) { SetMetricName(value); return *this;}


    /**
     * <p>A custom namespace to contain your metric in CloudWatch. Use namespaces to
     * group together metrics that are similar. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/cloudwatch_concepts.html#Namespace">Namespaces</a>.</p>
     */
    inline const Aws::String& GetMetricNamespace() const{ return m_metricNamespace; }

    /**
     * <p>A custom namespace to contain your metric in CloudWatch. Use namespaces to
     * group together metrics that are similar. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/cloudwatch_concepts.html#Namespace">Namespaces</a>.</p>
     */
    inline bool MetricNamespaceHasBeenSet() const { return m_metricNamespaceHasBeenSet; }

    /**
     * <p>A custom namespace to contain your metric in CloudWatch. Use namespaces to
     * group together metrics that are similar. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/cloudwatch_concepts.html#Namespace">Namespaces</a>.</p>
     */
    inline void SetMetricNamespace(const Aws::String& value) { m_metricNamespaceHasBeenSet = true; m_metricNamespace = value; }

    /**
     * <p>A custom namespace to contain your metric in CloudWatch. Use namespaces to
     * group together metrics that are similar. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/cloudwatch_concepts.html#Namespace">Namespaces</a>.</p>
     */
    inline void SetMetricNamespace(Aws::String&& value) { m_metricNamespaceHasBeenSet = true; m_metricNamespace = std::move(value); }

    /**
     * <p>A custom namespace to contain your metric in CloudWatch. Use namespaces to
     * group together metrics that are similar. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/cloudwatch_concepts.html#Namespace">Namespaces</a>.</p>
     */
    inline void SetMetricNamespace(const char* value) { m_metricNamespaceHasBeenSet = true; m_metricNamespace.assign(value); }

    /**
     * <p>A custom namespace to contain your metric in CloudWatch. Use namespaces to
     * group together metrics that are similar. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/cloudwatch_concepts.html#Namespace">Namespaces</a>.</p>
     */
    inline MetricTransformation& WithMetricNamespace(const Aws::String& value) { SetMetricNamespace(value); return *this;}

    /**
     * <p>A custom namespace to contain your metric in CloudWatch. Use namespaces to
     * group together metrics that are similar. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/cloudwatch_concepts.html#Namespace">Namespaces</a>.</p>
     */
    inline MetricTransformation& WithMetricNamespace(Aws::String&& value) { SetMetricNamespace(std::move(value)); return *this;}

    /**
     * <p>A custom namespace to contain your metric in CloudWatch. Use namespaces to
     * group together metrics that are similar. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/cloudwatch_concepts.html#Namespace">Namespaces</a>.</p>
     */
    inline MetricTransformation& WithMetricNamespace(const char* value) { SetMetricNamespace(value); return *this;}


    /**
     * <p>The value to publish to the CloudWatch metric when a filter pattern matches a
     * log event.</p>
     */
    inline const Aws::String& GetMetricValue() const{ return m_metricValue; }

    /**
     * <p>The value to publish to the CloudWatch metric when a filter pattern matches a
     * log event.</p>
     */
    inline bool MetricValueHasBeenSet() const { return m_metricValueHasBeenSet; }

    /**
     * <p>The value to publish to the CloudWatch metric when a filter pattern matches a
     * log event.</p>
     */
    inline void SetMetricValue(const Aws::String& value) { m_metricValueHasBeenSet = true; m_metricValue = value; }

    /**
     * <p>The value to publish to the CloudWatch metric when a filter pattern matches a
     * log event.</p>
     */
    inline void SetMetricValue(Aws::String&& value) { m_metricValueHasBeenSet = true; m_metricValue = std::move(value); }

    /**
     * <p>The value to publish to the CloudWatch metric when a filter pattern matches a
     * log event.</p>
     */
    inline void SetMetricValue(const char* value) { m_metricValueHasBeenSet = true; m_metricValue.assign(value); }

    /**
     * <p>The value to publish to the CloudWatch metric when a filter pattern matches a
     * log event.</p>
     */
    inline MetricTransformation& WithMetricValue(const Aws::String& value) { SetMetricValue(value); return *this;}

    /**
     * <p>The value to publish to the CloudWatch metric when a filter pattern matches a
     * log event.</p>
     */
    inline MetricTransformation& WithMetricValue(Aws::String&& value) { SetMetricValue(std::move(value)); return *this;}

    /**
     * <p>The value to publish to the CloudWatch metric when a filter pattern matches a
     * log event.</p>
     */
    inline MetricTransformation& WithMetricValue(const char* value) { SetMetricValue(value); return *this;}


    /**
     * <p>(Optional) The value to emit when a filter pattern does not match a log
     * event. This value can be null.</p>
     */
    inline double GetDefaultValue() const{ return m_defaultValue; }

    /**
     * <p>(Optional) The value to emit when a filter pattern does not match a log
     * event. This value can be null.</p>
     */
    inline bool DefaultValueHasBeenSet() const { return m_defaultValueHasBeenSet; }

    /**
     * <p>(Optional) The value to emit when a filter pattern does not match a log
     * event. This value can be null.</p>
     */
    inline void SetDefaultValue(double value) { m_defaultValueHasBeenSet = true; m_defaultValue = value; }

    /**
     * <p>(Optional) The value to emit when a filter pattern does not match a log
     * event. This value can be null.</p>
     */
    inline MetricTransformation& WithDefaultValue(double value) { SetDefaultValue(value); return *this;}


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
    inline const Aws::Map<Aws::String, Aws::String>& GetDimensions() const{ return m_dimensions; }

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
    inline bool DimensionsHasBeenSet() const { return m_dimensionsHasBeenSet; }

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
    inline void SetDimensions(const Aws::Map<Aws::String, Aws::String>& value) { m_dimensionsHasBeenSet = true; m_dimensions = value; }

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
    inline void SetDimensions(Aws::Map<Aws::String, Aws::String>&& value) { m_dimensionsHasBeenSet = true; m_dimensions = std::move(value); }

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
    inline MetricTransformation& WithDimensions(const Aws::Map<Aws::String, Aws::String>& value) { SetDimensions(value); return *this;}

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
    inline MetricTransformation& WithDimensions(Aws::Map<Aws::String, Aws::String>&& value) { SetDimensions(std::move(value)); return *this;}

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
    inline MetricTransformation& AddDimensions(const Aws::String& key, const Aws::String& value) { m_dimensionsHasBeenSet = true; m_dimensions.emplace(key, value); return *this; }

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
    inline MetricTransformation& AddDimensions(Aws::String&& key, const Aws::String& value) { m_dimensionsHasBeenSet = true; m_dimensions.emplace(std::move(key), value); return *this; }

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
    inline MetricTransformation& AddDimensions(const Aws::String& key, Aws::String&& value) { m_dimensionsHasBeenSet = true; m_dimensions.emplace(key, std::move(value)); return *this; }

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
    inline MetricTransformation& AddDimensions(Aws::String&& key, Aws::String&& value) { m_dimensionsHasBeenSet = true; m_dimensions.emplace(std::move(key), std::move(value)); return *this; }

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
    inline MetricTransformation& AddDimensions(const char* key, Aws::String&& value) { m_dimensionsHasBeenSet = true; m_dimensions.emplace(key, std::move(value)); return *this; }

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
    inline MetricTransformation& AddDimensions(Aws::String&& key, const char* value) { m_dimensionsHasBeenSet = true; m_dimensions.emplace(std::move(key), value); return *this; }

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
    inline MetricTransformation& AddDimensions(const char* key, const char* value) { m_dimensionsHasBeenSet = true; m_dimensions.emplace(key, value); return *this; }


    /**
     * <p>The unit to assign to the metric. If you omit this, the unit is set as
     * <code>None</code>.</p>
     */
    inline const StandardUnit& GetUnit() const{ return m_unit; }

    /**
     * <p>The unit to assign to the metric. If you omit this, the unit is set as
     * <code>None</code>.</p>
     */
    inline bool UnitHasBeenSet() const { return m_unitHasBeenSet; }

    /**
     * <p>The unit to assign to the metric. If you omit this, the unit is set as
     * <code>None</code>.</p>
     */
    inline void SetUnit(const StandardUnit& value) { m_unitHasBeenSet = true; m_unit = value; }

    /**
     * <p>The unit to assign to the metric. If you omit this, the unit is set as
     * <code>None</code>.</p>
     */
    inline void SetUnit(StandardUnit&& value) { m_unitHasBeenSet = true; m_unit = std::move(value); }

    /**
     * <p>The unit to assign to the metric. If you omit this, the unit is set as
     * <code>None</code>.</p>
     */
    inline MetricTransformation& WithUnit(const StandardUnit& value) { SetUnit(value); return *this;}

    /**
     * <p>The unit to assign to the metric. If you omit this, the unit is set as
     * <code>None</code>.</p>
     */
    inline MetricTransformation& WithUnit(StandardUnit&& value) { SetUnit(std::move(value)); return *this;}

  private:

    Aws::String m_metricName;
    bool m_metricNameHasBeenSet = false;

    Aws::String m_metricNamespace;
    bool m_metricNamespaceHasBeenSet = false;

    Aws::String m_metricValue;
    bool m_metricValueHasBeenSet = false;

    double m_defaultValue;
    bool m_defaultValueHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_dimensions;
    bool m_dimensionsHasBeenSet = false;

    StandardUnit m_unit;
    bool m_unitHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
