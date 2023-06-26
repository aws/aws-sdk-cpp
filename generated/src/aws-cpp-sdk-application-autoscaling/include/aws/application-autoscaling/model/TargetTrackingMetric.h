/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-autoscaling/ApplicationAutoScaling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/application-autoscaling/model/TargetTrackingMetricDimension.h>
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
namespace ApplicationAutoScaling
{
namespace Model
{

  /**
   * <p>Represents a specific metric.</p> <p>Metric is a property of the
   * <a>TargetTrackingMetricStat</a> object.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/application-autoscaling-2016-02-06/TargetTrackingMetric">AWS
   * API Reference</a></p>
   */
  class TargetTrackingMetric
  {
  public:
    AWS_APPLICATIONAUTOSCALING_API TargetTrackingMetric();
    AWS_APPLICATIONAUTOSCALING_API TargetTrackingMetric(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONAUTOSCALING_API TargetTrackingMetric& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONAUTOSCALING_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The dimensions for the metric. For the list of available dimensions, see the
     * Amazon Web Services documentation available from the table in <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/aws-services-cloudwatch-metrics.html">Amazon
     * Web Services services that publish CloudWatch metrics </a> in the <i>Amazon
     * CloudWatch User Guide</i>. </p> <p>Conditional: If you published your metric
     * with dimensions, you must specify the same dimensions in your scaling
     * policy.</p>
     */
    inline const Aws::Vector<TargetTrackingMetricDimension>& GetDimensions() const{ return m_dimensions; }

    /**
     * <p>The dimensions for the metric. For the list of available dimensions, see the
     * Amazon Web Services documentation available from the table in <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/aws-services-cloudwatch-metrics.html">Amazon
     * Web Services services that publish CloudWatch metrics </a> in the <i>Amazon
     * CloudWatch User Guide</i>. </p> <p>Conditional: If you published your metric
     * with dimensions, you must specify the same dimensions in your scaling
     * policy.</p>
     */
    inline bool DimensionsHasBeenSet() const { return m_dimensionsHasBeenSet; }

    /**
     * <p>The dimensions for the metric. For the list of available dimensions, see the
     * Amazon Web Services documentation available from the table in <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/aws-services-cloudwatch-metrics.html">Amazon
     * Web Services services that publish CloudWatch metrics </a> in the <i>Amazon
     * CloudWatch User Guide</i>. </p> <p>Conditional: If you published your metric
     * with dimensions, you must specify the same dimensions in your scaling
     * policy.</p>
     */
    inline void SetDimensions(const Aws::Vector<TargetTrackingMetricDimension>& value) { m_dimensionsHasBeenSet = true; m_dimensions = value; }

    /**
     * <p>The dimensions for the metric. For the list of available dimensions, see the
     * Amazon Web Services documentation available from the table in <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/aws-services-cloudwatch-metrics.html">Amazon
     * Web Services services that publish CloudWatch metrics </a> in the <i>Amazon
     * CloudWatch User Guide</i>. </p> <p>Conditional: If you published your metric
     * with dimensions, you must specify the same dimensions in your scaling
     * policy.</p>
     */
    inline void SetDimensions(Aws::Vector<TargetTrackingMetricDimension>&& value) { m_dimensionsHasBeenSet = true; m_dimensions = std::move(value); }

    /**
     * <p>The dimensions for the metric. For the list of available dimensions, see the
     * Amazon Web Services documentation available from the table in <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/aws-services-cloudwatch-metrics.html">Amazon
     * Web Services services that publish CloudWatch metrics </a> in the <i>Amazon
     * CloudWatch User Guide</i>. </p> <p>Conditional: If you published your metric
     * with dimensions, you must specify the same dimensions in your scaling
     * policy.</p>
     */
    inline TargetTrackingMetric& WithDimensions(const Aws::Vector<TargetTrackingMetricDimension>& value) { SetDimensions(value); return *this;}

    /**
     * <p>The dimensions for the metric. For the list of available dimensions, see the
     * Amazon Web Services documentation available from the table in <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/aws-services-cloudwatch-metrics.html">Amazon
     * Web Services services that publish CloudWatch metrics </a> in the <i>Amazon
     * CloudWatch User Guide</i>. </p> <p>Conditional: If you published your metric
     * with dimensions, you must specify the same dimensions in your scaling
     * policy.</p>
     */
    inline TargetTrackingMetric& WithDimensions(Aws::Vector<TargetTrackingMetricDimension>&& value) { SetDimensions(std::move(value)); return *this;}

    /**
     * <p>The dimensions for the metric. For the list of available dimensions, see the
     * Amazon Web Services documentation available from the table in <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/aws-services-cloudwatch-metrics.html">Amazon
     * Web Services services that publish CloudWatch metrics </a> in the <i>Amazon
     * CloudWatch User Guide</i>. </p> <p>Conditional: If you published your metric
     * with dimensions, you must specify the same dimensions in your scaling
     * policy.</p>
     */
    inline TargetTrackingMetric& AddDimensions(const TargetTrackingMetricDimension& value) { m_dimensionsHasBeenSet = true; m_dimensions.push_back(value); return *this; }

    /**
     * <p>The dimensions for the metric. For the list of available dimensions, see the
     * Amazon Web Services documentation available from the table in <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/aws-services-cloudwatch-metrics.html">Amazon
     * Web Services services that publish CloudWatch metrics </a> in the <i>Amazon
     * CloudWatch User Guide</i>. </p> <p>Conditional: If you published your metric
     * with dimensions, you must specify the same dimensions in your scaling
     * policy.</p>
     */
    inline TargetTrackingMetric& AddDimensions(TargetTrackingMetricDimension&& value) { m_dimensionsHasBeenSet = true; m_dimensions.push_back(std::move(value)); return *this; }


    /**
     * <p>The name of the metric.</p>
     */
    inline const Aws::String& GetMetricName() const{ return m_metricName; }

    /**
     * <p>The name of the metric.</p>
     */
    inline bool MetricNameHasBeenSet() const { return m_metricNameHasBeenSet; }

    /**
     * <p>The name of the metric.</p>
     */
    inline void SetMetricName(const Aws::String& value) { m_metricNameHasBeenSet = true; m_metricName = value; }

    /**
     * <p>The name of the metric.</p>
     */
    inline void SetMetricName(Aws::String&& value) { m_metricNameHasBeenSet = true; m_metricName = std::move(value); }

    /**
     * <p>The name of the metric.</p>
     */
    inline void SetMetricName(const char* value) { m_metricNameHasBeenSet = true; m_metricName.assign(value); }

    /**
     * <p>The name of the metric.</p>
     */
    inline TargetTrackingMetric& WithMetricName(const Aws::String& value) { SetMetricName(value); return *this;}

    /**
     * <p>The name of the metric.</p>
     */
    inline TargetTrackingMetric& WithMetricName(Aws::String&& value) { SetMetricName(std::move(value)); return *this;}

    /**
     * <p>The name of the metric.</p>
     */
    inline TargetTrackingMetric& WithMetricName(const char* value) { SetMetricName(value); return *this;}


    /**
     * <p>The namespace of the metric. For more information, see the table in <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/aws-services-cloudwatch-metrics.html">Amazon
     * Web Services services that publish CloudWatch metrics </a> in the <i>Amazon
     * CloudWatch User Guide</i>.</p>
     */
    inline const Aws::String& GetNamespace() const{ return m_namespace; }

    /**
     * <p>The namespace of the metric. For more information, see the table in <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/aws-services-cloudwatch-metrics.html">Amazon
     * Web Services services that publish CloudWatch metrics </a> in the <i>Amazon
     * CloudWatch User Guide</i>.</p>
     */
    inline bool NamespaceHasBeenSet() const { return m_namespaceHasBeenSet; }

    /**
     * <p>The namespace of the metric. For more information, see the table in <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/aws-services-cloudwatch-metrics.html">Amazon
     * Web Services services that publish CloudWatch metrics </a> in the <i>Amazon
     * CloudWatch User Guide</i>.</p>
     */
    inline void SetNamespace(const Aws::String& value) { m_namespaceHasBeenSet = true; m_namespace = value; }

    /**
     * <p>The namespace of the metric. For more information, see the table in <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/aws-services-cloudwatch-metrics.html">Amazon
     * Web Services services that publish CloudWatch metrics </a> in the <i>Amazon
     * CloudWatch User Guide</i>.</p>
     */
    inline void SetNamespace(Aws::String&& value) { m_namespaceHasBeenSet = true; m_namespace = std::move(value); }

    /**
     * <p>The namespace of the metric. For more information, see the table in <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/aws-services-cloudwatch-metrics.html">Amazon
     * Web Services services that publish CloudWatch metrics </a> in the <i>Amazon
     * CloudWatch User Guide</i>.</p>
     */
    inline void SetNamespace(const char* value) { m_namespaceHasBeenSet = true; m_namespace.assign(value); }

    /**
     * <p>The namespace of the metric. For more information, see the table in <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/aws-services-cloudwatch-metrics.html">Amazon
     * Web Services services that publish CloudWatch metrics </a> in the <i>Amazon
     * CloudWatch User Guide</i>.</p>
     */
    inline TargetTrackingMetric& WithNamespace(const Aws::String& value) { SetNamespace(value); return *this;}

    /**
     * <p>The namespace of the metric. For more information, see the table in <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/aws-services-cloudwatch-metrics.html">Amazon
     * Web Services services that publish CloudWatch metrics </a> in the <i>Amazon
     * CloudWatch User Guide</i>.</p>
     */
    inline TargetTrackingMetric& WithNamespace(Aws::String&& value) { SetNamespace(std::move(value)); return *this;}

    /**
     * <p>The namespace of the metric. For more information, see the table in <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/aws-services-cloudwatch-metrics.html">Amazon
     * Web Services services that publish CloudWatch metrics </a> in the <i>Amazon
     * CloudWatch User Guide</i>.</p>
     */
    inline TargetTrackingMetric& WithNamespace(const char* value) { SetNamespace(value); return *this;}

  private:

    Aws::Vector<TargetTrackingMetricDimension> m_dimensions;
    bool m_dimensionsHasBeenSet = false;

    Aws::String m_metricName;
    bool m_metricNameHasBeenSet = false;

    Aws::String m_namespace;
    bool m_namespaceHasBeenSet = false;
  };

} // namespace Model
} // namespace ApplicationAutoScaling
} // namespace Aws
