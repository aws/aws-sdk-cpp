/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/logs/model/DeleteDestinationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CloudWatchLogs::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteDestinationRequest::DeleteDestinationRequest() : 
    m_destinationNameHasBeenSet(false)
{
}

Aws::String DeleteDestinationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_destinationNameHasBeenSet)
  {
   payload.WithString("destinationName", m_destinationName);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteDestinationRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Logs_20140328.DeleteDestination"));
  return headers;

}




