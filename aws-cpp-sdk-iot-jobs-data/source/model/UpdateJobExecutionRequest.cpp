/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

  return payload.WriteReadable();
}




