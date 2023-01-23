/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/CreateDiskRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Lightsail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateDiskRequest::CreateDiskRequest() : 
    m_diskNameHasBeenSet(false),
    m_availabilityZoneHasBeenSet(false),
    m_sizeInGb(0),
    m_sizeInGbHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_addOnsHasBeenSet(false)
{
}

Aws::String CreateDiskRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_diskNameHasBeenSet)
  {
   payload.WithString("diskName", m_diskName);

  }

  if(m_availabilityZoneHasBeenSet)
  {
   payload.WithString("availabilityZone", m_availabilityZone);

  }

  if(m_sizeInGbHasBeenSet)
  {
   payload.WithInteger("sizeInGb", m_sizeInGb);

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

  if(m_addOnsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> addOnsJsonList(m_addOns.size());
   for(unsigned addOnsIndex = 0; addOnsIndex < addOnsJsonList.GetLength(); ++addOnsIndex)
   {
     addOnsJsonList[addOnsIndex].AsObject(m_addOns[addOnsIndex].Jsonize());
   }
   payload.WithArray("addOns", std::move(addOnsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateDiskRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Lightsail_20161128.CreateDisk"));
  return headers;

}




