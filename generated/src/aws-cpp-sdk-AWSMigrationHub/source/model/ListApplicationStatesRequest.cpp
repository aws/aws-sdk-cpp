/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/AWSMigrationHub/model/ListApplicationStatesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MigrationHub::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListApplicationStatesRequest::ListApplicationStatesRequest() : 
    m_applicationIdsHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false)
{
}

Aws::String ListApplicationStatesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_applicationIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> applicationIdsJsonList(m_applicationIds.size());
   for(unsigned applicationIdsIndex = 0; applicationIdsIndex < applicationIdsJsonList.GetLength(); ++applicationIdsIndex)
   {
     applicationIdsJsonList[applicationIdsIndex].AsString(m_applicationIds[applicationIdsIndex]);
   }
   payload.WithArray("ApplicationIds", std::move(applicationIdsJsonList));

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("MaxResults", m_maxResults);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ListApplicationStatesRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSMigrationHub.ListApplicationStates"));
  return headers;

}




