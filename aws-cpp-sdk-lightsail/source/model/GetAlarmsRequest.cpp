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

#include <aws/lightsail/model/GetAlarmsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Lightsail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetAlarmsRequest::GetAlarmsRequest() : 
    m_alarmNameHasBeenSet(false),
    m_pageTokenHasBeenSet(false),
    m_monitoredResourceNameHasBeenSet(false)
{
}

Aws::String GetAlarmsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_alarmNameHasBeenSet)
  {
   payload.WithString("alarmName", m_alarmName);

  }

  if(m_pageTokenHasBeenSet)
  {
   payload.WithString("pageToken", m_pageToken);

  }

  if(m_monitoredResourceNameHasBeenSet)
  {
   payload.WithString("monitoredResourceName", m_monitoredResourceName);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetAlarmsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Lightsail_20161128.GetAlarms"));
  return headers;

}




