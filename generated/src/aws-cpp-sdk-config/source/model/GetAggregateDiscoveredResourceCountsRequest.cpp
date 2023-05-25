/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/model/GetAggregateDiscoveredResourceCountsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ConfigService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetAggregateDiscoveredResourceCountsRequest::GetAggregateDiscoveredResourceCountsRequest() : 
    m_configurationAggregatorNameHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_groupByKey(ResourceCountGroupKey::NOT_SET),
    m_groupByKeyHasBeenSet(false),
    m_limit(0),
    m_limitHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

Aws::String GetAggregateDiscoveredResourceCountsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_configurationAggregatorNameHasBeenSet)
  {
   payload.WithString("ConfigurationAggregatorName", m_configurationAggregatorName);

  }

  if(m_filtersHasBeenSet)
  {
   payload.WithObject("Filters", m_filters.Jsonize());

  }

  if(m_groupByKeyHasBeenSet)
  {
   payload.WithString("GroupByKey", ResourceCountGroupKeyMapper::GetNameForResourceCountGroupKey(m_groupByKey));
  }

  if(m_limitHasBeenSet)
  {
   payload.WithInteger("Limit", m_limit);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetAggregateDiscoveredResourceCountsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "StarlingDoveService.GetAggregateDiscoveredResourceCounts"));
  return headers;

}




