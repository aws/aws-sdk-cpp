/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/ListIntermediateTablesResult.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CleanRooms::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListIntermediateTablesResult::ListIntermediateTablesResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

ListIntermediateTablesResult& ListIntermediateTablesResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("intermediateTableSummaries")) {
    Aws::Utils::Array<JsonView> intermediateTableSummariesJsonList = jsonValue.GetArray("intermediateTableSummaries");
    for (unsigned intermediateTableSummariesIndex = 0; intermediateTableSummariesIndex < intermediateTableSummariesJsonList.GetLength();
         ++intermediateTableSummariesIndex) {
      m_intermediateTableSummaries.push_back(intermediateTableSummariesJsonList[intermediateTableSummariesIndex].AsObject());
    }
    m_intermediateTableSummariesHasBeenSet = true;
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
