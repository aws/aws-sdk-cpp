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
#include <aws/xray/model/GetTraceGraphRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::XRay::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetTraceGraphRequest::GetTraceGraphRequest() : 
    m_traceIdsHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

Aws::String GetTraceGraphRequest::SerializePayload() const
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

  return payload.WriteReadable();
}




