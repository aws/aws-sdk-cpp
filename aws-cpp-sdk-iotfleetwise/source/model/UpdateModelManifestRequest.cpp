/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotfleetwise/model/UpdateModelManifestRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoTFleetWise::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateModelManifestRequest::UpdateModelManifestRequest() : 
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_nodesToAddHasBeenSet(false),
    m_nodesToRemoveHasBeenSet(false),
    m_status(ManifestStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
}

Aws::String UpdateModelManifestRequest::SerializePayload() const
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

  if(m_nodesToAddHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> nodesToAddJsonList(m_nodesToAdd.size());
   for(unsigned nodesToAddIndex = 0; nodesToAddIndex < nodesToAddJsonList.GetLength(); ++nodesToAddIndex)
   {
     nodesToAddJsonList[nodesToAddIndex].AsString(m_nodesToAdd[nodesToAddIndex]);
   }
   payload.WithArray("nodesToAdd", std::move(nodesToAddJsonList));

  }

  if(m_nodesToRemoveHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> nodesToRemoveJsonList(m_nodesToRemove.size());
   for(unsigned nodesToRemoveIndex = 0; nodesToRemoveIndex < nodesToRemoveJsonList.GetLength(); ++nodesToRemoveIndex)
   {
     nodesToRemoveJsonList[nodesToRemoveIndex].AsString(m_nodesToRemove[nodesToRemoveIndex]);
   }
   payload.WithArray("nodesToRemove", std::move(nodesToRemoveJsonList));

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", ManifestStatusMapper::GetNameForManifestStatus(m_status));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateModelManifestRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "IoTAutobahnControlPlane.UpdateModelManifest"));
  return headers;

}




