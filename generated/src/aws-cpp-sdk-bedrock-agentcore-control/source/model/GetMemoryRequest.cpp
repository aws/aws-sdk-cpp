/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/GetMemoryRequest.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::BedrockAgentCoreControl::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String GetMemoryRequest::SerializePayload() const { return {}; }

void GetMemoryRequest::AddQueryStringParameters(URI& uri) const {
  Aws::StringStream ss;
  if (m_viewHasBeenSet) {
    ss << MemoryViewMapper::GetNameForMemoryView(m_view);
    uri.AddQueryStringParameter("view", ss.str());
    ss.str("");
  }
}
