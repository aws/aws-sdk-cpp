/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appconfig/model/StartDeploymentRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AppConfig::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StartDeploymentRequest::StartDeploymentRequest() : 
    m_applicationIdHasBeenSet(false),
    m_environmentIdHasBeenSet(false),
    m_deploymentStrategyIdHasBeenSet(false),
    m_configurationProfileIdHasBeenSet(false),
    m_configurationVersionHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String StartDeploymentRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_deploymentStrategyIdHasBeenSet)
  {
   payload.WithString("DeploymentStrategyId", m_deploymentStrategyId);

  }

  if(m_configurationProfileIdHasBeenSet)
  {
   payload.WithString("ConfigurationProfileId", m_configurationProfileId);

  }

  if(m_configurationVersionHasBeenSet)
  {
   payload.WithString("ConfigurationVersion", m_configurationVersion);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("Tags", std::move(tagsJsonMap));

  }

  return payload.View().WriteReadable();
}




