/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/discovery/model/ListServerNeighborsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ApplicationDiscoveryService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListServerNeighborsRequest::ListServerNeighborsRequest() : 
    m_configurationIdHasBeenSet(false),
    m_portInformationNeeded(false),
    m_portInformationNeededHasBeenSet(false),
    m_neighborConfigurationIdsHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

Aws::String ListServerNeighborsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_configurationIdHasBeenSet)
  {
   payload.WithString("configurationId", m_configurationId);

  }

  if(m_portInformationNeededHasBeenSet)
  {
   payload.WithBool("portInformationNeeded", m_portInformationNeeded);

  }

  if(m_neighborConfigurationIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> neighborConfigurationIdsJsonList(m_neighborConfigurationIds.size());
   for(unsigned neighborConfigurationIdsIndex = 0; neighborConfigurationIdsIndex < neighborConfigurationIdsJsonList.GetLength(); ++neighborConfigurationIdsIndex)
   {
     neighborConfigurationIdsJsonList[neighborConfigurationIdsIndex].AsString(m_neighborConfigurationIds[neighborConfigurationIdsIndex]);
   }
   payload.WithArray("neighborConfigurationIds", std::move(neighborConfigurationIdsJsonList));

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("maxResults", m_maxResults);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("nextToken", m_nextToken);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ListServerNeighborsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSPoseidonService_V2015_11_01.ListServerNeighbors"));
  return headers;

}




