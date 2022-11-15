/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/groundstation/model/CreateDataflowEndpointGroupRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::GroundStation::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateDataflowEndpointGroupRequest::CreateDataflowEndpointGroupRequest() : 
    m_endpointDetailsHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateDataflowEndpointGroupRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_endpointDetailsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> endpointDetailsJsonList(m_endpointDetails.size());
   for(unsigned endpointDetailsIndex = 0; endpointDetailsIndex < endpointDetailsJsonList.GetLength(); ++endpointDetailsIndex)
   {
     endpointDetailsJsonList[endpointDetailsIndex].AsObject(m_endpointDetails[endpointDetailsIndex].Jsonize());
   }
   payload.WithArray("endpointDetails", std::move(endpointDetailsJsonList));

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




