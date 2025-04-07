/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codebuild/model/SandboxSession.h>
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

SandboxSession::SandboxSession(JsonView jsonValue)
{
  *this = jsonValue;
}

SandboxSession& SandboxSession::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");
    m_idHasBeenSet = true;
  }
  if(jsonValue.ValueExists("status"))
  {
    m_status = jsonValue.GetString("status");
    m_statusHasBeenSet = true;
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
  if(jsonValue.ValueExists("phases"))
  {
    Aws::Utils::Array<JsonView> phasesJsonList = jsonValue.GetArray("phases");
    for(unsigned phasesIndex = 0; phasesIndex < phasesJsonList.GetLength(); ++phasesIndex)
    {
      m_phases.push_back(phasesJsonList[phasesIndex].AsObject());
    }
    m_phasesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("resolvedSourceVersion"))
  {
    m_resolvedSourceVersion = jsonValue.GetString("resolvedSourceVersion");
    m_resolvedSourceVersionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("logs"))
  {
    m_logs = jsonValue.GetObject("logs");
    m_logsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("networkInterface"))
  {
    m_networkInterface = jsonValue.GetObject("networkInterface");
    m_networkInterfaceHasBeenSet = true;
  }
  return *this;
}

JsonValue SandboxSession::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", m_status);

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

  if(m_phasesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> phasesJsonList(m_phases.size());
   for(unsigned phasesIndex = 0; phasesIndex < phasesJsonList.GetLength(); ++phasesIndex)
   {
     phasesJsonList[phasesIndex].AsObject(m_phases[phasesIndex].Jsonize());
   }
   payload.WithArray("phases", std::move(phasesJsonList));

  }

  if(m_resolvedSourceVersionHasBeenSet)
  {
   payload.WithString("resolvedSourceVersion", m_resolvedSourceVersion);

  }

  if(m_logsHasBeenSet)
  {
   payload.WithObject("logs", m_logs.Jsonize());

  }

  if(m_networkInterfaceHasBeenSet)
  {
   payload.WithObject("networkInterface", m_networkInterface.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
