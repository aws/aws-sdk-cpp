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

#include <aws/service-quotas/model/MetricInfo.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ServiceQuotas
{
namespace Model
{

MetricInfo::MetricInfo() : 
    m_metricNamespaceHasBeenSet(false),
    m_metricNameHasBeenSet(false),
    m_metricDimensionsHasBeenSet(false),
    m_metricStatisticRecommendationHasBeenSet(false)
{
}

MetricInfo::MetricInfo(JsonView jsonValue) : 
    m_metricNamespaceHasBeenSet(false),
    m_metricNameHasBeenSet(false),
    m_metricDimensionsHasBeenSet(false),
    m_metricStatisticRecommendationHasBeenSet(false)
{
  *this = jsonValue;
}

MetricInfo& MetricInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MetricNamespace"))
  {
    m_metricNamespace = jsonValue.GetString("MetricNamespace");

    m_metricNamespaceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MetricName"))
  {
    m_metricName = jsonValue.GetString("MetricName");

    m_metricNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MetricDimensions"))
  {
    Aws::Map<Aws::String, JsonView> metricDimensionsJsonMap = jsonValue.GetObject("MetricDimensions").GetAllObjects();
    for(auto& metricDimensionsItem : metricDimensionsJsonMap)
    {
      m_metricDimensions[metricDimensionsItem.first] = metricDimensionsItem.second.AsString();
    }
    m_metricDimensionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MetricStatisticRecommendation"))
  {
    m_metricStatisticRecommendation = jsonValue.GetString("MetricStatisticRecommendation");

    m_metricStatisticRecommendationHasBeenSet = true;
  }

  return *this;
}

JsonValue MetricInfo::Jsonize() const
{
  JsonValue payload;

  if(m_metricNamespaceHasBeenSet)
  {
   payload.WithString("MetricNamespace", m_metricNamespace);

  }

  if(m_metricNameHasBeenSet)
  {
   payload.WithString("MetricName", m_metricName);

  }

  if(m_metricDimensionsHasBeenSet)
  {
   JsonValue metricDimensionsJsonMap;
   for(auto& metricDimensionsItem : m_metricDimensions)
   {
     metricDimensionsJsonMap.WithString(metricDimensionsItem.first, metricDimensionsItem.second);
   }
   payload.WithObject("MetricDimensions", std::move(metricDimensionsJsonMap));

  }

  if(m_metricStatisticRecommendationHasBeenSet)
  {
   payload.WithString("MetricStatisticRecommendation", m_metricStatisticRecommendation);

  }

  return payload;
}

} // namespace Model
} // namespace ServiceQuotas
} // namespace Aws
