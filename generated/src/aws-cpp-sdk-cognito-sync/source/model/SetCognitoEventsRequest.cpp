/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-sync/model/SetCognitoEventsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CognitoSync::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

SetCognitoEventsRequest::SetCognitoEventsRequest() : 
    m_identityPoolIdHasBeenSet(false),
    m_eventsHasBeenSet(false)
{
}

Aws::String SetCognitoEventsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_eventsHasBeenSet)
  {
   JsonValue eventsJsonMap;
   for(auto& eventsItem : m_events)
   {
     eventsJsonMap.WithString(eventsItem.first, eventsItem.second);
   }
   payload.WithObject("Events", std::move(eventsJsonMap));

  }

  return payload.View().WriteReadable();
}




