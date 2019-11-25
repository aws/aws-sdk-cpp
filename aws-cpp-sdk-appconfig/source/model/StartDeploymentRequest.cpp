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




