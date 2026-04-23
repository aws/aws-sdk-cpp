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

#include <aws/robomaker/model/CreateDeploymentJobRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::RoboMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateDeploymentJobRequest::CreateDeploymentJobRequest() : 
    m_deploymentConfigHasBeenSet(false),
    m_clientRequestToken(Aws::Utils::UUID::RandomUUID()),
    m_clientRequestTokenHasBeenSet(true),
    m_fleetHasBeenSet(false),
    m_deploymentApplicationConfigsHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateDeploymentJobRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_deploymentConfigHasBeenSet)
  {
   payload.WithObject("deploymentConfig", m_deploymentConfig.Jsonize());

  }

  if(m_clientRequestTokenHasBeenSet)
  {
   payload.WithString("clientRequestToken", m_clientRequestToken);

  }

  if(m_fleetHasBeenSet)
  {
   payload.WithString("fleet", m_fleet);

  }

  if(m_deploymentApplicationConfigsHasBeenSet)
  {
   Array<JsonValue> deploymentApplicationConfigsJsonList(m_deploymentApplicationConfigs.size());
   for(unsigned deploymentApplicationConfigsIndex = 0; deploymentApplicationConfigsIndex < deploymentApplicationConfigsJsonList.GetLength(); ++deploymentApplicationConfigsIndex)
   {
     deploymentApplicationConfigsJsonList[deploymentApplicationConfigsIndex].AsObject(m_deploymentApplicationConfigs[deploymentApplicationConfigsIndex].Jsonize());
   }
   payload.WithArray("deploymentApplicationConfigs", std::move(deploymentApplicationConfigsJsonList));

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




