/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gameliftstreams/model/CreateStreamGroupRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::GameLiftStreams::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateStreamGroupRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_streamClassHasBeenSet)
  {
   payload.WithString("StreamClass", StreamClassMapper::GetNameForStreamClass(m_streamClass));
  }

  if(m_defaultApplicationIdentifierHasBeenSet)
  {
   payload.WithString("DefaultApplicationIdentifier", m_defaultApplicationIdentifier);

  }

  if(m_locationConfigurationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> locationConfigurationsJsonList(m_locationConfigurations.size());
   for(unsigned locationConfigurationsIndex = 0; locationConfigurationsIndex < locationConfigurationsJsonList.GetLength(); ++locationConfigurationsIndex)
   {
     locationConfigurationsJsonList[locationConfigurationsIndex].AsObject(m_locationConfigurations[locationConfigurationsIndex].Jsonize());
   }
   payload.WithArray("LocationConfigurations", std::move(locationConfigurationsJsonList));

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

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("ClientToken", m_clientToken);

  }

  return payload.View().WriteReadable();
}




