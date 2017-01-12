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
#include <aws/vitalservices/model/queryDoctorScheduleRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::VitalServices::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

queryDoctorScheduleRequest::queryDoctorScheduleRequest() : 
    m_doctorIdHasBeenSet(false),
    m_lastTimeHasBeenSet(false),
    m_firstTimeHasBeenSet(false)
{
}

Aws::String queryDoctorScheduleRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_doctorIdHasBeenSet)
  {
   payload.WithString("doctorId", m_doctorId);

  }

  if(m_lastTimeHasBeenSet)
  {
   payload.WithString("lastTime", m_lastTime);

  }

  if(m_firstTimeHasBeenSet)
  {
   payload.WithString("firstTime", m_firstTime);

  }

  return payload.WriteReadable();
}



