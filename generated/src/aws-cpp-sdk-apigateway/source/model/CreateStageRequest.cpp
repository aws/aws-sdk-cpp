/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigateway/model/CreateStageRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::APIGateway::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateStageRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_stageNameHasBeenSet)
  {
   payload.WithString("stageName", m_stageName);

  }

  if(m_deploymentIdHasBeenSet)
  {
   payload.WithString("deploymentId", m_deploymentId);

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

  if(m_documentationVersionHasBeenSet)
  {
   payload.WithString("documentationVersion", m_documentationVersion);

  }

  if(m_canarySettingsHasBeenSet)
  {
   payload.WithObject("canarySettings", m_canarySettings.Jsonize());

  }

  if(m_tracingEnabledHasBeenSet)
  {
   payload.WithBool("tracingEnabled", m_tracingEnabled);

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




