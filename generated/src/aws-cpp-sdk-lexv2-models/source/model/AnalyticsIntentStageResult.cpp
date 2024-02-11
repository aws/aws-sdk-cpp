/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/AnalyticsIntentStageResult.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LexModelsV2
{
namespace Model
{

AnalyticsIntentStageResult::AnalyticsIntentStageResult() : 
    m_binKeysHasBeenSet(false),
    m_groupByKeysHasBeenSet(false),
    m_metricsResultsHasBeenSet(false)
{
}

AnalyticsIntentStageResult::AnalyticsIntentStageResult(JsonView jsonValue) : 
    m_binKeysHasBeenSet(false),
    m_groupByKeysHasBeenSet(false),
    m_metricsResultsHasBeenSet(false)
{
  *this = jsonValue;
}

AnalyticsIntentStageResult& AnalyticsIntentStageResult::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("binKeys"))
  {
    Aws::Utils::Array<JsonView> binKeysJsonList = jsonValue.GetArray("binKeys");
    for(unsigned binKeysIndex = 0; binKeysIndex < binKeysJsonList.GetLength(); ++binKeysIndex)
    {
      m_binKeys.push_back(binKeysJsonList[binKeysIndex].AsObject());
    }
    m_binKeysHasBeenSet = true;
  }

  if(jsonValue.ValueExists("groupByKeys"))
  {
    Aws::Utils::Array<JsonView> groupByKeysJsonList = jsonValue.GetArray("groupByKeys");
    for(unsigned groupByKeysIndex = 0; groupByKeysIndex < groupByKeysJsonList.GetLength(); ++groupByKeysIndex)
    {
      m_groupByKeys.push_back(groupByKeysJsonList[groupByKeysIndex].AsObject());
    }
    m_groupByKeysHasBeenSet = true;
  }

  if(jsonValue.ValueExists("metricsResults"))
  {
    Aws::Utils::Array<JsonView> metricsResultsJsonList = jsonValue.GetArray("metricsResults");
    for(unsigned metricsResultsIndex = 0; metricsResultsIndex < metricsResultsJsonList.GetLength(); ++metricsResultsIndex)
    {
      m_metricsResults.push_back(metricsResultsJsonList[metricsResultsIndex].AsObject());
    }
    m_metricsResultsHasBeenSet = true;
  }

  return *this;
}

JsonValue AnalyticsIntentStageResult::Jsonize() const
{
  JsonValue payload;

  if(m_binKeysHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> binKeysJsonList(m_binKeys.size());
   for(unsigned binKeysIndex = 0; binKeysIndex < binKeysJsonList.GetLength(); ++binKeysIndex)
   {
     binKeysJsonList[binKeysIndex].AsObject(m_binKeys[binKeysIndex].Jsonize());
   }
   payload.WithArray("binKeys", std::move(binKeysJsonList));

  }

  if(m_groupByKeysHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> groupByKeysJsonList(m_groupByKeys.size());
   for(unsigned groupByKeysIndex = 0; groupByKeysIndex < groupByKeysJsonList.GetLength(); ++groupByKeysIndex)
   {
     groupByKeysJsonList[groupByKeysIndex].AsObject(m_groupByKeys[groupByKeysIndex].Jsonize());
   }
   payload.WithArray("groupByKeys", std::move(groupByKeysJsonList));

  }

  if(m_metricsResultsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> metricsResultsJsonList(m_metricsResults.size());
   for(unsigned metricsResultsIndex = 0; metricsResultsIndex < metricsResultsJsonList.GetLength(); ++metricsResultsIndex)
   {
     metricsResultsJsonList[metricsResultsIndex].AsObject(m_metricsResults[metricsResultsIndex].Jsonize());
   }
   payload.WithArray("metricsResults", std::move(metricsResultsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
