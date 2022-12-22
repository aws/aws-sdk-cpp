/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * <p>Information about the CloudWatch metric that reflects quota
   * usage.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/service-quotas-2019-06-24/MetricInfo">AWS
   * API Reference</a></p>
   */
  class MetricInfo
  {
  public:
    AWS_SERVICEQUOTAS_API MetricInfo();
    AWS_SERVICEQUOTAS_API MetricInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICEQUOTAS_API MetricInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICEQUOTAS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The namespace of the metric.</p>
     */
    inline const Aws::String& GetMetricNamespace() const{ return m_metricNamespace; }

    /**
     * <p>The namespace of the metric.</p>
     */
    inline bool MetricNamespaceHasBeenSet() const { return m_metricNamespaceHasBeenSet; }

    /**
     * <p>The namespace of the metric.</p>
     */
    inline void SetMetricNamespace(const Aws::String& value) { m_metricNamespaceHasBeenSet = true; m_metricNamespace = value; }

    /**
     * <p>The namespace of the metric.</p>
     */
    inline void SetMetricNamespace(Aws::String&& value) { m_metricNamespaceHasBeenSet = true; m_metricNamespace = std::move(value); }

    /**
     * <p>The namespace of the metric.</p>
     */
    inline void SetMetricNamespace(const char* value) { m_metricNamespaceHasBeenSet = true; m_metricNamespace.assign(value); }

    /**
     * <p>The namespace of the metric.</p>
     */
    inline MetricInfo& WithMetricNamespace(const Aws::String& value) { SetMetricNamespace(value); return *this;}

    /**
     * <p>The namespace of the metric.</p>
     */
    inline MetricInfo& WithMetricNamespace(Aws::String&& value) { SetMetricNamespace(std::move(value)); return *this;}

    /**
     * <p>The namespace of the metric.</p>
     */
    inline MetricInfo& WithMetricNamespace(const char* value) { SetMetricNamespace(value); return *this;}


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
    inline MetricInfo& WithMetricName(const Aws::String& value) { SetMetricName(value); return *this;}

    /**
     * <p>The name of the metric.</p>
     */
    inline MetricInfo& WithMetricName(Aws::String&& value) { SetMetricName(std::move(value)); return *this;}

    /**
     * <p>The name of the metric.</p>
     */
    inline MetricInfo& WithMetricName(const char* value) { SetMetricName(value); return *this;}


    /**
     * <p>The metric dimension. This is a name/value pair that is part of the identity
     * of a metric.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetMetricDimensions() const{ return m_metricDimensions; }

    /**
     * <p>The metric dimension. This is a name/value pair that is part of the identity
     * of a metric.</p>
     */
    inline bool MetricDimensionsHasBeenSet() const { return m_metricDimensionsHasBeenSet; }

    /**
     * <p>The metric dimension. This is a name/value pair that is part of the identity
     * of a metric.</p>
     */
    inline void SetMetricDimensions(const Aws::Map<Aws::String, Aws::String>& value) { m_metricDimensionsHasBeenSet = true; m_metricDimensions = value; }

    /**
     * <p>The metric dimension. This is a name/value pair that is part of the identity
     * of a metric.</p>
     */
    inline void SetMetricDimensions(Aws::Map<Aws::String, Aws::String>&& value) { m_metricDimensionsHasBeenSet = true; m_metricDimensions = std::move(value); }

    /**
     * <p>The metric dimension. This is a name/value pair that is part of the identity
     * of a metric.</p>
     */
    inline MetricInfo& WithMetricDimensions(const Aws::Map<Aws::String, Aws::String>& value) { SetMetricDimensions(value); return *this;}

    /**
     * <p>The metric dimension. This is a name/value pair that is part of the identity
     * of a metric.</p>
     */
    inline MetricInfo& WithMetricDimensions(Aws::Map<Aws::String, Aws::String>&& value) { SetMetricDimensions(std::move(value)); return *this;}

    /**
     * <p>The metric dimension. This is a name/value pair that is part of the identity
     * of a metric.</p>
     */
    inline MetricInfo& AddMetricDimensions(const Aws::String& key, const Aws::String& value) { m_metricDimensionsHasBeenSet = true; m_metricDimensions.emplace(key, value); return *this; }

    /**
     * <p>The metric dimension. This is a name/value pair that is part of the identity
     * of a metric.</p>
     */
    inline MetricInfo& AddMetricDimensions(Aws::String&& key, const Aws::String& value) { m_metricDimensionsHasBeenSet = true; m_metricDimensions.emplace(std::move(key), value); return *this; }

    /**
     * <p>The metric dimension. This is a name/value pair that is part of the identity
     * of a metric.</p>
     */
    inline MetricInfo& AddMetricDimensions(const Aws::String& key, Aws::String&& value) { m_metricDimensionsHasBeenSet = true; m_metricDimensions.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The metric dimension. This is a name/value pair that is part of the identity
     * of a metric.</p>
     */
    inline MetricInfo& AddMetricDimensions(Aws::String&& key, Aws::String&& value) { m_metricDimensionsHasBeenSet = true; m_metricDimensions.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The metric dimension. This is a name/value pair that is part of the identity
     * of a metric.</p>
     */
    inline MetricInfo& AddMetricDimensions(const char* key, Aws::String&& value) { m_metricDimensionsHasBeenSet = true; m_metricDimensions.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The metric dimension. This is a name/value pair that is part of the identity
     * of a metric.</p>
     */
    inline MetricInfo& AddMetricDimensions(Aws::String&& key, const char* value) { m_metricDimensionsHasBeenSet = true; m_metricDimensions.emplace(std::move(key), value); return *this; }

    /**
     * <p>The metric dimension. This is a name/value pair that is part of the identity
     * of a metric.</p>
     */
    inline MetricInfo& AddMetricDimensions(const char* key, const char* value) { m_metricDimensionsHasBeenSet = true; m_metricDimensions.emplace(key, value); return *this; }


    /**
     * <p>The metric statistic that we recommend you use when determining quota
     * usage.</p>
     */
    inline const Aws::String& GetMetricStatisticRecommendation() const{ return m_metricStatisticRecommendation; }

    /**
     * <p>The metric statistic that we recommend you use when determining quota
     * usage.</p>
     */
    inline bool MetricStatisticRecommendationHasBeenSet() const { return m_metricStatisticRecommendationHasBeenSet; }

    /**
     * <p>The metric statistic that we recommend you use when determining quota
     * usage.</p>
     */
    inline void SetMetricStatisticRecommendation(const Aws::String& value) { m_metricStatisticRecommendationHasBeenSet = true; m_metricStatisticRecommendation = value; }

    /**
     * <p>The metric statistic that we recommend you use when determining quota
     * usage.</p>
     */
    inline void SetMetricStatisticRecommendation(Aws::String&& value) { m_metricStatisticRecommendationHasBeenSet = true; m_metricStatisticRecommendation = std::move(value); }

    /**
     * <p>The metric statistic that we recommend you use when determining quota
     * usage.</p>
     */
    inline void SetMetricStatisticRecommendation(const char* value) { m_metricStatisticRecommendationHasBeenSet = true; m_metricStatisticRecommendation.assign(value); }

    /**
     * <p>The metric statistic that we recommend you use when determining quota
     * usage.</p>
     */
    inline MetricInfo& WithMetricStatisticRecommendation(const Aws::String& value) { SetMetricStatisticRecommendation(value); return *this;}

    /**
     * <p>The metric statistic that we recommend you use when determining quota
     * usage.</p>
     */
    inline MetricInfo& WithMetricStatisticRecommendation(Aws::String&& value) { SetMetricStatisticRecommendation(std::move(value)); return *this;}

    /**
     * <p>The metric statistic that we recommend you use when determining quota
     * usage.</p>
     */
    inline MetricInfo& WithMetricStatisticRecommendation(const char* value) { SetMetricStatisticRecommendation(value); return *this;}

  private:

    Aws::String m_metricNamespace;
    bool m_metricNamespaceHasBeenSet = false;

    Aws::String m_metricName;
    bool m_metricNameHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_metricDimensions;
    bool m_metricDimensionsHasBeenSet = false;

    Aws::String m_metricStatisticRecommendation;
    bool m_metricStatisticRecommendationHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceQuotas
} // namespace Aws
