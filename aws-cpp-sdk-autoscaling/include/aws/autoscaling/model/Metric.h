/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/autoscaling/AutoScaling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/autoscaling/model/MetricDimension.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace AutoScaling
{
namespace Model
{

  /**
   * <p>Represents a specific metric. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/Metric">AWS
   * API Reference</a></p>
   */
  class Metric
  {
  public:
    AWS_AUTOSCALING_API Metric();
    AWS_AUTOSCALING_API Metric(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_AUTOSCALING_API Metric& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_AUTOSCALING_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_AUTOSCALING_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


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
    inline Metric& WithNamespace(const Aws::String& value) { SetNamespace(value); return *this;}

    /**
     * <p>The namespace of the metric. For more information, see the table in <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/aws-services-cloudwatch-metrics.html">Amazon
     * Web Services services that publish CloudWatch metrics </a> in the <i>Amazon
     * CloudWatch User Guide</i>.</p>
     */
    inline Metric& WithNamespace(Aws::String&& value) { SetNamespace(std::move(value)); return *this;}

    /**
     * <p>The namespace of the metric. For more information, see the table in <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/aws-services-cloudwatch-metrics.html">Amazon
     * Web Services services that publish CloudWatch metrics </a> in the <i>Amazon
     * CloudWatch User Guide</i>.</p>
     */
    inline Metric& WithNamespace(const char* value) { SetNamespace(value); return *this;}


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
    inline Metric& WithMetricName(const Aws::String& value) { SetMetricName(value); return *this;}

    /**
     * <p>The name of the metric.</p>
     */
    inline Metric& WithMetricName(Aws::String&& value) { SetMetricName(std::move(value)); return *this;}

    /**
     * <p>The name of the metric.</p>
     */
    inline Metric& WithMetricName(const char* value) { SetMetricName(value); return *this;}


    /**
     * <p>The dimensions for the metric. For the list of available dimensions, see the
     * Amazon Web Services documentation available from the table in <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/aws-services-cloudwatch-metrics.html">Amazon
     * Web Services services that publish CloudWatch metrics </a> in the <i>Amazon
     * CloudWatch User Guide</i>. </p> <p>Conditional: If you published your metric
     * with dimensions, you must specify the same dimensions in your scaling
     * policy.</p>
     */
    inline const Aws::Vector<MetricDimension>& GetDimensions() const{ return m_dimensions; }

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
    inline void SetDimensions(const Aws::Vector<MetricDimension>& value) { m_dimensionsHasBeenSet = true; m_dimensions = value; }

    /**
     * <p>The dimensions for the metric. For the list of available dimensions, see the
     * Amazon Web Services documentation available from the table in <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/aws-services-cloudwatch-metrics.html">Amazon
     * Web Services services that publish CloudWatch metrics </a> in the <i>Amazon
     * CloudWatch User Guide</i>. </p> <p>Conditional: If you published your metric
     * with dimensions, you must specify the same dimensions in your scaling
     * policy.</p>
     */
    inline void SetDimensions(Aws::Vector<MetricDimension>&& value) { m_dimensionsHasBeenSet = true; m_dimensions = std::move(value); }

    /**
     * <p>The dimensions for the metric. For the list of available dimensions, see the
     * Amazon Web Services documentation available from the table in <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/aws-services-cloudwatch-metrics.html">Amazon
     * Web Services services that publish CloudWatch metrics </a> in the <i>Amazon
     * CloudWatch User Guide</i>. </p> <p>Conditional: If you published your metric
     * with dimensions, you must specify the same dimensions in your scaling
     * policy.</p>
     */
    inline Metric& WithDimensions(const Aws::Vector<MetricDimension>& value) { SetDimensions(value); return *this;}

    /**
     * <p>The dimensions for the metric. For the list of available dimensions, see the
     * Amazon Web Services documentation available from the table in <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/aws-services-cloudwatch-metrics.html">Amazon
     * Web Services services that publish CloudWatch metrics </a> in the <i>Amazon
     * CloudWatch User Guide</i>. </p> <p>Conditional: If you published your metric
     * with dimensions, you must specify the same dimensions in your scaling
     * policy.</p>
     */
    inline Metric& WithDimensions(Aws::Vector<MetricDimension>&& value) { SetDimensions(std::move(value)); return *this;}

    /**
     * <p>The dimensions for the metric. For the list of available dimensions, see the
     * Amazon Web Services documentation available from the table in <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/aws-services-cloudwatch-metrics.html">Amazon
     * Web Services services that publish CloudWatch metrics </a> in the <i>Amazon
     * CloudWatch User Guide</i>. </p> <p>Conditional: If you published your metric
     * with dimensions, you must specify the same dimensions in your scaling
     * policy.</p>
     */
    inline Metric& AddDimensions(const MetricDimension& value) { m_dimensionsHasBeenSet = true; m_dimensions.push_back(value); return *this; }

    /**
     * <p>The dimensions for the metric. For the list of available dimensions, see the
     * Amazon Web Services documentation available from the table in <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/aws-services-cloudwatch-metrics.html">Amazon
     * Web Services services that publish CloudWatch metrics </a> in the <i>Amazon
     * CloudWatch User Guide</i>. </p> <p>Conditional: If you published your metric
     * with dimensions, you must specify the same dimensions in your scaling
     * policy.</p>
     */
    inline Metric& AddDimensions(MetricDimension&& value) { m_dimensionsHasBeenSet = true; m_dimensions.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_namespace;
    bool m_namespaceHasBeenSet = false;

    Aws::String m_metricName;
    bool m_metricNameHasBeenSet = false;

    Aws::Vector<MetricDimension> m_dimensions;
    bool m_dimensionsHasBeenSet = false;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
