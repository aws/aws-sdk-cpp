/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/GetConfigurationBundleRequest.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::BedrockAgentCoreControl::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String GetConfigurationBundleRequest::SerializePayload() const { return {}; }

void GetConfigurationBundleRequest::AddQueryStringParameters(URI& uri) const {
  Aws::StringStream ss;
  if (m_branchNameHasBeenSet) {
    ss << m_branchName;
    uri.AddQueryStringParameter("branchName", ss.str());
    ss.str("");
  }
}
