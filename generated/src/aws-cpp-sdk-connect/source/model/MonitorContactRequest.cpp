/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/MonitorContactRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

MonitorContactRequest::MonitorContactRequest() : 
    m_instanceIdHasBeenSet(false),
    m_contactIdHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_allowedMonitorCapabilitiesHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::RandomUUID()),
    m_clientTokenHasBeenSet(true)
{
}

Aws::String MonitorContactRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_instanceIdHasBeenSet)
  {
   payload.WithString("InstanceId", m_instanceId);

  }

  if(m_contactIdHasBeenSet)
  {
   payload.WithString("ContactId", m_contactId);

  }

  if(m_userIdHasBeenSet)
  {
   payload.WithString("UserId", m_userId);

  }

  if(m_allowedMonitorCapabilitiesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> allowedMonitorCapabilitiesJsonList(m_allowedMonitorCapabilities.size());
   for(unsigned allowedMonitorCapabilitiesIndex = 0; allowedMonitorCapabilitiesIndex < allowedMonitorCapabilitiesJsonList.GetLength(); ++allowedMonitorCapabilitiesIndex)
   {
     allowedMonitorCapabilitiesJsonList[allowedMonitorCapabilitiesIndex].AsString(MonitorCapabilityMapper::GetNameForMonitorCapability(m_allowedMonitorCapabilities[allowedMonitorCapabilitiesIndex]));
   }
   payload.WithArray("AllowedMonitorCapabilities", std::move(allowedMonitorCapabilitiesJsonList));

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("ClientToken", m_clientToken);

  }

  return payload.View().WriteReadable();
}




