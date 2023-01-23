/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecs/model/ListTaskDefinitionsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ECS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListTaskDefinitionsRequest::ListTaskDefinitionsRequest() : 
    m_familyPrefixHasBeenSet(false),
    m_status(TaskDefinitionStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_sort(SortOrder::NOT_SET),
    m_sortHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false)
{
}

Aws::String ListTaskDefinitionsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_familyPrefixHasBeenSet)
  {
   payload.WithString("familyPrefix", m_familyPrefix);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", TaskDefinitionStatusMapper::GetNameForTaskDefinitionStatus(m_status));
  }

  if(m_sortHasBeenSet)
  {
   payload.WithString("sort", SortOrderMapper::GetNameForSortOrder(m_sort));
  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("nextToken", m_nextToken);

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("maxResults", m_maxResults);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ListTaskDefinitionsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonEC2ContainerServiceV20141113.ListTaskDefinitions"));
  return headers;

}




