/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/CreateThingTypeRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateThingTypeRequest::CreateThingTypeRequest() : 
    m_thingTypeNameHasBeenSet(false),
    m_thingTypePropertiesHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateThingTypeRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_thingTypePropertiesHasBeenSet)
  {
   payload.WithObject("thingTypeProperties", m_thingTypeProperties.Jsonize());

  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("tags", std::move(tagsJsonList));

  }

  return payload.View().WriteReadable();
}




