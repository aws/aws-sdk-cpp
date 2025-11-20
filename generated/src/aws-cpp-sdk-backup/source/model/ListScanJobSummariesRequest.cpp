/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup/model/ListScanJobSummariesRequest.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Backup::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String ListScanJobSummariesRequest::SerializePayload() const { return {}; }

void ListScanJobSummariesRequest::AddQueryStringParameters(URI& uri) const {
  Aws::StringStream ss;
  if (m_accountIdHasBeenSet) {
    ss << m_accountId;
    uri.AddQueryStringParameter("AccountId", ss.str());
    ss.str("");
  }

  if (m_resourceTypeHasBeenSet) {
    ss << m_resourceType;
    uri.AddQueryStringParameter("ResourceType", ss.str());
    ss.str("");
  }

  if (m_malwareScannerHasBeenSet) {
    ss << MalwareScannerMapper::GetNameForMalwareScanner(m_malwareScanner);
    uri.AddQueryStringParameter("MalwareScanner", ss.str());
    ss.str("");
  }

  if (m_scanResultStatusHasBeenSet) {
    ss << ScanResultStatusMapper::GetNameForScanResultStatus(m_scanResultStatus);
    uri.AddQueryStringParameter("ScanResultStatus", ss.str());
    ss.str("");
  }

  if (m_stateHasBeenSet) {
    ss << ScanJobStatusMapper::GetNameForScanJobStatus(m_state);
    uri.AddQueryStringParameter("State", ss.str());
    ss.str("");
  }

  if (m_aggregationPeriodHasBeenSet) {
    ss << AggregationPeriodMapper::GetNameForAggregationPeriod(m_aggregationPeriod);
    uri.AddQueryStringParameter("AggregationPeriod", ss.str());
    ss.str("");
  }

  if (m_maxResultsHasBeenSet) {
    ss << m_maxResults;
    uri.AddQueryStringParameter("MaxResults", ss.str());
    ss.str("");
  }

  if (m_nextTokenHasBeenSet) {
    ss << m_nextToken;
    uri.AddQueryStringParameter("NextToken", ss.str());
    ss.str("");
  }
}
