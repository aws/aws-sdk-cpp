/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/deadline/model/SearchTasksRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::deadline::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

SearchTasksRequest::SearchTasksRequest() : 
    m_farmIdHasBeenSet(false),
    m_filterExpressionsHasBeenSet(false),
    m_itemOffset(0),
    m_itemOffsetHasBeenSet(false),
    m_jobIdHasBeenSet(false),
    m_pageSize(0),
    m_pageSizeHasBeenSet(false),
    m_queueIdsHasBeenSet(false),
    m_sortExpressionsHasBeenSet(false)
{
}

Aws::String SearchTasksRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_filterExpressionsHasBeenSet)
  {
   payload.WithObject("filterExpressions", m_filterExpressions.Jsonize());

  }

  if(m_itemOffsetHasBeenSet)
  {
   payload.WithInteger("itemOffset", m_itemOffset);

  }

  if(m_jobIdHasBeenSet)
  {
   payload.WithString("jobId", m_jobId);

  }

  if(m_pageSizeHasBeenSet)
  {
   payload.WithInteger("pageSize", m_pageSize);

  }

  if(m_queueIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> queueIdsJsonList(m_queueIds.size());
   for(unsigned queueIdsIndex = 0; queueIdsIndex < queueIdsJsonList.GetLength(); ++queueIdsIndex)
   {
     queueIdsJsonList[queueIdsIndex].AsString(m_queueIds[queueIdsIndex]);
   }
   payload.WithArray("queueIds", std::move(queueIdsJsonList));

  }

  if(m_sortExpressionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> sortExpressionsJsonList(m_sortExpressions.size());
   for(unsigned sortExpressionsIndex = 0; sortExpressionsIndex < sortExpressionsJsonList.GetLength(); ++sortExpressionsIndex)
   {
     sortExpressionsJsonList[sortExpressionsIndex].AsObject(m_sortExpressions[sortExpressionsIndex].Jsonize());
   }
   payload.WithArray("sortExpressions", std::move(sortExpressionsJsonList));

  }

  return payload.View().WriteReadable();
}




