/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#include <aws/iotthingsgraph/model/GetEntitiesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoTThingsGraph::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetEntitiesRequest::GetEntitiesRequest() : 
    m_idsHasBeenSet(false),
    m_namespaceVersion(0),
    m_namespaceVersionHasBeenSet(false)
{
}

Aws::String GetEntitiesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_idsHasBeenSet)
  {
   Array<JsonValue> idsJsonList(m_ids.size());
   for(unsigned idsIndex = 0; idsIndex < idsJsonList.GetLength(); ++idsIndex)
   {
     idsJsonList[idsIndex].AsString(m_ids[idsIndex]);
   }
   payload.WithArray("ids", std::move(idsJsonList));

  }

  if(m_namespaceVersionHasBeenSet)
  {
   payload.WithInt64("namespaceVersion", m_namespaceVersion);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetEntitiesRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "IotThingsGraphFrontEndService.GetEntities"));
  return headers;

}




