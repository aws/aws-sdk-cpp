/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codebuild/model/Build.h>
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

Build::Build() : 
    m_idHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_buildNumber(0),
    m_buildNumberHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_currentPhaseHasBeenSet(false),
    m_buildStatus(StatusType::NOT_SET),
    m_buildStatusHasBeenSet(false),
    m_sourceVersionHasBeenSet(false),
    m_resolvedSourceVersionHasBeenSet(false),
    m_projectNameHasBeenSet(false),
    m_phasesHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_secondarySourcesHasBeenSet(false),
    m_secondarySourceVersionsHasBeenSet(false),
    m_artifactsHasBeenSet(false),
    m_secondaryArtifactsHasBeenSet(false),
    m_cacheHasBeenSet(false),
    m_environmentHasBeenSet(false),
    m_serviceRoleHasBeenSet(false),
    m_logsHasBeenSet(false),
    m_timeoutInMinutes(0),
    m_timeoutInMinutesHasBeenSet(false),
    m_queuedTimeoutInMinutes(0),
    m_queuedTimeoutInMinutesHasBeenSet(false),
    m_buildComplete(false),
    m_buildCompleteHasBeenSet(false),
    m_initiatorHasBeenSet(false),
    m_vpcConfigHasBeenSet(false),
    m_networkInterfaceHasBeenSet(false),
    m_encryptionKeyHasBeenSet(false),
    m_exportedEnvironmentVariablesHasBeenSet(false),
    m_reportArnsHasBeenSet(false),
    m_fileSystemLocationsHasBeenSet(false),
    m_debugSessionHasBeenSet(false),
    m_buildBatchArnHasBeenSet(false)
{
}

Build::Build(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_buildNumber(0),
    m_buildNumberHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_currentPhaseHasBeenSet(false),
    m_buildStatus(StatusType::NOT_SET),
    m_buildStatusHasBeenSet(false),
    m_sourceVersionHasBeenSet(false),
    m_resolvedSourceVersionHasBeenSet(false),
    m_projectNameHasBeenSet(false),
    m_phasesHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_secondarySourcesHasBeenSet(false),
    m_secondarySourceVersionsHasBeenSet(false),
    m_artifactsHasBeenSet(false),
    m_secondaryArtifactsHasBeenSet(false),
    m_cacheHasBeenSet(false),
    m_environmentHasBeenSet(false),
    m_serviceRoleHasBeenSet(false),
    m_logsHasBeenSet(false),
    m_timeoutInMinutes(0),
    m_timeoutInMinutesHasBeenSet(false),
    m_queuedTimeoutInMinutes(0),
    m_queuedTimeoutInMinutesHasBeenSet(false),
    m_buildComplete(false),
    m_buildCompleteHasBeenSet(false),
    m_initiatorHasBeenSet(false),
    m_vpcConfigHasBeenSet(false),
    m_networkInterfaceHasBeenSet(false),
    m_encryptionKeyHasBeenSet(false),
    m_exportedEnvironmentVariablesHasBeenSet(false),
    m_reportArnsHasBeenSet(false),
    m_fileSystemLocationsHasBeenSet(false),
    m_debugSessionHasBeenSet(false),
    m_buildBatchArnHasBeenSet(false)
{
  *this = jsonValue;
}

Build& Build::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("buildNumber"))
  {
    m_buildNumber = jsonValue.GetInt64("buildNumber");

    m_buildNumberHasBeenSet = true;
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

  if(jsonValue.ValueExists("currentPhase"))
  {
    m_currentPhase = jsonValue.GetString("currentPhase");

    m_currentPhaseHasBeenSet = true;
  }

  if(jsonValue.ValueExists("buildStatus"))
  {
    m_buildStatus = StatusTypeMapper::GetStatusTypeForName(jsonValue.GetString("buildStatus"));

    m_buildStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sourceVersion"))
  {
    m_sourceVersion = jsonValue.GetString("sourceVersion");

    m_sourceVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("resolvedSourceVersion"))
  {
    m_resolvedSourceVersion = jsonValue.GetString("resolvedSourceVersion");

    m_resolvedSourceVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("projectName"))
  {
    m_projectName = jsonValue.GetString("projectName");

    m_projectNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("phases"))
  {
    Aws::Utils::Array<JsonView> phasesJsonList = jsonValue.GetArray("phases");
    for(unsigned phasesIndex = 0; phasesIndex < phasesJsonList.GetLength(); ++phasesIndex)
    {
      m_phases.push_back(phasesJsonList[phasesIndex].AsObject());
    }
    m_phasesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("source"))
  {
    m_source = jsonValue.GetObject("source");

    m_sourceHasBeenSet = true;
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

  if(jsonValue.ValueExists("artifacts"))
  {
    m_artifacts = jsonValue.GetObject("artifacts");

    m_artifactsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("secondaryArtifacts"))
  {
    Aws::Utils::Array<JsonView> secondaryArtifactsJsonList = jsonValue.GetArray("secondaryArtifacts");
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

  if(jsonValue.ValueExists("logs"))
  {
    m_logs = jsonValue.GetObject("logs");

    m_logsHasBeenSet = true;
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

  if(jsonValue.ValueExists("buildComplete"))
  {
    m_buildComplete = jsonValue.GetBool("buildComplete");

    m_buildCompleteHasBeenSet = true;
  }

  if(jsonValue.ValueExists("initiator"))
  {
    m_initiator = jsonValue.GetString("initiator");

    m_initiatorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("vpcConfig"))
  {
    m_vpcConfig = jsonValue.GetObject("vpcConfig");

    m_vpcConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("networkInterface"))
  {
    m_networkInterface = jsonValue.GetObject("networkInterface");

    m_networkInterfaceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("encryptionKey"))
  {
    m_encryptionKey = jsonValue.GetString("encryptionKey");

    m_encryptionKeyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("exportedEnvironmentVariables"))
  {
    Aws::Utils::Array<JsonView> exportedEnvironmentVariablesJsonList = jsonValue.GetArray("exportedEnvironmentVariables");
    for(unsigned exportedEnvironmentVariablesIndex = 0; exportedEnvironmentVariablesIndex < exportedEnvironmentVariablesJsonList.GetLength(); ++exportedEnvironmentVariablesIndex)
    {
      m_exportedEnvironmentVariables.push_back(exportedEnvironmentVariablesJsonList[exportedEnvironmentVariablesIndex].AsObject());
    }
    m_exportedEnvironmentVariablesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("reportArns"))
  {
    Aws::Utils::Array<JsonView> reportArnsJsonList = jsonValue.GetArray("reportArns");
    for(unsigned reportArnsIndex = 0; reportArnsIndex < reportArnsJsonList.GetLength(); ++reportArnsIndex)
    {
      m_reportArns.push_back(reportArnsJsonList[reportArnsIndex].AsString());
    }
    m_reportArnsHasBeenSet = true;
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

  if(jsonValue.ValueExists("debugSession"))
  {
    m_debugSession = jsonValue.GetObject("debugSession");

    m_debugSessionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("buildBatchArn"))
  {
    m_buildBatchArn = jsonValue.GetString("buildBatchArn");

    m_buildBatchArnHasBeenSet = true;
  }

  return *this;
}

JsonValue Build::Jsonize() const
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

  if(m_buildNumberHasBeenSet)
  {
   payload.WithInt64("buildNumber", m_buildNumber);

  }

  if(m_startTimeHasBeenSet)
  {
   payload.WithDouble("startTime", m_startTime.SecondsWithMSPrecision());
  }

  if(m_endTimeHasBeenSet)
  {
   payload.WithDouble("endTime", m_endTime.SecondsWithMSPrecision());
  }

  if(m_currentPhaseHasBeenSet)
  {
   payload.WithString("currentPhase", m_currentPhase);

  }

  if(m_buildStatusHasBeenSet)
  {
   payload.WithString("buildStatus", StatusTypeMapper::GetNameForStatusType(m_buildStatus));
  }

  if(m_sourceVersionHasBeenSet)
  {
   payload.WithString("sourceVersion", m_sourceVersion);

  }

  if(m_resolvedSourceVersionHasBeenSet)
  {
   payload.WithString("resolvedSourceVersion", m_resolvedSourceVersion);

  }

  if(m_projectNameHasBeenSet)
  {
   payload.WithString("projectName", m_projectName);

  }

  if(m_phasesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> phasesJsonList(m_phases.size());
   for(unsigned phasesIndex = 0; phasesIndex < phasesJsonList.GetLength(); ++phasesIndex)
   {
     phasesJsonList[phasesIndex].AsObject(m_phases[phasesIndex].Jsonize());
   }
   payload.WithArray("phases", std::move(phasesJsonList));

  }

  if(m_sourceHasBeenSet)
  {
   payload.WithObject("source", m_source.Jsonize());

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

  if(m_artifactsHasBeenSet)
  {
   payload.WithObject("artifacts", m_artifacts.Jsonize());

  }

  if(m_secondaryArtifactsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> secondaryArtifactsJsonList(m_secondaryArtifacts.size());
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

  if(m_logsHasBeenSet)
  {
   payload.WithObject("logs", m_logs.Jsonize());

  }

  if(m_timeoutInMinutesHasBeenSet)
  {
   payload.WithInteger("timeoutInMinutes", m_timeoutInMinutes);

  }

  if(m_queuedTimeoutInMinutesHasBeenSet)
  {
   payload.WithInteger("queuedTimeoutInMinutes", m_queuedTimeoutInMinutes);

  }

  if(m_buildCompleteHasBeenSet)
  {
   payload.WithBool("buildComplete", m_buildComplete);

  }

  if(m_initiatorHasBeenSet)
  {
   payload.WithString("initiator", m_initiator);

  }

  if(m_vpcConfigHasBeenSet)
  {
   payload.WithObject("vpcConfig", m_vpcConfig.Jsonize());

  }

  if(m_networkInterfaceHasBeenSet)
  {
   payload.WithObject("networkInterface", m_networkInterface.Jsonize());

  }

  if(m_encryptionKeyHasBeenSet)
  {
   payload.WithString("encryptionKey", m_encryptionKey);

  }

  if(m_exportedEnvironmentVariablesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> exportedEnvironmentVariablesJsonList(m_exportedEnvironmentVariables.size());
   for(unsigned exportedEnvironmentVariablesIndex = 0; exportedEnvironmentVariablesIndex < exportedEnvironmentVariablesJsonList.GetLength(); ++exportedEnvironmentVariablesIndex)
   {
     exportedEnvironmentVariablesJsonList[exportedEnvironmentVariablesIndex].AsObject(m_exportedEnvironmentVariables[exportedEnvironmentVariablesIndex].Jsonize());
   }
   payload.WithArray("exportedEnvironmentVariables", std::move(exportedEnvironmentVariablesJsonList));

  }

  if(m_reportArnsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> reportArnsJsonList(m_reportArns.size());
   for(unsigned reportArnsIndex = 0; reportArnsIndex < reportArnsJsonList.GetLength(); ++reportArnsIndex)
   {
     reportArnsJsonList[reportArnsIndex].AsString(m_reportArns[reportArnsIndex]);
   }
   payload.WithArray("reportArns", std::move(reportArnsJsonList));

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

  if(m_debugSessionHasBeenSet)
  {
   payload.WithObject("debugSession", m_debugSession.Jsonize());

  }

  if(m_buildBatchArnHasBeenSet)
  {
   payload.WithString("buildBatchArn", m_buildBatchArn);

  }

  return payload;
}

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
