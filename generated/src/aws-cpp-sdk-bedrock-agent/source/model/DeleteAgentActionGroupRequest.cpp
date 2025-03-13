/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/DeleteAgentActionGroupRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::BedrockAgent::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String DeleteAgentActionGroupRequest::SerializePayload() const
{
  return {};
}

void DeleteAgentActionGroupRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_skipResourceInUseCheckHasBeenSet)
    {
      ss << m_skipResourceInUseCheck;
      uri.AddQueryStringParameter("skipResourceInUseCheck", ss.str());
      ss.str("");
    }

}



