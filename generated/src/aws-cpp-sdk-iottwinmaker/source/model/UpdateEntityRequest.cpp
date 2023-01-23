/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iottwinmaker/model/UpdateEntityRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoTTwinMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateEntityRequest::UpdateEntityRequest() : 
    m_workspaceIdHasBeenSet(false),
    m_entityIdHasBeenSet(false),
    m_entityNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_componentUpdatesHasBeenSet(false),
    m_parentEntityUpdateHasBeenSet(false)
{
}

Aws::String UpdateEntityRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_entityNameHasBeenSet)
  {
   payload.WithString("entityName", m_entityName);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_componentUpdatesHasBeenSet)
  {
   JsonValue componentUpdatesJsonMap;
   for(auto& componentUpdatesItem : m_componentUpdates)
   {
     componentUpdatesJsonMap.WithObject(componentUpdatesItem.first, componentUpdatesItem.second.Jsonize());
   }
   payload.WithObject("componentUpdates", std::move(componentUpdatesJsonMap));

  }

  if(m_parentEntityUpdateHasBeenSet)
  {
   payload.WithObject("parentEntityUpdate", m_parentEntityUpdate.Jsonize());

  }

  return payload.View().WriteReadable();
}




