/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot1click-projects/model/CreatePlacementRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoT1ClickProjects::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreatePlacementRequest::CreatePlacementRequest() : 
    m_placementNameHasBeenSet(false),
    m_projectNameHasBeenSet(false),
    m_attributesHasBeenSet(false)
{
}

Aws::String CreatePlacementRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_placementNameHasBeenSet)
  {
   payload.WithString("placementName", m_placementName);

  }

  if(m_attributesHasBeenSet)
  {
   JsonValue attributesJsonMap;
   for(auto& attributesItem : m_attributes)
   {
     attributesJsonMap.WithString(attributesItem.first, attributesItem.second);
   }
   payload.WithObject("attributes", std::move(attributesJsonMap));

  }

  return payload.View().WriteReadable();
}




