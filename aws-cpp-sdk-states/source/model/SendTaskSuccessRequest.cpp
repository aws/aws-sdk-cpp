/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/states/model/SendTaskSuccessRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SFN::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

SendTaskSuccessRequest::SendTaskSuccessRequest() : 
    m_taskTokenHasBeenSet(false),
    m_outputHasBeenSet(false)
{
}

Aws::String SendTaskSuccessRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_taskTokenHasBeenSet)
  {
   payload.WithString("taskToken", m_taskToken);

  }

  if(m_outputHasBeenSet)
  {
   payload.WithString("output", m_output);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection SendTaskSuccessRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSStepFunctions.SendTaskSuccess"));
  return headers;

}




