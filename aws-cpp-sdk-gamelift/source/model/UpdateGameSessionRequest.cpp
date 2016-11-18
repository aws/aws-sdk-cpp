/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
    m_protectionPolicyHasBeenSet(false)
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

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateGameSessionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "GameLift.UpdateGameSession"));
  return headers;

}



