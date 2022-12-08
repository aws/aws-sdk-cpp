/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-guru/DevOpsGuru_EXPORTS.h>
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
namespace DevOpsGuru
{
namespace Model
{

  /**
   * <p> Information about an Amazon CloudWatch metric that is analyzed by DevOps
   * Guru. It is one of many analyzed metrics that are used to generate insights.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/RecommendationRelatedCloudWatchMetricsSourceDetail">AWS
   * API Reference</a></p>
   */
  class RecommendationRelatedCloudWatchMetricsSourceDetail
  {
  public:
    AWS_DEVOPSGURU_API RecommendationRelatedCloudWatchMetricsSourceDetail();
    AWS_DEVOPSGURU_API RecommendationRelatedCloudWatchMetricsSourceDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API RecommendationRelatedCloudWatchMetricsSourceDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API Aws::Utils::Json::JsonValue Jsonize() const;


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
    inline RecommendationRelatedCloudWatchMetricsSourceDetail& WithMetricName(const Aws::String& value) { SetMetricName(value); return *this;}

    /**
     * <p>The name of the CloudWatch metric.</p>
     */
    inline RecommendationRelatedCloudWatchMetricsSourceDetail& WithMetricName(Aws::String&& value) { SetMetricName(std::move(value)); return *this;}

    /**
     * <p>The name of the CloudWatch metric.</p>
     */
    inline RecommendationRelatedCloudWatchMetricsSourceDetail& WithMetricName(const char* value) { SetMetricName(value); return *this;}


    /**
     * <p>The namespace of the CloudWatch metric. A namespace is a container for
     * CloudWatch metrics.</p>
     */
    inline const Aws::String& GetNamespace() const{ return m_namespace; }

    /**
     * <p>The namespace of the CloudWatch metric. A namespace is a container for
     * CloudWatch metrics.</p>
     */
    inline bool NamespaceHasBeenSet() const { return m_namespaceHasBeenSet; }

    /**
     * <p>The namespace of the CloudWatch metric. A namespace is a container for
     * CloudWatch metrics.</p>
     */
    inline void SetNamespace(const Aws::String& value) { m_namespaceHasBeenSet = true; m_namespace = value; }

    /**
     * <p>The namespace of the CloudWatch metric. A namespace is a container for
     * CloudWatch metrics.</p>
     */
    inline void SetNamespace(Aws::String&& value) { m_namespaceHasBeenSet = true; m_namespace = std::move(value); }

    /**
     * <p>The namespace of the CloudWatch metric. A namespace is a container for
     * CloudWatch metrics.</p>
     */
    inline void SetNamespace(const char* value) { m_namespaceHasBeenSet = true; m_namespace.assign(value); }

    /**
     * <p>The namespace of the CloudWatch metric. A namespace is a container for
     * CloudWatch metrics.</p>
     */
    inline RecommendationRelatedCloudWatchMetricsSourceDetail& WithNamespace(const Aws::String& value) { SetNamespace(value); return *this;}

    /**
     * <p>The namespace of the CloudWatch metric. A namespace is a container for
     * CloudWatch metrics.</p>
     */
    inline RecommendationRelatedCloudWatchMetricsSourceDetail& WithNamespace(Aws::String&& value) { SetNamespace(std::move(value)); return *this;}

    /**
     * <p>The namespace of the CloudWatch metric. A namespace is a container for
     * CloudWatch metrics.</p>
     */
    inline RecommendationRelatedCloudWatchMetricsSourceDetail& WithNamespace(const char* value) { SetNamespace(value); return *this;}

  private:

    Aws::String m_metricName;
    bool m_metricNameHasBeenSet = false;

    Aws::String m_namespace;
    bool m_namespaceHasBeenSet = false;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
