/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dynamodb/model/ListGlobalTablesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DynamoDB::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListGlobalTablesRequest::ListGlobalTablesRequest() : 
    m_exclusiveStartGlobalTableNameHasBeenSet(false),
    m_limit(0),
    m_limitHasBeenSet(false),
    m_regionNameHasBeenSet(false)
{
}

Aws::String ListGlobalTablesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_exclusiveStartGlobalTableNameHasBeenSet)
  {
   payload.WithString("ExclusiveStartGlobalTableName", m_exclusiveStartGlobalTableName);

  }

  if(m_limitHasBeenSet)
  {
   payload.WithInteger("Limit", m_limit);

  }

  if(m_regionNameHasBeenSet)
  {
   payload.WithString("RegionName", m_regionName);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ListGlobalTablesRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "DynamoDB_20120810.ListGlobalTables"));
  return headers;

}




