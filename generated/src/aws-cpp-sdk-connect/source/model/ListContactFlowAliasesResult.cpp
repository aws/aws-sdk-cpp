/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/ListContactFlowAliasesResult.h>
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

ListContactFlowAliasesResult::ListContactFlowAliasesResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

ListContactFlowAliasesResult& ListContactFlowAliasesResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("ContactFlowAliasSummaryList")) {
    Aws::Utils::Array<JsonView> contactFlowAliasSummaryListJsonList = jsonValue.GetArray("ContactFlowAliasSummaryList");
    for (unsigned contactFlowAliasSummaryListIndex = 0; contactFlowAliasSummaryListIndex < contactFlowAliasSummaryListJsonList.GetLength();
         ++contactFlowAliasSummaryListIndex) {
      m_contactFlowAliasSummaryList.push_back(contactFlowAliasSummaryListJsonList[contactFlowAliasSummaryListIndex].AsObject());
    }
    m_contactFlowAliasSummaryListHasBeenSet = true;
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
