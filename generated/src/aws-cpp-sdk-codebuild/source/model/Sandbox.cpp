/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codebuild/model/Sandbox.h>
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

Sandbox::Sandbox(JsonView jsonValue)
{
  *this = jsonValue;
}

Sandbox& Sandbox::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");
    m_idHasBeenSet = true;
  }
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");
    m_arnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("projectName"))
  {
    m_projectName = jsonValue.GetString("projectName");
    m_projectNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("requestTime"))
  {
    m_requestTime = jsonValue.GetDouble("requestTime");
    m_requestTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("startTime"))
  {
    m_startTime = jsonValue.GetDouble("startTime");
    m_startTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("endTime"))
  {
    m_endTime = jsonValue.GetDouble("endTime");
    m_endTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("status"))
  {
    m_status = jsonValue.GetString("status");
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("source"))
  {
    m_source = jsonValue.GetObject("source");
    m_sourceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("sourceVersion"))
  {
    m_sourceVersion = jsonValue.GetString("sourceVersion");
    m_sourceVersionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("secondarySources"))
  {
    Aws::Utils::Array<JsonView> secondarySourcesJsonList = jsonValue.GetArray("secondarySources");
    for(unsigned secondarySourcesIndex = 0; secondarySourcesIndex < secondarySourcesJsonList.GetLength(); ++secondarySourcesIndex)
    {
      m_secondarySources.push_back(secondarySourcesJsonList[secondarySourcesIndex].AsObject());
    }
    m_secondarySourcesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("secondarySourceVersions"))
  {
    Aws::Utils::Array<JsonView> secondarySourceVersionsJsonList = jsonValue.GetArray("secondarySourceVersions");
    for(unsigned secondarySourceVersionsIndex = 0; secondarySourceVersionsIndex < secondarySourceVersionsJsonList.GetLength(); ++secondarySourceVersionsIndex)
    {
      m_secondarySourceVersions.push_back(secondarySourceVersionsJsonList[secondarySourceVersionsIndex].AsObject());
    }
    m_secondarySourceVersionsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("environment"))
  {
    m_environment = jsonValue.GetObject("environment");
    m_environmentHasBeenSet = true;
  }
  if(jsonValue.ValueExists("fileSystemLocations"))
  {
    Aws::Utils::Array<JsonView> fileSystemLocationsJsonList = jsonValue.GetArray("fileSystemLocations");
    for(unsigned fileSystemLocationsIndex = 0; fileSystemLocationsIndex < fileSystemLocationsJsonList.GetLength(); ++fileSystemLocationsIndex)
    {
      m_fileSystemLocations.push_back(fileSystemLocationsJsonList[fileSystemLocationsIndex].AsObject());
    }
    m_fileSystemLocationsHasBeenSet = true;
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
  if(jsonValue.ValueExists("vpcConfig"))
  {
    m_vpcConfig = jsonValue.GetObject("vpcConfig");
    m_vpcConfigHasBeenSet = true;
  }
  if(jsonValue.ValueExists("logConfig"))
  {
    m_logConfig = jsonValue.GetObject("logConfig");
    m_logConfigHasBeenSet = true;
  }
  if(jsonValue.ValueExists("encryptionKey"))
  {
    m_encryptionKey = jsonValue.GetString("encryptionKey");
    m_encryptionKeyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("serviceRole"))
  {
    m_serviceRole = jsonValue.GetString("serviceRole");
    m_serviceRoleHasBeenSet = true;
  }
  if(jsonValue.ValueExists("currentSession"))
  {
    m_currentSession = jsonValue.GetObject("currentSession");
    m_currentSessionHasBeenSet = true;
  }
  return *this;
}

JsonValue Sandbox::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_projectNameHasBeenSet)
  {
   payload.WithString("projectName", m_projectName);

  }

  if(m_requestTimeHasBeenSet)
  {
   payload.WithDouble("requestTime", m_requestTime.SecondsWithMSPrecision());
  }

  if(m_startTimeHasBeenSet)
  {
   payload.WithDouble("startTime", m_startTime.SecondsWithMSPrecision());
  }

  if(m_endTimeHasBeenSet)
  {
   payload.WithDouble("endTime", m_endTime.SecondsWithMSPrecision());
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", m_status);

  }

  if(m_sourceHasBeenSet)
  {
   payload.WithObject("source", m_source.Jsonize());

  }

  if(m_sourceVersionHasBeenSet)
  {
   payload.WithString("sourceVersion", m_sourceVersion);

  }

  if(m_secondarySourcesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> secondarySourcesJsonList(m_secondarySources.size());
   for(unsigned secondarySourcesIndex = 0; secondarySourcesIndex < secondarySourcesJsonList.GetLength(); ++secondarySourcesIndex)
   {
     secondarySourcesJsonList[secondarySourcesIndex].AsObject(m_secondarySources[secondarySourcesIndex].Jsonize());
   }
   payload.WithArray("secondarySources", std::move(secondarySourcesJsonList));

  }

  if(m_secondarySourceVersionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> secondarySourceVersionsJsonList(m_secondarySourceVersions.size());
   for(unsigned secondarySourceVersionsIndex = 0; secondarySourceVersionsIndex < secondarySourceVersionsJsonList.GetLength(); ++secondarySourceVersionsIndex)
   {
     secondarySourceVersionsJsonList[secondarySourceVersionsIndex].AsObject(m_secondarySourceVersions[secondarySourceVersionsIndex].Jsonize());
   }
   payload.WithArray("secondarySourceVersions", std::move(secondarySourceVersionsJsonList));

  }

  if(m_environmentHasBeenSet)
  {
   payload.WithObject("environment", m_environment.Jsonize());

  }

  if(m_fileSystemLocationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> fileSystemLocationsJsonList(m_fileSystemLocations.size());
   for(unsigned fileSystemLocationsIndex = 0; fileSystemLocationsIndex < fileSystemLocationsJsonList.GetLength(); ++fileSystemLocationsIndex)
   {
     fileSystemLocationsJsonList[fileSystemLocationsIndex].AsObject(m_fileSystemLocations[fileSystemLocationsIndex].Jsonize());
   }
   payload.WithArray("fileSystemLocations", std::move(fileSystemLocationsJsonList));

  }

  if(m_timeoutInMinutesHasBeenSet)
  {
   payload.WithInteger("timeoutInMinutes", m_timeoutInMinutes);

  }

  if(m_queuedTimeoutInMinutesHasBeenSet)
  {
   payload.WithInteger("queuedTimeoutInMinutes", m_queuedTimeoutInMinutes);

  }

  if(m_vpcConfigHasBeenSet)
  {
   payload.WithObject("vpcConfig", m_vpcConfig.Jsonize());

  }

  if(m_logConfigHasBeenSet)
  {
   payload.WithObject("logConfig", m_logConfig.Jsonize());

  }

  if(m_encryptionKeyHasBeenSet)
  {
   payload.WithString("encryptionKey", m_encryptionKey);

  }

  if(m_serviceRoleHasBeenSet)
  {
   payload.WithString("serviceRole", m_serviceRole);

  }

  if(m_currentSessionHasBeenSet)
  {
   payload.WithObject("currentSession", m_currentSession.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
