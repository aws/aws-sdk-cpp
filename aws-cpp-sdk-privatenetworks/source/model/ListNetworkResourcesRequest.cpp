/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/privatenetworks/model/ListNetworkResourcesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::PrivateNetworks::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListNetworkResourcesRequest::ListNetworkResourcesRequest() : 
    m_filtersHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_networkArnHasBeenSet(false),
    m_startTokenHasBeenSet(false)
{
}

Aws::String ListNetworkResourcesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_filtersHasBeenSet)
  {
   JsonValue filtersJsonMap;
   for(auto& filtersItem : m_filters)
   {
     Aws::Utils::Array<JsonValue> networkResourceFilterValuesJsonList(filtersItem.second.size());
     for(unsigned networkResourceFilterValuesIndex = 0; networkResourceFilterValuesIndex < networkResourceFilterValuesJsonList.GetLength(); ++networkResourceFilterValuesIndex)
     {
       networkResourceFilterValuesJsonList[networkResourceFilterValuesIndex].AsString(filtersItem.second[networkResourceFilterValuesIndex]);
     }
     filtersJsonMap.WithArray(NetworkResourceFilterKeysMapper::GetNameForNetworkResourceFilterKeys(filtersItem.first), std::move(networkResourceFilterValuesJsonList));
   }
   payload.WithObject("filters", std::move(filtersJsonMap));

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("maxResults", m_maxResults);

  }

  if(m_networkArnHasBeenSet)
  {
   payload.WithString("networkArn", m_networkArn);

  }

  if(m_startTokenHasBeenSet)
  {
   payload.WithString("startToken", m_startToken);

  }

  return payload.View().WriteReadable();
}




