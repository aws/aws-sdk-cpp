/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamelift/model/DescribeFleetLocationAttributesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::GameLift::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeFleetLocationAttributesRequest::DescribeFleetLocationAttributesRequest() : 
    m_fleetIdHasBeenSet(false),
    m_locationsHasBeenSet(false),
    m_limit(0),
    m_limitHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

Aws::String DescribeFleetLocationAttributesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_fleetIdHasBeenSet)
  {
   payload.WithString("FleetId", m_fleetId);

  }

  if(m_locationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> locationsJsonList(m_locations.size());
   for(unsigned locationsIndex = 0; locationsIndex < locationsJsonList.GetLength(); ++locationsIndex)
   {
     locationsJsonList[locationsIndex].AsString(m_locations[locationsIndex]);
   }
   payload.WithArray("Locations", std::move(locationsJsonList));

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

Aws::Http::HeaderValueCollection DescribeFleetLocationAttributesRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "GameLift.DescribeFleetLocationAttributes"));
  return headers;

}




