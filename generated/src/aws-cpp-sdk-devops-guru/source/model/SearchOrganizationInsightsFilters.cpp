/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/devops-guru/model/SearchOrganizationInsightsFilters.h>
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

SearchOrganizationInsightsFilters::SearchOrganizationInsightsFilters() : 
    m_severitiesHasBeenSet(false),
    m_statusesHasBeenSet(false),
    m_resourceCollectionHasBeenSet(false),
    m_serviceCollectionHasBeenSet(false)
{
}

SearchOrganizationInsightsFilters::SearchOrganizationInsightsFilters(JsonView jsonValue) : 
    m_severitiesHasBeenSet(false),
    m_statusesHasBeenSet(false),
    m_resourceCollectionHasBeenSet(false),
    m_serviceCollectionHasBeenSet(false)
{
  *this = jsonValue;
}

SearchOrganizationInsightsFilters& SearchOrganizationInsightsFilters::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Severities"))
  {
    Aws::Utils::Array<JsonView> severitiesJsonList = jsonValue.GetArray("Severities");
    for(unsigned severitiesIndex = 0; severitiesIndex < severitiesJsonList.GetLength(); ++severitiesIndex)
    {
      m_severities.push_back(InsightSeverityMapper::GetInsightSeverityForName(severitiesJsonList[severitiesIndex].AsString()));
    }
    m_severitiesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Statuses"))
  {
    Aws::Utils::Array<JsonView> statusesJsonList = jsonValue.GetArray("Statuses");
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

  if(jsonValue.ValueExists("ServiceCollection"))
  {
    m_serviceCollection = jsonValue.GetObject("ServiceCollection");

    m_serviceCollectionHasBeenSet = true;
  }

  return *this;
}

JsonValue SearchOrganizationInsightsFilters::Jsonize() const
{
  JsonValue payload;

  if(m_severitiesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> severitiesJsonList(m_severities.size());
   for(unsigned severitiesIndex = 0; severitiesIndex < severitiesJsonList.GetLength(); ++severitiesIndex)
   {
     severitiesJsonList[severitiesIndex].AsString(InsightSeverityMapper::GetNameForInsightSeverity(m_severities[severitiesIndex]));
   }
   payload.WithArray("Severities", std::move(severitiesJsonList));

  }

  if(m_statusesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> statusesJsonList(m_statuses.size());
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

  if(m_serviceCollectionHasBeenSet)
  {
   payload.WithObject("ServiceCollection", m_serviceCollection.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
