/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/CreateDynamicThingGroupRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateDynamicThingGroupRequest::CreateDynamicThingGroupRequest() : 
    m_thingGroupNameHasBeenSet(false),
    m_thingGroupPropertiesHasBeenSet(false),
    m_indexNameHasBeenSet(false),
    m_queryStringHasBeenSet(false),
    m_queryVersionHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateDynamicThingGroupRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_thingGroupPropertiesHasBeenSet)
  {
   payload.WithObject("thingGroupProperties", m_thingGroupProperties.Jsonize());

  }

  if(m_indexNameHasBeenSet)
  {
   payload.WithString("indexName", m_indexName);

  }

  if(m_queryStringHasBeenSet)
  {
   payload.WithString("queryString", m_queryString);

  }

  if(m_queryVersionHasBeenSet)
  {
   payload.WithString("queryVersion", m_queryVersion);

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




