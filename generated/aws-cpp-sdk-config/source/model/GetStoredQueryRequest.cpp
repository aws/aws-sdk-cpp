/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/model/GetStoredQueryRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ConfigService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetStoredQueryRequest::GetStoredQueryRequest() : 
    m_queryNameHasBeenSet(false)
{
}

Aws::String GetStoredQueryRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_queryNameHasBeenSet)
  {
   payload.WithString("QueryName", m_queryName);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetStoredQueryRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "StarlingDoveService.GetStoredQuery"));
  return headers;

}




