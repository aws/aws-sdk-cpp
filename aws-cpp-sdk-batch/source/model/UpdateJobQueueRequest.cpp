/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/batch/model/UpdateJobQueueRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Batch::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateJobQueueRequest::UpdateJobQueueRequest() : 
    m_jobQueueHasBeenSet(false),
    m_state(JQState::NOT_SET),
    m_stateHasBeenSet(false),
    m_schedulingPolicyArnHasBeenSet(false),
    m_priority(0),
    m_priorityHasBeenSet(false),
    m_computeEnvironmentOrderHasBeenSet(false)
{
}

Aws::String UpdateJobQueueRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_jobQueueHasBeenSet)
  {
   payload.WithString("jobQueue", m_jobQueue);

  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("state", JQStateMapper::GetNameForJQState(m_state));
  }

  if(m_schedulingPolicyArnHasBeenSet)
  {
   payload.WithString("schedulingPolicyArn", m_schedulingPolicyArn);

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

  return payload.View().WriteReadable();
}




