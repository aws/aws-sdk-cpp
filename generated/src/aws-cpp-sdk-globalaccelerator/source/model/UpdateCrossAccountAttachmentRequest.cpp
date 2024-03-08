/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/globalaccelerator/model/UpdateCrossAccountAttachmentRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::GlobalAccelerator::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateCrossAccountAttachmentRequest::UpdateCrossAccountAttachmentRequest() : 
    m_attachmentArnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_addPrincipalsHasBeenSet(false),
    m_removePrincipalsHasBeenSet(false),
    m_addResourcesHasBeenSet(false),
    m_removeResourcesHasBeenSet(false)
{
}

Aws::String UpdateCrossAccountAttachmentRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_attachmentArnHasBeenSet)
  {
   payload.WithString("AttachmentArn", m_attachmentArn);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_addPrincipalsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> addPrincipalsJsonList(m_addPrincipals.size());
   for(unsigned addPrincipalsIndex = 0; addPrincipalsIndex < addPrincipalsJsonList.GetLength(); ++addPrincipalsIndex)
   {
     addPrincipalsJsonList[addPrincipalsIndex].AsString(m_addPrincipals[addPrincipalsIndex]);
   }
   payload.WithArray("AddPrincipals", std::move(addPrincipalsJsonList));

  }

  if(m_removePrincipalsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> removePrincipalsJsonList(m_removePrincipals.size());
   for(unsigned removePrincipalsIndex = 0; removePrincipalsIndex < removePrincipalsJsonList.GetLength(); ++removePrincipalsIndex)
   {
     removePrincipalsJsonList[removePrincipalsIndex].AsString(m_removePrincipals[removePrincipalsIndex]);
   }
   payload.WithArray("RemovePrincipals", std::move(removePrincipalsJsonList));

  }

  if(m_addResourcesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> addResourcesJsonList(m_addResources.size());
   for(unsigned addResourcesIndex = 0; addResourcesIndex < addResourcesJsonList.GetLength(); ++addResourcesIndex)
   {
     addResourcesJsonList[addResourcesIndex].AsObject(m_addResources[addResourcesIndex].Jsonize());
   }
   payload.WithArray("AddResources", std::move(addResourcesJsonList));

  }

  if(m_removeResourcesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> removeResourcesJsonList(m_removeResources.size());
   for(unsigned removeResourcesIndex = 0; removeResourcesIndex < removeResourcesJsonList.GetLength(); ++removeResourcesIndex)
   {
     removeResourcesJsonList[removeResourcesIndex].AsObject(m_removeResources[removeResourcesIndex].Jsonize());
   }
   payload.WithArray("RemoveResources", std::move(removeResourcesJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateCrossAccountAttachmentRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "GlobalAccelerator_V20180706.UpdateCrossAccountAttachment"));
  return headers;

}




