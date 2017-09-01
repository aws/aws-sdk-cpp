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

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection CreateVpcPeeringConnectionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "GameLift.CreateVpcPeeringConnection"));
  return headers;

}




