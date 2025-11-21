/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer-automation/model/ListAutomationEventsResult.h>
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

ListAutomationEventsResult::ListAutomationEventsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

ListAutomationEventsResult& ListAutomationEventsResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("automationEvents")) {
    Aws::Utils::Array<JsonView> automationEventsJsonList = jsonValue.GetArray("automationEvents");
    for (unsigned automationEventsIndex = 0; automationEventsIndex < automationEventsJsonList.GetLength(); ++automationEventsIndex) {
      m_automationEvents.push_back(automationEventsJsonList[automationEventsIndex].AsObject());
    }
    m_automationEventsHasBeenSet = true;
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
