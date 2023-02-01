/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iottwinmaker/model/CreateSceneRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoTTwinMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateSceneRequest::CreateSceneRequest() : 
    m_workspaceIdHasBeenSet(false),
    m_sceneIdHasBeenSet(false),
    m_contentLocationHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_capabilitiesHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateSceneRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_sceneIdHasBeenSet)
  {
   payload.WithString("sceneId", m_sceneId);

  }

  if(m_contentLocationHasBeenSet)
  {
   payload.WithString("contentLocation", m_contentLocation);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_capabilitiesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> capabilitiesJsonList(m_capabilities.size());
   for(unsigned capabilitiesIndex = 0; capabilitiesIndex < capabilitiesJsonList.GetLength(); ++capabilitiesIndex)
   {
     capabilitiesJsonList[capabilitiesIndex].AsString(m_capabilities[capabilitiesIndex]);
   }
   payload.WithArray("capabilities", std::move(capabilitiesJsonList));

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




