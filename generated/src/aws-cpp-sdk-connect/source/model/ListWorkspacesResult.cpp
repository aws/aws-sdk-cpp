/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/ListWorkspacesResult.h>
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

ListWorkspacesResult::ListWorkspacesResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

ListWorkspacesResult& ListWorkspacesResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("NextToken")) {
    m_nextToken = jsonValue.GetString("NextToken");
    m_nextTokenHasBeenSet = true;
  }
  if (jsonValue.ValueExists("WorkspaceSummaryList")) {
    Aws::Utils::Array<JsonView> workspaceSummaryListJsonList = jsonValue.GetArray("WorkspaceSummaryList");
    for (unsigned workspaceSummaryListIndex = 0; workspaceSummaryListIndex < workspaceSummaryListJsonList.GetLength();
         ++workspaceSummaryListIndex) {
      m_workspaceSummaryList.push_back(workspaceSummaryListJsonList[workspaceSummaryListIndex].AsObject());
    }
    m_workspaceSummaryListHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
