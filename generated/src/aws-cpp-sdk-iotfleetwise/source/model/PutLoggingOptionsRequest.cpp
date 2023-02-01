/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotfleetwise/model/PutLoggingOptionsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoTFleetWise::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutLoggingOptionsRequest::PutLoggingOptionsRequest() : 
    m_cloudWatchLogDeliveryHasBeenSet(false)
{
}

Aws::String PutLoggingOptionsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_cloudWatchLogDeliveryHasBeenSet)
  {
   payload.WithObject("cloudWatchLogDelivery", m_cloudWatchLogDelivery.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection PutLoggingOptionsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "IoTAutobahnControlPlane.PutLoggingOptions"));
  return headers;

}




