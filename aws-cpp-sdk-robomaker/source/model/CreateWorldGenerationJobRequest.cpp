/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/robomaker/model/CreateWorldGenerationJobRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::RoboMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateWorldGenerationJobRequest::CreateWorldGenerationJobRequest() : 
    m_clientRequestToken(Aws::Utils::UUID::RandomUUID()),
    m_clientRequestTokenHasBeenSet(true),
    m_templateHasBeenSet(false),
    m_worldCountHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_worldTagsHasBeenSet(false)
{
}

Aws::String CreateWorldGenerationJobRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_clientRequestTokenHasBeenSet)
  {
   payload.WithString("clientRequestToken", m_clientRequestToken);

  }

  if(m_templateHasBeenSet)
  {
   payload.WithString("template", m_template);

  }

  if(m_worldCountHasBeenSet)
  {
   payload.WithObject("worldCount", m_worldCount.Jsonize());

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

  if(m_worldTagsHasBeenSet)
  {
   JsonValue worldTagsJsonMap;
   for(auto& worldTagsItem : m_worldTags)
   {
     worldTagsJsonMap.WithString(worldTagsItem.first, worldTagsItem.second);
   }
   payload.WithObject("worldTags", std::move(worldTagsJsonMap));

  }

  return payload.View().WriteReadable();
}




