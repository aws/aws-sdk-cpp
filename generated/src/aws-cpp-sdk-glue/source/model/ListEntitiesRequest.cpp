/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/ListEntitiesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Glue::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListEntitiesRequest::ListEntitiesRequest() : 
    m_connectionNameHasBeenSet(false),
    m_catalogIdHasBeenSet(false),
    m_parentEntityNameHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_dataStoreApiVersionHasBeenSet(false)
{
}

Aws::String ListEntitiesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_connectionNameHasBeenSet)
  {
   payload.WithString("ConnectionName", m_connectionName);

  }

  if(m_catalogIdHasBeenSet)
  {
   payload.WithString("CatalogId", m_catalogId);

  }

  if(m_parentEntityNameHasBeenSet)
  {
   payload.WithString("ParentEntityName", m_parentEntityName);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  if(m_dataStoreApiVersionHasBeenSet)
  {
   payload.WithString("DataStoreApiVersion", m_dataStoreApiVersion);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ListEntitiesRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSGlue.ListEntities"));
  return headers;

}




