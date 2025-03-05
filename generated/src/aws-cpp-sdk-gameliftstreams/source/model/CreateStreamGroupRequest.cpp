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

CreateStreamGroupRequest::CreateStreamGroupRequest() : 
    m_clientToken(Aws::Utils::UUID::PseudoRandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_defaultApplicationIdentifierHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_locationConfigurationsHasBeenSet(false),
    m_streamClass(StreamClass::NOT_SET),
    m_streamClassHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateStreamGroupRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("ClientToken", m_clientToken);

  }

  if(m_defaultApplicationIdentifierHasBeenSet)
  {
   payload.WithString("DefaultApplicationIdentifier", m_defaultApplicationIdentifier);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

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

  if(m_streamClassHasBeenSet)
  {
   payload.WithString("StreamClass", StreamClassMapper::GetNameForStreamClass(m_streamClass));
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




