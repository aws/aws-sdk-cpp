/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/customer-profiles/model/PutIntegrationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CustomerProfiles::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String PutIntegrationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_uriHasBeenSet)
  {
   payload.WithString("Uri", m_uri);

  }

  if(m_objectTypeNameHasBeenSet)
  {
   payload.WithString("ObjectTypeName", m_objectTypeName);

  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("Tags", std::move(tagsJsonMap));

  }

  if(m_flowDefinitionHasBeenSet)
  {
   payload.WithObject("FlowDefinition", m_flowDefinition.Jsonize());

  }

  if(m_objectTypeNamesHasBeenSet)
  {
   JsonValue objectTypeNamesJsonMap;
   for(auto& objectTypeNamesItem : m_objectTypeNames)
   {
     objectTypeNamesJsonMap.WithString(objectTypeNamesItem.first, objectTypeNamesItem.second);
   }
   payload.WithObject("ObjectTypeNames", std::move(objectTypeNamesJsonMap));

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("RoleArn", m_roleArn);

  }

  if(m_eventTriggerNamesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> eventTriggerNamesJsonList(m_eventTriggerNames.size());
   for(unsigned eventTriggerNamesIndex = 0; eventTriggerNamesIndex < eventTriggerNamesJsonList.GetLength(); ++eventTriggerNamesIndex)
   {
     eventTriggerNamesJsonList[eventTriggerNamesIndex].AsString(m_eventTriggerNames[eventTriggerNamesIndex]);
   }
   payload.WithArray("EventTriggerNames", std::move(eventTriggerNamesJsonList));

  }

  return payload.View().WriteReadable();
}




