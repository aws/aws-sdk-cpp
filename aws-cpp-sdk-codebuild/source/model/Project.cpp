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

#include <aws/codebuild/model/Project.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodeBuild
{
namespace Model
{

Project::Project() : 
    m_nameHasBeenSet(false),
    m_arnHasBeenSet(false),
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
    m_createdHasBeenSet(false),
    m_lastModifiedHasBeenSet(false),
    m_webhookHasBeenSet(false),
    m_vpcConfigHasBeenSet(false),
    m_badgeHasBeenSet(false),
    m_logsConfigHasBeenSet(false)
{
}

Project::Project(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_arnHasBeenSet(false),
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
    m_createdHasBeenSet(false),
    m_lastModifiedHasBeenSet(false),
    m_webhookHasBeenSet(false),
    m_vpcConfigHasBeenSet(false),
    m_badgeHasBeenSet(false),
    m_logsConfigHasBeenSet(false)
{
  *this = jsonValue;
}

Project& Project::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("source"))
  {
    m_source = jsonValue.GetObject("source");

    m_sourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("secondarySources"))
  {
    Array<JsonView> secondarySourcesJsonList = jsonValue.GetArray("secondarySources");
    for(unsigned secondarySourcesIndex = 0; secondarySourcesIndex < secondarySourcesJsonList.GetLength(); ++secondarySourcesIndex)
    {
      m_secondarySources.push_back(secondarySourcesJsonList[secondarySourcesIndex].AsObject());
    }
    m_secondarySourcesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sourceVersion"))
  {
    m_sourceVersion = jsonValue.GetString("sourceVersion");

    m_sourceVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("secondarySourceVersions"))
  {
    Array<JsonView> secondarySourceVersionsJsonList = jsonValue.GetArray("secondarySourceVersions");
    for(unsigned secondarySourceVersionsIndex = 0; secondarySourceVersionsIndex < secondarySourceVersionsJsonList.GetLength(); ++secondarySourceVersionsIndex)
    {
      m_secondarySourceVersions.push_back(secondarySourceVersionsJsonList[secondarySourceVersionsIndex].AsObject());
    }
    m_secondarySourceVersionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("artifacts"))
  {
    m_artifacts = jsonValue.GetObject("artifacts");

    m_artifactsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("secondaryArtifacts"))
  {
    Array<JsonView> secondaryArtifactsJsonList = jsonValue.GetArray("secondaryArtifacts");
    for(unsigned secondaryArtifactsIndex = 0; secondaryArtifactsIndex < secondaryArtifactsJsonList.GetLength(); ++secondaryArtifactsIndex)
    {
      m_secondaryArtifacts.push_back(secondaryArtifactsJsonList[secondaryArtifactsIndex].AsObject());
    }
    m_secondaryArtifactsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("cache"))
  {
    m_cache = jsonValue.GetObject("cache");

    m_cacheHasBeenSet = true;
  }

  if(jsonValue.ValueExists("environment"))
  {
    m_environment = jsonValue.GetObject("environment");

    m_environmentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("serviceRole"))
  {
    m_serviceRole = jsonValue.GetString("serviceRole");

    m_serviceRoleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("timeoutInMinutes"))
  {
    m_timeoutInMinutes = jsonValue.GetInteger("timeoutInMinutes");

    m_timeoutInMinutesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("queuedTimeoutInMinutes"))
  {
    m_queuedTimeoutInMinutes = jsonValue.GetInteger("queuedTimeoutInMinutes");

    m_queuedTimeoutInMinutesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("encryptionKey"))
  {
    m_encryptionKey = jsonValue.GetString("encryptionKey");

    m_encryptionKeyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("tags"))
  {
    Array<JsonView> tagsJsonList = jsonValue.GetArray("tags");
    for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
    {
      m_tags.push_back(tagsJsonList[tagsIndex].AsObject());
    }
    m_tagsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("created"))
  {
    m_created = jsonValue.GetDouble("created");

    m_createdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastModified"))
  {
    m_lastModified = jsonValue.GetDouble("lastModified");

    m_lastModifiedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("webhook"))
  {
    m_webhook = jsonValue.GetObject("webhook");

    m_webhookHasBeenSet = true;
  }

  if(jsonValue.ValueExists("vpcConfig"))
  {
    m_vpcConfig = jsonValue.GetObject("vpcConfig");

    m_vpcConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("badge"))
  {
    m_badge = jsonValue.GetObject("badge");

    m_badgeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("logsConfig"))
  {
    m_logsConfig = jsonValue.GetObject("logsConfig");

    m_logsConfigHasBeenSet = true;
  }

  return *this;
}

JsonValue Project::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

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

  if(m_createdHasBeenSet)
  {
   payload.WithDouble("created", m_created.SecondsWithMSPrecision());
  }

  if(m_lastModifiedHasBeenSet)
  {
   payload.WithDouble("lastModified", m_lastModified.SecondsWithMSPrecision());
  }

  if(m_webhookHasBeenSet)
  {
   payload.WithObject("webhook", m_webhook.Jsonize());

  }

  if(m_vpcConfigHasBeenSet)
  {
   payload.WithObject("vpcConfig", m_vpcConfig.Jsonize());

  }

  if(m_badgeHasBeenSet)
  {
   payload.WithObject("badge", m_badge.Jsonize());

  }

  if(m_logsConfigHasBeenSet)
  {
   payload.WithObject("logsConfig", m_logsConfig.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
