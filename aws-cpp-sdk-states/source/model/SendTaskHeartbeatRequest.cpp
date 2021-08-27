/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/states/model/SendTaskHeartbeatRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SFN::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

SendTaskHeartbeatRequest::SendTaskHeartbeatRequest() : 
    m_taskTokenHasBeenSet(false)
{
}

Aws::String SendTaskHeartbeatRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_taskTokenHasBeenSet)
  {
   payload.WithString("taskToken", m_taskToken);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection SendTaskHeartbeatRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSStepFunctions.SendTaskHeartbeat"));
  return headers;

}




