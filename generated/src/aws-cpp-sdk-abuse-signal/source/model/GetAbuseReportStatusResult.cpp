/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/abuse-signal/model/GetAbuseReportStatusResult.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::AbuseSignal::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetAbuseReportStatusResult::GetAbuseReportStatusResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

GetAbuseReportStatusResult& GetAbuseReportStatusResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("reportId")) {
    m_reportId = jsonValue.GetString("reportId");
    m_reportIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("correlationId")) {
    m_correlationId = jsonValue.GetString("correlationId");
    m_correlationIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = ReportSubmissionStatusMapper::GetReportSubmissionStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("description")) {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("reasonCode")) {
    m_reasonCode = ReasonCodeMapper::GetReasonCodeForName(jsonValue.GetString("reasonCode"));
    m_reasonCodeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("submittedAt")) {
    m_submittedAt = jsonValue.GetDouble("submittedAt");
    m_submittedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("lastUpdatedAt")) {
    m_lastUpdatedAt = jsonValue.GetDouble("lastUpdatedAt");
    m_lastUpdatedAtHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
