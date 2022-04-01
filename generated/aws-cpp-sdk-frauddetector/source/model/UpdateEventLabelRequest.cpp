/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/frauddetector/model/UpdateEventLabelRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::FraudDetector::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateEventLabelRequest::UpdateEventLabelRequest() : 
    m_eventIdHasBeenSet(false),
    m_eventTypeNameHasBeenSet(false),
    m_assignedLabelHasBeenSet(false),
    m_labelTimestampHasBeenSet(false)
{
}

Aws::String UpdateEventLabelRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_eventIdHasBeenSet)
  {
   payload.WithString("eventId", m_eventId);

  }

  if(m_eventTypeNameHasBeenSet)
  {
   payload.WithString("eventTypeName", m_eventTypeName);

  }

  if(m_assignedLabelHasBeenSet)
  {
   payload.WithString("assignedLabel", m_assignedLabel);

  }

  if(m_labelTimestampHasBeenSet)
  {
   payload.WithString("labelTimestamp", m_labelTimestamp);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateEventLabelRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSHawksNestServiceFacade.UpdateEventLabel"));
  return headers;

}




