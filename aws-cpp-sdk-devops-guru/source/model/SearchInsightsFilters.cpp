/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/devops-guru/model/SearchInsightsFilters.h>
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

SearchInsightsFilters::SearchInsightsFilters() : 
    m_severitiesHasBeenSet(false),
    m_statusesHasBeenSet(false),
    m_resourceCollectionHasBeenSet(false)
{
}

SearchInsightsFilters::SearchInsightsFilters(JsonView jsonValue) : 
    m_severitiesHasBeenSet(false),
    m_statusesHasBeenSet(false),
    m_resourceCollectionHasBeenSet(false)
{
  *this = jsonValue;
}

SearchInsightsFilters& SearchInsightsFilters::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Severities"))
  {
    Array<JsonView> severitiesJsonList = jsonValue.GetArray("Severities");
    for(unsigned severitiesIndex = 0; severitiesIndex < severitiesJsonList.GetLength(); ++severitiesIndex)
    {
      m_severities.push_back(InsightSeverityMapper::GetInsightSeverityForName(severitiesJsonList[severitiesIndex].AsString()));
    }
    m_severitiesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Statuses"))
  {
    Array<JsonView> statusesJsonList = jsonValue.GetArray("Statuses");
    for(unsigned statusesIndex = 0; statusesIndex < statusesJsonList.GetLength(); ++statusesIndex)
    {
      m_statuses.push_back(InsightStatusMapper::GetInsightStatusForName(statusesJsonList[statusesIndex].AsString()));
    }
    m_statusesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceCollection"))
  {
    m_resourceCollection = jsonValue.GetObject("ResourceCollection");

    m_resourceCollectionHasBeenSet = true;
  }

  return *this;
}

JsonValue SearchInsightsFilters::Jsonize() const
{
  JsonValue payload;

  if(m_severitiesHasBeenSet)
  {
   Array<JsonValue> severitiesJsonList(m_severities.size());
   for(unsigned severitiesIndex = 0; severitiesIndex < severitiesJsonList.GetLength(); ++severitiesIndex)
   {
     severitiesJsonList[severitiesIndex].AsString(InsightSeverityMapper::GetNameForInsightSeverity(m_severities[severitiesIndex]));
   }
   payload.WithArray("Severities", std::move(severitiesJsonList));

  }

  if(m_statusesHasBeenSet)
  {
   Array<JsonValue> statusesJsonList(m_statuses.size());
   for(unsigned statusesIndex = 0; statusesIndex < statusesJsonList.GetLength(); ++statusesIndex)
   {
     statusesJsonList[statusesIndex].AsString(InsightStatusMapper::GetNameForInsightStatus(m_statuses[statusesIndex]));
   }
   payload.WithArray("Statuses", std::move(statusesJsonList));

  }

  if(m_resourceCollectionHasBeenSet)
  {
   payload.WithObject("ResourceCollection", m_resourceCollection.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
