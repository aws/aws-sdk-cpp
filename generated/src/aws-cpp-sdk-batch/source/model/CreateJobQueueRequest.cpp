/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/batch/model/CreateJobQueueRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Batch::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateJobQueueRequest::CreateJobQueueRequest() : 
    m_jobQueueNameHasBeenSet(false),
    m_state(JQState::NOT_SET),
    m_stateHasBeenSet(false),
    m_schedulingPolicyArnHasBeenSet(false),
    m_priority(0),
    m_priorityHasBeenSet(false),
    m_computeEnvironmentOrderHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateJobQueueRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_jobQueueNameHasBeenSet)
  {
   payload.WithString("jobQueueName", m_jobQueueName);

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

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("tags", std::move(tagsJsonMap));

  }

  return payload.View().WriteReadable();
}




