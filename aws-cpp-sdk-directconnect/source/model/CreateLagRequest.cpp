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

#include <aws/directconnect/model/CreateLagRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DirectConnect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateLagRequest::CreateLagRequest() : 
    m_numberOfConnections(0),
    m_numberOfConnectionsHasBeenSet(false),
    m_locationHasBeenSet(false),
    m_connectionsBandwidthHasBeenSet(false),
    m_lagNameHasBeenSet(false),
    m_connectionIdHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_childConnectionTagsHasBeenSet(false)
{
}

Aws::String CreateLagRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_numberOfConnectionsHasBeenSet)
  {
   payload.WithInteger("numberOfConnections", m_numberOfConnections);

  }

  if(m_locationHasBeenSet)
  {
   payload.WithString("location", m_location);

  }

  if(m_connectionsBandwidthHasBeenSet)
  {
   payload.WithString("connectionsBandwidth", m_connectionsBandwidth);

  }

  if(m_lagNameHasBeenSet)
  {
   payload.WithString("lagName", m_lagName);

  }

  if(m_connectionIdHasBeenSet)
  {
   payload.WithString("connectionId", m_connectionId);

  }

  if(m_tagsHasBeenSet)
  {
   Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("tags", std::move(tagsJsonList));

  }

  if(m_childConnectionTagsHasBeenSet)
  {
   Array<JsonValue> childConnectionTagsJsonList(m_childConnectionTags.size());
   for(unsigned childConnectionTagsIndex = 0; childConnectionTagsIndex < childConnectionTagsJsonList.GetLength(); ++childConnectionTagsIndex)
   {
     childConnectionTagsJsonList[childConnectionTagsIndex].AsObject(m_childConnectionTags[childConnectionTagsIndex].Jsonize());
   }
   payload.WithArray("childConnectionTags", std::move(childConnectionTagsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateLagRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "OvertureService.CreateLag"));
  return headers;

}




