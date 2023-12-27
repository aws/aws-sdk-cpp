/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanroomsml/model/AudienceQualityMetrics.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CleanRoomsML
{
namespace Model
{

AudienceQualityMetrics::AudienceQualityMetrics() : 
    m_relevanceMetricsHasBeenSet(false)
{
}

AudienceQualityMetrics::AudienceQualityMetrics(JsonView jsonValue) : 
    m_relevanceMetricsHasBeenSet(false)
{
  *this = jsonValue;
}

AudienceQualityMetrics& AudienceQualityMetrics::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("relevanceMetrics"))
  {
    Aws::Utils::Array<JsonView> relevanceMetricsJsonList = jsonValue.GetArray("relevanceMetrics");
    for(unsigned relevanceMetricsIndex = 0; relevanceMetricsIndex < relevanceMetricsJsonList.GetLength(); ++relevanceMetricsIndex)
    {
      m_relevanceMetrics.push_back(relevanceMetricsJsonList[relevanceMetricsIndex].AsObject());
    }
    m_relevanceMetricsHasBeenSet = true;
  }

  return *this;
}

JsonValue AudienceQualityMetrics::Jsonize() const
{
  JsonValue payload;

  if(m_relevanceMetricsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> relevanceMetricsJsonList(m_relevanceMetrics.size());
   for(unsigned relevanceMetricsIndex = 0; relevanceMetricsIndex < relevanceMetricsJsonList.GetLength(); ++relevanceMetricsIndex)
   {
     relevanceMetricsJsonList[relevanceMetricsIndex].AsObject(m_relevanceMetrics[relevanceMetricsIndex].Jsonize());
   }
   payload.WithArray("relevanceMetrics", std::move(relevanceMetricsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
