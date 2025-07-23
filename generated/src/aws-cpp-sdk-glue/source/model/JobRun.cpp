/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/JobRun.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Glue
{
namespace Model
{

JobRun::JobRun(JsonView jsonValue)
{
  *this = jsonValue;
}

JobRun& JobRun::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");
    m_idHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Attempt"))
  {
    m_attempt = jsonValue.GetInteger("Attempt");
    m_attemptHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PreviousRunId"))
  {
    m_previousRunId = jsonValue.GetString("PreviousRunId");
    m_previousRunIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TriggerName"))
  {
    m_triggerName = jsonValue.GetString("TriggerName");
    m_triggerNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("JobName"))
  {
    m_jobName = jsonValue.GetString("JobName");
    m_jobNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("JobMode"))
  {
    m_jobMode = JobModeMapper::GetJobModeForName(jsonValue.GetString("JobMode"));
    m_jobModeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("JobRunQueuingEnabled"))
  {
    m_jobRunQueuingEnabled = jsonValue.GetBool("JobRunQueuingEnabled");
    m_jobRunQueuingEnabledHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StartedOn"))
  {
    m_startedOn = jsonValue.GetDouble("StartedOn");
    m_startedOnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LastModifiedOn"))
  {
    m_lastModifiedOn = jsonValue.GetDouble("LastModifiedOn");
    m_lastModifiedOnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CompletedOn"))
  {
    m_completedOn = jsonValue.GetDouble("CompletedOn");
    m_completedOnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("JobRunState"))
  {
    m_jobRunState = JobRunStateMapper::GetJobRunStateForName(jsonValue.GetString("JobRunState"));
    m_jobRunStateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Arguments"))
  {
    Aws::Map<Aws::String, JsonView> argumentsJsonMap = jsonValue.GetObject("Arguments").GetAllObjects();
    for(auto& argumentsItem : argumentsJsonMap)
    {
      m_arguments[argumentsItem.first] = argumentsItem.second.AsString();
    }
    m_argumentsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ErrorMessage"))
  {
    m_errorMessage = jsonValue.GetString("ErrorMessage");
    m_errorMessageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PredecessorRuns"))
  {
    Aws::Utils::Array<JsonView> predecessorRunsJsonList = jsonValue.GetArray("PredecessorRuns");
    for(unsigned predecessorRunsIndex = 0; predecessorRunsIndex < predecessorRunsJsonList.GetLength(); ++predecessorRunsIndex)
    {
      m_predecessorRuns.push_back(predecessorRunsJsonList[predecessorRunsIndex].AsObject());
    }
    m_predecessorRunsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ExecutionTime"))
  {
    m_executionTime = jsonValue.GetInteger("ExecutionTime");
    m_executionTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Timeout"))
  {
    m_timeout = jsonValue.GetInteger("Timeout");
    m_timeoutHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MaxCapacity"))
  {
    m_maxCapacity = jsonValue.GetDouble("MaxCapacity");
    m_maxCapacityHasBeenSet = true;
  }
  if(jsonValue.ValueExists("WorkerType"))
  {
    m_workerType = WorkerTypeMapper::GetWorkerTypeForName(jsonValue.GetString("WorkerType"));
    m_workerTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("NumberOfWorkers"))
  {
    m_numberOfWorkers = jsonValue.GetInteger("NumberOfWorkers");
    m_numberOfWorkersHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SecurityConfiguration"))
  {
    m_securityConfiguration = jsonValue.GetString("SecurityConfiguration");
    m_securityConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LogGroupName"))
  {
    m_logGroupName = jsonValue.GetString("LogGroupName");
    m_logGroupNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("NotificationProperty"))
  {
    m_notificationProperty = jsonValue.GetObject("NotificationProperty");
    m_notificationPropertyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("GlueVersion"))
  {
    m_glueVersion = jsonValue.GetString("GlueVersion");
    m_glueVersionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DPUSeconds"))
  {
    m_dPUSeconds = jsonValue.GetDouble("DPUSeconds");
    m_dPUSecondsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ExecutionClass"))
  {
    m_executionClass = ExecutionClassMapper::GetExecutionClassForName(jsonValue.GetString("ExecutionClass"));
    m_executionClassHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MaintenanceWindow"))
  {
    m_maintenanceWindow = jsonValue.GetString("MaintenanceWindow");
    m_maintenanceWindowHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ProfileName"))
  {
    m_profileName = jsonValue.GetString("ProfileName");
    m_profileNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StateDetail"))
  {
    m_stateDetail = jsonValue.GetString("StateDetail");
    m_stateDetailHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ExecutionRoleSessionPolicy"))
  {
    m_executionRoleSessionPolicy = jsonValue.GetString("ExecutionRoleSessionPolicy");
    m_executionRoleSessionPolicyHasBeenSet = true;
  }
  return *this;
}

JsonValue JobRun::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_attemptHasBeenSet)
  {
   payload.WithInteger("Attempt", m_attempt);

  }

  if(m_previousRunIdHasBeenSet)
  {
   payload.WithString("PreviousRunId", m_previousRunId);

  }

  if(m_triggerNameHasBeenSet)
  {
   payload.WithString("TriggerName", m_triggerName);

  }

  if(m_jobNameHasBeenSet)
  {
   payload.WithString("JobName", m_jobName);

  }

  if(m_jobModeHasBeenSet)
  {
   payload.WithString("JobMode", JobModeMapper::GetNameForJobMode(m_jobMode));
  }

  if(m_jobRunQueuingEnabledHasBeenSet)
  {
   payload.WithBool("JobRunQueuingEnabled", m_jobRunQueuingEnabled);

  }

  if(m_startedOnHasBeenSet)
  {
   payload.WithDouble("StartedOn", m_startedOn.SecondsWithMSPrecision());
  }

  if(m_lastModifiedOnHasBeenSet)
  {
   payload.WithDouble("LastModifiedOn", m_lastModifiedOn.SecondsWithMSPrecision());
  }

  if(m_completedOnHasBeenSet)
  {
   payload.WithDouble("CompletedOn", m_completedOn.SecondsWithMSPrecision());
  }

  if(m_jobRunStateHasBeenSet)
  {
   payload.WithString("JobRunState", JobRunStateMapper::GetNameForJobRunState(m_jobRunState));
  }

  if(m_argumentsHasBeenSet)
  {
   JsonValue argumentsJsonMap;
   for(auto& argumentsItem : m_arguments)
   {
     argumentsJsonMap.WithString(argumentsItem.first, argumentsItem.second);
   }
   payload.WithObject("Arguments", std::move(argumentsJsonMap));

  }

  if(m_errorMessageHasBeenSet)
  {
   payload.WithString("ErrorMessage", m_errorMessage);

  }

  if(m_predecessorRunsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> predecessorRunsJsonList(m_predecessorRuns.size());
   for(unsigned predecessorRunsIndex = 0; predecessorRunsIndex < predecessorRunsJsonList.GetLength(); ++predecessorRunsIndex)
   {
     predecessorRunsJsonList[predecessorRunsIndex].AsObject(m_predecessorRuns[predecessorRunsIndex].Jsonize());
   }
   payload.WithArray("PredecessorRuns", std::move(predecessorRunsJsonList));

  }

  if(m_executionTimeHasBeenSet)
  {
   payload.WithInteger("ExecutionTime", m_executionTime);

  }

  if(m_timeoutHasBeenSet)
  {
   payload.WithInteger("Timeout", m_timeout);

  }

  if(m_maxCapacityHasBeenSet)
  {
   payload.WithDouble("MaxCapacity", m_maxCapacity);

  }

  if(m_workerTypeHasBeenSet)
  {
   payload.WithString("WorkerType", WorkerTypeMapper::GetNameForWorkerType(m_workerType));
  }

  if(m_numberOfWorkersHasBeenSet)
  {
   payload.WithInteger("NumberOfWorkers", m_numberOfWorkers);

  }

  if(m_securityConfigurationHasBeenSet)
  {
   payload.WithString("SecurityConfiguration", m_securityConfiguration);

  }

  if(m_logGroupNameHasBeenSet)
  {
   payload.WithString("LogGroupName", m_logGroupName);

  }

  if(m_notificationPropertyHasBeenSet)
  {
   payload.WithObject("NotificationProperty", m_notificationProperty.Jsonize());

  }

  if(m_glueVersionHasBeenSet)
  {
   payload.WithString("GlueVersion", m_glueVersion);

  }

  if(m_dPUSecondsHasBeenSet)
  {
   payload.WithDouble("DPUSeconds", m_dPUSeconds);

  }

  if(m_executionClassHasBeenSet)
  {
   payload.WithString("ExecutionClass", ExecutionClassMapper::GetNameForExecutionClass(m_executionClass));
  }

  if(m_maintenanceWindowHasBeenSet)
  {
   payload.WithString("MaintenanceWindow", m_maintenanceWindow);

  }

  if(m_profileNameHasBeenSet)
  {
   payload.WithString("ProfileName", m_profileName);

  }

  if(m_stateDetailHasBeenSet)
  {
   payload.WithString("StateDetail", m_stateDetail);

  }

  if(m_executionRoleSessionPolicyHasBeenSet)
  {
   payload.WithString("ExecutionRoleSessionPolicy", m_executionRoleSessionPolicy);

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
