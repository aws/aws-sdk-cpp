/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamelift/model/CreateVpcPeeringConnectionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::GameLift::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateVpcPeeringConnectionRequest::CreateVpcPeeringConnectionRequest() : 
    m_fleetIdHasBeenSet(false),
    m_peerVpcAwsAccountIdHasBeenSet(false),
    m_peerVpcIdHasBeenSet(false)
{
}

Aws::String CreateVpcPeeringConnectionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_fleetIdHasBeenSet)
  {
   payload.WithString("FleetId", m_fleetId);

  }

  if(m_peerVpcAwsAccountIdHasBeenSet)
  {
   payload.WithString("PeerVpcAwsAccountId", m_peerVpcAwsAccountId);

  }

  if(m_peerVpcIdHasBeenSet)
  {
   payload.WithString("PeerVpcId", m_peerVpcId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateVpcPeeringConnectionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "GameLift.CreateVpcPeeringConnection"));
  return headers;

}




