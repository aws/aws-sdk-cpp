﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iottwinmaker/model/CreateEntityRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoTTwinMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateEntityRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_entityIdHasBeenSet)
  {
   payload.WithString("entityId", m_entityId);

  }

  if(m_entityNameHasBeenSet)
  {
   payload.WithString("entityName", m_entityName);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_componentsHasBeenSet)
  {
   JsonValue componentsJsonMap;
   for(auto& componentsItem : m_components)
   {
     componentsJsonMap.WithObject(componentsItem.first, componentsItem.second.Jsonize());
   }
   payload.WithObject("components", std::move(componentsJsonMap));

  }

  if(m_compositeComponentsHasBeenSet)
  {
   JsonValue compositeComponentsJsonMap;
   for(auto& compositeComponentsItem : m_compositeComponents)
   {
     compositeComponentsJsonMap.WithObject(compositeComponentsItem.first, compositeComponentsItem.second.Jsonize());
   }
   payload.WithObject("compositeComponents", std::move(compositeComponentsJsonMap));

  }

  if(m_parentEntityIdHasBeenSet)
  {
   payload.WithString("parentEntityId", m_parentEntityId);

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




