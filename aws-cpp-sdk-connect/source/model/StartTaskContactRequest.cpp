/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/StartTaskContactRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StartTaskContactRequest::StartTaskContactRequest() : 
    m_instanceIdHasBeenSet(false),
    m_previousContactIdHasBeenSet(false),
    m_contactFlowIdHasBeenSet(false),
    m_attributesHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_referencesHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::RandomUUID()),
    m_clientTokenHasBeenSet(true)
{
}

Aws::String StartTaskContactRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_instanceIdHasBeenSet)
  {
   payload.WithString("InstanceId", m_instanceId);

  }

  if(m_previousContactIdHasBeenSet)
  {
   payload.WithString("PreviousContactId", m_previousContactId);

  }

  if(m_contactFlowIdHasBeenSet)
  {
   payload.WithString("ContactFlowId", m_contactFlowId);

  }

  if(m_attributesHasBeenSet)
  {
   JsonValue attributesJsonMap;
   for(auto& attributesItem : m_attributes)
   {
     attributesJsonMap.WithString(attributesItem.first, attributesItem.second);
   }
   payload.WithObject("Attributes", std::move(attributesJsonMap));

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_referencesHasBeenSet)
  {
   JsonValue referencesJsonMap;
   for(auto& referencesItem : m_references)
   {
     referencesJsonMap.WithObject(referencesItem.first, referencesItem.second.Jsonize());
   }
   payload.WithObject("References", std::move(referencesJsonMap));

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("ClientToken", m_clientToken);

  }

  return payload.View().WriteReadable();
}




