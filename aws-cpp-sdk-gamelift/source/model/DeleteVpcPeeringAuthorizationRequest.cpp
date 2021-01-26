/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamelift/model/DeleteVpcPeeringAuthorizationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::GameLift::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteVpcPeeringAuthorizationRequest::DeleteVpcPeeringAuthorizationRequest() : 
    m_gameLiftAwsAccountIdHasBeenSet(false),
    m_peerVpcIdHasBeenSet(false)
{
}

Aws::String DeleteVpcPeeringAuthorizationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_gameLiftAwsAccountIdHasBeenSet)
  {
   payload.WithString("GameLiftAwsAccountId", m_gameLiftAwsAccountId);

  }

  if(m_peerVpcIdHasBeenSet)
  {
   payload.WithString("PeerVpcId", m_peerVpcId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteVpcPeeringAuthorizationRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "GameLift.DeleteVpcPeeringAuthorization"));
  return headers;

}




