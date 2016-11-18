﻿/*
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
#include <aws/devicefarm/model/ScheduleRunRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DeviceFarm::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ScheduleRunRequest::ScheduleRunRequest() : 
    m_projectArnHasBeenSet(false),
    m_appArnHasBeenSet(false),
    m_devicePoolArnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_testHasBeenSet(false),
    m_configurationHasBeenSet(false)
{
}

Aws::String ScheduleRunRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_projectArnHasBeenSet)
  {
   payload.WithString("projectArn", m_projectArn);

  }

  if(m_appArnHasBeenSet)
  {
   payload.WithString("appArn", m_appArn);

  }

  if(m_devicePoolArnHasBeenSet)
  {
   payload.WithString("devicePoolArn", m_devicePoolArn);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_testHasBeenSet)
  {
   payload.WithObject("test", m_test.Jsonize());

  }

  if(m_configurationHasBeenSet)
  {
   payload.WithObject("configuration", m_configuration.Jsonize());

  }

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection ScheduleRunRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "DeviceFarm_20150623.ScheduleRun"));
  return headers;

}



