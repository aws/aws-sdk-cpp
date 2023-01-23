/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotanalytics/model/UpdatePipelineRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoTAnalytics::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdatePipelineRequest::UpdatePipelineRequest() : 
    m_pipelineNameHasBeenSet(false),
    m_pipelineActivitiesHasBeenSet(false)
{
}

Aws::String UpdatePipelineRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_pipelineActivitiesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> pipelineActivitiesJsonList(m_pipelineActivities.size());
   for(unsigned pipelineActivitiesIndex = 0; pipelineActivitiesIndex < pipelineActivitiesJsonList.GetLength(); ++pipelineActivitiesIndex)
   {
     pipelineActivitiesJsonList[pipelineActivitiesIndex].AsObject(m_pipelineActivities[pipelineActivitiesIndex].Jsonize());
   }
   payload.WithArray("pipelineActivities", std::move(pipelineActivitiesJsonList));

  }

  return payload.View().WriteReadable();
}




