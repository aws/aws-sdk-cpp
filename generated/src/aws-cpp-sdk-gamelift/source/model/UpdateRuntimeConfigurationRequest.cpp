/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamelift/model/UpdateRuntimeConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::GameLift::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateRuntimeConfigurationRequest::UpdateRuntimeConfigurationRequest() : 
    m_fleetIdHasBeenSet(false),
    m_runtimeConfigurationHasBeenSet(false)
{
}

Aws::String UpdateRuntimeConfigurationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_fleetIdHasBeenSet)
  {
   payload.WithString("FleetId", m_fleetId);

  }

  if(m_runtimeConfigurationHasBeenSet)
  {
   payload.WithObject("RuntimeConfiguration", m_runtimeConfiguration.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateRuntimeConfigurationRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "GameLift.UpdateRuntimeConfiguration"));
  return headers;

}




