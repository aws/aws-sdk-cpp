﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/xray/model/BatchGetTracesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::XRay::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

BatchGetTracesRequest::BatchGetTracesRequest() : 
    m_traceIdsHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

Aws::String BatchGetTracesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_traceIdsHasBeenSet)
  {
   Array<JsonValue> traceIdsJsonList(m_traceIds.size());
   for(unsigned traceIdsIndex = 0; traceIdsIndex < traceIdsJsonList.GetLength(); ++traceIdsIndex)
   {
     traceIdsJsonList[traceIdsIndex].AsString(m_traceIds[traceIdsIndex]);
   }
   payload.WithArray("TraceIds", std::move(traceIdsJsonList));

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  return payload.View().WriteReadable();
}




