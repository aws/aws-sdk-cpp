﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/GetMLTaskRunsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Glue::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetMLTaskRunsRequest::GetMLTaskRunsRequest() : 
    m_transformIdHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_filterHasBeenSet(false),
    m_sortHasBeenSet(false)
{
}

Aws::String GetMLTaskRunsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_transformIdHasBeenSet)
  {
   payload.WithString("TransformId", m_transformId);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("MaxResults", m_maxResults);

  }

  if(m_filterHasBeenSet)
  {
   payload.WithObject("Filter", m_filter.Jsonize());

  }

  if(m_sortHasBeenSet)
  {
   payload.WithObject("Sort", m_sort.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetMLTaskRunsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSGlue.GetMLTaskRuns"));
  return headers;

}




