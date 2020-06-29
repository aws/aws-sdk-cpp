/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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




