/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot-jobs-data/model/StartNextPendingJobExecutionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoTJobsDataPlane::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StartNextPendingJobExecutionRequest::StartNextPendingJobExecutionRequest() : 
    m_thingNameHasBeenSet(false),
    m_statusDetailsHasBeenSet(false),
    m_stepTimeoutInMinutes(0),
    m_stepTimeoutInMinutesHasBeenSet(false)
{
}

Aws::String StartNextPendingJobExecutionRequest::SerializePayload() const
{
  JsonValue payload;

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

  return payload.View().WriteReadable();
}




