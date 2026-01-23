/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/ListTestCasesResult.h>
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

ListTestCasesResult::ListTestCasesResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

ListTestCasesResult& ListTestCasesResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("TestCaseSummaryList")) {
    Aws::Utils::Array<JsonView> testCaseSummaryListJsonList = jsonValue.GetArray("TestCaseSummaryList");
    for (unsigned testCaseSummaryListIndex = 0; testCaseSummaryListIndex < testCaseSummaryListJsonList.GetLength();
         ++testCaseSummaryListIndex) {
      m_testCaseSummaryList.push_back(testCaseSummaryListJsonList[testCaseSummaryListIndex].AsObject());
    }
    m_testCaseSummaryListHasBeenSet = true;
  }
  if (jsonValue.ValueExists("NextToken")) {
    m_nextToken = jsonValue.GetString("NextToken");
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
