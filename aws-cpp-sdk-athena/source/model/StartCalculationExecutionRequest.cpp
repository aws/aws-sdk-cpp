/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/athena/model/StartCalculationExecutionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Athena::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StartCalculationExecutionRequest::StartCalculationExecutionRequest() : 
    m_sessionIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_codeBlockHasBeenSet(false),
    m_clientRequestTokenHasBeenSet(false)
{
}

Aws::String StartCalculationExecutionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_sessionIdHasBeenSet)
  {
   payload.WithString("SessionId", m_sessionId);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_codeBlockHasBeenSet)
  {
   payload.WithString("CodeBlock", m_codeBlock);

  }

  if(m_clientRequestTokenHasBeenSet)
  {
   payload.WithString("ClientRequestToken", m_clientRequestToken);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection StartCalculationExecutionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonAthena.StartCalculationExecution"));
  return headers;

}




