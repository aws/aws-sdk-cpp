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
    m_priority(0),
    m_priorityHasBeenSet(false),
    m_computeEnvironmentOrderHasBeenSet(false)
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

  return payload.WriteReadable();
}




