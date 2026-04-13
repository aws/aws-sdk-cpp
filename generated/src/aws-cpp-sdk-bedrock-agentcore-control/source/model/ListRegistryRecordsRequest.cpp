/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/ListRegistryRecordsRequest.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::BedrockAgentCoreControl::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String ListRegistryRecordsRequest::SerializePayload() const { return {}; }

void ListRegistryRecordsRequest::AddQueryStringParameters(URI& uri) const {
  Aws::StringStream ss;
  if (m_maxResultsHasBeenSet) {
    ss << m_maxResults;
    uri.AddQueryStringParameter("maxResults", ss.str());
    ss.str("");
  }

  if (m_nextTokenHasBeenSet) {
    ss << m_nextToken;
    uri.AddQueryStringParameter("nextToken", ss.str());
    ss.str("");
  }

  if (m_nameHasBeenSet) {
    ss << m_name;
    uri.AddQueryStringParameter("name", ss.str());
    ss.str("");
  }

  if (m_statusHasBeenSet) {
    ss << RegistryRecordStatusMapper::GetNameForRegistryRecordStatus(m_status);
    uri.AddQueryStringParameter("status", ss.str());
    ss.str("");
  }

  if (m_descriptorTypeHasBeenSet) {
    ss << DescriptorTypeMapper::GetNameForDescriptorType(m_descriptorType);
    uri.AddQueryStringParameter("descriptorType", ss.str());
    ss.str("");
  }
}
