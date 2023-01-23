/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamelift/model/StopGameSessionPlacementRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::GameLift::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StopGameSessionPlacementRequest::StopGameSessionPlacementRequest() : 
    m_placementIdHasBeenSet(false)
{
}

Aws::String StopGameSessionPlacementRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_placementIdHasBeenSet)
  {
   payload.WithString("PlacementId", m_placementId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection StopGameSessionPlacementRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "GameLift.StopGameSessionPlacement"));
  return headers;

}




