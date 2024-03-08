/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanroomsml/model/StartAudienceGenerationJobRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CleanRoomsML::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StartAudienceGenerationJobRequest::StartAudienceGenerationJobRequest() : 
    m_collaborationIdHasBeenSet(false),
    m_configuredAudienceModelArnHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_includeSeedInOutput(false),
    m_includeSeedInOutputHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_seedAudienceHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String StartAudienceGenerationJobRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_collaborationIdHasBeenSet)
  {
   payload.WithString("collaborationId", m_collaborationId);

  }

  if(m_configuredAudienceModelArnHasBeenSet)
  {
   payload.WithString("configuredAudienceModelArn", m_configuredAudienceModelArn);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_includeSeedInOutputHasBeenSet)
  {
   payload.WithBool("includeSeedInOutput", m_includeSeedInOutput);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_seedAudienceHasBeenSet)
  {
   payload.WithObject("seedAudience", m_seedAudience.Jsonize());

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




