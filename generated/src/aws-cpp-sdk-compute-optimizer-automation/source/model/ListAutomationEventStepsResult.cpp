/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer-automation/model/ListAutomationEventStepsResult.h>
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

ListAutomationEventStepsResult::ListAutomationEventStepsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

ListAutomationEventStepsResult& ListAutomationEventStepsResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("automationEventSteps")) {
    Aws::Utils::Array<JsonView> automationEventStepsJsonList = jsonValue.GetArray("automationEventSteps");
    for (unsigned automationEventStepsIndex = 0; automationEventStepsIndex < automationEventStepsJsonList.GetLength();
         ++automationEventStepsIndex) {
      m_automationEventSteps.push_back(automationEventStepsJsonList[automationEventStepsIndex].AsObject());
    }
    m_automationEventStepsHasBeenSet = true;
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
