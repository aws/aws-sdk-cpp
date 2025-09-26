/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/GetAgentMemoryRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::BedrockAgentRuntime::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String GetAgentMemoryRequest::SerializePayload() const
{
  return {};
}

void GetAgentMemoryRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_nextTokenHasBeenSet)
    {
      ss << m_nextToken;
      uri.AddQueryStringParameter("nextToken", ss.str());
      ss.str("");
    }

    if(m_maxItemsHasBeenSet)
    {
      ss << m_maxItems;
      uri.AddQueryStringParameter("maxItems", ss.str());
      ss.str("");
    }

    if(m_memoryTypeHasBeenSet)
    {
      ss << MemoryTypeMapper::GetNameForMemoryType(m_memoryType);
      uri.AddQueryStringParameter("memoryType", ss.str());
      ss.str("");
    }

    if(m_memoryIdHasBeenSet)
    {
      ss << m_memoryId;
      uri.AddQueryStringParameter("memoryId", ss.str());
      ss.str("");
    }

}



