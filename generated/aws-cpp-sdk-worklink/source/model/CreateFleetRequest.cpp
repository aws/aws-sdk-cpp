/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/worklink/model/CreateFleetRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::WorkLink::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateFleetRequest::CreateFleetRequest() : 
    m_fleetNameHasBeenSet(false),
    m_displayNameHasBeenSet(false),
    m_optimizeForEndUserLocation(false),
    m_optimizeForEndUserLocationHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateFleetRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_fleetNameHasBeenSet)
  {
   payload.WithString("FleetName", m_fleetName);

  }

  if(m_displayNameHasBeenSet)
  {
   payload.WithString("DisplayName", m_displayName);

  }

  if(m_optimizeForEndUserLocationHasBeenSet)
  {
   payload.WithBool("OptimizeForEndUserLocation", m_optimizeForEndUserLocation);

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

  return payload.View().WriteReadable();
}




