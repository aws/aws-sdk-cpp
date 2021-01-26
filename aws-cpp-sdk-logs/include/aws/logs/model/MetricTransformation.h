/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class AWS_CLOUDWATCHLOGS_API MetricTransformation
  {
  public:
    MetricTransformation();
    MetricTransformation(Aws::Utils::Json::JsonView jsonValue);
    MetricTransformation& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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

  private:

    Aws::String m_metricName;
    bool m_metricNameHasBeenSet;

    Aws::String m_metricNamespace;
    bool m_metricNamespaceHasBeenSet;

    Aws::String m_metricValue;
    bool m_metricValueHasBeenSet;

    double m_defaultValue;
    bool m_defaultValueHasBeenSet;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
