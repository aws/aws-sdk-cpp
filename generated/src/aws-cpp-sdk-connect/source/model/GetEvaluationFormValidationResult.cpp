/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/GetEvaluationFormValidationResult.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetEvaluationFormValidationResult::GetEvaluationFormValidationResult(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  *this = result;
}

GetEvaluationFormValidationResult& GetEvaluationFormValidationResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("Status")) {
    m_status = EvaluationFormValidationStatusMapper::GetEvaluationFormValidationStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("FailureReason")) {
    m_failureReason = jsonValue.GetString("FailureReason");
    m_failureReasonHasBeenSet = true;
  }
  if (jsonValue.ValueExists("EvaluationFormId")) {
    m_evaluationFormId = jsonValue.GetString("EvaluationFormId");
    m_evaluationFormIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("EvaluationFormVersion")) {
    m_evaluationFormVersion = jsonValue.GetInteger("EvaluationFormVersion");
    m_evaluationFormVersionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("StartedTime")) {
    m_startedTime = jsonValue.GetDouble("StartedTime");
    m_startedTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Findings")) {
    Aws::Utils::Array<JsonView> findingsJsonList = jsonValue.GetArray("Findings");
    for (unsigned findingsIndex = 0; findingsIndex < findingsJsonList.GetLength(); ++findingsIndex) {
      m_findings.push_back(findingsJsonList[findingsIndex].AsObject());
    }
    m_findingsHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
