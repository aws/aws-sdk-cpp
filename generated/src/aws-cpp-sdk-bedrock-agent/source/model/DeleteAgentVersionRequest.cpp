/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/DeleteAgentVersionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::BedrockAgent::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

DeleteAgentVersionRequest::DeleteAgentVersionRequest() : 
    m_agentIdHasBeenSet(false),
    m_agentVersionHasBeenSet(false),
    m_skipResourceInUseCheck(false),
    m_skipResourceInUseCheckHasBeenSet(false)
{
}

Aws::String DeleteAgentVersionRequest::SerializePayload() const
{
  return {};
}

void DeleteAgentVersionRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_skipResourceInUseCheckHasBeenSet)
    {
      ss << m_skipResourceInUseCheck;
      uri.AddQueryStringParameter("skipResourceInUseCheck", ss.str());
      ss.str("");
    }

}



