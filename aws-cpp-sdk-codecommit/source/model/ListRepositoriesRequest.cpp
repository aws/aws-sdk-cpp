/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection ListRepositoriesRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "CodeCommit_20150413.ListRepositories"));
  return headers;

}



