/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/SearchQueuesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

SearchQueuesRequest::SearchQueuesRequest() : 
    m_instanceIdHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_searchFilterHasBeenSet(false),
    m_searchCriteriaHasBeenSet(false)
{
}

Aws::String SearchQueuesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_instanceIdHasBeenSet)
  {
   payload.WithString("InstanceId", m_instanceId);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("MaxResults", m_maxResults);

  }

  if(m_searchFilterHasBeenSet)
  {
   payload.WithObject("SearchFilter", m_searchFilter.Jsonize());

  }

  if(m_searchCriteriaHasBeenSet)
  {
   payload.WithObject("SearchCriteria", m_searchCriteria.Jsonize());

  }

  return payload.View().WriteReadable();
}




