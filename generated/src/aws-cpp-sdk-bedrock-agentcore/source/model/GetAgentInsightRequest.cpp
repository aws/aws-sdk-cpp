/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/GetAgentInsightRequest.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::BedrockAgentCore::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String GetAgentInsightRequest::SerializePayload() const { return {}; }

void GetAgentInsightRequest::AddQueryStringParameters(URI& uri) const {
  Aws::StringStream ss;
  if (m_applicationNameHasBeenSet) {
    ss << m_applicationName;
    uri.AddQueryStringParameter("applicationName", ss.str());
    ss.str("");
  }
}
