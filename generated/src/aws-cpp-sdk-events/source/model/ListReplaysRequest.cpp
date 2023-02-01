/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/events/model/ListReplaysRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CloudWatchEvents::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListReplaysRequest::ListReplaysRequest() : 
    m_namePrefixHasBeenSet(false),
    m_state(ReplayState::NOT_SET),
    m_stateHasBeenSet(false),
    m_eventSourceArnHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_limit(0),
    m_limitHasBeenSet(false)
{
}

Aws::String ListReplaysRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_namePrefixHasBeenSet)
  {
   payload.WithString("NamePrefix", m_namePrefix);

  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("State", ReplayStateMapper::GetNameForReplayState(m_state));
  }

  if(m_eventSourceArnHasBeenSet)
  {
   payload.WithString("EventSourceArn", m_eventSourceArn);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  if(m_limitHasBeenSet)
  {
   payload.WithInteger("Limit", m_limit);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ListReplaysRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSEvents.ListReplays"));
  return headers;

}




