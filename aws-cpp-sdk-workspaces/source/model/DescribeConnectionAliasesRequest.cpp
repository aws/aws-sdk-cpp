/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/DescribeConnectionAliasesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::WorkSpaces::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeConnectionAliasesRequest::DescribeConnectionAliasesRequest() : 
    m_aliasIdsHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_limit(0),
    m_limitHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

Aws::String DescribeConnectionAliasesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_aliasIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> aliasIdsJsonList(m_aliasIds.size());
   for(unsigned aliasIdsIndex = 0; aliasIdsIndex < aliasIdsJsonList.GetLength(); ++aliasIdsIndex)
   {
     aliasIdsJsonList[aliasIdsIndex].AsString(m_aliasIds[aliasIdsIndex]);
   }
   payload.WithArray("AliasIds", std::move(aliasIdsJsonList));

  }

  if(m_resourceIdHasBeenSet)
  {
   payload.WithString("ResourceId", m_resourceId);

  }

  if(m_limitHasBeenSet)
  {
   payload.WithInteger("Limit", m_limit);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeConnectionAliasesRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "WorkspacesService.DescribeConnectionAliases"));
  return headers;

}




