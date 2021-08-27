/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamelift/model/DescribePlayerSessionsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::GameLift::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribePlayerSessionsRequest::DescribePlayerSessionsRequest() : 
    m_gameSessionIdHasBeenSet(false),
    m_playerIdHasBeenSet(false),
    m_playerSessionIdHasBeenSet(false),
    m_playerSessionStatusFilterHasBeenSet(false),
    m_limit(0),
    m_limitHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

Aws::String DescribePlayerSessionsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_gameSessionIdHasBeenSet)
  {
   payload.WithString("GameSessionId", m_gameSessionId);

  }

  if(m_playerIdHasBeenSet)
  {
   payload.WithString("PlayerId", m_playerId);

  }

  if(m_playerSessionIdHasBeenSet)
  {
   payload.WithString("PlayerSessionId", m_playerSessionId);

  }

  if(m_playerSessionStatusFilterHasBeenSet)
  {
   payload.WithString("PlayerSessionStatusFilter", m_playerSessionStatusFilter);

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

Aws::Http::HeaderValueCollection DescribePlayerSessionsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "GameLift.DescribePlayerSessions"));
  return headers;

}




