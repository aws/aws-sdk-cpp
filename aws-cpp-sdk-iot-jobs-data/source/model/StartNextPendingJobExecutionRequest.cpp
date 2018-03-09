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

#include <aws/iot-jobs-data/model/StartNextPendingJobExecutionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoTJobsDataPlane::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StartNextPendingJobExecutionRequest::StartNextPendingJobExecutionRequest() : 
    m_thingNameHasBeenSet(false),
    m_statusDetailsHasBeenSet(false)
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

  return payload.WriteReadable();
}




