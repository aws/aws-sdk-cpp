/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/StopCodeInterpreterSessionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::BedrockAgentCore::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String StopCodeInterpreterSessionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  return payload.View().WriteReadable();
}

void StopCodeInterpreterSessionRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_sessionIdHasBeenSet)
    {
      ss << m_sessionId;
      uri.AddQueryStringParameter("sessionId", ss.str());
      ss.str("");
    }

}



