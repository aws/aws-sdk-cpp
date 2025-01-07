﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/DeleteAgentMemoryRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::BedrockAgentRuntime::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

DeleteAgentMemoryRequest::DeleteAgentMemoryRequest() : 
    m_agentAliasIdHasBeenSet(false),
    m_agentIdHasBeenSet(false),
    m_memoryIdHasBeenSet(false),
    m_sessionIdHasBeenSet(false)
{
}

Aws::String DeleteAgentMemoryRequest::SerializePayload() const
{
  return {};
}

void DeleteAgentMemoryRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_memoryIdHasBeenSet)
    {
      ss << m_memoryId;
      uri.AddQueryStringParameter("memoryId", ss.str());
      ss.str("");
    }

    if(m_sessionIdHasBeenSet)
    {
      ss << m_sessionId;
      uri.AddQueryStringParameter("sessionId", ss.str());
      ss.str("");
    }

}



