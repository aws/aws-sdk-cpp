/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datapipeline/model/SetStatusRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DataPipeline::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

SetStatusRequest::SetStatusRequest() : 
    m_pipelineIdHasBeenSet(false),
    m_objectIdsHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

Aws::String SetStatusRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_pipelineIdHasBeenSet)
  {
   payload.WithString("pipelineId", m_pipelineId);

  }

  if(m_objectIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> objectIdsJsonList(m_objectIds.size());
   for(unsigned objectIdsIndex = 0; objectIdsIndex < objectIdsJsonList.GetLength(); ++objectIdsIndex)
   {
     objectIdsJsonList[objectIdsIndex].AsString(m_objectIds[objectIdsIndex]);
   }
   payload.WithArray("objectIds", std::move(objectIdsJsonList));

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", m_status);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection SetStatusRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "DataPipeline.SetStatus"));
  return headers;

}




