/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamelift/model/DescribeGameSessionPlacementRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::GameLift::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeGameSessionPlacementRequest::DescribeGameSessionPlacementRequest() : 
    m_placementIdHasBeenSet(false)
{
}

Aws::String DescribeGameSessionPlacementRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_placementIdHasBeenSet)
  {
   payload.WithString("PlacementId", m_placementId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeGameSessionPlacementRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "GameLift.DescribeGameSessionPlacement"));
  return headers;

}




