/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/batch/model/JobQueueDetail.h>
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

JobQueueDetail::JobQueueDetail(JsonView jsonValue)
{
  *this = jsonValue;
}

JobQueueDetail& JobQueueDetail::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("jobQueueName"))
  {
    m_jobQueueName = jsonValue.GetString("jobQueueName");
    m_jobQueueNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("jobQueueArn"))
  {
    m_jobQueueArn = jsonValue.GetString("jobQueueArn");
    m_jobQueueArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("state"))
  {
    m_state = JQStateMapper::GetJQStateForName(jsonValue.GetString("state"));
    m_stateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("schedulingPolicyArn"))
  {
    m_schedulingPolicyArn = jsonValue.GetString("schedulingPolicyArn");
    m_schedulingPolicyArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("status"))
  {
    m_status = JQStatusMapper::GetJQStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("statusReason"))
  {
    m_statusReason = jsonValue.GetString("statusReason");
    m_statusReasonHasBeenSet = true;
  }
  if(jsonValue.ValueExists("priority"))
  {
    m_priority = jsonValue.GetInteger("priority");
    m_priorityHasBeenSet = true;
  }
  if(jsonValue.ValueExists("computeEnvironmentOrder"))
  {
    Aws::Utils::Array<JsonView> computeEnvironmentOrderJsonList = jsonValue.GetArray("computeEnvironmentOrder");
    for(unsigned computeEnvironmentOrderIndex = 0; computeEnvironmentOrderIndex < computeEnvironmentOrderJsonList.GetLength(); ++computeEnvironmentOrderIndex)
    {
      m_computeEnvironmentOrder.push_back(computeEnvironmentOrderJsonList[computeEnvironmentOrderIndex].AsObject());
    }
    m_computeEnvironmentOrderHasBeenSet = true;
  }
  if(jsonValue.ValueExists("serviceEnvironmentOrder"))
  {
    Aws::Utils::Array<JsonView> serviceEnvironmentOrderJsonList = jsonValue.GetArray("serviceEnvironmentOrder");
    for(unsigned serviceEnvironmentOrderIndex = 0; serviceEnvironmentOrderIndex < serviceEnvironmentOrderJsonList.GetLength(); ++serviceEnvironmentOrderIndex)
    {
      m_serviceEnvironmentOrder.push_back(serviceEnvironmentOrderJsonList[serviceEnvironmentOrderIndex].AsObject());
    }
    m_serviceEnvironmentOrderHasBeenSet = true;
  }
  if(jsonValue.ValueExists("jobQueueType"))
  {
    m_jobQueueType = JobQueueTypeMapper::GetJobQueueTypeForName(jsonValue.GetString("jobQueueType"));
    m_jobQueueTypeHasBeenSet = true;
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
  if(jsonValue.ValueExists("jobStateTimeLimitActions"))
  {
    Aws::Utils::Array<JsonView> jobStateTimeLimitActionsJsonList = jsonValue.GetArray("jobStateTimeLimitActions");
    for(unsigned jobStateTimeLimitActionsIndex = 0; jobStateTimeLimitActionsIndex < jobStateTimeLimitActionsJsonList.GetLength(); ++jobStateTimeLimitActionsIndex)
    {
      m_jobStateTimeLimitActions.push_back(jobStateTimeLimitActionsJsonList[jobStateTimeLimitActionsIndex].AsObject());
    }
    m_jobStateTimeLimitActionsHasBeenSet = true;
  }
  return *this;
}

JsonValue JobQueueDetail::Jsonize() const
{
  JsonValue payload;

  if(m_jobQueueNameHasBeenSet)
  {
   payload.WithString("jobQueueName", m_jobQueueName);

  }

  if(m_jobQueueArnHasBeenSet)
  {
   payload.WithString("jobQueueArn", m_jobQueueArn);

  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("state", JQStateMapper::GetNameForJQState(m_state));
  }

  if(m_schedulingPolicyArnHasBeenSet)
  {
   payload.WithString("schedulingPolicyArn", m_schedulingPolicyArn);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", JQStatusMapper::GetNameForJQStatus(m_status));
  }

  if(m_statusReasonHasBeenSet)
  {
   payload.WithString("statusReason", m_statusReason);

  }

  if(m_priorityHasBeenSet)
  {
   payload.WithInteger("priority", m_priority);

  }

  if(m_computeEnvironmentOrderHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> computeEnvironmentOrderJsonList(m_computeEnvironmentOrder.size());
   for(unsigned computeEnvironmentOrderIndex = 0; computeEnvironmentOrderIndex < computeEnvironmentOrderJsonList.GetLength(); ++computeEnvironmentOrderIndex)
   {
     computeEnvironmentOrderJsonList[computeEnvironmentOrderIndex].AsObject(m_computeEnvironmentOrder[computeEnvironmentOrderIndex].Jsonize());
   }
   payload.WithArray("computeEnvironmentOrder", std::move(computeEnvironmentOrderJsonList));

  }

  if(m_serviceEnvironmentOrderHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> serviceEnvironmentOrderJsonList(m_serviceEnvironmentOrder.size());
   for(unsigned serviceEnvironmentOrderIndex = 0; serviceEnvironmentOrderIndex < serviceEnvironmentOrderJsonList.GetLength(); ++serviceEnvironmentOrderIndex)
   {
     serviceEnvironmentOrderJsonList[serviceEnvironmentOrderIndex].AsObject(m_serviceEnvironmentOrder[serviceEnvironmentOrderIndex].Jsonize());
   }
   payload.WithArray("serviceEnvironmentOrder", std::move(serviceEnvironmentOrderJsonList));

  }

  if(m_jobQueueTypeHasBeenSet)
  {
   payload.WithString("jobQueueType", JobQueueTypeMapper::GetNameForJobQueueType(m_jobQueueType));
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

  if(m_jobStateTimeLimitActionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> jobStateTimeLimitActionsJsonList(m_jobStateTimeLimitActions.size());
   for(unsigned jobStateTimeLimitActionsIndex = 0; jobStateTimeLimitActionsIndex < jobStateTimeLimitActionsJsonList.GetLength(); ++jobStateTimeLimitActionsIndex)
   {
     jobStateTimeLimitActionsJsonList[jobStateTimeLimitActionsIndex].AsObject(m_jobStateTimeLimitActions[jobStateTimeLimitActionsIndex].Jsonize());
   }
   payload.WithArray("jobStateTimeLimitActions", std::move(jobStateTimeLimitActionsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Batch
} // namespace Aws
