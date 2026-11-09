/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/glue/model/GetJobUpgradeAnalysisResult.h>

#include <utility>

using namespace Aws::Glue::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetJobUpgradeAnalysisResult::GetJobUpgradeAnalysisResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

GetJobUpgradeAnalysisResult& GetJobUpgradeAnalysisResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("jobName")) {
    m_jobName = jsonValue.GetString("jobName");
    m_jobNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("analysisId")) {
    m_analysisId = jsonValue.GetString("analysisId");
    m_analysisIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = StatusMapper::GetStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("sourceVersion")) {
    m_sourceVersion = jsonValue.GetString("sourceVersion");
    m_sourceVersionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("targetVersion")) {
    m_targetVersion = jsonValue.GetString("targetVersion");
    m_targetVersionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("analysisType")) {
    m_analysisType = AnalysisTypeMapper::GetAnalysisTypeForName(jsonValue.GetString("analysisType"));
    m_analysisTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("autoUpgradeEvaluationSummary")) {
    m_autoUpgradeEvaluationSummary = jsonValue.GetString("autoUpgradeEvaluationSummary");
    m_autoUpgradeEvaluationSummaryHasBeenSet = true;
  }
  if (jsonValue.ValueExists("errorMessage")) {
    m_errorMessage = jsonValue.GetString("errorMessage");
    m_errorMessageHasBeenSet = true;
  }
  if (jsonValue.ValueExists("autoUpgradeEligibilitySummary")) {
    m_autoUpgradeEligibilitySummary = jsonValue.GetString("autoUpgradeEligibilitySummary");
    m_autoUpgradeEligibilitySummaryHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
