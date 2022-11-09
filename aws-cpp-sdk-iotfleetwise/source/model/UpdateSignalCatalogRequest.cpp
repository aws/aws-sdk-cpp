/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotfleetwise/model/UpdateSignalCatalogRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoTFleetWise::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateSignalCatalogRequest::UpdateSignalCatalogRequest() : 
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_nodesToAddHasBeenSet(false),
    m_nodesToUpdateHasBeenSet(false),
    m_nodesToRemoveHasBeenSet(false)
{
}

Aws::String UpdateSignalCatalogRequest::SerializePayload() const
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
     nodesToAddJsonList[nodesToAddIndex].AsObject(m_nodesToAdd[nodesToAddIndex].Jsonize());
   }
   payload.WithArray("nodesToAdd", std::move(nodesToAddJsonList));

  }

  if(m_nodesToUpdateHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> nodesToUpdateJsonList(m_nodesToUpdate.size());
   for(unsigned nodesToUpdateIndex = 0; nodesToUpdateIndex < nodesToUpdateJsonList.GetLength(); ++nodesToUpdateIndex)
   {
     nodesToUpdateJsonList[nodesToUpdateIndex].AsObject(m_nodesToUpdate[nodesToUpdateIndex].Jsonize());
   }
   payload.WithArray("nodesToUpdate", std::move(nodesToUpdateJsonList));

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

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateSignalCatalogRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "IoTAutobahnControlPlane.UpdateSignalCatalog"));
  return headers;

}




