/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamesparks/model/CreateStageRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::GameSparks::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateStageRequest::CreateStageRequest() : 
    m_clientTokenHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_gameNameHasBeenSet(false),
    m_roleHasBeenSet(false),
    m_stageNameHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateStageRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("ClientToken", m_clientToken);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_roleHasBeenSet)
  {
   payload.WithString("Role", m_role);

  }

  if(m_stageNameHasBeenSet)
  {
   payload.WithString("StageName", m_stageName);

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




