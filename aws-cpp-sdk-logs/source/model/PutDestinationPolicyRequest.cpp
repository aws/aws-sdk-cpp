/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/logs/model/PutDestinationPolicyRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CloudWatchLogs::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutDestinationPolicyRequest::PutDestinationPolicyRequest() : 
    m_destinationNameHasBeenSet(false),
    m_accessPolicyHasBeenSet(false)
{
}

Aws::String PutDestinationPolicyRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_destinationNameHasBeenSet)
  {
   payload.WithString("destinationName", m_destinationName);

  }

  if(m_accessPolicyHasBeenSet)
  {
   payload.WithString("accessPolicy", m_accessPolicy);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection PutDestinationPolicyRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Logs_20140328.PutDestinationPolicy"));
  return headers;

}




