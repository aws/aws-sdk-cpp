/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/batch/model/JobDetail.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Batch
{
namespace Model
{

JobDetail::JobDetail() : 
    m_jobArnHasBeenSet(false),
    m_jobNameHasBeenSet(false),
    m_jobIdHasBeenSet(false),
    m_jobQueueHasBeenSet(false),
    m_status(JobStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_shareIdentifierHasBeenSet(false),
    m_schedulingPriority(0),
    m_schedulingPriorityHasBeenSet(false),
    m_attemptsHasBeenSet(false),
    m_statusReasonHasBeenSet(false),
    m_createdAt(0),
    m_createdAtHasBeenSet(false),
    m_retryStrategyHasBeenSet(false),
    m_startedAt(0),
    m_startedAtHasBeenSet(false),
    m_stoppedAt(0),
    m_stoppedAtHasBeenSet(false),
    m_dependsOnHasBeenSet(false),
    m_jobDefinitionHasBeenSet(false),
    m_parametersHasBeenSet(false),
    m_containerHasBeenSet(false),
    m_nodeDetailsHasBeenSet(false),
    m_nodePropertiesHasBeenSet(false),
    m_arrayPropertiesHasBeenSet(false),
    m_timeoutHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_propagateTags(false),
    m_propagateTagsHasBeenSet(false),
    m_platformCapabilitiesHasBeenSet(false),
    m_eksPropertiesHasBeenSet(false),
    m_eksAttemptsHasBeenSet(false),
    m_isCancelled(false),
    m_isCancelledHasBeenSet(false),
    m_isTerminated(false),
    m_isTerminatedHasBeenSet(false)
{
}

JobDetail::JobDetail(JsonView jsonValue) : 
    m_jobArnHasBeenSet(false),
    m_jobNameHasBeenSet(false),
    m_jobIdHasBeenSet(false),
    m_jobQueueHasBeenSet(false),
    m_status(JobStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_shareIdentifierHasBeenSet(false),
    m_schedulingPriority(0),
    m_schedulingPriorityHasBeenSet(false),
    m_attemptsHasBeenSet(false),
    m_statusReasonHasBeenSet(false),
    m_createdAt(0),
    m_createdAtHasBeenSet(false),
    m_retryStrategyHasBeenSet(false),
    m_startedAt(0),
    m_startedAtHasBeenSet(false),
    m_stoppedAt(0),
    m_stoppedAtHasBeenSet(false),
    m_dependsOnHasBeenSet(false),
    m_jobDefinitionHasBeenSet(false),
    m_parametersHasBeenSet(false),
    m_containerHasBeenSet(false),
    m_nodeDetailsHasBeenSet(false),
    m_nodePropertiesHasBeenSet(false),
    m_arrayPropertiesHasBeenSet(false),
    m_timeoutHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_propagateTags(false),
    m_propagateTagsHasBeenSet(false),
    m_platformCapabilitiesHasBeenSet(false),
    m_eksPropertiesHasBeenSet(false),
    m_eksAttemptsHasBeenSet(false),
    m_isCancelled(false),
    m_isCancelledHasBeenSet(false),
    m_isTerminated(false),
    m_isTerminatedHasBeenSet(false)
{
  *this = jsonValue;
}

JobDetail& JobDetail::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("jobArn"))
  {
    m_jobArn = jsonValue.GetString("jobArn");

    m_jobArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("jobName"))
  {
    m_jobName = jsonValue.GetString("jobName");

    m_jobNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("jobId"))
  {
    m_jobId = jsonValue.GetString("jobId");

    m_jobIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("jobQueue"))
  {
    m_jobQueue = jsonValue.GetString("jobQueue");

    m_jobQueueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = JobStatusMapper::GetJobStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("shareIdentifier"))
  {
    m_shareIdentifier = jsonValue.GetString("shareIdentifier");

    m_shareIdentifierHasBeenSet = true;
  }

  if(jsonValue.ValueExists("schedulingPriority"))
  {
    m_schedulingPriority = jsonValue.GetInteger("schedulingPriority");

    m_schedulingPriorityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("attempts"))
  {
    Aws::Utils::Array<JsonView> attemptsJsonList = jsonValue.GetArray("attempts");
    for(unsigned attemptsIndex = 0; attemptsIndex < attemptsJsonList.GetLength(); ++attemptsIndex)
    {
      m_attempts.push_back(attemptsJsonList[attemptsIndex].AsObject());
    }
    m_attemptsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("statusReason"))
  {
    m_statusReason = jsonValue.GetString("statusReason");

    m_statusReasonHasBeenSet = true;
  }

  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetInt64("createdAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("retryStrategy"))
  {
    m_retryStrategy = jsonValue.GetObject("retryStrategy");

    m_retryStrategyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("startedAt"))
  {
    m_startedAt = jsonValue.GetInt64("startedAt");

    m_startedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("stoppedAt"))
  {
    m_stoppedAt = jsonValue.GetInt64("stoppedAt");

    m_stoppedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("dependsOn"))
  {
    Aws::Utils::Array<JsonView> dependsOnJsonList = jsonValue.GetArray("dependsOn");
    for(unsigned dependsOnIndex = 0; dependsOnIndex < dependsOnJsonList.GetLength(); ++dependsOnIndex)
    {
      m_dependsOn.push_back(dependsOnJsonList[dependsOnIndex].AsObject());
    }
    m_dependsOnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("jobDefinition"))
  {
    m_jobDefinition = jsonValue.GetString("jobDefinition");

    m_jobDefinitionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("parameters"))
  {
    Aws::Map<Aws::String, JsonView> parametersJsonMap = jsonValue.GetObject("parameters").GetAllObjects();
    for(auto& parametersItem : parametersJsonMap)
    {
      m_parameters[parametersItem.first] = parametersItem.second.AsString();
    }
    m_parametersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("container"))
  {
    m_container = jsonValue.GetObject("container");

    m_containerHasBeenSet = true;
  }

  if(jsonValue.ValueExists("nodeDetails"))
  {
    m_nodeDetails = jsonValue.GetObject("nodeDetails");

    m_nodeDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("nodeProperties"))
  {
    m_nodeProperties = jsonValue.GetObject("nodeProperties");

    m_nodePropertiesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("arrayProperties"))
  {
    m_arrayProperties = jsonValue.GetObject("arrayProperties");

    m_arrayPropertiesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("timeout"))
  {
    m_timeout = jsonValue.GetObject("timeout");

    m_timeoutHasBeenSet = true;
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

  if(jsonValue.ValueExists("propagateTags"))
  {
    m_propagateTags = jsonValue.GetBool("propagateTags");

    m_propagateTagsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("platformCapabilities"))
  {
    Aws::Utils::Array<JsonView> platformCapabilitiesJsonList = jsonValue.GetArray("platformCapabilities");
    for(unsigned platformCapabilitiesIndex = 0; platformCapabilitiesIndex < platformCapabilitiesJsonList.GetLength(); ++platformCapabilitiesIndex)
    {
      m_platformCapabilities.push_back(PlatformCapabilityMapper::GetPlatformCapabilityForName(platformCapabilitiesJsonList[platformCapabilitiesIndex].AsString()));
    }
    m_platformCapabilitiesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("eksProperties"))
  {
    m_eksProperties = jsonValue.GetObject("eksProperties");

    m_eksPropertiesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("eksAttempts"))
  {
    Aws::Utils::Array<JsonView> eksAttemptsJsonList = jsonValue.GetArray("eksAttempts");
    for(unsigned eksAttemptsIndex = 0; eksAttemptsIndex < eksAttemptsJsonList.GetLength(); ++eksAttemptsIndex)
    {
      m_eksAttempts.push_back(eksAttemptsJsonList[eksAttemptsIndex].AsObject());
    }
    m_eksAttemptsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("isCancelled"))
  {
    m_isCancelled = jsonValue.GetBool("isCancelled");

    m_isCancelledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("isTerminated"))
  {
    m_isTerminated = jsonValue.GetBool("isTerminated");

    m_isTerminatedHasBeenSet = true;
  }

  return *this;
}

JsonValue JobDetail::Jsonize() const
{
  JsonValue payload;

  if(m_jobArnHasBeenSet)
  {
   payload.WithString("jobArn", m_jobArn);

  }

  if(m_jobNameHasBeenSet)
  {
   payload.WithString("jobName", m_jobName);

  }

  if(m_jobIdHasBeenSet)
  {
   payload.WithString("jobId", m_jobId);

  }

  if(m_jobQueueHasBeenSet)
  {
   payload.WithString("jobQueue", m_jobQueue);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", JobStatusMapper::GetNameForJobStatus(m_status));
  }

  if(m_shareIdentifierHasBeenSet)
  {
   payload.WithString("shareIdentifier", m_shareIdentifier);

  }

  if(m_schedulingPriorityHasBeenSet)
  {
   payload.WithInteger("schedulingPriority", m_schedulingPriority);

  }

  if(m_attemptsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> attemptsJsonList(m_attempts.size());
   for(unsigned attemptsIndex = 0; attemptsIndex < attemptsJsonList.GetLength(); ++attemptsIndex)
   {
     attemptsJsonList[attemptsIndex].AsObject(m_attempts[attemptsIndex].Jsonize());
   }
   payload.WithArray("attempts", std::move(attemptsJsonList));

  }

  if(m_statusReasonHasBeenSet)
  {
   payload.WithString("statusReason", m_statusReason);

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithInt64("createdAt", m_createdAt);

  }

  if(m_retryStrategyHasBeenSet)
  {
   payload.WithObject("retryStrategy", m_retryStrategy.Jsonize());

  }

  if(m_startedAtHasBeenSet)
  {
   payload.WithInt64("startedAt", m_startedAt);

  }

  if(m_stoppedAtHasBeenSet)
  {
   payload.WithInt64("stoppedAt", m_stoppedAt);

  }

  if(m_dependsOnHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> dependsOnJsonList(m_dependsOn.size());
   for(unsigned dependsOnIndex = 0; dependsOnIndex < dependsOnJsonList.GetLength(); ++dependsOnIndex)
   {
     dependsOnJsonList[dependsOnIndex].AsObject(m_dependsOn[dependsOnIndex].Jsonize());
   }
   payload.WithArray("dependsOn", std::move(dependsOnJsonList));

  }

  if(m_jobDefinitionHasBeenSet)
  {
   payload.WithString("jobDefinition", m_jobDefinition);

  }

  if(m_parametersHasBeenSet)
  {
   JsonValue parametersJsonMap;
   for(auto& parametersItem : m_parameters)
   {
     parametersJsonMap.WithString(parametersItem.first, parametersItem.second);
   }
   payload.WithObject("parameters", std::move(parametersJsonMap));

  }

  if(m_containerHasBeenSet)
  {
   payload.WithObject("container", m_container.Jsonize());

  }

  if(m_nodeDetailsHasBeenSet)
  {
   payload.WithObject("nodeDetails", m_nodeDetails.Jsonize());

  }

  if(m_nodePropertiesHasBeenSet)
  {
   payload.WithObject("nodeProperties", m_nodeProperties.Jsonize());

  }

  if(m_arrayPropertiesHasBeenSet)
  {
   payload.WithObject("arrayProperties", m_arrayProperties.Jsonize());

  }

  if(m_timeoutHasBeenSet)
  {
   payload.WithObject("timeout", m_timeout.Jsonize());

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

  if(m_propagateTagsHasBeenSet)
  {
   payload.WithBool("propagateTags", m_propagateTags);

  }

  if(m_platformCapabilitiesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> platformCapabilitiesJsonList(m_platformCapabilities.size());
   for(unsigned platformCapabilitiesIndex = 0; platformCapabilitiesIndex < platformCapabilitiesJsonList.GetLength(); ++platformCapabilitiesIndex)
   {
     platformCapabilitiesJsonList[platformCapabilitiesIndex].AsString(PlatformCapabilityMapper::GetNameForPlatformCapability(m_platformCapabilities[platformCapabilitiesIndex]));
   }
   payload.WithArray("platformCapabilities", std::move(platformCapabilitiesJsonList));

  }

  if(m_eksPropertiesHasBeenSet)
  {
   payload.WithObject("eksProperties", m_eksProperties.Jsonize());

  }

  if(m_eksAttemptsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> eksAttemptsJsonList(m_eksAttempts.size());
   for(unsigned eksAttemptsIndex = 0; eksAttemptsIndex < eksAttemptsJsonList.GetLength(); ++eksAttemptsIndex)
   {
     eksAttemptsJsonList[eksAttemptsIndex].AsObject(m_eksAttempts[eksAttemptsIndex].Jsonize());
   }
   payload.WithArray("eksAttempts", std::move(eksAttemptsJsonList));

  }

  if(m_isCancelledHasBeenSet)
  {
   payload.WithBool("isCancelled", m_isCancelled);

  }

  if(m_isTerminatedHasBeenSet)
  {
   payload.WithBool("isTerminated", m_isTerminated);

  }

  return payload;
}

} // namespace Model
} // namespace Batch
} // namespace Aws
