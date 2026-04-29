/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/GetEvaluatorRequest.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::BedrockAgentCoreControl::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String GetEvaluatorRequest::SerializePayload() const { return {}; }

void GetEvaluatorRequest::AddQueryStringParameters(URI& uri) const {
  Aws::StringStream ss;
  if (m_includedDataHasBeenSet) {
    ss << IncludedDataMapper::GetNameForIncludedData(m_includedData);
    uri.AddQueryStringParameter("includedData", ss.str());
    ss.str("");
  }
}
