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
   Array<JsonValue> objectIdsJsonList(m_objectIds.size());
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

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection SetStatusRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "DataPipeline.SetStatus"));
  return headers;

}



