/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/directconnect/model/CreateConnectionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DirectConnect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateConnectionRequest::CreateConnectionRequest() : 
    m_locationHasBeenSet(false),
    m_bandwidthHasBeenSet(false),
    m_connectionNameHasBeenSet(false),
    m_lagIdHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_providerNameHasBeenSet(false),
    m_requestMACSec(false),
    m_requestMACSecHasBeenSet(false)
{
}

Aws::String CreateConnectionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_locationHasBeenSet)
  {
   payload.WithString("location", m_location);

  }

  if(m_bandwidthHasBeenSet)
  {
   payload.WithString("bandwidth", m_bandwidth);

  }

  if(m_connectionNameHasBeenSet)
  {
   payload.WithString("connectionName", m_connectionName);

  }

  if(m_lagIdHasBeenSet)
  {
   payload.WithString("lagId", m_lagId);

  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("tags", std::move(tagsJsonList));

  }

  if(m_providerNameHasBeenSet)
  {
   payload.WithString("providerName", m_providerName);

  }

  if(m_requestMACSecHasBeenSet)
  {
   payload.WithBool("requestMACSec", m_requestMACSec);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateConnectionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "OvertureService.CreateConnection"));
  return headers;

}




