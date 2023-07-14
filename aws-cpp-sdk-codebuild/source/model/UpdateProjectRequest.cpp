﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codebuild/model/UpdateProjectRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CodeBuild::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateProjectRequest::UpdateProjectRequest() : 
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_secondarySourcesHasBeenSet(false),
    m_sourceVersionHasBeenSet(false),
    m_secondarySourceVersionsHasBeenSet(false),
    m_artifactsHasBeenSet(false),
    m_secondaryArtifactsHasBeenSet(false),
    m_cacheHasBeenSet(false),
    m_environmentHasBeenSet(false),
    m_serviceRoleHasBeenSet(false),
    m_timeoutInMinutes(0),
    m_timeoutInMinutesHasBeenSet(false),
    m_queuedTimeoutInMinutes(0),
    m_queuedTimeoutInMinutesHasBeenSet(false),
    m_encryptionKeyHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_vpcConfigHasBeenSet(false),
    m_badgeEnabled(false),
    m_badgeEnabledHasBeenSet(false),
    m_logsConfigHasBeenSet(false),
    m_fileSystemLocationsHasBeenSet(false),
    m_buildBatchConfigHasBeenSet(false),
    m_concurrentBuildLimit(0),
    m_concurrentBuildLimitHasBeenSet(false)
{
}

Aws::String UpdateProjectRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_sourceHasBeenSet)
  {
   payload.WithObject("source", m_source.Jsonize());

  }

  if(m_secondarySourcesHasBeenSet)
  {
   Array<JsonValue> secondarySourcesJsonList(m_secondarySources.size());
   for(unsigned secondarySourcesIndex = 0; secondarySourcesIndex < secondarySourcesJsonList.GetLength(); ++secondarySourcesIndex)
   {
     secondarySourcesJsonList[secondarySourcesIndex].AsObject(m_secondarySources[secondarySourcesIndex].Jsonize());
   }
   payload.WithArray("secondarySources", std::move(secondarySourcesJsonList));

  }

  if(m_sourceVersionHasBeenSet)
  {
   payload.WithString("sourceVersion", m_sourceVersion);

  }

  if(m_secondarySourceVersionsHasBeenSet)
  {
   Array<JsonValue> secondarySourceVersionsJsonList(m_secondarySourceVersions.size());
   for(unsigned secondarySourceVersionsIndex = 0; secondarySourceVersionsIndex < secondarySourceVersionsJsonList.GetLength(); ++secondarySourceVersionsIndex)
   {
     secondarySourceVersionsJsonList[secondarySourceVersionsIndex].AsObject(m_secondarySourceVersions[secondarySourceVersionsIndex].Jsonize());
   }
   payload.WithArray("secondarySourceVersions", std::move(secondarySourceVersionsJsonList));

  }

  if(m_artifactsHasBeenSet)
  {
   payload.WithObject("artifacts", m_artifacts.Jsonize());

  }

  if(m_secondaryArtifactsHasBeenSet)
  {
   Array<JsonValue> secondaryArtifactsJsonList(m_secondaryArtifacts.size());
   for(unsigned secondaryArtifactsIndex = 0; secondaryArtifactsIndex < secondaryArtifactsJsonList.GetLength(); ++secondaryArtifactsIndex)
   {
     secondaryArtifactsJsonList[secondaryArtifactsIndex].AsObject(m_secondaryArtifacts[secondaryArtifactsIndex].Jsonize());
   }
   payload.WithArray("secondaryArtifacts", std::move(secondaryArtifactsJsonList));

  }

  if(m_cacheHasBeenSet)
  {
   payload.WithObject("cache", m_cache.Jsonize());

  }

  if(m_environmentHasBeenSet)
  {
   payload.WithObject("environment", m_environment.Jsonize());

  }

  if(m_serviceRoleHasBeenSet)
  {
   payload.WithString("serviceRole", m_serviceRole);

  }

  if(m_timeoutInMinutesHasBeenSet)
  {
   payload.WithInteger("timeoutInMinutes", m_timeoutInMinutes);

  }

  if(m_queuedTimeoutInMinutesHasBeenSet)
  {
   payload.WithInteger("queuedTimeoutInMinutes", m_queuedTimeoutInMinutes);

  }

  if(m_encryptionKeyHasBeenSet)
  {
   payload.WithString("encryptionKey", m_encryptionKey);

  }

  if(m_tagsHasBeenSet)
  {
   Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("tags", std::move(tagsJsonList));

  }

  if(m_vpcConfigHasBeenSet)
  {
   payload.WithObject("vpcConfig", m_vpcConfig.Jsonize());

  }

  if(m_badgeEnabledHasBeenSet)
  {
   payload.WithBool("badgeEnabled", m_badgeEnabled);

  }

  if(m_logsConfigHasBeenSet)
  {
   payload.WithObject("logsConfig", m_logsConfig.Jsonize());

  }

  if(m_fileSystemLocationsHasBeenSet)
  {
   Array<JsonValue> fileSystemLocationsJsonList(m_fileSystemLocations.size());
   for(unsigned fileSystemLocationsIndex = 0; fileSystemLocationsIndex < fileSystemLocationsJsonList.GetLength(); ++fileSystemLocationsIndex)
   {
     fileSystemLocationsJsonList[fileSystemLocationsIndex].AsObject(m_fileSystemLocations[fileSystemLocationsIndex].Jsonize());
   }
   payload.WithArray("fileSystemLocations", std::move(fileSystemLocationsJsonList));

  }

  if(m_buildBatchConfigHasBeenSet)
  {
   payload.WithObject("buildBatchConfig", m_buildBatchConfig.Jsonize());

  }

  if(m_concurrentBuildLimitHasBeenSet)
  {
   payload.WithInteger("concurrentBuildLimit", m_concurrentBuildLimit);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateProjectRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "CodeBuild_20161006.UpdateProject"));
  return headers;

}




