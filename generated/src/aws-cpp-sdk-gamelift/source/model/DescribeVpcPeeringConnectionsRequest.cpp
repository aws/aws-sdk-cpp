/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamelift/model/DescribeVpcPeeringConnectionsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::GameLift::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeVpcPeeringConnectionsRequest::DescribeVpcPeeringConnectionsRequest() : 
    m_fleetIdHasBeenSet(false)
{
}

Aws::String DescribeVpcPeeringConnectionsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_fleetIdHasBeenSet)
  {
   payload.WithString("FleetId", m_fleetId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeVpcPeeringConnectionsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "GameLift.DescribeVpcPeeringConnections"));
  return headers;

}




