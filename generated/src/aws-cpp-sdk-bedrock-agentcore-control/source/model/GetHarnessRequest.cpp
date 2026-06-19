/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/GetHarnessRequest.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::BedrockAgentCoreControl::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String GetHarnessRequest::SerializePayload() const { return {}; }

void GetHarnessRequest::AddQueryStringParameters(URI& uri) const {
  Aws::StringStream ss;
  if (m_harnessVersionHasBeenSet) {
    ss << m_harnessVersion;
    uri.AddQueryStringParameter("harnessVersion", ss.str());
    ss.str("");
  }
}
