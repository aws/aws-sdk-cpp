/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gameliftstreams/model/CreateApplicationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::GameLiftStreams::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateApplicationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_runtimeEnvironmentHasBeenSet)
  {
   payload.WithObject("RuntimeEnvironment", m_runtimeEnvironment.Jsonize());

  }

  if(m_executablePathHasBeenSet)
  {
   payload.WithString("ExecutablePath", m_executablePath);

  }

  if(m_applicationSourceUriHasBeenSet)
  {
   payload.WithString("ApplicationSourceUri", m_applicationSourceUri);

  }

  if(m_applicationLogPathsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> applicationLogPathsJsonList(m_applicationLogPaths.size());
   for(unsigned applicationLogPathsIndex = 0; applicationLogPathsIndex < applicationLogPathsJsonList.GetLength(); ++applicationLogPathsIndex)
   {
     applicationLogPathsJsonList[applicationLogPathsIndex].AsString(m_applicationLogPaths[applicationLogPathsIndex]);
   }
   payload.WithArray("ApplicationLogPaths", std::move(applicationLogPathsJsonList));

  }

  if(m_applicationLogOutputUriHasBeenSet)
  {
   payload.WithString("ApplicationLogOutputUri", m_applicationLogOutputUri);

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

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("ClientToken", m_clientToken);

  }

  return payload.View().WriteReadable();
}




