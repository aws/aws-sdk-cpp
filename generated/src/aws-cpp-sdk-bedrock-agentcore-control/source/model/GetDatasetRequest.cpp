/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/GetDatasetRequest.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::BedrockAgentCoreControl::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String GetDatasetRequest::SerializePayload() const { return {}; }

void GetDatasetRequest::AddQueryStringParameters(URI& uri) const {
  Aws::StringStream ss;
  if (m_datasetVersionHasBeenSet) {
    ss << m_datasetVersion;
    uri.AddQueryStringParameter("datasetVersion", ss.str());
    ss.str("");
  }
}
