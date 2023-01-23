/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotanalytics/model/CreatePipelineRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoTAnalytics::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreatePipelineRequest::CreatePipelineRequest() : 
    m_pipelineNameHasBeenSet(false),
    m_pipelineActivitiesHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreatePipelineRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_pipelineNameHasBeenSet)
  {
   payload.WithString("pipelineName", m_pipelineName);

  }

  if(m_pipelineActivitiesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> pipelineActivitiesJsonList(m_pipelineActivities.size());
   for(unsigned pipelineActivitiesIndex = 0; pipelineActivitiesIndex < pipelineActivitiesJsonList.GetLength(); ++pipelineActivitiesIndex)
   {
     pipelineActivitiesJsonList[pipelineActivitiesIndex].AsObject(m_pipelineActivities[pipelineActivitiesIndex].Jsonize());
   }
   payload.WithArray("pipelineActivities", std::move(pipelineActivitiesJsonList));

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




