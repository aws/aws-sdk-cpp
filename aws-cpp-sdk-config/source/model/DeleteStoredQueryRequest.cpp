/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/model/DeleteStoredQueryRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ConfigService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteStoredQueryRequest::DeleteStoredQueryRequest() : 
    m_queryNameHasBeenSet(false)
{
}

Aws::String DeleteStoredQueryRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_queryNameHasBeenSet)
  {
   payload.WithString("QueryName", m_queryName);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteStoredQueryRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "StarlingDoveService.DeleteStoredQuery"));
  return headers;

}




