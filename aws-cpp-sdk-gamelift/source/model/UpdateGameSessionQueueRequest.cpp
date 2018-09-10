﻿/*
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

#include <aws/gamelift/model/UpdateGameSessionQueueRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::GameLift::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateGameSessionQueueRequest::UpdateGameSessionQueueRequest() : 
    m_nameHasBeenSet(false),
    m_timeoutInSeconds(0),
    m_timeoutInSecondsHasBeenSet(false),
    m_playerLatencyPoliciesHasBeenSet(false),
    m_destinationsHasBeenSet(false)
{
}

Aws::String UpdateGameSessionQueueRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_timeoutInSecondsHasBeenSet)
  {
   payload.WithInteger("TimeoutInSeconds", m_timeoutInSeconds);

  }

  if(m_playerLatencyPoliciesHasBeenSet)
  {
   Array<JsonValue> playerLatencyPoliciesJsonList(m_playerLatencyPolicies.size());
   for(unsigned playerLatencyPoliciesIndex = 0; playerLatencyPoliciesIndex < playerLatencyPoliciesJsonList.GetLength(); ++playerLatencyPoliciesIndex)
   {
     playerLatencyPoliciesJsonList[playerLatencyPoliciesIndex].AsObject(m_playerLatencyPolicies[playerLatencyPoliciesIndex].Jsonize());
   }
   payload.WithArray("PlayerLatencyPolicies", std::move(playerLatencyPoliciesJsonList));

  }

  if(m_destinationsHasBeenSet)
  {
   Array<JsonValue> destinationsJsonList(m_destinations.size());
   for(unsigned destinationsIndex = 0; destinationsIndex < destinationsJsonList.GetLength(); ++destinationsIndex)
   {
     destinationsJsonList[destinationsIndex].AsObject(m_destinations[destinationsIndex].Jsonize());
   }
   payload.WithArray("Destinations", std::move(destinationsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateGameSessionQueueRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "GameLift.UpdateGameSessionQueue"));
  return headers;

}




