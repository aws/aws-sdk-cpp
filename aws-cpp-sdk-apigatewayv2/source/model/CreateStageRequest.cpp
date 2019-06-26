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

#include <aws/apigatewayv2/model/CreateStageRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ApiGatewayV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateStageRequest::CreateStageRequest() : 
    m_accessLogSettingsHasBeenSet(false),
    m_apiIdHasBeenSet(false),
    m_clientCertificateIdHasBeenSet(false),
    m_defaultRouteSettingsHasBeenSet(false),
    m_deploymentIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_routeSettingsHasBeenSet(false),
    m_stageNameHasBeenSet(false),
    m_stageVariablesHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateStageRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_accessLogSettingsHasBeenSet)
  {
   payload.WithObject("accessLogSettings", m_accessLogSettings.Jsonize());

  }

  if(m_clientCertificateIdHasBeenSet)
  {
   payload.WithString("clientCertificateId", m_clientCertificateId);

  }

  if(m_defaultRouteSettingsHasBeenSet)
  {
   payload.WithObject("defaultRouteSettings", m_defaultRouteSettings.Jsonize());

  }

  if(m_deploymentIdHasBeenSet)
  {
   payload.WithString("deploymentId", m_deploymentId);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_routeSettingsHasBeenSet)
  {
   JsonValue routeSettingsJsonMap;
   for(auto& routeSettingsItem : m_routeSettings)
   {
     routeSettingsJsonMap.WithObject(routeSettingsItem.first, routeSettingsItem.second.Jsonize());
   }
   payload.WithObject("routeSettings", std::move(routeSettingsJsonMap));

  }

  if(m_stageNameHasBeenSet)
  {
   payload.WithString("stageName", m_stageName);

  }

  if(m_stageVariablesHasBeenSet)
  {
   JsonValue stageVariablesJsonMap;
   for(auto& stageVariablesItem : m_stageVariables)
   {
     stageVariablesJsonMap.WithString(stageVariablesItem.first, stageVariablesItem.second);
   }
   payload.WithObject("stageVariables", std::move(stageVariablesJsonMap));

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




