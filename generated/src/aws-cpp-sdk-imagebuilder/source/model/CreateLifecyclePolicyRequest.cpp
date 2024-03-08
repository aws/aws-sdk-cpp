/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/imagebuilder/model/CreateLifecyclePolicyRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::imagebuilder::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateLifecyclePolicyRequest::CreateLifecyclePolicyRequest() : 
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_status(LifecyclePolicyStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_executionRoleHasBeenSet(false),
    m_resourceType(LifecyclePolicyResourceType::NOT_SET),
    m_resourceTypeHasBeenSet(false),
    m_policyDetailsHasBeenSet(false),
    m_resourceSelectionHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::PseudoRandomUUID()),
    m_clientTokenHasBeenSet(true)
{
}

Aws::String CreateLifecyclePolicyRequest::SerializePayload() const
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

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", LifecyclePolicyStatusMapper::GetNameForLifecyclePolicyStatus(m_status));
  }

  if(m_executionRoleHasBeenSet)
  {
   payload.WithString("executionRole", m_executionRole);

  }

  if(m_resourceTypeHasBeenSet)
  {
   payload.WithString("resourceType", LifecyclePolicyResourceTypeMapper::GetNameForLifecyclePolicyResourceType(m_resourceType));
  }

  if(m_policyDetailsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> policyDetailsJsonList(m_policyDetails.size());
   for(unsigned policyDetailsIndex = 0; policyDetailsIndex < policyDetailsJsonList.GetLength(); ++policyDetailsIndex)
   {
     policyDetailsJsonList[policyDetailsIndex].AsObject(m_policyDetails[policyDetailsIndex].Jsonize());
   }
   payload.WithArray("policyDetails", std::move(policyDetailsJsonList));

  }

  if(m_resourceSelectionHasBeenSet)
  {
   payload.WithObject("resourceSelection", m_resourceSelection.Jsonize());

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

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  return payload.View().WriteReadable();
}




