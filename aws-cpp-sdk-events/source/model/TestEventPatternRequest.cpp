﻿/*
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
#include <aws/events/model/TestEventPatternRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CloudWatchEvents::Model;
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

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection TestEventPatternRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSEvents.TestEventPattern"));
  return headers;

}



