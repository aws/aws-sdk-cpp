/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer-automation/model/ListAutomationRulePreviewSummariesResult.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::ComputeOptimizerAutomation::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListAutomationRulePreviewSummariesResult::ListAutomationRulePreviewSummariesResult(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  *this = result;
}

ListAutomationRulePreviewSummariesResult& ListAutomationRulePreviewSummariesResult::operator=(
    const Aws::AmazonWebServiceResult<JsonValue>& result) {
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("previewResultSummaries")) {
    Aws::Utils::Array<JsonView> previewResultSummariesJsonList = jsonValue.GetArray("previewResultSummaries");
    for (unsigned previewResultSummariesIndex = 0; previewResultSummariesIndex < previewResultSummariesJsonList.GetLength();
         ++previewResultSummariesIndex) {
      m_previewResultSummaries.push_back(previewResultSummariesJsonList[previewResultSummariesIndex].AsObject());
    }
    m_previewResultSummariesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("nextToken")) {
    m_nextToken = jsonValue.GetString("nextToken");
    m_nextTokenHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
