/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/ListEvaluationFormAIVersionsResult.h>
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

ListEvaluationFormAIVersionsResult::ListEvaluationFormAIVersionsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  *this = result;
}

ListEvaluationFormAIVersionsResult& ListEvaluationFormAIVersionsResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("AIVersionSummaries")) {
    Aws::Utils::Array<JsonView> aIVersionSummariesJsonList = jsonValue.GetArray("AIVersionSummaries");
    for (unsigned aIVersionSummariesIndex = 0; aIVersionSummariesIndex < aIVersionSummariesJsonList.GetLength();
         ++aIVersionSummariesIndex) {
      m_aIVersionSummaries.push_back(aIVersionSummariesJsonList[aIVersionSummariesIndex].AsObject());
    }
    m_aIVersionSummariesHasBeenSet = true;
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
