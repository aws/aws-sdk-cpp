/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/awstransfer/model/ImportHostKeyRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Transfer::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ImportHostKeyRequest::ImportHostKeyRequest() : 
    m_serverIdHasBeenSet(false),
    m_hostKeyBodyHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String ImportHostKeyRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_serverIdHasBeenSet)
  {
   payload.WithString("ServerId", m_serverId);

  }

  if(m_hostKeyBodyHasBeenSet)
  {
   payload.WithString("HostKeyBody", m_hostKeyBody);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("Tags", std::move(tagsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ImportHostKeyRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "TransferService.ImportHostKey"));
  return headers;

}




