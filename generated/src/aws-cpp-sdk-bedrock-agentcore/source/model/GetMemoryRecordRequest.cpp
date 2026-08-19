/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/GetMemoryRecordRequest.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::BedrockAgentCore::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String GetMemoryRecordRequest::SerializePayload() const { return {}; }

void GetMemoryRecordRequest::AddQueryStringParameters(URI& uri) const {
  Aws::StringStream ss;
  if (m_namespaceHasBeenSet) {
    ss << m_namespace;
    uri.AddQueryStringParameter("namespace", ss.str());
    ss.str("");
  }
}
