/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datasync/model/StartDiscoveryJobRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DataSync::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StartDiscoveryJobRequest::StartDiscoveryJobRequest() : 
    m_storageSystemArnHasBeenSet(false),
    m_collectionDurationMinutes(0),
    m_collectionDurationMinutesHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::PseudoRandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_tagsHasBeenSet(false)
{
}

Aws::String StartDiscoveryJobRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_storageSystemArnHasBeenSet)
  {
   payload.WithString("StorageSystemArn", m_storageSystemArn);

  }

  if(m_collectionDurationMinutesHasBeenSet)
  {
   payload.WithInteger("CollectionDurationMinutes", m_collectionDurationMinutes);

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("ClientToken", m_clientToken);

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

Aws::Http::HeaderValueCollection StartDiscoveryJobRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "FmrsService.StartDiscoveryJob"));
  return headers;

}




