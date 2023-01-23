/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/logs/model/DeleteQueryDefinitionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CloudWatchLogs::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteQueryDefinitionRequest::DeleteQueryDefinitionRequest() : 
    m_queryDefinitionIdHasBeenSet(false)
{
}

Aws::String DeleteQueryDefinitionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_queryDefinitionIdHasBeenSet)
  {
   payload.WithString("queryDefinitionId", m_queryDefinitionId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteQueryDefinitionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Logs_20140328.DeleteQueryDefinition"));
  return headers;

}




