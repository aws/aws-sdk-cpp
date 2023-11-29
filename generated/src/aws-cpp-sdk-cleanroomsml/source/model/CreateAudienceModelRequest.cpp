/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanroomsml/model/CreateAudienceModelRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CleanRoomsML::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateAudienceModelRequest::CreateAudienceModelRequest() : 
    m_descriptionHasBeenSet(false),
    m_kmsKeyArnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_trainingDataEndTimeHasBeenSet(false),
    m_trainingDataStartTimeHasBeenSet(false),
    m_trainingDatasetArnHasBeenSet(false)
{
}

Aws::String CreateAudienceModelRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_kmsKeyArnHasBeenSet)
  {
   payload.WithString("kmsKeyArn", m_kmsKeyArn);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

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

  if(m_trainingDataEndTimeHasBeenSet)
  {
   payload.WithString("trainingDataEndTime", m_trainingDataEndTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_trainingDataStartTimeHasBeenSet)
  {
   payload.WithString("trainingDataStartTime", m_trainingDataStartTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_trainingDatasetArnHasBeenSet)
  {
   payload.WithString("trainingDatasetArn", m_trainingDatasetArn);

  }

  return payload.View().WriteReadable();
}




