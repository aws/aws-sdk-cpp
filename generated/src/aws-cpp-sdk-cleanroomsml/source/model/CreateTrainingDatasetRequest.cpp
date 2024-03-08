/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanroomsml/model/CreateTrainingDatasetRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CleanRoomsML::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateTrainingDatasetRequest::CreateTrainingDatasetRequest() : 
    m_descriptionHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_trainingDataHasBeenSet(false)
{
}

Aws::String CreateTrainingDatasetRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("roleArn", m_roleArn);

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

  if(m_trainingDataHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> trainingDataJsonList(m_trainingData.size());
   for(unsigned trainingDataIndex = 0; trainingDataIndex < trainingDataJsonList.GetLength(); ++trainingDataIndex)
   {
     trainingDataJsonList[trainingDataIndex].AsObject(m_trainingData[trainingDataIndex].Jsonize());
   }
   payload.WithArray("trainingData", std::move(trainingDataJsonList));

  }

  return payload.View().WriteReadable();
}




