/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/internetmonitor/model/GetQueryResultsResult.h>

#include <utility>

using namespace Aws::InternetMonitor::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetQueryResultsResult::GetQueryResultsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

GetQueryResultsResult& GetQueryResultsResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_responseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("Fields")) {
    Aws::Utils::Array<JsonView> fieldsJsonList = jsonValue.GetArray("Fields");
    for (unsigned fieldsIndex = 0; fieldsIndex < fieldsJsonList.GetLength(); ++fieldsIndex) {
      m_fields.push_back(fieldsJsonList[fieldsIndex].AsObject());
    }
    m_fieldsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Data")) {
    Aws::Utils::Array<JsonView> dataJsonList = jsonValue.GetArray("Data");
    for (unsigned dataIndex = 0; dataIndex < dataJsonList.GetLength(); ++dataIndex) {
      Aws::Utils::Array<JsonView> queryRow2JsonList = dataJsonList[dataIndex].AsArray();
      Aws::Vector<Aws::String> queryRow2List;
      queryRow2List.reserve((size_t)queryRow2JsonList.GetLength());
      for (unsigned queryRow2Index = 0; queryRow2Index < queryRow2JsonList.GetLength(); ++queryRow2Index) {
        queryRow2List.push_back(queryRow2JsonList[queryRow2Index].AsString());
      }
      m_data.push_back(std::move(queryRow2List));
    }
    m_dataHasBeenSet = true;
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
