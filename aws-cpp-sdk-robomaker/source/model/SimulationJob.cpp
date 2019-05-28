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

#include <aws/robomaker/model/SimulationJob.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace RoboMaker
{
namespace Model
{

SimulationJob::SimulationJob() : 
    m_arnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_status(SimulationJobStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_lastStartedAtHasBeenSet(false),
    m_lastUpdatedAtHasBeenSet(false),
    m_failureBehavior(FailureBehavior::NOT_SET),
    m_failureBehaviorHasBeenSet(false),
    m_failureCode(SimulationJobErrorCode::NOT_SET),
    m_failureCodeHasBeenSet(false),
    m_failureReasonHasBeenSet(false),
    m_clientRequestTokenHasBeenSet(false),
    m_outputLocationHasBeenSet(false),
    m_maxJobDurationInSeconds(0),
    m_maxJobDurationInSecondsHasBeenSet(false),
    m_simulationTimeMillis(0),
    m_simulationTimeMillisHasBeenSet(false),
    m_iamRoleHasBeenSet(false),
    m_robotApplicationsHasBeenSet(false),
    m_simulationApplicationsHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_vpcConfigHasBeenSet(false)
{
}

SimulationJob::SimulationJob(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_status(SimulationJobStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_lastStartedAtHasBeenSet(false),
    m_lastUpdatedAtHasBeenSet(false),
    m_failureBehavior(FailureBehavior::NOT_SET),
    m_failureBehaviorHasBeenSet(false),
    m_failureCode(SimulationJobErrorCode::NOT_SET),
    m_failureCodeHasBeenSet(false),
    m_failureReasonHasBeenSet(false),
    m_clientRequestTokenHasBeenSet(false),
    m_outputLocationHasBeenSet(false),
    m_maxJobDurationInSeconds(0),
    m_maxJobDurationInSecondsHasBeenSet(false),
    m_simulationTimeMillis(0),
    m_simulationTimeMillisHasBeenSet(false),
    m_iamRoleHasBeenSet(false),
    m_robotApplicationsHasBeenSet(false),
    m_simulationApplicationsHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_vpcConfigHasBeenSet(false)
{
  *this = jsonValue;
}

SimulationJob& SimulationJob::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = SimulationJobStatusMapper::GetSimulationJobStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastStartedAt"))
  {
    m_lastStartedAt = jsonValue.GetDouble("lastStartedAt");

    m_lastStartedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastUpdatedAt"))
  {
    m_lastUpdatedAt = jsonValue.GetDouble("lastUpdatedAt");

    m_lastUpdatedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("failureBehavior"))
  {
    m_failureBehavior = FailureBehaviorMapper::GetFailureBehaviorForName(jsonValue.GetString("failureBehavior"));

    m_failureBehaviorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("failureCode"))
  {
    m_failureCode = SimulationJobErrorCodeMapper::GetSimulationJobErrorCodeForName(jsonValue.GetString("failureCode"));

    m_failureCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("failureReason"))
  {
    m_failureReason = jsonValue.GetString("failureReason");

    m_failureReasonHasBeenSet = true;
  }

  if(jsonValue.ValueExists("clientRequestToken"))
  {
    m_clientRequestToken = jsonValue.GetString("clientRequestToken");

    m_clientRequestTokenHasBeenSet = true;
  }

  if(jsonValue.ValueExists("outputLocation"))
  {
    m_outputLocation = jsonValue.GetObject("outputLocation");

    m_outputLocationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("maxJobDurationInSeconds"))
  {
    m_maxJobDurationInSeconds = jsonValue.GetInt64("maxJobDurationInSeconds");

    m_maxJobDurationInSecondsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("simulationTimeMillis"))
  {
    m_simulationTimeMillis = jsonValue.GetInt64("simulationTimeMillis");

    m_simulationTimeMillisHasBeenSet = true;
  }

  if(jsonValue.ValueExists("iamRole"))
  {
    m_iamRole = jsonValue.GetString("iamRole");

    m_iamRoleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("robotApplications"))
  {
    Array<JsonView> robotApplicationsJsonList = jsonValue.GetArray("robotApplications");
    for(unsigned robotApplicationsIndex = 0; robotApplicationsIndex < robotApplicationsJsonList.GetLength(); ++robotApplicationsIndex)
    {
      m_robotApplications.push_back(robotApplicationsJsonList[robotApplicationsIndex].AsObject());
    }
    m_robotApplicationsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("simulationApplications"))
  {
    Array<JsonView> simulationApplicationsJsonList = jsonValue.GetArray("simulationApplications");
    for(unsigned simulationApplicationsIndex = 0; simulationApplicationsIndex < simulationApplicationsJsonList.GetLength(); ++simulationApplicationsIndex)
    {
      m_simulationApplications.push_back(simulationApplicationsJsonList[simulationApplicationsIndex].AsObject());
    }
    m_simulationApplicationsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("vpcConfig"))
  {
    m_vpcConfig = jsonValue.GetObject("vpcConfig");

    m_vpcConfigHasBeenSet = true;
  }

  return *this;
}

JsonValue SimulationJob::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", SimulationJobStatusMapper::GetNameForSimulationJobStatus(m_status));
  }

  if(m_lastStartedAtHasBeenSet)
  {
   payload.WithDouble("lastStartedAt", m_lastStartedAt.SecondsWithMSPrecision());
  }

  if(m_lastUpdatedAtHasBeenSet)
  {
   payload.WithDouble("lastUpdatedAt", m_lastUpdatedAt.SecondsWithMSPrecision());
  }

  if(m_failureBehaviorHasBeenSet)
  {
   payload.WithString("failureBehavior", FailureBehaviorMapper::GetNameForFailureBehavior(m_failureBehavior));
  }

  if(m_failureCodeHasBeenSet)
  {
   payload.WithString("failureCode", SimulationJobErrorCodeMapper::GetNameForSimulationJobErrorCode(m_failureCode));
  }

  if(m_failureReasonHasBeenSet)
  {
   payload.WithString("failureReason", m_failureReason);

  }

  if(m_clientRequestTokenHasBeenSet)
  {
   payload.WithString("clientRequestToken", m_clientRequestToken);

  }

  if(m_outputLocationHasBeenSet)
  {
   payload.WithObject("outputLocation", m_outputLocation.Jsonize());

  }

  if(m_maxJobDurationInSecondsHasBeenSet)
  {
   payload.WithInt64("maxJobDurationInSeconds", m_maxJobDurationInSeconds);

  }

  if(m_simulationTimeMillisHasBeenSet)
  {
   payload.WithInt64("simulationTimeMillis", m_simulationTimeMillis);

  }

  if(m_iamRoleHasBeenSet)
  {
   payload.WithString("iamRole", m_iamRole);

  }

  if(m_robotApplicationsHasBeenSet)
  {
   Array<JsonValue> robotApplicationsJsonList(m_robotApplications.size());
   for(unsigned robotApplicationsIndex = 0; robotApplicationsIndex < robotApplicationsJsonList.GetLength(); ++robotApplicationsIndex)
   {
     robotApplicationsJsonList[robotApplicationsIndex].AsObject(m_robotApplications[robotApplicationsIndex].Jsonize());
   }
   payload.WithArray("robotApplications", std::move(robotApplicationsJsonList));

  }

  if(m_simulationApplicationsHasBeenSet)
  {
   Array<JsonValue> simulationApplicationsJsonList(m_simulationApplications.size());
   for(unsigned simulationApplicationsIndex = 0; simulationApplicationsIndex < simulationApplicationsJsonList.GetLength(); ++simulationApplicationsIndex)
   {
     simulationApplicationsJsonList[simulationApplicationsIndex].AsObject(m_simulationApplications[simulationApplicationsIndex].Jsonize());
   }
   payload.WithArray("simulationApplications", std::move(simulationApplicationsJsonList));

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

  if(m_vpcConfigHasBeenSet)
  {
   payload.WithObject("vpcConfig", m_vpcConfig.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace RoboMaker
} // namespace Aws
