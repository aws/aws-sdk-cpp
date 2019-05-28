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

#include <aws/groundstation/model/CreateMissionProfileRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::GroundStation::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateMissionProfileRequest::CreateMissionProfileRequest() : 
    m_contactPostPassDurationSeconds(0),
    m_contactPostPassDurationSecondsHasBeenSet(false),
    m_contactPrePassDurationSeconds(0),
    m_contactPrePassDurationSecondsHasBeenSet(false),
    m_dataflowEdgesHasBeenSet(false),
    m_minimumViableContactDurationSeconds(0),
    m_minimumViableContactDurationSecondsHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_trackingConfigArnHasBeenSet(false)
{
}

Aws::String CreateMissionProfileRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_contactPostPassDurationSecondsHasBeenSet)
  {
   payload.WithInteger("contactPostPassDurationSeconds", m_contactPostPassDurationSeconds);

  }

  if(m_contactPrePassDurationSecondsHasBeenSet)
  {
   payload.WithInteger("contactPrePassDurationSeconds", m_contactPrePassDurationSeconds);

  }

  if(m_dataflowEdgesHasBeenSet)
  {
   Array<JsonValue> dataflowEdgesJsonList(m_dataflowEdges.size());
   for(unsigned dataflowEdgesIndex = 0; dataflowEdgesIndex < dataflowEdgesJsonList.GetLength(); ++dataflowEdgesIndex)
   {
     Array<JsonValue> dataflowEdgeJsonList(m_dataflowEdges[dataflowEdgesIndex].size());
     for(unsigned dataflowEdgeIndex = 0; dataflowEdgeIndex < dataflowEdgeJsonList.GetLength(); ++dataflowEdgeIndex)
     {
       dataflowEdgeJsonList[dataflowEdgeIndex].AsString(m_dataflowEdges[dataflowEdgesIndex][dataflowEdgeIndex]);
     }
     dataflowEdgesJsonList[dataflowEdgesIndex].AsArray(std::move(dataflowEdgeJsonList));
   }
   payload.WithArray("dataflowEdges", std::move(dataflowEdgesJsonList));

  }

  if(m_minimumViableContactDurationSecondsHasBeenSet)
  {
   payload.WithInteger("minimumViableContactDurationSeconds", m_minimumViableContactDurationSeconds);

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

  if(m_trackingConfigArnHasBeenSet)
  {
   payload.WithString("trackingConfigArn", m_trackingConfigArn);

  }

  return payload.View().WriteReadable();
}




