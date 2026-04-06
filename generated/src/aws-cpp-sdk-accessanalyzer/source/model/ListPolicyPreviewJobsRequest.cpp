/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/accessanalyzer/model/ListPolicyPreviewJobsRequest.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::AccessAnalyzer::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String ListPolicyPreviewJobsRequest::SerializePayload() const { return {}; }

void ListPolicyPreviewJobsRequest::AddQueryStringParameters(URI& uri) const {
  Aws::StringStream ss;
  if (m_filtersHasBeenSet) {
    for (auto& item : m_filters) {
      ss << item.second;
      uri.AddQueryStringParameter(PolicyPreviewJobFilterNameMapper::GetNameForPolicyPreviewJobFilterName(item.first).c_str(), ss.str());
      ss.str("");
    }
  }

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
}
