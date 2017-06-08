/*
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

#include <aws/inspector/model/SubscribeToEventRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Inspector::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

SubscribeToEventRequest::SubscribeToEventRequest() : 
    m_resourceArnHasBeenSet(false),
    m_event(InspectorEvent::NOT_SET),
    m_eventHasBeenSet(false),
    m_topicArnHasBeenSet(false)
{
}

Aws::String SubscribeToEventRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_resourceArnHasBeenSet)
  {
   payload.WithString("resourceArn", m_resourceArn);

  }

  if(m_eventHasBeenSet)
  {
   payload.WithString("event", InspectorEventMapper::GetNameForInspectorEvent(m_event));
  }

  if(m_topicArnHasBeenSet)
  {
   payload.WithString("topicArn", m_topicArn);

  }

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection SubscribeToEventRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "InspectorService.SubscribeToEvent"));
  return headers;

}




