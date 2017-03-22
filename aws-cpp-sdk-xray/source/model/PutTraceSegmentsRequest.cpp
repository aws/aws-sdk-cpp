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
#include <aws/xray/model/PutTraceSegmentsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::XRay::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutTraceSegmentsRequest::PutTraceSegmentsRequest() : 
    m_traceSegmentDocumentsHasBeenSet(false)
{
}

Aws::String PutTraceSegmentsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_traceSegmentDocumentsHasBeenSet)
  {
   Array<JsonValue> traceSegmentDocumentsJsonList(m_traceSegmentDocuments.size());
   for(unsigned traceSegmentDocumentsIndex = 0; traceSegmentDocumentsIndex < traceSegmentDocumentsJsonList.GetLength(); ++traceSegmentDocumentsIndex)
   {
     traceSegmentDocumentsJsonList[traceSegmentDocumentsIndex].AsString(m_traceSegmentDocuments[traceSegmentDocumentsIndex]);
   }
   payload.WithArray("TraceSegmentDocuments", std::move(traceSegmentDocumentsJsonList));

  }

  return payload.WriteReadable();
}




