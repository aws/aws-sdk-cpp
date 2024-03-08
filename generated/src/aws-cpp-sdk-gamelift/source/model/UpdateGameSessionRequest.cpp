/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamelift/model/UpdateGameSessionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::GameLift::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateGameSessionRequest::UpdateGameSessionRequest() : 
    m_gameSessionIdHasBeenSet(false),
    m_maximumPlayerSessionCount(0),
    m_maximumPlayerSessionCountHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_playerSessionCreationPolicy(PlayerSessionCreationPolicy::NOT_SET),
    m_playerSessionCreationPolicyHasBeenSet(false),
    m_protectionPolicy(ProtectionPolicy::NOT_SET),
    m_protectionPolicyHasBeenSet(false),
    m_gamePropertiesHasBeenSet(false)
{
}

Aws::String UpdateGameSessionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_gameSessionIdHasBeenSet)
  {
   payload.WithString("GameSessionId", m_gameSessionId);

  }

  if(m_maximumPlayerSessionCountHasBeenSet)
  {
   payload.WithInteger("MaximumPlayerSessionCount", m_maximumPlayerSessionCount);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_playerSessionCreationPolicyHasBeenSet)
  {
   payload.WithString("PlayerSessionCreationPolicy", PlayerSessionCreationPolicyMapper::GetNameForPlayerSessionCreationPolicy(m_playerSessionCreationPolicy));
  }

  if(m_protectionPolicyHasBeenSet)
  {
   payload.WithString("ProtectionPolicy", ProtectionPolicyMapper::GetNameForProtectionPolicy(m_protectionPolicy));
  }

  if(m_gamePropertiesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> gamePropertiesJsonList(m_gameProperties.size());
   for(unsigned gamePropertiesIndex = 0; gamePropertiesIndex < gamePropertiesJsonList.GetLength(); ++gamePropertiesIndex)
   {
     gamePropertiesJsonList[gamePropertiesIndex].AsObject(m_gameProperties[gamePropertiesIndex].Jsonize());
   }
   payload.WithArray("GameProperties", std::move(gamePropertiesJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateGameSessionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "GameLift.UpdateGameSession"));
  return headers;

}




