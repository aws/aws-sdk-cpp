/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamelift/model/DeleteVpcPeeringConnectionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::GameLift::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteVpcPeeringConnectionRequest::DeleteVpcPeeringConnectionRequest() : 
    m_fleetIdHasBeenSet(false),
    m_vpcPeeringConnectionIdHasBeenSet(false)
{
}

Aws::String DeleteVpcPeeringConnectionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_fleetIdHasBeenSet)
  {
   payload.WithString("FleetId", m_fleetId);

  }

  if(m_vpcPeeringConnectionIdHasBeenSet)
  {
   payload.WithString("VpcPeeringConnectionId", m_vpcPeeringConnectionId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteVpcPeeringConnectionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "GameLift.DeleteVpcPeeringConnection"));
  return headers;

}




