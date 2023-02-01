/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/logs/model/PutQueryDefinitionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CloudWatchLogs::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutQueryDefinitionRequest::PutQueryDefinitionRequest() : 
    m_nameHasBeenSet(false),
    m_queryDefinitionIdHasBeenSet(false),
    m_logGroupNamesHasBeenSet(false),
    m_queryStringHasBeenSet(false)
{
}

Aws::String PutQueryDefinitionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_queryDefinitionIdHasBeenSet)
  {
   payload.WithString("queryDefinitionId", m_queryDefinitionId);

  }

  if(m_logGroupNamesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> logGroupNamesJsonList(m_logGroupNames.size());
   for(unsigned logGroupNamesIndex = 0; logGroupNamesIndex < logGroupNamesJsonList.GetLength(); ++logGroupNamesIndex)
   {
     logGroupNamesJsonList[logGroupNamesIndex].AsString(m_logGroupNames[logGroupNamesIndex]);
   }
   payload.WithArray("logGroupNames", std::move(logGroupNamesJsonList));

  }

  if(m_queryStringHasBeenSet)
  {
   payload.WithString("queryString", m_queryString);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection PutQueryDefinitionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Logs_20140328.PutQueryDefinition"));
  return headers;

}




