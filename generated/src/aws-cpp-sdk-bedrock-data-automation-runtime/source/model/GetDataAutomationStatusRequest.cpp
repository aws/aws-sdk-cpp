/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-data-automation-runtime/model/GetDataAutomationStatusRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::BedrockDataAutomationRuntime::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String GetDataAutomationStatusRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_invocationArnHasBeenSet)
  {
   payload.WithString("invocationArn", m_invocationArn);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetDataAutomationStatusRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonBedrockKeystoneRuntimeService.GetDataAutomationStatus"));
  return headers;

}




