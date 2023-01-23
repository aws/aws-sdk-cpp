/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/athena/model/BatchGetNamedQueryRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Athena::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

BatchGetNamedQueryRequest::BatchGetNamedQueryRequest() : 
    m_namedQueryIdsHasBeenSet(false)
{
}

Aws::String BatchGetNamedQueryRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_namedQueryIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> namedQueryIdsJsonList(m_namedQueryIds.size());
   for(unsigned namedQueryIdsIndex = 0; namedQueryIdsIndex < namedQueryIdsJsonList.GetLength(); ++namedQueryIdsIndex)
   {
     namedQueryIdsJsonList[namedQueryIdsIndex].AsString(m_namedQueryIds[namedQueryIdsIndex]);
   }
   payload.WithArray("NamedQueryIds", std::move(namedQueryIdsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection BatchGetNamedQueryRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonAthena.BatchGetNamedQuery"));
  return headers;

}




