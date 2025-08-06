/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/StartAutomatedReasoningPolicyTestWorkflowRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Bedrock::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String StartAutomatedReasoningPolicyTestWorkflowRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_testCaseIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> testCaseIdsJsonList(m_testCaseIds.size());
   for(unsigned testCaseIdsIndex = 0; testCaseIdsIndex < testCaseIdsJsonList.GetLength(); ++testCaseIdsIndex)
   {
     testCaseIdsJsonList[testCaseIdsIndex].AsString(m_testCaseIds[testCaseIdsIndex]);
   }
   payload.WithArray("testCaseIds", std::move(testCaseIdsJsonList));

  }

  if(m_clientRequestTokenHasBeenSet)
  {
   payload.WithString("clientRequestToken", m_clientRequestToken);

  }

  return payload.View().WriteReadable();
}




