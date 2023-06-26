/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/directconnect/model/CreateInterconnectRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DirectConnect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateInterconnectRequest::CreateInterconnectRequest() : 
    m_interconnectNameHasBeenSet(false),
    m_bandwidthHasBeenSet(false),
    m_locationHasBeenSet(false),
    m_lagIdHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_providerNameHasBeenSet(false)
{
}

Aws::String CreateInterconnectRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_interconnectNameHasBeenSet)
  {
   payload.WithString("interconnectName", m_interconnectName);

  }

  if(m_bandwidthHasBeenSet)
  {
   payload.WithString("bandwidth", m_bandwidth);

  }

  if(m_locationHasBeenSet)
  {
   payload.WithString("location", m_location);

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

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateInterconnectRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "OvertureService.CreateInterconnect"));
  return headers;

}




