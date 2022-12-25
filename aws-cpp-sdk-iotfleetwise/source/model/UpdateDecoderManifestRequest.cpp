/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotfleetwise/model/UpdateDecoderManifestRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoTFleetWise::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateDecoderManifestRequest::UpdateDecoderManifestRequest() : 
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_signalDecodersToAddHasBeenSet(false),
    m_signalDecodersToUpdateHasBeenSet(false),
    m_signalDecodersToRemoveHasBeenSet(false),
    m_networkInterfacesToAddHasBeenSet(false),
    m_networkInterfacesToUpdateHasBeenSet(false),
    m_networkInterfacesToRemoveHasBeenSet(false),
    m_status(ManifestStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
}

Aws::String UpdateDecoderManifestRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_signalDecodersToAddHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> signalDecodersToAddJsonList(m_signalDecodersToAdd.size());
   for(unsigned signalDecodersToAddIndex = 0; signalDecodersToAddIndex < signalDecodersToAddJsonList.GetLength(); ++signalDecodersToAddIndex)
   {
     signalDecodersToAddJsonList[signalDecodersToAddIndex].AsObject(m_signalDecodersToAdd[signalDecodersToAddIndex].Jsonize());
   }
   payload.WithArray("signalDecodersToAdd", std::move(signalDecodersToAddJsonList));

  }

  if(m_signalDecodersToUpdateHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> signalDecodersToUpdateJsonList(m_signalDecodersToUpdate.size());
   for(unsigned signalDecodersToUpdateIndex = 0; signalDecodersToUpdateIndex < signalDecodersToUpdateJsonList.GetLength(); ++signalDecodersToUpdateIndex)
   {
     signalDecodersToUpdateJsonList[signalDecodersToUpdateIndex].AsObject(m_signalDecodersToUpdate[signalDecodersToUpdateIndex].Jsonize());
   }
   payload.WithArray("signalDecodersToUpdate", std::move(signalDecodersToUpdateJsonList));

  }

  if(m_signalDecodersToRemoveHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> signalDecodersToRemoveJsonList(m_signalDecodersToRemove.size());
   for(unsigned signalDecodersToRemoveIndex = 0; signalDecodersToRemoveIndex < signalDecodersToRemoveJsonList.GetLength(); ++signalDecodersToRemoveIndex)
   {
     signalDecodersToRemoveJsonList[signalDecodersToRemoveIndex].AsString(m_signalDecodersToRemove[signalDecodersToRemoveIndex]);
   }
   payload.WithArray("signalDecodersToRemove", std::move(signalDecodersToRemoveJsonList));

  }

  if(m_networkInterfacesToAddHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> networkInterfacesToAddJsonList(m_networkInterfacesToAdd.size());
   for(unsigned networkInterfacesToAddIndex = 0; networkInterfacesToAddIndex < networkInterfacesToAddJsonList.GetLength(); ++networkInterfacesToAddIndex)
   {
     networkInterfacesToAddJsonList[networkInterfacesToAddIndex].AsObject(m_networkInterfacesToAdd[networkInterfacesToAddIndex].Jsonize());
   }
   payload.WithArray("networkInterfacesToAdd", std::move(networkInterfacesToAddJsonList));

  }

  if(m_networkInterfacesToUpdateHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> networkInterfacesToUpdateJsonList(m_networkInterfacesToUpdate.size());
   for(unsigned networkInterfacesToUpdateIndex = 0; networkInterfacesToUpdateIndex < networkInterfacesToUpdateJsonList.GetLength(); ++networkInterfacesToUpdateIndex)
   {
     networkInterfacesToUpdateJsonList[networkInterfacesToUpdateIndex].AsObject(m_networkInterfacesToUpdate[networkInterfacesToUpdateIndex].Jsonize());
   }
   payload.WithArray("networkInterfacesToUpdate", std::move(networkInterfacesToUpdateJsonList));

  }

  if(m_networkInterfacesToRemoveHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> networkInterfacesToRemoveJsonList(m_networkInterfacesToRemove.size());
   for(unsigned networkInterfacesToRemoveIndex = 0; networkInterfacesToRemoveIndex < networkInterfacesToRemoveJsonList.GetLength(); ++networkInterfacesToRemoveIndex)
   {
     networkInterfacesToRemoveJsonList[networkInterfacesToRemoveIndex].AsString(m_networkInterfacesToRemove[networkInterfacesToRemoveIndex]);
   }
   payload.WithArray("networkInterfacesToRemove", std::move(networkInterfacesToRemoveJsonList));

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", ManifestStatusMapper::GetNameForManifestStatus(m_status));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateDecoderManifestRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "IoTAutobahnControlPlane.UpdateDecoderManifest"));
  return headers;

}




