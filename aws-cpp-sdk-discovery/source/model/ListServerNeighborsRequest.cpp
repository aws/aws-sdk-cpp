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
   Array<JsonValue> neighborConfigurationIdsJsonList(m_neighborConfigurationIds.size());
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

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection ListServerNeighborsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSPoseidonService_V2015_11_01.ListServerNeighbors"));
  return headers;

}




