﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamelift/model/DescribeFleetUtilizationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::GameLift::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeFleetUtilizationRequest::DescribeFleetUtilizationRequest() : 
    m_fleetIdsHasBeenSet(false),
    m_limit(0),
    m_limitHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

Aws::String DescribeFleetUtilizationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_fleetIdsHasBeenSet)
  {
   Array<JsonValue> fleetIdsJsonList(m_fleetIds.size());
   for(unsigned fleetIdsIndex = 0; fleetIdsIndex < fleetIdsJsonList.GetLength(); ++fleetIdsIndex)
   {
     fleetIdsJsonList[fleetIdsIndex].AsString(m_fleetIds[fleetIdsIndex]);
   }
   payload.WithArray("FleetIds", std::move(fleetIdsJsonList));

  }

  if(m_limitHasBeenSet)
  {
   payload.WithInteger("Limit", m_limit);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeFleetUtilizationRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "GameLift.DescribeFleetUtilization"));
  return headers;

}




