/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codecommit/model/ListRepositoriesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CodeCommit::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListRepositoriesRequest::ListRepositoriesRequest() : 
    m_nextTokenHasBeenSet(false),
    m_sortBy(SortByEnum::NOT_SET),
    m_sortByHasBeenSet(false),
    m_order(OrderEnum::NOT_SET),
    m_orderHasBeenSet(false)
{
}

Aws::String ListRepositoriesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("nextToken", m_nextToken);

  }

  if(m_sortByHasBeenSet)
  {
   payload.WithString("sortBy", SortByEnumMapper::GetNameForSortByEnum(m_sortBy));
  }

  if(m_orderHasBeenSet)
  {
   payload.WithString("order", OrderEnumMapper::GetNameForOrderEnum(m_order));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ListRepositoriesRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "CodeCommit_20150413.ListRepositories"));
  return headers;

}




