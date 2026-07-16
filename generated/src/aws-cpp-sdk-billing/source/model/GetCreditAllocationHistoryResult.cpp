/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/billing/model/GetCreditAllocationHistoryResult.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Billing::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetCreditAllocationHistoryResult::GetCreditAllocationHistoryResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

GetCreditAllocationHistoryResult& GetCreditAllocationHistoryResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("creditAllocationHistoryList")) {
    Aws::Utils::Array<JsonView> creditAllocationHistoryListJsonList = jsonValue.GetArray("creditAllocationHistoryList");
    for (unsigned creditAllocationHistoryListIndex = 0; creditAllocationHistoryListIndex < creditAllocationHistoryListJsonList.GetLength();
         ++creditAllocationHistoryListIndex) {
      m_creditAllocationHistoryList.push_back(creditAllocationHistoryListJsonList[creditAllocationHistoryListIndex].AsObject());
    }
    m_creditAllocationHistoryListHasBeenSet = true;
  }
  if (jsonValue.ValueExists("partialResults")) {
    m_partialResults = jsonValue.GetBool("partialResults");
    m_partialResultsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("failedMonths")) {
    Aws::Utils::Array<JsonView> failedMonthsJsonList = jsonValue.GetArray("failedMonths");
    for (unsigned failedMonthsIndex = 0; failedMonthsIndex < failedMonthsJsonList.GetLength(); ++failedMonthsIndex) {
      m_failedMonths.push_back(failedMonthsJsonList[failedMonthsIndex].AsString());
    }
    m_failedMonthsHasBeenSet = true;
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
