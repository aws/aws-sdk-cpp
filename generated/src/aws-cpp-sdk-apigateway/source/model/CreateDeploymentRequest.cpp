/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigateway/model/CreateDeploymentRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::APIGateway::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateDeploymentRequest::CreateDeploymentRequest() : 
    m_restApiIdHasBeenSet(false),
    m_stageNameHasBeenSet(false),
    m_stageDescriptionHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_cacheClusterEnabled(false),
    m_cacheClusterEnabledHasBeenSet(false),
    m_cacheClusterSize(CacheClusterSize::NOT_SET),
    m_cacheClusterSizeHasBeenSet(false),
    m_variablesHasBeenSet(false),
    m_canarySettingsHasBeenSet(false),
    m_tracingEnabled(false),
    m_tracingEnabledHasBeenSet(false)
{
}

Aws::String CreateDeploymentRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_stageNameHasBeenSet)
  {
   payload.WithString("stageName", m_stageName);

  }

  if(m_stageDescriptionHasBeenSet)
  {
   payload.WithString("stageDescription", m_stageDescription);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_cacheClusterEnabledHasBeenSet)
  {
   payload.WithBool("cacheClusterEnabled", m_cacheClusterEnabled);

  }

  if(m_cacheClusterSizeHasBeenSet)
  {
   payload.WithString("cacheClusterSize", CacheClusterSizeMapper::GetNameForCacheClusterSize(m_cacheClusterSize));
  }

  if(m_variablesHasBeenSet)
  {
   JsonValue variablesJsonMap;
   for(auto& variablesItem : m_variables)
   {
     variablesJsonMap.WithString(variablesItem.first, variablesItem.second);
   }
   payload.WithObject("variables", std::move(variablesJsonMap));

  }

  if(m_canarySettingsHasBeenSet)
  {
   payload.WithObject("canarySettings", m_canarySettings.Jsonize());

  }

  if(m_tracingEnabledHasBeenSet)
  {
   payload.WithBool("tracingEnabled", m_tracingEnabled);

  }

  return payload.View().WriteReadable();
}




