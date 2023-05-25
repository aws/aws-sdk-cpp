/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/frauddetector/model/GetDeleteEventsByEventTypeStatusRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::FraudDetector::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetDeleteEventsByEventTypeStatusRequest::GetDeleteEventsByEventTypeStatusRequest() : 
    m_eventTypeNameHasBeenSet(false)
{
}

Aws::String GetDeleteEventsByEventTypeStatusRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_eventTypeNameHasBeenSet)
  {
   payload.WithString("eventTypeName", m_eventTypeName);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetDeleteEventsByEventTypeStatusRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSHawksNestServiceFacade.GetDeleteEventsByEventTypeStatus"));
  return headers;

}




