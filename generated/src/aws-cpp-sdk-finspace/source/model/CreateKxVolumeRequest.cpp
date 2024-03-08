/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/finspace/model/CreateKxVolumeRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::finspace::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateKxVolumeRequest::CreateKxVolumeRequest() : 
    m_clientToken(Aws::Utils::UUID::PseudoRandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_environmentIdHasBeenSet(false),
    m_volumeType(KxVolumeType::NOT_SET),
    m_volumeTypeHasBeenSet(false),
    m_volumeNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_nas1ConfigurationHasBeenSet(false),
    m_azMode(KxAzMode::NOT_SET),
    m_azModeHasBeenSet(false),
    m_availabilityZoneIdsHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateKxVolumeRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  if(m_volumeTypeHasBeenSet)
  {
   payload.WithString("volumeType", KxVolumeTypeMapper::GetNameForKxVolumeType(m_volumeType));
  }

  if(m_volumeNameHasBeenSet)
  {
   payload.WithString("volumeName", m_volumeName);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_nas1ConfigurationHasBeenSet)
  {
   payload.WithObject("nas1Configuration", m_nas1Configuration.Jsonize());

  }

  if(m_azModeHasBeenSet)
  {
   payload.WithString("azMode", KxAzModeMapper::GetNameForKxAzMode(m_azMode));
  }

  if(m_availabilityZoneIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> availabilityZoneIdsJsonList(m_availabilityZoneIds.size());
   for(unsigned availabilityZoneIdsIndex = 0; availabilityZoneIdsIndex < availabilityZoneIdsJsonList.GetLength(); ++availabilityZoneIdsIndex)
   {
     availabilityZoneIdsJsonList[availabilityZoneIdsIndex].AsString(m_availabilityZoneIds[availabilityZoneIdsIndex]);
   }
   payload.WithArray("availabilityZoneIds", std::move(availabilityZoneIdsJsonList));

  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("tags", std::move(tagsJsonMap));

  }

  return payload.View().WriteReadable();
}




