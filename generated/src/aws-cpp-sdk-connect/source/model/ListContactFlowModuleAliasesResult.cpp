/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/ListContactFlowModuleAliasesResult.h>
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

ListContactFlowModuleAliasesResult::ListContactFlowModuleAliasesResult(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  *this = result;
}

ListContactFlowModuleAliasesResult& ListContactFlowModuleAliasesResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("ContactFlowModuleAliasSummaryList")) {
    Aws::Utils::Array<JsonView> contactFlowModuleAliasSummaryListJsonList = jsonValue.GetArray("ContactFlowModuleAliasSummaryList");
    for (unsigned contactFlowModuleAliasSummaryListIndex = 0;
         contactFlowModuleAliasSummaryListIndex < contactFlowModuleAliasSummaryListJsonList.GetLength();
         ++contactFlowModuleAliasSummaryListIndex) {
      m_contactFlowModuleAliasSummaryList.push_back(
          contactFlowModuleAliasSummaryListJsonList[contactFlowModuleAliasSummaryListIndex].AsObject());
    }
    m_contactFlowModuleAliasSummaryListHasBeenSet = true;
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
