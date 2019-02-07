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

#include <aws/robomaker/model/CreateSimulationJobRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::RoboMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateSimulationJobRequest::CreateSimulationJobRequest() : 
    m_clientRequestToken(Aws::Utils::UUID::RandomUUID()),
    m_clientRequestTokenHasBeenSet(true),
    m_outputLocationHasBeenSet(false),
    m_maxJobDurationInSeconds(0),
    m_maxJobDurationInSecondsHasBeenSet(false),
    m_iamRoleHasBeenSet(false),
    m_failureBehavior(FailureBehavior::NOT_SET),
    m_failureBehaviorHasBeenSet(false),
    m_robotApplicationsHasBeenSet(false),
    m_simulationApplicationsHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_vpcConfigHasBeenSet(false)
{
}

Aws::String CreateSimulationJobRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_clientRequestTokenHasBeenSet)
  {
   payload.WithString("clientRequestToken", m_clientRequestToken);

  }

  if(m_outputLocationHasBeenSet)
  {
   payload.WithObject("outputLocation", m_outputLocation.Jsonize());

  }

  if(m_maxJobDurationInSecondsHasBeenSet)
  {
   payload.WithInt64("maxJobDurationInSeconds", m_maxJobDurationInSeconds);

  }

  if(m_iamRoleHasBeenSet)
  {
   payload.WithString("iamRole", m_iamRole);

  }

  if(m_failureBehaviorHasBeenSet)
  {
   payload.WithString("failureBehavior", FailureBehaviorMapper::GetNameForFailureBehavior(m_failureBehavior));
  }

  if(m_robotApplicationsHasBeenSet)
  {
   Array<JsonValue> robotApplicationsJsonList(m_robotApplications.size());
   for(unsigned robotApplicationsIndex = 0; robotApplicationsIndex < robotApplicationsJsonList.GetLength(); ++robotApplicationsIndex)
   {
     robotApplicationsJsonList[robotApplicationsIndex].AsObject(m_robotApplications[robotApplicationsIndex].Jsonize());
   }
   payload.WithArray("robotApplications", std::move(robotApplicationsJsonList));

  }

  if(m_simulationApplicationsHasBeenSet)
  {
   Array<JsonValue> simulationApplicationsJsonList(m_simulationApplications.size());
   for(unsigned simulationApplicationsIndex = 0; simulationApplicationsIndex < simulationApplicationsJsonList.GetLength(); ++simulationApplicationsIndex)
   {
     simulationApplicationsJsonList[simulationApplicationsIndex].AsObject(m_simulationApplications[simulationApplicationsIndex].Jsonize());
   }
   payload.WithArray("simulationApplications", std::move(simulationApplicationsJsonList));

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

  if(m_vpcConfigHasBeenSet)
  {
   payload.WithObject("vpcConfig", m_vpcConfig.Jsonize());

  }

  return payload.View().WriteReadable();
}




