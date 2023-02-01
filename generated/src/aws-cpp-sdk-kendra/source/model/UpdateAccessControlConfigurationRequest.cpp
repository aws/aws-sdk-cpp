/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/UpdateAccessControlConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::kendra::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateAccessControlConfigurationRequest::UpdateAccessControlConfigurationRequest() : 
    m_indexIdHasBeenSet(false),
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_accessControlListHasBeenSet(false),
    m_hierarchicalAccessControlListHasBeenSet(false)
{
}

Aws::String UpdateAccessControlConfigurationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_indexIdHasBeenSet)
  {
   payload.WithString("IndexId", m_indexId);

  }

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_accessControlListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> accessControlListJsonList(m_accessControlList.size());
   for(unsigned accessControlListIndex = 0; accessControlListIndex < accessControlListJsonList.GetLength(); ++accessControlListIndex)
   {
     accessControlListJsonList[accessControlListIndex].AsObject(m_accessControlList[accessControlListIndex].Jsonize());
   }
   payload.WithArray("AccessControlList", std::move(accessControlListJsonList));

  }

  if(m_hierarchicalAccessControlListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> hierarchicalAccessControlListJsonList(m_hierarchicalAccessControlList.size());
   for(unsigned hierarchicalAccessControlListIndex = 0; hierarchicalAccessControlListIndex < hierarchicalAccessControlListJsonList.GetLength(); ++hierarchicalAccessControlListIndex)
   {
     hierarchicalAccessControlListJsonList[hierarchicalAccessControlListIndex].AsObject(m_hierarchicalAccessControlList[hierarchicalAccessControlListIndex].Jsonize());
   }
   payload.WithArray("HierarchicalAccessControlList", std::move(hierarchicalAccessControlListJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateAccessControlConfigurationRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSKendraFrontendService.UpdateAccessControlConfiguration"));
  return headers;

}




