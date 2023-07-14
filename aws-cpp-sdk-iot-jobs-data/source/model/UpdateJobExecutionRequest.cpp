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

UpdateJobExecutionRequest::UpdateJobExecutionRequest() : 
    m_jobIdHasBeenSet(false),
    m_thingNameHasBeenSet(false),
    m_status(JobExecutionStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusDetailsHasBeenSet(false),
    m_stepTimeoutInMinutes(0),
    m_stepTimeoutInMinutesHasBeenSet(false),
    m_expectedVersion(0),
    m_expectedVersionHasBeenSet(false),
    m_includeJobExecutionState(false),
    m_includeJobExecutionStateHasBeenSet(false),
    m_includeJobDocument(false),
    m_includeJobDocumentHasBeenSet(false),
    m_executionNumber(0),
    m_executionNumberHasBeenSet(false)
{
}

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




