/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/discovery/model/ListConfigurationsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ApplicationDiscoveryService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListConfigurationsRequest::ListConfigurationsRequest() : 
    m_configurationType(ConfigurationItemType::NOT_SET),
    m_configurationTypeHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_orderByHasBeenSet(false)
{
}

Aws::String ListConfigurationsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_configurationTypeHasBeenSet)
  {
   payload.WithString("configurationType", ConfigurationItemTypeMapper::GetNameForConfigurationItemType(m_configurationType));
  }

  if(m_filtersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> filtersJsonList(m_filters.size());
   for(unsigned filtersIndex = 0; filtersIndex < filtersJsonList.GetLength(); ++filtersIndex)
   {
     filtersJsonList[filtersIndex].AsObject(m_filters[filtersIndex].Jsonize());
   }
   payload.WithArray("filters", std::move(filtersJsonList));

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("maxResults", m_maxResults);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("nextToken", m_nextToken);

  }

  if(m_orderByHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> orderByJsonList(m_orderBy.size());
   for(unsigned orderByIndex = 0; orderByIndex < orderByJsonList.GetLength(); ++orderByIndex)
   {
     orderByJsonList[orderByIndex].AsObject(m_orderBy[orderByIndex].Jsonize());
   }
   payload.WithArray("orderBy", std::move(orderByJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ListConfigurationsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSPoseidonService_V2015_11_01.ListConfigurations"));
  return headers;

}




