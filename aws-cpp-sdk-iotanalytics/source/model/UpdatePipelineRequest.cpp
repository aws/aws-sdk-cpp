/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
   Array<JsonValue> pipelineActivitiesJsonList(m_pipelineActivities.size());
   for(unsigned pipelineActivitiesIndex = 0; pipelineActivitiesIndex < pipelineActivitiesJsonList.GetLength(); ++pipelineActivitiesIndex)
   {
     pipelineActivitiesJsonList[pipelineActivitiesIndex].AsObject(m_pipelineActivities[pipelineActivitiesIndex].Jsonize());
   }
   payload.WithArray("pipelineActivities", std::move(pipelineActivitiesJsonList));

  }

  return payload.WriteReadable();
}




