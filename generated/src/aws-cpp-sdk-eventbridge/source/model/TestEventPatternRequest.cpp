/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eventbridge/model/TestEventPatternRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::EventBridge::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

TestEventPatternRequest::TestEventPatternRequest() : 
    m_eventPatternHasBeenSet(false),
    m_eventHasBeenSet(false)
{
}

Aws::String TestEventPatternRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_eventPatternHasBeenSet)
  {
   payload.WithString("EventPattern", m_eventPattern);

  }

  if(m_eventHasBeenSet)
  {
   payload.WithString("Event", m_event);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection TestEventPatternRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSEvents.TestEventPattern"));
  return headers;

}




