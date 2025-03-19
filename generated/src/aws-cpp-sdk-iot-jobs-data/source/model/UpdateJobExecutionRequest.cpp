/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot-jobs-data/model/UpdateJobExecutionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoTJobsDataPlane::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateJobExecutionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", JobExecutionStatusMapper::GetNameForJobExecutionStatus(m_status));
  }

  if(m_statusDetailsHasBeenSet)
  {
   JsonValue statusDetailsJsonMap;
   for(auto& statusDetailsItem : m_statusDetails)
   {
     statusDetailsJsonMap.WithString(statusDetailsItem.first, statusDetailsItem.second);
   }
   payload.WithObject("statusDetails", std::move(statusDetailsJsonMap));

  }

  if(m_stepTimeoutInMinutesHasBeenSet)
  {
   payload.WithInt64("stepTimeoutInMinutes", m_stepTimeoutInMinutes);

  }

  if(m_expectedVersionHasBeenSet)
  {
   payload.WithInt64("expectedVersion", m_expectedVersion);

  }

  if(m_includeJobExecutionStateHasBeenSet)
  {
   payload.WithBool("includeJobExecutionState", m_includeJobExecutionState);

  }

  if(m_includeJobDocumentHasBeenSet)
  {
   payload.WithBool("includeJobDocument", m_includeJobDocument);

  }

  if(m_executionNumberHasBeenSet)
  {
   payload.WithInt64("executionNumber", m_executionNumber);

  }

  return payload.View().WriteReadable();
}




