/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/glue/model/BatchGetDataQualityRulesetEvaluationRunResult.h>

#include <utility>

using namespace Aws::Glue::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

BatchGetDataQualityRulesetEvaluationRunResult::BatchGetDataQualityRulesetEvaluationRunResult(
    const Aws::AmazonWebServiceResult<JsonValue>& result) {
  *this = result;
}

BatchGetDataQualityRulesetEvaluationRunResult& BatchGetDataQualityRulesetEvaluationRunResult::operator=(
    const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("Runs")) {
    Aws::Utils::Array<JsonView> runsJsonList = jsonValue.GetArray("Runs");
    for (unsigned runsIndex = 0; runsIndex < runsJsonList.GetLength(); ++runsIndex) {
      m_runs.push_back(runsJsonList[runsIndex].AsObject());
    }
    m_runsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("RunsNotFound")) {
    Aws::Utils::Array<JsonView> runsNotFoundJsonList = jsonValue.GetArray("RunsNotFound");
    for (unsigned runsNotFoundIndex = 0; runsNotFoundIndex < runsNotFoundJsonList.GetLength(); ++runsNotFoundIndex) {
      m_runsNotFound.push_back(runsNotFoundJsonList[runsNotFoundIndex].AsString());
    }
    m_runsNotFoundHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
