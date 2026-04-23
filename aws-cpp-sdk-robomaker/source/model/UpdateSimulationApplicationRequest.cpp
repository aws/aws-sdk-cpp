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

#include <aws/robomaker/model/UpdateSimulationApplicationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::RoboMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateSimulationApplicationRequest::UpdateSimulationApplicationRequest() : 
    m_applicationHasBeenSet(false),
    m_sourcesHasBeenSet(false),
    m_simulationSoftwareSuiteHasBeenSet(false),
    m_robotSoftwareSuiteHasBeenSet(false),
    m_renderingEngineHasBeenSet(false),
    m_currentRevisionIdHasBeenSet(false)
{
}

Aws::String UpdateSimulationApplicationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_applicationHasBeenSet)
  {
   payload.WithString("application", m_application);

  }

  if(m_sourcesHasBeenSet)
  {
   Array<JsonValue> sourcesJsonList(m_sources.size());
   for(unsigned sourcesIndex = 0; sourcesIndex < sourcesJsonList.GetLength(); ++sourcesIndex)
   {
     sourcesJsonList[sourcesIndex].AsObject(m_sources[sourcesIndex].Jsonize());
   }
   payload.WithArray("sources", std::move(sourcesJsonList));

  }

  if(m_simulationSoftwareSuiteHasBeenSet)
  {
   payload.WithObject("simulationSoftwareSuite", m_simulationSoftwareSuite.Jsonize());

  }

  if(m_robotSoftwareSuiteHasBeenSet)
  {
   payload.WithObject("robotSoftwareSuite", m_robotSoftwareSuite.Jsonize());

  }

  if(m_renderingEngineHasBeenSet)
  {
   payload.WithObject("renderingEngine", m_renderingEngine.Jsonize());

  }

  if(m_currentRevisionIdHasBeenSet)
  {
   payload.WithString("currentRevisionId", m_currentRevisionId);

  }

  return payload.View().WriteReadable();
}




