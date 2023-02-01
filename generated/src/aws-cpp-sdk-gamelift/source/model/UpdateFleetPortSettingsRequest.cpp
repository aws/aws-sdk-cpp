/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamelift/model/UpdateFleetPortSettingsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::GameLift::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateFleetPortSettingsRequest::UpdateFleetPortSettingsRequest() : 
    m_fleetIdHasBeenSet(false),
    m_inboundPermissionAuthorizationsHasBeenSet(false),
    m_inboundPermissionRevocationsHasBeenSet(false)
{
}

Aws::String UpdateFleetPortSettingsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_fleetIdHasBeenSet)
  {
   payload.WithString("FleetId", m_fleetId);

  }

  if(m_inboundPermissionAuthorizationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> inboundPermissionAuthorizationsJsonList(m_inboundPermissionAuthorizations.size());
   for(unsigned inboundPermissionAuthorizationsIndex = 0; inboundPermissionAuthorizationsIndex < inboundPermissionAuthorizationsJsonList.GetLength(); ++inboundPermissionAuthorizationsIndex)
   {
     inboundPermissionAuthorizationsJsonList[inboundPermissionAuthorizationsIndex].AsObject(m_inboundPermissionAuthorizations[inboundPermissionAuthorizationsIndex].Jsonize());
   }
   payload.WithArray("InboundPermissionAuthorizations", std::move(inboundPermissionAuthorizationsJsonList));

  }

  if(m_inboundPermissionRevocationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> inboundPermissionRevocationsJsonList(m_inboundPermissionRevocations.size());
   for(unsigned inboundPermissionRevocationsIndex = 0; inboundPermissionRevocationsIndex < inboundPermissionRevocationsJsonList.GetLength(); ++inboundPermissionRevocationsIndex)
   {
     inboundPermissionRevocationsJsonList[inboundPermissionRevocationsIndex].AsObject(m_inboundPermissionRevocations[inboundPermissionRevocationsIndex].Jsonize());
   }
   payload.WithArray("InboundPermissionRevocations", std::move(inboundPermissionRevocationsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateFleetPortSettingsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "GameLift.UpdateFleetPortSettings"));
  return headers;

}




