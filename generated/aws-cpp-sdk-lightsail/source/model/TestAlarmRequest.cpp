/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/TestAlarmRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Lightsail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

TestAlarmRequest::TestAlarmRequest() : 
    m_alarmNameHasBeenSet(false),
    m_state(AlarmState::NOT_SET),
    m_stateHasBeenSet(false)
{
}

Aws::String TestAlarmRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_alarmNameHasBeenSet)
  {
   payload.WithString("alarmName", m_alarmName);

  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("state", AlarmStateMapper::GetNameForAlarmState(m_state));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection TestAlarmRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Lightsail_20161128.TestAlarm"));
  return headers;

}




