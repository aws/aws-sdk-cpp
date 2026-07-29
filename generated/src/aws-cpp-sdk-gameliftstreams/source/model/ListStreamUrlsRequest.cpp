/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/http/URI.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/gameliftstreams/model/ListStreamUrlsRequest.h>

#include <utility>

using namespace Aws::GameLiftStreams::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String ListStreamUrlsRequest::SerializePayload() const { return {}; }

void ListStreamUrlsRequest::AddQueryStringParameters(URI& uri) const {
  Aws::StringStream ss;
  if (m_statusHasBeenSet) {
    ss << StreamUrlStatusMapper::GetNameForStreamUrlStatus(m_status);
    uri.AddQueryStringParameter("Status", ss.str());
    ss.str("");
  }

  if (m_streamGroupIdentifierHasBeenSet) {
    ss << m_streamGroupIdentifier;
    uri.AddQueryStringParameter("StreamGroupIdentifier", ss.str());
    ss.str("");
  }

  if (m_nextTokenHasBeenSet) {
    ss << m_nextToken;
    uri.AddQueryStringParameter("NextToken", ss.str());
    ss.str("");
  }

  if (m_maxResultsHasBeenSet) {
    ss << m_maxResults;
    uri.AddQueryStringParameter("MaxResults", ss.str());
    ss.str("");
  }
}
