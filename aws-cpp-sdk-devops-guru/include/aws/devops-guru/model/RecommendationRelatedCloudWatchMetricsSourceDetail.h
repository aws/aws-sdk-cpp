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

  class AWS_DEVOPSGURU_API RecommendationRelatedCloudWatchMetricsSourceDetail
  {
  public:
    RecommendationRelatedCloudWatchMetricsSourceDetail();
    RecommendationRelatedCloudWatchMetricsSourceDetail(Aws::Utils::Json::JsonView jsonValue);
    RecommendationRelatedCloudWatchMetricsSourceDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetMetricName() const{ return m_metricName; }

    
    inline bool MetricNameHasBeenSet() const { return m_metricNameHasBeenSet; }

    
    inline void SetMetricName(const Aws::String& value) { m_metricNameHasBeenSet = true; m_metricName = value; }

    
    inline void SetMetricName(Aws::String&& value) { m_metricNameHasBeenSet = true; m_metricName = std::move(value); }

    
    inline void SetMetricName(const char* value) { m_metricNameHasBeenSet = true; m_metricName.assign(value); }

    
    inline RecommendationRelatedCloudWatchMetricsSourceDetail& WithMetricName(const Aws::String& value) { SetMetricName(value); return *this;}

    
    inline RecommendationRelatedCloudWatchMetricsSourceDetail& WithMetricName(Aws::String&& value) { SetMetricName(std::move(value)); return *this;}

    
    inline RecommendationRelatedCloudWatchMetricsSourceDetail& WithMetricName(const char* value) { SetMetricName(value); return *this;}


    
    inline const Aws::String& GetNamespace() const{ return m_namespace; }

    
    inline bool NamespaceHasBeenSet() const { return m_namespaceHasBeenSet; }

    
    inline void SetNamespace(const Aws::String& value) { m_namespaceHasBeenSet = true; m_namespace = value; }

    
    inline void SetNamespace(Aws::String&& value) { m_namespaceHasBeenSet = true; m_namespace = std::move(value); }

    
    inline void SetNamespace(const char* value) { m_namespaceHasBeenSet = true; m_namespace.assign(value); }

    
    inline RecommendationRelatedCloudWatchMetricsSourceDetail& WithNamespace(const Aws::String& value) { SetNamespace(value); return *this;}

    
    inline RecommendationRelatedCloudWatchMetricsSourceDetail& WithNamespace(Aws::String&& value) { SetNamespace(std::move(value)); return *this;}

    
    inline RecommendationRelatedCloudWatchMetricsSourceDetail& WithNamespace(const char* value) { SetNamespace(value); return *this;}

  private:

    Aws::String m_metricName;
    bool m_metricNameHasBeenSet;

    Aws::String m_namespace;
    bool m_namespaceHasBeenSet;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
