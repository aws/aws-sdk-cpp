/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudtrail/model/GetQueryResultsResult.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CloudTrail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetQueryResultsResult::GetQueryResultsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

GetQueryResultsResult& GetQueryResultsResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("QueryStatus")) {
    m_queryStatus = QueryStatusMapper::GetQueryStatusForName(jsonValue.GetString("QueryStatus"));
    m_queryStatusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("QueryStatistics")) {
    m_queryStatistics = jsonValue.GetObject("QueryStatistics");
    m_queryStatisticsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("QueryResultRows")) {
    Aws::Utils::Array<JsonView> queryResultRowsJsonList = jsonValue.GetArray("QueryResultRows");
    for (unsigned queryResultRowsIndex = 0; queryResultRowsIndex < queryResultRowsJsonList.GetLength(); ++queryResultRowsIndex) {
      Aws::Utils::Array<JsonView> queryResultRow2JsonList = queryResultRowsJsonList[queryResultRowsIndex].AsArray();
      Aws::Vector<Aws::Map<Aws::String, Aws::String>> queryResultRow2List;
      queryResultRow2List.reserve((size_t)queryResultRow2JsonList.GetLength());
      for (unsigned queryResultRow2Index = 0; queryResultRow2Index < queryResultRow2JsonList.GetLength(); ++queryResultRow2Index) {
        Aws::Map<Aws::String, JsonView> queryResultColumn3JsonMap = queryResultRow2JsonList[queryResultRow2Index].GetAllObjects();
        Aws::Map<Aws::String, Aws::String> queryResultColumn3Map;
        for (auto& queryResultColumn3Item : queryResultColumn3JsonMap) {
          queryResultColumn3Map[queryResultColumn3Item.first] = queryResultColumn3Item.second.AsString();
        }
        queryResultRow2List.push_back(std::move(queryResultColumn3Map));
      }
      m_queryResultRows.push_back(std::move(queryResultRow2List));
    }
    m_queryResultRowsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("NextToken")) {
    m_nextToken = jsonValue.GetString("NextToken");
    m_nextTokenHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ErrorMessage")) {
    m_errorMessage = jsonValue.GetString("ErrorMessage");
    m_errorMessageHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
