/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcases/model/BatchUpdateCaseResult.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::ConnectCases::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

BatchUpdateCaseResult::BatchUpdateCaseResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

BatchUpdateCaseResult& BatchUpdateCaseResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("successfulCases")) {
    Aws::Utils::Array<JsonView> successfulCasesJsonList = jsonValue.GetArray("successfulCases");
    for (unsigned successfulCasesIndex = 0; successfulCasesIndex < successfulCasesJsonList.GetLength(); ++successfulCasesIndex) {
      m_successfulCases.push_back(successfulCasesJsonList[successfulCasesIndex].AsObject());
    }
    m_successfulCasesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("failedCases")) {
    Aws::Utils::Array<JsonView> failedCasesJsonList = jsonValue.GetArray("failedCases");
    for (unsigned failedCasesIndex = 0; failedCasesIndex < failedCasesJsonList.GetLength(); ++failedCasesIndex) {
      m_failedCases.push_back(failedCasesJsonList[failedCasesIndex].AsObject());
    }
    m_failedCasesHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
