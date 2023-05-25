/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/devops-guru/model/RecommendationRelatedCloudWatchMetricsSourceDetail.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DevOpsGuru
{
namespace Model
{

RecommendationRelatedCloudWatchMetricsSourceDetail::RecommendationRelatedCloudWatchMetricsSourceDetail() : 
    m_metricNameHasBeenSet(false),
    m_namespaceHasBeenSet(false)
{
}

RecommendationRelatedCloudWatchMetricsSourceDetail::RecommendationRelatedCloudWatchMetricsSourceDetail(JsonView jsonValue) : 
    m_metricNameHasBeenSet(false),
    m_namespaceHasBeenSet(false)
{
  *this = jsonValue;
}

RecommendationRelatedCloudWatchMetricsSourceDetail& RecommendationRelatedCloudWatchMetricsSourceDetail::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MetricName"))
  {
    m_metricName = jsonValue.GetString("MetricName");

    m_metricNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Namespace"))
  {
    m_namespace = jsonValue.GetString("Namespace");

    m_namespaceHasBeenSet = true;
  }

  return *this;
}

JsonValue RecommendationRelatedCloudWatchMetricsSourceDetail::Jsonize() const
{
  JsonValue payload;

  if(m_metricNameHasBeenSet)
  {
   payload.WithString("MetricName", m_metricName);

  }

  if(m_namespaceHasBeenSet)
  {
   payload.WithString("Namespace", m_namespace);

  }

  return payload;
}

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
