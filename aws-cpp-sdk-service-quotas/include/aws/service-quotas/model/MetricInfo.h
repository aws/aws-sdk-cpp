/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/service-quotas/ServiceQuotas_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace ServiceQuotas
{
namespace Model
{

  /**
   * <p>A structure that uses CloudWatch metrics to gather data about the service
   * quota.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/service-quotas-2019-06-24/MetricInfo">AWS
   * API Reference</a></p>
   */
  class AWS_SERVICEQUOTAS_API MetricInfo
  {
  public:
    MetricInfo();
    MetricInfo(Aws::Utils::Json::JsonView jsonValue);
    MetricInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The namespace of the metric. The namespace is a container for CloudWatch
     * metrics. You can specify a name for the namespace when you create a metric.</p>
     */
    inline const Aws::String& GetMetricNamespace() const{ return m_metricNamespace; }

    /**
     * <p>The namespace of the metric. The namespace is a container for CloudWatch
     * metrics. You can specify a name for the namespace when you create a metric.</p>
     */
    inline bool MetricNamespaceHasBeenSet() const { return m_metricNamespaceHasBeenSet; }

    /**
     * <p>The namespace of the metric. The namespace is a container for CloudWatch
     * metrics. You can specify a name for the namespace when you create a metric.</p>
     */
    inline void SetMetricNamespace(const Aws::String& value) { m_metricNamespaceHasBeenSet = true; m_metricNamespace = value; }

    /**
     * <p>The namespace of the metric. The namespace is a container for CloudWatch
     * metrics. You can specify a name for the namespace when you create a metric.</p>
     */
    inline void SetMetricNamespace(Aws::String&& value) { m_metricNamespaceHasBeenSet = true; m_metricNamespace = std::move(value); }

    /**
     * <p>The namespace of the metric. The namespace is a container for CloudWatch
     * metrics. You can specify a name for the namespace when you create a metric.</p>
     */
    inline void SetMetricNamespace(const char* value) { m_metricNamespaceHasBeenSet = true; m_metricNamespace.assign(value); }

    /**
     * <p>The namespace of the metric. The namespace is a container for CloudWatch
     * metrics. You can specify a name for the namespace when you create a metric.</p>
     */
    inline MetricInfo& WithMetricNamespace(const Aws::String& value) { SetMetricNamespace(value); return *this;}

    /**
     * <p>The namespace of the metric. The namespace is a container for CloudWatch
     * metrics. You can specify a name for the namespace when you create a metric.</p>
     */
    inline MetricInfo& WithMetricNamespace(Aws::String&& value) { SetMetricNamespace(std::move(value)); return *this;}

    /**
     * <p>The namespace of the metric. The namespace is a container for CloudWatch
     * metrics. You can specify a name for the namespace when you create a metric.</p>
     */
    inline MetricInfo& WithMetricNamespace(const char* value) { SetMetricNamespace(value); return *this;}


    /**
     * <p>The name of the CloudWatch metric that measures usage of a service quota.
     * This is a required field.</p>
     */
    inline const Aws::String& GetMetricName() const{ return m_metricName; }

    /**
     * <p>The name of the CloudWatch metric that measures usage of a service quota.
     * This is a required field.</p>
     */
    inline bool MetricNameHasBeenSet() const { return m_metricNameHasBeenSet; }

    /**
     * <p>The name of the CloudWatch metric that measures usage of a service quota.
     * This is a required field.</p>
     */
    inline void SetMetricName(const Aws::String& value) { m_metricNameHasBeenSet = true; m_metricName = value; }

    /**
     * <p>The name of the CloudWatch metric that measures usage of a service quota.
     * This is a required field.</p>
     */
    inline void SetMetricName(Aws::String&& value) { m_metricNameHasBeenSet = true; m_metricName = std::move(value); }

    /**
     * <p>The name of the CloudWatch metric that measures usage of a service quota.
     * This is a required field.</p>
     */
    inline void SetMetricName(const char* value) { m_metricNameHasBeenSet = true; m_metricName.assign(value); }

    /**
     * <p>The name of the CloudWatch metric that measures usage of a service quota.
     * This is a required field.</p>
     */
    inline MetricInfo& WithMetricName(const Aws::String& value) { SetMetricName(value); return *this;}

    /**
     * <p>The name of the CloudWatch metric that measures usage of a service quota.
     * This is a required field.</p>
     */
    inline MetricInfo& WithMetricName(Aws::String&& value) { SetMetricName(std::move(value)); return *this;}

    /**
     * <p>The name of the CloudWatch metric that measures usage of a service quota.
     * This is a required field.</p>
     */
    inline MetricInfo& WithMetricName(const char* value) { SetMetricName(value); return *this;}


    /**
     * <p>A dimension is a name/value pair that is part of the identity of a metric.
     * Every metric has specific characteristics that describe it, and you can think of
     * dimensions as categories for those characteristics. These dimensions are part of
     * the CloudWatch Metric Identity that measures usage against a particular service
     * quota.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetMetricDimensions() const{ return m_metricDimensions; }

    /**
     * <p>A dimension is a name/value pair that is part of the identity of a metric.
     * Every metric has specific characteristics that describe it, and you can think of
     * dimensions as categories for those characteristics. These dimensions are part of
     * the CloudWatch Metric Identity that measures usage against a particular service
     * quota.</p>
     */
    inline bool MetricDimensionsHasBeenSet() const { return m_metricDimensionsHasBeenSet; }

    /**
     * <p>A dimension is a name/value pair that is part of the identity of a metric.
     * Every metric has specific characteristics that describe it, and you can think of
     * dimensions as categories for those characteristics. These dimensions are part of
     * the CloudWatch Metric Identity that measures usage against a particular service
     * quota.</p>
     */
    inline void SetMetricDimensions(const Aws::Map<Aws::String, Aws::String>& value) { m_metricDimensionsHasBeenSet = true; m_metricDimensions = value; }

    /**
     * <p>A dimension is a name/value pair that is part of the identity of a metric.
     * Every metric has specific characteristics that describe it, and you can think of
     * dimensions as categories for those characteristics. These dimensions are part of
     * the CloudWatch Metric Identity that measures usage against a particular service
     * quota.</p>
     */
    inline void SetMetricDimensions(Aws::Map<Aws::String, Aws::String>&& value) { m_metricDimensionsHasBeenSet = true; m_metricDimensions = std::move(value); }

    /**
     * <p>A dimension is a name/value pair that is part of the identity of a metric.
     * Every metric has specific characteristics that describe it, and you can think of
     * dimensions as categories for those characteristics. These dimensions are part of
     * the CloudWatch Metric Identity that measures usage against a particular service
     * quota.</p>
     */
    inline MetricInfo& WithMetricDimensions(const Aws::Map<Aws::String, Aws::String>& value) { SetMetricDimensions(value); return *this;}

    /**
     * <p>A dimension is a name/value pair that is part of the identity of a metric.
     * Every metric has specific characteristics that describe it, and you can think of
     * dimensions as categories for those characteristics. These dimensions are part of
     * the CloudWatch Metric Identity that measures usage against a particular service
     * quota.</p>
     */
    inline MetricInfo& WithMetricDimensions(Aws::Map<Aws::String, Aws::String>&& value) { SetMetricDimensions(std::move(value)); return *this;}

    /**
     * <p>A dimension is a name/value pair that is part of the identity of a metric.
     * Every metric has specific characteristics that describe it, and you can think of
     * dimensions as categories for those characteristics. These dimensions are part of
     * the CloudWatch Metric Identity that measures usage against a particular service
     * quota.</p>
     */
    inline MetricInfo& AddMetricDimensions(const Aws::String& key, const Aws::String& value) { m_metricDimensionsHasBeenSet = true; m_metricDimensions.emplace(key, value); return *this; }

    /**
     * <p>A dimension is a name/value pair that is part of the identity of a metric.
     * Every metric has specific characteristics that describe it, and you can think of
     * dimensions as categories for those characteristics. These dimensions are part of
     * the CloudWatch Metric Identity that measures usage against a particular service
     * quota.</p>
     */
    inline MetricInfo& AddMetricDimensions(Aws::String&& key, const Aws::String& value) { m_metricDimensionsHasBeenSet = true; m_metricDimensions.emplace(std::move(key), value); return *this; }

    /**
     * <p>A dimension is a name/value pair that is part of the identity of a metric.
     * Every metric has specific characteristics that describe it, and you can think of
     * dimensions as categories for those characteristics. These dimensions are part of
     * the CloudWatch Metric Identity that measures usage against a particular service
     * quota.</p>
     */
    inline MetricInfo& AddMetricDimensions(const Aws::String& key, Aws::String&& value) { m_metricDimensionsHasBeenSet = true; m_metricDimensions.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A dimension is a name/value pair that is part of the identity of a metric.
     * Every metric has specific characteristics that describe it, and you can think of
     * dimensions as categories for those characteristics. These dimensions are part of
     * the CloudWatch Metric Identity that measures usage against a particular service
     * quota.</p>
     */
    inline MetricInfo& AddMetricDimensions(Aws::String&& key, Aws::String&& value) { m_metricDimensionsHasBeenSet = true; m_metricDimensions.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A dimension is a name/value pair that is part of the identity of a metric.
     * Every metric has specific characteristics that describe it, and you can think of
     * dimensions as categories for those characteristics. These dimensions are part of
     * the CloudWatch Metric Identity that measures usage against a particular service
     * quota.</p>
     */
    inline MetricInfo& AddMetricDimensions(const char* key, Aws::String&& value) { m_metricDimensionsHasBeenSet = true; m_metricDimensions.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A dimension is a name/value pair that is part of the identity of a metric.
     * Every metric has specific characteristics that describe it, and you can think of
     * dimensions as categories for those characteristics. These dimensions are part of
     * the CloudWatch Metric Identity that measures usage against a particular service
     * quota.</p>
     */
    inline MetricInfo& AddMetricDimensions(Aws::String&& key, const char* value) { m_metricDimensionsHasBeenSet = true; m_metricDimensions.emplace(std::move(key), value); return *this; }

    /**
     * <p>A dimension is a name/value pair that is part of the identity of a metric.
     * Every metric has specific characteristics that describe it, and you can think of
     * dimensions as categories for those characteristics. These dimensions are part of
     * the CloudWatch Metric Identity that measures usage against a particular service
     * quota.</p>
     */
    inline MetricInfo& AddMetricDimensions(const char* key, const char* value) { m_metricDimensionsHasBeenSet = true; m_metricDimensions.emplace(key, value); return *this; }


    /**
     * <p>Statistics are metric data aggregations over specified periods of time. This
     * is the recommended statistic to use when comparing usage in the CloudWatch
     * Metric against your Service Quota.</p>
     */
    inline const Aws::String& GetMetricStatisticRecommendation() const{ return m_metricStatisticRecommendation; }

    /**
     * <p>Statistics are metric data aggregations over specified periods of time. This
     * is the recommended statistic to use when comparing usage in the CloudWatch
     * Metric against your Service Quota.</p>
     */
    inline bool MetricStatisticRecommendationHasBeenSet() const { return m_metricStatisticRecommendationHasBeenSet; }

    /**
     * <p>Statistics are metric data aggregations over specified periods of time. This
     * is the recommended statistic to use when comparing usage in the CloudWatch
     * Metric against your Service Quota.</p>
     */
    inline void SetMetricStatisticRecommendation(const Aws::String& value) { m_metricStatisticRecommendationHasBeenSet = true; m_metricStatisticRecommendation = value; }

    /**
     * <p>Statistics are metric data aggregations over specified periods of time. This
     * is the recommended statistic to use when comparing usage in the CloudWatch
     * Metric against your Service Quota.</p>
     */
    inline void SetMetricStatisticRecommendation(Aws::String&& value) { m_metricStatisticRecommendationHasBeenSet = true; m_metricStatisticRecommendation = std::move(value); }

    /**
     * <p>Statistics are metric data aggregations over specified periods of time. This
     * is the recommended statistic to use when comparing usage in the CloudWatch
     * Metric against your Service Quota.</p>
     */
    inline void SetMetricStatisticRecommendation(const char* value) { m_metricStatisticRecommendationHasBeenSet = true; m_metricStatisticRecommendation.assign(value); }

    /**
     * <p>Statistics are metric data aggregations over specified periods of time. This
     * is the recommended statistic to use when comparing usage in the CloudWatch
     * Metric against your Service Quota.</p>
     */
    inline MetricInfo& WithMetricStatisticRecommendation(const Aws::String& value) { SetMetricStatisticRecommendation(value); return *this;}

    /**
     * <p>Statistics are metric data aggregations over specified periods of time. This
     * is the recommended statistic to use when comparing usage in the CloudWatch
     * Metric against your Service Quota.</p>
     */
    inline MetricInfo& WithMetricStatisticRecommendation(Aws::String&& value) { SetMetricStatisticRecommendation(std::move(value)); return *this;}

    /**
     * <p>Statistics are metric data aggregations over specified periods of time. This
     * is the recommended statistic to use when comparing usage in the CloudWatch
     * Metric against your Service Quota.</p>
     */
    inline MetricInfo& WithMetricStatisticRecommendation(const char* value) { SetMetricStatisticRecommendation(value); return *this;}

  private:

    Aws::String m_metricNamespace;
    bool m_metricNamespaceHasBeenSet;

    Aws::String m_metricName;
    bool m_metricNameHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_metricDimensions;
    bool m_metricDimensionsHasBeenSet;

    Aws::String m_metricStatisticRecommendation;
    bool m_metricStatisticRecommendationHasBeenSet;
  };

} // namespace Model
} // namespace ServiceQuotas
} // namespace Aws
