/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
    m_jobNameHasBeenSet(false),
    m_jobIdHasBeenSet(false),
    m_jobQueueHasBeenSet(false),
    m_status(JobStatus::NOT_SET),
    m_statusHasBeenSet(false),
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
    m_containerHasBeenSet(false)
{
}

JobDetail::JobDetail(const JsonValue& jsonValue) : 
    m_jobNameHasBeenSet(false),
    m_jobIdHasBeenSet(false),
    m_jobQueueHasBeenSet(false),
    m_status(JobStatus::NOT_SET),
    m_statusHasBeenSet(false),
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
    m_containerHasBeenSet(false)
{
  *this = jsonValue;
}

JobDetail& JobDetail::operator =(const JsonValue& jsonValue)
{
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

  if(jsonValue.ValueExists("attempts"))
  {
    Array<JsonValue> attemptsJsonList = jsonValue.GetArray("attempts");
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
    Array<JsonValue> dependsOnJsonList = jsonValue.GetArray("dependsOn");
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
    Aws::Map<Aws::String, JsonValue> parametersJsonMap = jsonValue.GetObject("parameters").GetAllObjects();
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

  return *this;
}

JsonValue JobDetail::Jsonize() const
{
  JsonValue payload;

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

  if(m_attemptsHasBeenSet)
  {
   Array<JsonValue> attemptsJsonList(m_attempts.size());
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
   Array<JsonValue> dependsOnJsonList(m_dependsOn.size());
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

  return payload;
}

} // namespace Model
} // namespace Batch
} // namespace Aws