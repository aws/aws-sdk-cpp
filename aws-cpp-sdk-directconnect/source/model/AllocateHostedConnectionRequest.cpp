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

#include <aws/directconnect/model/AllocateHostedConnectionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DirectConnect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

AllocateHostedConnectionRequest::AllocateHostedConnectionRequest() : 
    m_connectionIdHasBeenSet(false),
    m_ownerAccountHasBeenSet(false),
    m_bandwidthHasBeenSet(false),
    m_connectionNameHasBeenSet(false),
    m_vlan(0),
    m_vlanHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String AllocateHostedConnectionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_connectionIdHasBeenSet)
  {
   payload.WithString("connectionId", m_connectionId);

  }

  if(m_ownerAccountHasBeenSet)
  {
   payload.WithString("ownerAccount", m_ownerAccount);

  }

  if(m_bandwidthHasBeenSet)
  {
   payload.WithString("bandwidth", m_bandwidth);

  }

  if(m_connectionNameHasBeenSet)
  {
   payload.WithString("connectionName", m_connectionName);

  }

  if(m_vlanHasBeenSet)
  {
   payload.WithInteger("vlan", m_vlan);

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

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection AllocateHostedConnectionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "OvertureService.AllocateHostedConnection"));
  return headers;

}




