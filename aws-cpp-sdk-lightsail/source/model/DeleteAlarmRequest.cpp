/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/DeleteAlarmRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Lightsail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteAlarmRequest::DeleteAlarmRequest() : 
    m_alarmNameHasBeenSet(false)
{
}

Aws::String DeleteAlarmRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_alarmNameHasBeenSet)
  {
   payload.WithString("alarmName", m_alarmName);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteAlarmRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Lightsail_20161128.DeleteAlarm"));
  return headers;

}




