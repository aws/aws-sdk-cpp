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

JobQueueDetail::JobQueueDetail() : 
    m_jobQueueNameHasBeenSet(false),
    m_jobQueueArnHasBeenSet(false),
    m_state(JQState::NOT_SET),
    m_stateHasBeenSet(false),
    m_status(JQStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusReasonHasBeenSet(false),
    m_priority(0),
    m_priorityHasBeenSet(false),
    m_computeEnvironmentOrderHasBeenSet(false)
{
}

JobQueueDetail::JobQueueDetail(const JsonValue& jsonValue) : 
    m_jobQueueNameHasBeenSet(false),
    m_jobQueueArnHasBeenSet(false),
    m_state(JQState::NOT_SET),
    m_stateHasBeenSet(false),
    m_status(JQStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusReasonHasBeenSet(false),
    m_priority(0),
    m_priorityHasBeenSet(false),
    m_computeEnvironmentOrderHasBeenSet(false)
{
  *this = jsonValue;
}

JobQueueDetail& JobQueueDetail::operator =(const JsonValue& jsonValue)
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
    Array<JsonValue> computeEnvironmentOrderJsonList = jsonValue.GetArray("computeEnvironmentOrder");
    for(unsigned computeEnvironmentOrderIndex = 0; computeEnvironmentOrderIndex < computeEnvironmentOrderJsonList.GetLength(); ++computeEnvironmentOrderIndex)
    {
      m_computeEnvironmentOrder.push_back(computeEnvironmentOrderJsonList[computeEnvironmentOrderIndex].AsObject());
    }
    m_computeEnvironmentOrderHasBeenSet = true;
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
   Array<JsonValue> computeEnvironmentOrderJsonList(m_computeEnvironmentOrder.size());
   for(unsigned computeEnvironmentOrderIndex = 0; computeEnvironmentOrderIndex < computeEnvironmentOrderJsonList.GetLength(); ++computeEnvironmentOrderIndex)
   {
     computeEnvironmentOrderJsonList[computeEnvironmentOrderIndex].AsObject(m_computeEnvironmentOrder[computeEnvironmentOrderIndex].Jsonize());
   }
   payload.WithArray("computeEnvironmentOrder", std::move(computeEnvironmentOrderJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Batch
} // namespace Aws