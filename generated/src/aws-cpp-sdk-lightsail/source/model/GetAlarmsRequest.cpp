/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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




