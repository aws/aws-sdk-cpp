﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iottwinmaker/model/UpdateSceneRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoTTwinMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateSceneRequest::UpdateSceneRequest() : 
    m_capabilitiesHasBeenSet(false),
    m_contentLocationHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_sceneIdHasBeenSet(false),
    m_workspaceIdHasBeenSet(false)
{
}

Aws::String UpdateSceneRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_capabilitiesHasBeenSet)
  {
   Array<JsonValue> capabilitiesJsonList(m_capabilities.size());
   for(unsigned capabilitiesIndex = 0; capabilitiesIndex < capabilitiesJsonList.GetLength(); ++capabilitiesIndex)
   {
     capabilitiesJsonList[capabilitiesIndex].AsString(m_capabilities[capabilitiesIndex]);
   }
   payload.WithArray("capabilities", std::move(capabilitiesJsonList));

  }

  if(m_contentLocationHasBeenSet)
  {
   payload.WithString("contentLocation", m_contentLocation);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  return payload.View().WriteReadable();
}




