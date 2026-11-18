/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/abuse-signal/model/ListAbuseReportStatusesRequest.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::AbuseSignal::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String ListAbuseReportStatusesRequest::SerializePayload() const { return {}; }

Aws::Http::HeaderValueCollection ListAbuseReportStatusesRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AbuseReportApi.ListAbuseReportStatuses"));
  return headers;
}

void ListAbuseReportStatusesRequest::AddQueryStringParameters(URI& uri) const {
  Aws::StringStream ss;
  if (m_correlationIdHasBeenSet) {
    ss << m_correlationId;
    uri.AddQueryStringParameter("correlationId", ss.str());
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
