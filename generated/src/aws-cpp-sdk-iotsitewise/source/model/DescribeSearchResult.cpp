/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/iotsitewise/model/DescribeSearchResult.h>

#include <utility>

using namespace Aws::IoTSiteWise::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeSearchResult::DescribeSearchResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

DescribeSearchResult& DescribeSearchResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("searchId")) {
    m_searchId = jsonValue.GetString("searchId");
    m_searchIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("workspaceName")) {
    m_workspaceName = jsonValue.GetString("workspaceName");
    m_workspaceNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = SearchStatusMapper::GetSearchStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("queryStatement")) {
    m_queryStatement = jsonValue.GetString("queryStatement");
    m_queryStatementHasBeenSet = true;
  }
  if (jsonValue.ValueExists("searchType")) {
    m_searchType = SearchTypeMapper::GetSearchTypeForName(jsonValue.GetString("searchType"));
    m_searchTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("statusReason")) {
    m_statusReason = jsonValue.GetString("statusReason");
    m_statusReasonHasBeenSet = true;
  }
  if (jsonValue.ValueExists("startedAt")) {
    m_startedAt = jsonValue.GetDouble("startedAt");
    m_startedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("groupId")) {
    m_groupId = jsonValue.GetString("groupId");
    m_groupIdHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
