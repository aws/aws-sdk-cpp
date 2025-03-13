/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/model/ConfigurationAggregator.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ConfigService
{
namespace Model
{

ConfigurationAggregator::ConfigurationAggregator(JsonView jsonValue)
{
  *this = jsonValue;
}

ConfigurationAggregator& ConfigurationAggregator::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ConfigurationAggregatorName"))
  {
    m_configurationAggregatorName = jsonValue.GetString("ConfigurationAggregatorName");
    m_configurationAggregatorNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ConfigurationAggregatorArn"))
  {
    m_configurationAggregatorArn = jsonValue.GetString("ConfigurationAggregatorArn");
    m_configurationAggregatorArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AccountAggregationSources"))
  {
    Aws::Utils::Array<JsonView> accountAggregationSourcesJsonList = jsonValue.GetArray("AccountAggregationSources");
    for(unsigned accountAggregationSourcesIndex = 0; accountAggregationSourcesIndex < accountAggregationSourcesJsonList.GetLength(); ++accountAggregationSourcesIndex)
    {
      m_accountAggregationSources.push_back(accountAggregationSourcesJsonList[accountAggregationSourcesIndex].AsObject());
    }
    m_accountAggregationSourcesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("OrganizationAggregationSource"))
  {
    m_organizationAggregationSource = jsonValue.GetObject("OrganizationAggregationSource");
    m_organizationAggregationSourceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");
    m_creationTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LastUpdatedTime"))
  {
    m_lastUpdatedTime = jsonValue.GetDouble("LastUpdatedTime");
    m_lastUpdatedTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreatedBy"))
  {
    m_createdBy = jsonValue.GetString("CreatedBy");
    m_createdByHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AggregatorFilters"))
  {
    m_aggregatorFilters = jsonValue.GetObject("AggregatorFilters");
    m_aggregatorFiltersHasBeenSet = true;
  }
  return *this;
}

JsonValue ConfigurationAggregator::Jsonize() const
{
  JsonValue payload;

  if(m_configurationAggregatorNameHasBeenSet)
  {
   payload.WithString("ConfigurationAggregatorName", m_configurationAggregatorName);

  }

  if(m_configurationAggregatorArnHasBeenSet)
  {
   payload.WithString("ConfigurationAggregatorArn", m_configurationAggregatorArn);

  }

  if(m_accountAggregationSourcesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> accountAggregationSourcesJsonList(m_accountAggregationSources.size());
   for(unsigned accountAggregationSourcesIndex = 0; accountAggregationSourcesIndex < accountAggregationSourcesJsonList.GetLength(); ++accountAggregationSourcesIndex)
   {
     accountAggregationSourcesJsonList[accountAggregationSourcesIndex].AsObject(m_accountAggregationSources[accountAggregationSourcesIndex].Jsonize());
   }
   payload.WithArray("AccountAggregationSources", std::move(accountAggregationSourcesJsonList));

  }

  if(m_organizationAggregationSourceHasBeenSet)
  {
   payload.WithObject("OrganizationAggregationSource", m_organizationAggregationSource.Jsonize());

  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("CreationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if(m_lastUpdatedTimeHasBeenSet)
  {
   payload.WithDouble("LastUpdatedTime", m_lastUpdatedTime.SecondsWithMSPrecision());
  }

  if(m_createdByHasBeenSet)
  {
   payload.WithString("CreatedBy", m_createdBy);

  }

  if(m_aggregatorFiltersHasBeenSet)
  {
   payload.WithObject("AggregatorFilters", m_aggregatorFilters.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ConfigService
} // namespace Aws
