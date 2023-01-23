/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/BatchGetDataQualityResultRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Glue::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

BatchGetDataQualityResultRequest::BatchGetDataQualityResultRequest() : 
    m_resultIdsHasBeenSet(false)
{
}

Aws::String BatchGetDataQualityResultRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_resultIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> resultIdsJsonList(m_resultIds.size());
   for(unsigned resultIdsIndex = 0; resultIdsIndex < resultIdsJsonList.GetLength(); ++resultIdsIndex)
   {
     resultIdsJsonList[resultIdsIndex].AsString(m_resultIds[resultIdsIndex]);
   }
   payload.WithArray("ResultIds", std::move(resultIdsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection BatchGetDataQualityResultRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSGlue.BatchGetDataQualityResult"));
  return headers;

}




