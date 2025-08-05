/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/StartAutomatedReasoningPolicyBuildWorkflowRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Bedrock::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String StartAutomatedReasoningPolicyBuildWorkflowRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_sourceContentHasBeenSet)
  {
   payload = m_sourceContent.Jsonize();
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection StartAutomatedReasoningPolicyBuildWorkflowRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  Aws::StringStream ss;
  if(m_clientRequestTokenHasBeenSet)
  {
    ss << m_clientRequestToken;
    headers.emplace("x-amz-client-token",  ss.str());
    ss.str("");
  }

  return headers;

}




