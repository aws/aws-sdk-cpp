/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup/model/ListScanJobsRequest.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Backup::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String ListScanJobsRequest::SerializePayload() const { return {}; }

void ListScanJobsRequest::AddQueryStringParameters(URI& uri) const {
  Aws::StringStream ss;
  if (m_byAccountIdHasBeenSet) {
    ss << m_byAccountId;
    uri.AddQueryStringParameter("ByAccountId", ss.str());
    ss.str("");
  }

  if (m_byBackupVaultNameHasBeenSet) {
    ss << m_byBackupVaultName;
    uri.AddQueryStringParameter("ByBackupVaultName", ss.str());
    ss.str("");
  }

  if (m_byCompleteAfterHasBeenSet) {
    ss << m_byCompleteAfter.ToGmtString(Aws::Utils::DateFormat::ISO_8601);
    uri.AddQueryStringParameter("ByCompleteAfter", ss.str());
    ss.str("");
  }

  if (m_byCompleteBeforeHasBeenSet) {
    ss << m_byCompleteBefore.ToGmtString(Aws::Utils::DateFormat::ISO_8601);
    uri.AddQueryStringParameter("ByCompleteBefore", ss.str());
    ss.str("");
  }

  if (m_byMalwareScannerHasBeenSet) {
    ss << MalwareScannerMapper::GetNameForMalwareScanner(m_byMalwareScanner);
    uri.AddQueryStringParameter("ByMalwareScanner", ss.str());
    ss.str("");
  }

  if (m_byRecoveryPointArnHasBeenSet) {
    ss << m_byRecoveryPointArn;
    uri.AddQueryStringParameter("ByRecoveryPointArn", ss.str());
    ss.str("");
  }

  if (m_byResourceArnHasBeenSet) {
    ss << m_byResourceArn;
    uri.AddQueryStringParameter("ByResourceArn", ss.str());
    ss.str("");
  }

  if (m_byResourceTypeHasBeenSet) {
    ss << ScanResourceTypeMapper::GetNameForScanResourceType(m_byResourceType);
    uri.AddQueryStringParameter("ByResourceType", ss.str());
    ss.str("");
  }

  if (m_byScanResultStatusHasBeenSet) {
    ss << ScanResultStatusMapper::GetNameForScanResultStatus(m_byScanResultStatus);
    uri.AddQueryStringParameter("ByScanResultStatus", ss.str());
    ss.str("");
  }

  if (m_byStateHasBeenSet) {
    ss << ScanStateMapper::GetNameForScanState(m_byState);
    uri.AddQueryStringParameter("ByState", ss.str());
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
