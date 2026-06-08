/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/http/URI.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/devops-agent/model/ListAssetsRequest.h>

#include <utility>

using namespace Aws::DevOpsAgent::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String ListAssetsRequest::SerializePayload() const { return {}; }

void ListAssetsRequest::AddQueryStringParameters(URI& uri) const {
  Aws::StringStream ss;
  if (m_assetTypeHasBeenSet) {
    ss << m_assetType;
    uri.AddQueryStringParameter("assetType", ss.str());
    ss.str("");
  }

  if (m_updatedAfterHasBeenSet) {
    ss << m_updatedAfter.ToGmtString(Aws::Utils::DateFormat::ISO_8601);
    uri.AddQueryStringParameter("updatedAfter", ss.str());
    ss.str("");
  }

  if (m_updatedBeforeHasBeenSet) {
    ss << m_updatedBefore.ToGmtString(Aws::Utils::DateFormat::ISO_8601);
    uri.AddQueryStringParameter("updatedBefore", ss.str());
    ss.str("");
  }

  if (m_nextTokenHasBeenSet) {
    ss << m_nextToken;
    uri.AddQueryStringParameter("nextToken", ss.str());
    ss.str("");
  }

  if (m_maxResultsHasBeenSet) {
    ss << m_maxResults;
    uri.AddQueryStringParameter("maxResults", ss.str());
    ss.str("");
  }
}
