/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/frauddetector/model/DeleteEventsByEventTypeRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::FraudDetector::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteEventsByEventTypeRequest::DeleteEventsByEventTypeRequest() : 
    m_eventTypeNameHasBeenSet(false)
{
}

Aws::String DeleteEventsByEventTypeRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_eventTypeNameHasBeenSet)
  {
   payload.WithString("eventTypeName", m_eventTypeName);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteEventsByEventTypeRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSHawksNestServiceFacade.DeleteEventsByEventType"));
  return headers;

}




