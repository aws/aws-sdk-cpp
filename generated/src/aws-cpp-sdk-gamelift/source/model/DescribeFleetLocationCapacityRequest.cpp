﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamelift/model/DescribeFleetLocationCapacityRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::GameLift::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeFleetLocationCapacityRequest::DescribeFleetLocationCapacityRequest() : 
    m_fleetIdHasBeenSet(false),
    m_locationHasBeenSet(false)
{
}

Aws::String DescribeFleetLocationCapacityRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_fleetIdHasBeenSet)
  {
   payload.WithString("FleetId", m_fleetId);

  }

  if(m_locationHasBeenSet)
  {
   payload.WithString("Location", m_location);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeFleetLocationCapacityRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "GameLift.DescribeFleetLocationCapacity"));
  return headers;

}




