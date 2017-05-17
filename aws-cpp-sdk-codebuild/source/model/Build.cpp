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
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_currentPhaseHasBeenSet(false),
    m_buildStatus(StatusType::NOT_SET),
    m_buildStatusHasBeenSet(false),
    m_sourceVersionHasBeenSet(false),
    m_projectNameHasBeenSet(false),
    m_phasesHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_artifactsHasBeenSet(false),
    m_environmentHasBeenSet(false),
    m_logsHasBeenSet(false),
    m_timeoutInMinutes(0),
    m_timeoutInMinutesHasBeenSet(false),
    m_buildComplete(false),
    m_buildCompleteHasBeenSet(false),
    m_initiatorHasBeenSet(false)
{
}

Build::Build(const JsonValue& jsonValue) : 
    m_idHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_currentPhaseHasBeenSet(false),
    m_buildStatus(StatusType::NOT_SET),
    m_buildStatusHasBeenSet(false),
    m_sourceVersionHasBeenSet(false),
    m_projectNameHasBeenSet(false),
    m_phasesHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_artifactsHasBeenSet(false),
    m_environmentHasBeenSet(false),
    m_logsHasBeenSet(false),
    m_timeoutInMinutes(0),
    m_timeoutInMinutesHasBeenSet(false),
    m_buildComplete(false),
    m_buildCompleteHasBeenSet(false),
    m_initiatorHasBeenSet(false)
{
  *this = jsonValue;
}

Build& Build::operator =(const JsonValue& jsonValue)
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

  if(jsonValue.ValueExists("projectName"))
  {
    m_projectName = jsonValue.GetString("projectName");

    m_projectNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("phases"))
  {
    Array<JsonValue> phasesJsonList = jsonValue.GetArray("phases");
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

  if(jsonValue.ValueExists("artifacts"))
  {
    m_artifacts = jsonValue.GetObject("artifacts");

    m_artifactsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("environment"))
  {
    m_environment = jsonValue.GetObject("environment");

    m_environmentHasBeenSet = true;
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

  if(m_projectNameHasBeenSet)
  {
   payload.WithString("projectName", m_projectName);

  }

  if(m_phasesHasBeenSet)
  {
   Array<JsonValue> phasesJsonList(m_phases.size());
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

  if(m_artifactsHasBeenSet)
  {
   payload.WithObject("artifacts", m_artifacts.Jsonize());

  }

  if(m_environmentHasBeenSet)
  {
   payload.WithObject("environment", m_environment.Jsonize());

  }

  if(m_logsHasBeenSet)
  {
   payload.WithObject("logs", m_logs.Jsonize());

  }

  if(m_timeoutInMinutesHasBeenSet)
  {
   payload.WithInteger("timeoutInMinutes", m_timeoutInMinutes);

  }

  if(m_buildCompleteHasBeenSet)
  {
   payload.WithBool("buildComplete", m_buildComplete);

  }

  if(m_initiatorHasBeenSet)
  {
   payload.WithString("initiator", m_initiator);

  }

  return payload;
}

} // namespace Model
} // namespace CodeBuild
} // namespace Aws