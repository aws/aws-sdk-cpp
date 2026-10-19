/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/DeleteRetrievalInstructionRequest.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::BedrockAgent::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String DeleteRetrievalInstructionRequest::SerializePayload() const { return {}; }

void DeleteRetrievalInstructionRequest::AddQueryStringParameters(URI& uri) const {
  Aws::StringStream ss;
  if (m_retrievalInstructionVersionHasBeenSet) {
    ss << m_retrievalInstructionVersion;
    uri.AddQueryStringParameter("retrievalInstructionVersion", ss.str());
    ss.str("");
  }
}
