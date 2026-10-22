/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/continuum/model/GetCodeIssueResult.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Continuum::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetCodeIssueResult::GetCodeIssueResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

GetCodeIssueResult& GetCodeIssueResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("issueId")) {
    m_issueId = jsonValue.GetString("issueId");
    m_issueIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("issueArn")) {
    m_issueArn = jsonValue.GetString("issueArn");
    m_issueArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("synopsis")) {
    m_synopsis = jsonValue.GetString("synopsis");
    m_synopsisHasBeenSet = true;
  }
  if (jsonValue.ValueExists("severity")) {
    m_severity = IssueSeverityMapper::GetIssueSeverityForName(jsonValue.GetString("severity"));
    m_severityHasBeenSet = true;
  }
  if (jsonValue.ValueExists("confidence")) {
    m_confidence = jsonValue.GetInteger("confidence");
    m_confidenceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("severityReasoning")) {
    m_severityReasoning = jsonValue.GetString("severityReasoning");
    m_severityReasoningHasBeenSet = true;
  }
  if (jsonValue.ValueExists("summary")) {
    m_summary = jsonValue.GetString("summary");
    m_summaryHasBeenSet = true;
  }
  if (jsonValue.ValueExists("findingIds")) {
    Aws::Utils::Array<JsonView> findingIdsJsonList = jsonValue.GetArray("findingIds");
    for (unsigned findingIdsIndex = 0; findingIdsIndex < findingIdsJsonList.GetLength(); ++findingIdsIndex) {
      m_findingIds.push_back(findingIdsJsonList[findingIdsIndex].AsString());
    }
    m_findingIdsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = IssueStatusMapper::GetIssueStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("phase")) {
    m_phase = IssuePhaseMapper::GetIssuePhaseForName(jsonValue.GetString("phase"));
    m_phaseHasBeenSet = true;
  }
  if (jsonValue.ValueExists("statusReason")) {
    m_statusReason = IssueStatusReasonMapper::GetIssueStatusReasonForName(jsonValue.GetString("statusReason"));
    m_statusReasonHasBeenSet = true;
  }
  if (jsonValue.ValueExists("statusMessage")) {
    m_statusMessage = jsonValue.GetString("statusMessage");
    m_statusMessageHasBeenSet = true;
  }
  if (jsonValue.ValueExists("statusUpdatedAt")) {
    m_statusUpdatedAt = jsonValue.GetString("statusUpdatedAt");
    m_statusUpdatedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdAt")) {
    m_createdAt = jsonValue.GetString("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("updatedAt")) {
    m_updatedAt = jsonValue.GetString("updatedAt");
    m_updatedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("evidenceAvailability")) {
    m_evidenceAvailability =
        IssueEvidenceAvailabilityMapper::GetIssueEvidenceAvailabilityForName(jsonValue.GetString("evidenceAvailability"));
    m_evidenceAvailabilityHasBeenSet = true;
  }
  if (jsonValue.ValueExists("patchDelivery")) {
    m_patchDelivery = jsonValue.GetObject("patchDelivery");
    m_patchDeliveryHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
